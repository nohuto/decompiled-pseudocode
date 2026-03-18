/*
 * XREFs of ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0245B78
 * Callers:
 *     FindBestPos @ 0x1C0245C74 (FindBestPos.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 */

__int64 __fastcall TryRect(
        int a1,
        int right,
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
  bool v17; // cc
  int v18[6]; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0;
  *(_OWORD *)v18 = *(_OWORD *)GetMonitorWorkRect((__int64)v18, (__int64)a8);
  if ( !a1 )
  {
    right = a6->left - a4;
    v17 = right < v18[0];
LABEL_11:
    if ( !v17 )
      goto LABEL_8;
    return 0LL;
  }
  v13 = a1 - 1;
  if ( !v13 )
  {
    bottom = a6->top - a5;
    v17 = bottom < v18[1];
    goto LABEL_11;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 != 1 )
    {
LABEL_8:
      v18[2] = right + a4;
      v18[3] = bottom + a5;
      v18[0] = right;
      a7->x = right;
      a7->y = bottom;
      v18[1] = bottom;
      LOBYTE(v12) = (unsigned int)IntersectRect(v18, v18, &a6->left) == 0;
      return v12;
    }
    bottom = a6->bottom;
    v15 = bottom + a5 <= v18[3];
  }
  else
  {
    right = a6->right;
    v15 = right + a4 <= v18[2];
  }
  if ( v15 )
    goto LABEL_8;
  return 0LL;
}
