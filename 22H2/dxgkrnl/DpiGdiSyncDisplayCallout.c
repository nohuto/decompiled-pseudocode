/*
 * XREFs of DpiGdiSyncDisplayCallout @ 0x1C02288D0
 * Callers:
 *     DpiGdiHandleAsyncDisplayCallout @ 0x1C0228880 (DpiGdiHandleAsyncDisplayCallout.c)
 *     ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C0315224 (-RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiSyncDisplayCallout(__int64 a1, char a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( dword_1C01404A0 == 2 )
  {
    LOBYTE(a3) = 1;
    HIBYTE(v7) = a2;
    LODWORD(v6) = 8;
    v3 = SMgrGdiCallout(&v6, a1, a3, 0LL, 0LL, 0LL);
    v4 = v3;
    if ( v3 < 0 || SDWORD2(v7) < 0 )
      WdLogSingleEntry1(3LL, v3);
  }
  else
  {
    v4 = -1073741661;
    WdLogSingleEntry1(3LL, -1073741661LL);
  }
  return v4;
}
