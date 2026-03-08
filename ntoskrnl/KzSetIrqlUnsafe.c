/*
 * XREFs of KzSetIrqlUnsafe @ 0x140569C60
 * Callers:
 *     KiChainedDispatch @ 0x140417850 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x140417C90 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140417E70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140417FC0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140418110 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x140418220 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140418660 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140418AA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140418EE0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140419310 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KiIdleLoop @ 0x14041AF70 (KiIdleLoop.c)
 *     KiApcInterrupt @ 0x14041BCF0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x14041D590 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14041D9E0 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x14041DE10 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x14041DF70 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14041E8C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14041EFD0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x14041F760 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x140423B80 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140427E80 (KiMcheckAbort.c)
 *     KiSystemStartup @ 0x140A84010 (KiSystemStartup.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int8 __fastcall KzSetIrqlUnsafe(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v3; // r9
  _DWORD *v4; // r11
  int v5; // r10d
  unsigned __int8 v6; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > a1 )
  {
    if ( KiIrqlFlags )
    {
      v6 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && (unsigned __int8)v1 <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v1);
  }
  else
  {
    v3 = KeGetCurrentIrql();
    __writecr8(a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v3 <= 0xFu && (unsigned __int8)(a1 - 2) <= 0xDu )
    {
      v4 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v3 == a1 )
        v5 = 1 << a1;
      else
        v5 = ((1LL << (a1 + 1)) - 1) & (-1LL << (v3 + 1)) & 0xFFFFFFFC;
      v4[5] |= v5;
    }
  }
  return CurrentIrql;
}
