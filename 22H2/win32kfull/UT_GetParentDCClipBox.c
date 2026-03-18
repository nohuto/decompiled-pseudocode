/*
 * XREFs of UT_GetParentDCClipBox @ 0x1C00C4178
 * Callers:
 *     xxxFillWindow @ 0x1C00C40F0 (xxxFillWindow.c)
 * Callees:
 *     GetRect @ 0x1C00C7BD0 (GetRect.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 */

__int64 __fastcall UT_GetParentDCClipBox(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( (unsigned int)GreGetClipBox(a2, a3, 1LL) == 1 )
    return 0LL;
  if ( !a1 || *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 8LL) >= 0 )
    return 1LL;
  GetRect(a1, &v6, 17LL);
  return IntersectRect(a3, a3, &v6);
}
