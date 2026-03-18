/*
 * XREFs of ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C02321BC
 * Callers:
 *     FindBestPos @ 0x1C02322C4 (FindBestPos.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C00C46A8 (GetMonitorWorkRect.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 */

__int64 __fastcall TryRect(
        int a1,
        int right,
        int bottom,
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
  int v17[6]; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0;
  *(_OWORD *)v17 = *GetMonitorWorkRect(v17, (__int64)a8);
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
          v17[2] = right + a4;
          v17[3] = bottom + a5;
          v17[0] = right;
          a7->x = right;
          a7->y = bottom;
          v17[1] = bottom;
          LOBYTE(v12) = (unsigned int)IntersectRect(v17, v17, &a6->left) == 0;
          return v12;
        }
        bottom = a6->bottom;
        v15 = bottom + a5 <= v17[3];
      }
      else
      {
        right = a6->right;
        v15 = right + a4 <= v17[2];
      }
      if ( v15 )
        goto LABEL_7;
    }
    else
    {
      bottom = a6->top - a5;
      if ( bottom >= v17[1] )
        goto LABEL_7;
    }
  }
  else
  {
    right = a6->left - a4;
    if ( right >= v17[0] )
      goto LABEL_7;
  }
  return 0LL;
}
