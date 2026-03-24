/*
 * XREFs of MiGetPageForHeader @ 0x14033763C
 * Callers:
 *     MiInitializeImageProtos @ 0x140336F8C (MiInitializeImageProtos.c)
 *     MiCreateMdl @ 0x140701344 (MiCreateMdl.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x14021BA50 (MiObtainFaultCharges.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiReturnFaultCharges @ 0x1402E4184 (MiReturnFaultCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x140339E94 (MiGetEffectivePagePriorityThread.c)
 *     MiGetSystemPage @ 0x140339EE8 (MiGetSystemPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPageForHeader(ULONG_PTR *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 SystemPage; // rax
  __int64 v6; // rsi
  char EffectivePagePriorityThread; // bl
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned __int8 v11; // al
  char v12; // bl
  unsigned __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx
  bool v19; // zf
  _OWORD v20[2]; // [rsp+20h] [rbp-28h] BYREF

  v20[0] = 0LL;
  if ( !(unsigned int)MiObtainFaultCharges(a1, 1u, 1) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase((__int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6], a2, (__int64)v20);
  SystemPage = MiGetSystemPage(a1, v20);
  v6 = SystemPage;
  if ( !SystemPage )
  {
    MiReturnFaultCharges((__int64)a1, 1uLL, 1);
    return -1LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(
                                  CurrentThread,
                                  (unsigned __int128)((SystemPage + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64);
  v11 = MiLockPageInline(v6, v8, v9, v10);
  v12 = *(_BYTE *)(v6 + 35) ^ EffectivePagePriorityThread;
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_BYTE *)(v6 + 35) ^= v12 & 7;
  v13 = v11;
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  *(_WORD *)(v6 + 32) = 1;
  *(_QWORD *)(v6 + 16) = ZeroPte;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v13);
  return (v6 + 0x58000000000LL) / 48;
}
