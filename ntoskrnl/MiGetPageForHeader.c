/*
 * XREFs of MiGetPageForHeader @ 0x1402140A4
 * Callers:
 *     MiInitializeImageProtos @ 0x140213DD0 (MiInitializeImageProtos.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiCreateMdl @ 0x1407F223C (MiCreateMdl.c)
 * Callees:
 *     MiGetSystemPage @ 0x1402141C8 (MiGetSystemPage.c)
 *     MiGetEffectivePagePriorityThread @ 0x14028A260 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiReturnFaultCharges @ 0x1402F4480 (MiReturnFaultCharges.c)
 *     MiObtainFaultCharges @ 0x14031EEE0 (MiObtainFaultCharges.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiGetPageForHeader(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rdx
  __int64 SystemPage; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  char EffectivePagePriorityThread; // bl
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // edx
  bool v17; // zf
  _OWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF

  v18[0] = 0LL;
  if ( !MiObtainFaultCharges(a1, 1LL, 1LL) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase(&CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[26], a2, v18);
  SystemPage = MiGetSystemPage(a1, v18);
  if ( !SystemPage )
  {
    MiReturnFaultCharges(a1, 1LL, 1LL);
    return -1LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v5, v7, v8);
  v10 = MiLockPageInline(SystemPage);
  *(_BYTE *)(SystemPage + 35) ^= (*(_BYTE *)(SystemPage + 35) ^ EffectivePagePriorityThread) & 7;
  *(_QWORD *)(SystemPage + 8) = 0LL;
  *(_QWORD *)(SystemPage + 16) = ZeroPte;
  *(_QWORD *)(SystemPage + 24) |= 0x4000000000000000uLL;
  v11 = v10;
  *(_WORD *)(SystemPage + 32) = 1;
  _InterlockedAnd64((volatile signed __int64 *)(SystemPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v11);
  return 0xAAAAAAAAAAAAAAABuLL * ((SystemPage + 0x220000000000LL) >> 4);
}
