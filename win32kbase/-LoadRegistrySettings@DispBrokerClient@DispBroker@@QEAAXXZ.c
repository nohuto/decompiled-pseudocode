void __fastcall DispBroker::DispBrokerClient::LoadRegistrySettings(DispBroker::DispBrokerClient *this)
{
  int v1; // ebx

  v1 = 0;
  if ( qword_1C02D7190 && (int)qword_1C02D7190() >= 0 && qword_1C02D7198 )
    v1 = qword_1C02D7198();
  *(_DWORD *)this = v1;
}
