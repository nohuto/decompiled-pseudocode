void __fastcall DispBrokerClient::~DispBrokerClient(DispBrokerClient *this)
{
  DispBrokerClient::DisableDisplayBroker(this);
  DispBrokerClientReference::Assign((DispBrokerClient *)((char *)this + 48), 0LL);
}
