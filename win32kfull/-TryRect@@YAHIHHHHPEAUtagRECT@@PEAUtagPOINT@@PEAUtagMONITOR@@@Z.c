/*
 * XREFs of ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0234DEC
 * Callers:
 *     FindBestPos @ 0x1C0234EF4 (FindBestPos.c)
 * Callees:
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     GetMonitorWorkRect @ 0x1C0101744 (GetMonitorWorkRect.c)
 */

__int64 __fastcall TryRect(
        int a1,
        LONG right,
        LONG bottom,
        int a4,
        int a5,
        struct tagRECT *a6,
        struct tagPOINT *a7,
        struct tagMONITOR *a8)
{
  unsigned int v12; // r14d
  int v13; // edi
  int v14; // edi
  bool v15; // cc
  __m128i v17; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0;
  v17 = *GetMonitorWorkRect(&v17, (__int64)a8);
  if ( a1 )
  {
    v13 = a1 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
LABEL_7:
          v17.m128i_i32[2] = right + a4;
          v17.m128i_i32[3] = bottom + a5;
          v17.m128i_i32[0] = right;
          a7->x = right;
          a7->y = bottom;
          v17.m128i_i32[1] = bottom;
          LOBYTE(v12) = (unsigned int)IntersectRect(&v17, v17.m128i_i32, &a6->left) == 0;
          return v12;
        }
        bottom = a6->bottom;
        v15 = bottom + a5 <= v17.m128i_i32[3];
      }
      else
      {
        right = a6->right;
        v15 = right + a4 <= v17.m128i_i32[2];
      }
      if ( v15 )
        goto LABEL_7;
    }
    else
    {
      bottom = a6->top - a5;
      if ( bottom >= v17.m128i_i32[1] )
        goto LABEL_7;
    }
  }
  else
  {
    right = a6->left - a4;
    if ( right >= v17.m128i_i32[0] )
      goto LABEL_7;
  }
  return 0LL;
}
