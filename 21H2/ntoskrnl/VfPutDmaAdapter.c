/*
 * XREFs of VfPutDmaAdapter @ 0x140A868E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405FE678 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140A83D24 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x140A88738 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x140A88948 (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x140A89224 (ViReleaseDmaAdapter.c)
 */

__int64 (__fastcall *__fastcall VfPutDmaAdapter(ULONG_PTR a1))(ULONG_PTR)
{
  __int64 (__fastcall *result)(ULONG_PTR); // rax
  __int64 (__fastcall *v3)(ULONG_PTR); // r12
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx
  char v6; // r14
  int v7; // esi
  unsigned __int64 v8; // r15
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v13; // eax
  _DWORD *SchedulerAssist; // r8
  bool v15; // zf

  VF_ASSERT_MAX_IRQL();
  result = (__int64 (__fastcall *)(ULONG_PTR))ViGetRealDmaOperation(a1);
  v3 = result;
  if ( result )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_140D575A0);
    Flink = ViAdapterList.Flink;
    v6 = 0;
    v7 = 0;
    v8 = v4;
    while ( &ViAdapterList != Flink )
    {
      if ( (struct _LIST_ENTRY *)a1 == Flink[1].Flink )
      {
        v7 = _InterlockedDecrement((volatile signed __int32 *)&Flink[2].Flink + 1);
        if ( v7 < 0 )
        {
          ViHalPreprocessOptions(
            byte_140C0D97C,
            "Driver has attempted to access an adapter (%p) that has already been released.",
            (const void *)0x18);
          VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140C0D97C);
        }
        ViFlushZeroMapRegisterBaseWcbs((__int64)Flink);
        if ( HIDWORD(Flink[11].Flink) != LODWORD(Flink[11].Blink) )
        {
          ViHalPreprocessOptions(
            byte_140C0D980,
            "Cannot put adapter %p until all adapter channels are freed (%x left).",
            (const void *)8,
            a1);
          VfReportIssueWithOptions(
            0xE6u,
            8uLL,
            a1,
            (unsigned int)(HIDWORD(Flink[11].Flink) - LODWORD(Flink[11].Blink)),
            (ULONG_PTR)Flink,
            byte_140C0D980);
        }
        if ( HIDWORD(Flink[10].Blink) != LODWORD(Flink[11].Flink) )
        {
          ViHalPreprocessOptions(
            byte_140C0D984,
            "Cannot put adapter %p until all common buffers are freed (%x left).",
            (const void *)7,
            a1);
          VfReportIssueWithOptions(
            0xE6u,
            7uLL,
            a1,
            (unsigned int)(HIDWORD(Flink[10].Blink) - LODWORD(Flink[11].Flink)),
            (ULONG_PTR)Flink,
            byte_140C0D984);
        }
        if ( LODWORD(Flink[10].Flink) )
        {
          ViHalPreprocessOptions(
            byte_140C0D970,
            "Cannot put adapter %p until all map registers are freed (%x left).",
            (const void *)9,
            a1);
          VfReportIssueWithOptions(0xE6u, 9uLL, a1, SLODWORD(Flink[10].Flink), (ULONG_PTR)Flink, byte_140C0D970);
        }
        if ( LODWORD(Flink[10].Blink) )
        {
          ViHalPreprocessOptions(
            byte_140C0D974,
            "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
            (const void *)0xA,
            a1);
          VfReportIssueWithOptions(0xE6u, 0xAuLL, a1, SLODWORD(Flink[10].Blink), (ULONG_PTR)Flink, byte_140C0D974);
        }
        if ( Flink[1].Blink && !BYTE2(Flink[2].Flink) )
        {
          if ( !BYTE3(Flink[2].Flink) )
          {
            Flink = 0LL;
            break;
          }
          v6 = 1;
          if ( v7 > 0 )
            break;
        }
        v9 = Flink->Flink;
        Blink = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
          __fastfail(3u);
        Blink->Flink = v9;
        v9->Blink = Blink;
        break;
      }
      Flink = Flink->Flink;
    }
    KxReleaseSpinLock(&qword_140D575A0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    if ( Flink && !v6 )
      ViReleaseDmaAdapter((__int64)Flink);
    result = (__int64 (__fastcall *)(ULONG_PTR))v3(a1);
    if ( Flink && v6 && v7 <= 0 )
      return (__int64 (__fastcall *)(ULONG_PTR))ViReleaseDmaAdapter((__int64)Flink);
  }
  return result;
}
