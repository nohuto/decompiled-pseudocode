/*
 * XREFs of ??_GCDWMBackchannelManager@@UEAAPEAXI@Z @ 0x1C0087150
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBackchannelManager@@UEAA@XZ @ 0x1C00872F0 (--1CBackchannelManager@@UEAA@XZ.c)
 */

CBackchannelManager *__fastcall CDWMBackchannelManager::`scalar deleting destructor'(CBackchannelManager *P, char a2)
{
  *(_QWORD *)P = &CDWMBackchannelManager::`vftable';
  CBackchannelManager::~CBackchannelManager(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
