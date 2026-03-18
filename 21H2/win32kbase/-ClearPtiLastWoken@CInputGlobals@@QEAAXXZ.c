/*
 * XREFs of ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C00099D0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::ClearPtiLastWoken(CInputGlobals *this)
{
  RIMLockExclusive(this);
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
