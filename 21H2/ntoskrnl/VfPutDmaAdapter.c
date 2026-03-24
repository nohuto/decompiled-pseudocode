/*
 * XREFs of VfPutDmaAdapter @ 0x1409CCC30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140229C10 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405A10C8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409CA16C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x1409CEA50 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x1409CEC60 (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x1409CF520 (ViReleaseDmaAdapter.c)
 */

__int64 (__fastcall *__fastcall VfPutDmaAdapter(ULONG_PTR a1))(ULONG_PTR)
{
  __int64 (__fastcall *result)(ULONG_PTR); // rax
  __int64 (__fastcall *v3)(ULONG_PTR); // r14
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx
  char v6; // bp
  KIRQL v7; // r15
  int v8; // esi
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *Blink; // rcx

  VF_ASSERT_MAX_IRQL();
  result = (__int64 (__fastcall *)(ULONG_PTR))ViGetRealDmaOperation(a1);
  v3 = result;
  if ( result )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_140D4A088);
    Flink = ViAdapterList.Flink;
    v6 = 0;
    v7 = v4;
    v8 = 0;
    while ( &ViAdapterList != Flink )
    {
      if ( (struct _LIST_ENTRY *)a1 == Flink[1].Flink )
      {
        v8 = _InterlockedDecrement((volatile signed __int32 *)&Flink[2].Flink + 1);
        if ( v8 < 0 )
        {
          ViHalPreprocessOptions(
            byte_140C12EE0,
            "Driver has attempted to access an adapter (%p) that has already been released.",
            (const void *)0x18);
          VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140C12EE0);
        }
        ViFlushZeroMapRegisterBaseWcbs((__int64)Flink);
        if ( HIDWORD(Flink[11].Flink) != LODWORD(Flink[11].Blink) )
        {
          ViHalPreprocessOptions(
            byte_140C12EDC,
            "Cannot put adapter %p until all adapter channels are freed (%x left).",
            (const void *)8,
            a1);
          VfReportIssueWithOptions(
            0xE6u,
            8uLL,
            a1,
            (unsigned int)(HIDWORD(Flink[11].Flink) - LODWORD(Flink[11].Blink)),
            (ULONG_PTR)Flink,
            byte_140C12EDC);
        }
        if ( HIDWORD(Flink[10].Blink) != LODWORD(Flink[11].Flink) )
        {
          ViHalPreprocessOptions(
            byte_140C12EE8,
            "Cannot put adapter %p until all common buffers are freed (%x left).",
            (const void *)7,
            a1);
          VfReportIssueWithOptions(
            0xE6u,
            7uLL,
            a1,
            (unsigned int)(HIDWORD(Flink[10].Blink) - LODWORD(Flink[11].Flink)),
            (ULONG_PTR)Flink,
            byte_140C12EE8);
        }
        if ( LODWORD(Flink[10].Flink) )
        {
          ViHalPreprocessOptions(
            byte_140C12EE4,
            "Cannot put adapter %p until all map registers are freed (%x left).",
            (const void *)9,
            a1);
          VfReportIssueWithOptions(0xE6u, 9uLL, a1, SLODWORD(Flink[10].Flink), (ULONG_PTR)Flink, byte_140C12EE4);
        }
        if ( LODWORD(Flink[10].Blink) )
        {
          ViHalPreprocessOptions(
            byte_140C12EF0,
            "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
            (const void *)0xA,
            a1);
          VfReportIssueWithOptions(0xE6u, 0xAuLL, a1, SLODWORD(Flink[10].Blink), (ULONG_PTR)Flink, byte_140C12EF0);
        }
        if ( Flink[1].Blink && !BYTE2(Flink[2].Flink) )
        {
          if ( !BYTE3(Flink[2].Flink) )
          {
            Flink = 0LL;
            break;
          }
          v6 = 1;
          if ( v8 > 0 )
            break;
        }
        v9 = Flink->Flink;
        if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
          __fastfail(3u);
        Blink->Flink = v9;
        v9->Blink = Blink;
        break;
      }
      Flink = Flink->Flink;
    }
    KeReleaseSpinLock(&qword_140D4A088, v7);
    if ( Flink && !v6 )
      ViReleaseDmaAdapter((__int64)Flink);
    result = (__int64 (__fastcall *)(ULONG_PTR))v3(a1);
    if ( Flink && v6 && v8 <= 0 )
      return (__int64 (__fastcall *)(ULONG_PTR))ViReleaseDmaAdapter((__int64)Flink);
  }
  return result;
}
