/*
 * XREFs of ??_GCBackchannelManager@@UEAAPEAXI@Z @ 0x1C0087100
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBackchannelManager@@UEAA@XZ @ 0x1C00872F0 (--1CBackchannelManager@@UEAA@XZ.c)
 */

CBackchannelManager *__fastcall CBackchannelManager::`scalar deleting destructor'(CBackchannelManager *P, char a2)
{
  CBackchannelManager::~CBackchannelManager(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
