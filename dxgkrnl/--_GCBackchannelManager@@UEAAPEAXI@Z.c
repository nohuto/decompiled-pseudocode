CBackchannelManager *__fastcall CBackchannelManager::`scalar deleting destructor'(CBackchannelManager *P, char a2)
{
  CBackchannelManager::~CBackchannelManager(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
