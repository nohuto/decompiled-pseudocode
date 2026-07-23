/*
 * XREFs of VfPutDmaAdapter @ 0x1409CCC40
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402E0C70 (KeReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405A1008 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x1405A1D34 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409CA17C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x1409CEA60 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x1409CEC70 (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x1409CF530 (ViReleaseDmaAdapter.c)
 */

__int64 (__fastcall *__fastcall VfPutDmaAdapter(ULONG_PTR a1))(ULONG_PTR)
{
  __int64 (__fastcall *result)(ULONG_PTR); // rax
  __int64 (__fastcall *v3)(ULONG_PTR); // r14
  KIRQL v4; // al
  _LIST_ENTRY *Flink; // rbx
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
            byte_140C12EEC,
            "Driver has attempted to access an adapter (%p) that has already been released.",
            (const void *)0x18);
          VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140C12EEC);
        }
        ViFlushZeroMapRegisterBaseWcbs((__int64)Flink);
        if ( HIDWORD(Flink[11].Flink) != LODWORD(Flink[11].Blink) )
        {
          ViHalPreprocessOptions(
            byte_140C12EF0,
            "Cannot put adapter %p until all adapter channels are freed (%x left).",
            (const void *)8,
            a1);
          VfReportIssueWithOptions(
            0xE6u,
            8uLL,
            a1,
            (unsigned int)(HIDWORD(Flink[11].Flink) - LODWORD(Flink[11].Blink)),
            (ULONG_PTR)Flink,
            byte_140C12EF0);
        }
        if ( HIDWORD(Flink[10].Blink) != LODWORD(Flink[11].Flink) )
        {
          ViHalPreprocessOptions(
            byte_140C12EF4,
            "Cannot put adapter %p until all common buffers are freed (%x left).",
            (const void *)7,
            a1);
          VfReportIssueWithOptions(
            0xE6u,
            7uLL,
            a1,
            (unsigned int)(HIDWORD(Flink[10].Blink) - LODWORD(Flink[11].Flink)),
            (ULONG_PTR)Flink,
            byte_140C12EF4);
        }
        if ( LODWORD(Flink[10].Flink) )
        {
          ViHalPreprocessOptions(
            byte_140C12EF8,
            "Cannot put adapter %p until all map registers are freed (%x left).",
            (const void *)9,
            a1);
          VfReportIssueWithOptions(0xE6u, 9uLL, a1, SLODWORD(Flink[10].Flink), (ULONG_PTR)Flink, byte_140C12EF8);
        }
        if ( LODWORD(Flink[10].Blink) )
        {
          ViHalPreprocessOptions(
            byte_140C12EBC,
            "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
            (const void *)0xA,
            a1);
          VfReportIssueWithOptions(0xE6u, 0xAuLL, a1, SLODWORD(Flink[10].Blink), (ULONG_PTR)Flink, byte_140C12EBC);
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
