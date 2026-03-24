/*
 * XREFs of ??1CBackchannelManager@@UEAA@XZ @ 0x1C006D8DC
 * Callers:
 *     ??_GCBackchannelManager@@UEAAPEAXI@Z @ 0x1C006D6B0 (--_GCBackchannelManager@@UEAAPEAXI@Z.c)
 *     ??_GCDWMBackchannelManager@@UEAAPEAXI@Z @ 0x1C006D700 (--_GCDWMBackchannelManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x1C006D914 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 */

void __fastcall CBackchannelManager::~CBackchannelManager(PVOID *this)
{
  *this = &CBackchannelManager::`vftable';
  CBackchannelManager::Clear((CBackchannelManager *)this);
  ObfDereferenceObject(this[4]);
}
