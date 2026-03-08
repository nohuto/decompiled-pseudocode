/*
 * XREFs of ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F9B8
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F890 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C024FD48 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     GreGetTextExtentW @ 0x1C010FBEC (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0215674 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0215A80 (xxxClientLpkDrawTextEx.c)
 *     CALL_LPK @ 0x1C0228CCC (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C0250138 (GetPrefixCount.c)
 */

__int64 __fastcall DT_GetExtentMinusPrefixes(
        Gre::Base *a1,
        WCHAR *a2,
        unsigned int a3,
        int a4,
        int a5,
        struct DRAWTEXTDATA *a6,
        int a7)
{
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rbp
  __int64 v13; // r8
  struct tagSIZE v15[2]; // [rsp+50h] [rbp-18h] BYREF

  v15[0] = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = PtiCurrentShared(v11);
  GetPrefixCount(a2, a3, 0LL, 0LL);
  if ( *((_DWORD *)a6 + 15) && (unsigned int)CALL_LPK((__int64)v12) )
    return xxxClientLpkDrawTextEx(a1, 0, 0, a2, a3, 0, a4, v13, 1, a7);
  if ( (unsigned int)CALL_LPK((__int64)v12) )
    xxxClientGetTextExtentPointW(a1, a2, a3, v15);
  else
    GreGetTextExtentW((HDC)a1, a2, a3, v15);
  return (unsigned int)v15[0].cx;
}
