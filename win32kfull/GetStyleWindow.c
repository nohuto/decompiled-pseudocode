/*
 * XREFs of GetStyleWindow @ 0x1C0039020
 * Callers:
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     UnredirectDCEs @ 0x1C002C2E4 (UnredirectDCEs.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00331B0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0038E64 (xxxSimpleDoSyncPaint.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0038F40 (UserGetRedirectedWindowOrigin.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C00535C0 (CalcVisRgn.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C0096EF0 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x1C0097430 (SpbCheckDce.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     zzzLockWindowUpdate2 @ 0x1C00E51C8 (zzzLockWindowUpdate2.c)
 *     xxxDesktopPaintCallback @ 0x1C00EF1F0 (xxxDesktopPaintCallback.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0147D40 (NtUserHwndQueryRedirectionInfo.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0149E06 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01BE184 (xxxPrintWindow.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C01D5DD0 (NtUserHwndSetRedirectionInfo.c)
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
