/*
 * XREFs of DxgkSetIndirectDisplayHostProcess @ 0x1C02C344C
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C03A4C34 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayHostProcess(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v2; // rdi

  Current = DXGPROCESS::GetCurrent(a1);
  v2 = Current;
  if ( Current )
  {
    DXGFASTMUTEX::Acquire((struct DXGPROCESS *)((char *)Current + 104));
    *((_DWORD *)v2 + 106) |= 0x4000u;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v2 + 13);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 216LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not get DXGPROCESS for IndirectDisplay host process",
      216LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
}
