__int64 DispBrokerGetCurrentMode()
{
  if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
    return *((unsigned int *)DispBroker::DispBrokerClient::s_pSessionBroker + 1);
  else
    return *(unsigned int *)DispBroker::DispBrokerClient::s_pSessionBroker;
}
