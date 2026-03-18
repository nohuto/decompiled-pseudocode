/*
 * XREFs of GetStyleWindow @ 0x1C004CDA0
 * Callers:
 *     UnredirectDCEs @ 0x1C0020208 (UnredirectDCEs.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0020420 (UserGetRedirectedWindowOrigin.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00490FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     CalcVisRgn @ 0x1C004B8D0 (CalcVisRgn.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005FA70 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnsetLayeredWindow @ 0x1C00B3964 (UnsetLayeredWindow.c)
 *     zzzLockWindowUpdate2 @ 0x1C00DBFA8 (zzzLockWindowUpdate2.c)
 *     UpdateRedirectedDCE @ 0x1C00DC330 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x1C00DC6F0 (SpbCheckDce.c)
 *     xxxDesktopPaintCallback @ 0x1C0113C80 (xxxDesktopPaintCallback.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C016CB60 (NtUserHwndQueryRedirectionInfo.c)
 *     xxxPrintWindow @ 0x1C01E297C (xxxPrintWindow.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C01F7C40 (NtUserHwndSetRedirectionInfo.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0243670 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = a1;
  if ( !a1 )
    return v2;
  while ( ((unsigned __int8)a2 & *(_BYTE *)(*(_QWORD *)(v2 + 40) + BYTE1(a2) + 16LL)) == 0 )
  {
    v2 = *(_QWORD *)(v2 + 104);
    if ( !v2 )
      return v2;
  }
  if ( (*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x2FFF) == 0x29D && v2 != a1 && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return v2;
}
