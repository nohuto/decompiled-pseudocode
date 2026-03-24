/*
 * XREFs of GetStyleWindow @ 0x1C00714C0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C003DD5C (zzzLockWindowUpdate2.c)
 *     UnredirectDCEs @ 0x1C004C19C (UnredirectDCEs.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C004C3B0 (UserGetRedirectedWindowOrigin.c)
 *     xxxSetWindowStyle @ 0x1C005E140 (xxxSetWindowStyle.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006DF90 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0070758 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C00724E0 (xxxInternalInvalidate.c)
 *     CalcVisRgn @ 0x1C00738B0 (CalcVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BEF0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00D4F90 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x1C00D53B0 (SpbCheckDce.c)
 *     UnsetLayeredWindow @ 0x1C00EEE28 (UnsetLayeredWindow.c)
 *     xxxDesktopPaintCallback @ 0x1C0130E20 (xxxDesktopPaintCallback.c)
 *     xxxPrintWindow @ 0x1C01E7D10 (xxxPrintWindow.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FCC40 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C01FD190 (NtUserHwndSetRedirectionInfo.c)
 *     xxxRedrawHungWindow @ 0x1C0240D14 (xxxRedrawHungWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = a1;
  if ( !a1 )
    return v2;
  do
  {
    if ( ((unsigned __int8)a2 & *(_BYTE *)(*(_QWORD *)(v2 + 40) + BYTE1(a2) + 16LL)) != 0 )
      break;
    v2 = *(_QWORD *)(v2 + 104);
  }
  while ( v2 );
  if ( v2 && (*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x2FFF) == 0x29D && v2 != a1 && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return v2;
}
