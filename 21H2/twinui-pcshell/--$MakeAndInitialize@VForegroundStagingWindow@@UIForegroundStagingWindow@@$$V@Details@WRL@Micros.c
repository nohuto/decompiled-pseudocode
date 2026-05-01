/*
 * XREFs of ??$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundStagingWindow@@@Z @ 0x1803ECBCC
 * Callers:
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x1803ED468 (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0ForegroundStagingWindow@@QEAA@XZ @ 0x1803ECEF4 (--0ForegroundStagingWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ @ 0x1803ED988 (-RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ForegroundStagingWindow,IForegroundStagingWindow,>(
        _QWORD *a1)
{
  ForegroundStagingWindow *v2; // rax
  int v3; // edi
  ForegroundStagingWindow *v4; // rbx

  *a1 = 0LL;
  v2 = (ForegroundStagingWindow *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = ForegroundStagingWindow::ForegroundStagingWindow(v2);
    v3 = ForegroundStagingWindow::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(ForegroundStagingWindow *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_2e678f79_addb_4142_b6ee_a3c27b456805,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(ForegroundStagingWindow *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
