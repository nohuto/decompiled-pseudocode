/*
 * XREFs of GetStyleWindow @ 0x1C0071560
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C003DDFC (zzzLockWindowUpdate2.c)
 *     UnredirectDCEs @ 0x1C004C23C (UnredirectDCEs.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C004C450 (UserGetRedirectedWindowOrigin.c)
 *     xxxSetWindowStyle @ 0x1C005E1E0 (xxxSetWindowStyle.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E030 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00707F8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0072580 (xxxInternalInvalidate.c)
 *     CalcVisRgn @ 0x1C0073950 (CalcVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BF90 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00D52E0 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x1C00D5700 (SpbCheckDce.c)
 *     UnsetLayeredWindow @ 0x1C00EF178 (UnsetLayeredWindow.c)
 *     xxxDesktopPaintCallback @ 0x1C01311D0 (xxxDesktopPaintCallback.c)
 *     xxxPrintWindow @ 0x1C01E82D0 (xxxPrintWindow.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FD200 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C01FD750 (NtUserHwndSetRedirectionInfo.c)
 *     xxxRedrawHungWindow @ 0x1C02412D4 (xxxRedrawHungWindow.c)
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
