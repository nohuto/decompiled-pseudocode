/*
 * XREFs of DxgkOpenAdapterFromHdc @ 0x1C01D7320
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromHdc(__int64 a1)
{
  struct DXGPROCESS *Current; // rax

  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 456LL))(a1);
  WdLogSingleEntry1(2LL, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
