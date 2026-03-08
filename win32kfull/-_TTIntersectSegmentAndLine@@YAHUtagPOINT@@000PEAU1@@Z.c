/*
 * XREFs of ?_TTIntersectSegmentAndLine@@YAHUtagPOINT@@000PEAU1@@Z @ 0x1C02505FC
 * Callers:
 *     ?_TTAddLineAndSegmentIntersection@@YAXUtagPOINT@@0JJJJPEAU1@PEAH@Z @ 0x1C025028C (-_TTAddLineAndSegmentIntersection@@YAXUtagPOINT@@0JJJJPEAU1@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _TTIntersectSegmentAndLine(
        struct tagPOINT a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        struct tagPOINT *a5)
{
  int v5; // r12d
  int v6; // r14d
  int v7; // r15d
  unsigned int v8; // r9d
  int v9; // r11d
  int v10; // r10d
  int v11; // eax
  int v12; // r10d
  int v13; // esi
  int v14; // r11d
  int v15; // ebx
  int v16; // edi
  unsigned int v17; // r10d
  int v18; // eax

  v5 = a4.x - a1.x;
  v6 = a2.x - a1.x;
  v7 = a2.y - a1.y;
  v8 = 0;
  v9 = (a3.x - a1.x) * (a4.y - a1.y) - (a3.y - a1.y) * (a4.x - a1.x);
  v10 = (a4.y - a2.y) * (a3.x - a2.x) - (a4.x - a2.x) * (a3.y - a2.y);
  if ( v9 )
  {
    if ( !v10 )
    {
      *a5 = a2;
      return 1;
    }
    if ( v9 <= 0 )
      v11 = v9 >> 31;
    else
      v11 = 1;
    if ( v10 <= 0 )
      v12 = v10 >> 31;
    else
      v12 = 1;
    if ( v11 != v12 )
    {
      v13 = v6 * v9;
      v14 = v7 * v9;
      v15 = v6 * (a4.y - a3.y) + v7 * (a3.x - a1.x - v5);
      if ( v13 <= 0 )
        v16 = v13 >> 31;
      else
        v16 = 1;
      v17 = abs32(v15 / 2);
      a5->x = a1.x + (int)(v13 + v16 * v17) / v15;
      if ( v14 <= 0 )
        v18 = v14 >> 31;
      else
        v18 = 1;
      v8 = 1;
      a5->y = a1.y + (int)(v14 + v17 * v18) / v15;
    }
  }
  else if ( v10 )
  {
    *a5 = a1;
    return 1;
  }
  return v8;
}
