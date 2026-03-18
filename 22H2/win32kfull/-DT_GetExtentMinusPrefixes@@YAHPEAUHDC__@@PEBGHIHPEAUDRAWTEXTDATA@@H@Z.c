/*
 * XREFs of ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C024CCF8
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C024CBD0 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C024D088 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C007A468 (GreGetTextExtentW.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0212AAC (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0212EB8 (xxxClientLpkDrawTextEx.c)
 *     CALL_LPK @ 0x1C0225FD4 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C024D478 (GetPrefixCount.c)
 */

__int64 __fastcall DT_GetExtentMinusPrefixes(
        Gre::Base *a1,
        PCWSTR SourceString,
        unsigned int a3,
        int a4,
        int a5,
        struct DRAWTEXTDATA *a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v15; // rbp
  __int64 v16; // r8
  _QWORD v18[2]; // [rsp+50h] [rbp-18h] BYREF

  v18[0] = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = PtiCurrentShared(v12, v11, v13, v14);
  GetPrefixCount(SourceString, a3, 0LL, 0LL);
  if ( *((_DWORD *)a6 + 15) && (unsigned int)CALL_LPK((__int64)v15) )
    return xxxClientLpkDrawTextEx(a1, 0, 0, SourceString, a3, 0, a4, v16, 1, a7);
  if ( (unsigned int)CALL_LPK((__int64)v15) )
    xxxClientGetTextExtentPointW(a1, SourceString, a3, v18);
  else
    GreGetTextExtentW((__int64)a1, (__int64)SourceString, a3, (__int64)v18);
  return LODWORD(v18[0]);
}
