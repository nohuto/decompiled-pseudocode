/*
 * XREFs of ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00CB114
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     IntersectRect @ 0x1C003B560 (IntersectRect.c)
 *     GetMonitorRect @ 0x1C003DBB4 (GetMonitorRect.c)
 */

struct tagMONITOR *__fastcall AdjustDisplayMonitor(struct tagMONITOR *a1, struct tagRECT *a2)
{
  __int64 i; // rbx
  __int64 v5; // r8
  __m128i v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __m128i v9; // [rsp+40h] [rbp-18h] BYREF

  for ( i = *((_QWORD *)gpDispInfo + 13); i; i = *(_QWORD *)(i + 56) )
  {
    v5 = *(unsigned int *)(*(_QWORD *)(i + 40) + 24LL);
    if ( (v5 & 1) == 0 )
    {
      v8 = 0LL;
      v7 = *GetMonitorRect(&v9, i, v5);
      if ( (unsigned int)IntersectRect(&v8, &a2->left, v7.m128i_i32) )
        return (struct tagMONITOR *)i;
    }
  }
  return a1;
}
