#pragma once
#pragma warning(disable: 4251)

#include "Logger/include/Export.h"
#include "Logger/include/GameLoggerPrivate.h"
#include "GameCommon/include/Object.h"

#include <string>


class LOGGER_API CGameLogger : public CObject
{
public:
	CGameLogger( const std::string& aClassName, CObject* aParent = nullptr );
	~CGameLogger();

	void setFileName( const std::string& aFileName );
	void logError( const std::string& aError );
	void logInfo( const std::string& aError );

private:
	void log( const std::string& aType, const std::string& aMessage );

private:
	static CGameLoggerPrivate*		m_Private;
	std::string						m_ClassName;
};