/*
 * XREFs of ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025B2CC
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025B19C (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C025B688 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     CALL_LPK @ 0x1C00B9BC8 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C022C7DC (xxxClientLpkDrawTextEx.c)
 *     GetPrefixCount @ 0x1C025BA88 (GetPrefixCount.c)
 */

__int64 __fastcall DT_GetExtentMinusPrefixes(
        HDC a1,
        WCHAR *a2,
        unsigned int a3,
        int a4,
        int a5,
        struct DRAWTEXTDATA *a6,
        int a7)
{
  __int64 ThreadWin32Thread; // r14
  __int64 v12; // r8
  struct _POINTL v14; // [rsp+58h] [rbp-40h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]

  v14 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = ThreadWin32Thread;
  GetPrefixCount(a2, a3, 0LL, 0LL);
  if ( *((_DWORD *)a6 + 15) && (unsigned int)CALL_LPK(ThreadWin32Thread) )
    return xxxClientLpkDrawTextEx(a1, 0, 0, a2, a3, 0, a4, v12, 1, a7);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, a2, a3, &v14);
  else
    GreGetTextExtentW(a1, a2, a3, (struct tagSIZE *)&v14, 1u);
  return (unsigned int)v14.x;
}
