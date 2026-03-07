CBackchannelManager *__fastcall CDWMBackchannelManager::`scalar deleting destructor'(CBackchannelManager *P, char a2)
{
  *(_QWORD *)P = &CDWMBackchannelManager::`vftable';
  CBackchannelManager::~CBackchannelManager(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
