/*
 * XREFs of TouchTargetingIntersectSegment @ 0x1C0250F30
 * Callers:
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C01E5220 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C02507C8 (-_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@.c)
 * Callees:
 *     ?_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z @ 0x1C02504C0 (-_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z.c)
 */

__int64 __fastcall TouchTargetingIntersectSegment(
        struct tagPOINT a1,
        struct tagPOINT a2,
        const struct tagTOUCHTARGETINGCONTACT *a3,
        LONG *a4,
        LONG *a5)
{
  LONG x; // edi
  LONG v7; // ebx
  unsigned int v8; // r14d
  LONG v9; // edx
  LONG v10; // eax
  LONG v11; // r8d
  LONG v12; // ecx
  LONG v13; // r10d
  LONG v14; // ecx
  LONG v15; // eax
  LONG v16; // r11d
  LONG v17; // ecx
  LONG v18; // ebp
  LONG v19; // eax
  LONG v20; // r8d
  LONG v21; // ecx
  LONG v22; // eax
  int v23; // ebx
  int v24; // ebx
  int v25; // r9d
  int v26; // eax
  int v27; // r8d
  int v28; // r8d
  struct tagPOINT v30; // [rsp+30h] [rbp-38h] BYREF
  struct tagPOINT v31; // [rsp+38h] [rbp-30h] BYREF
  LONG v32; // [rsp+74h] [rbp+Ch]
  LONG y; // [rsp+7Ch] [rbp+14h]

  y = a2.y;
  v32 = a1.y;
  x = a2.x;
  v7 = a1.x;
  v8 = 0;
  if ( (unsigned int)_TTIntersectLine(a1, a2, a3, &v30, &v31) )
  {
    v9 = v31.x;
    v10 = x;
    v11 = v30.x;
    v12 = v31.x;
    if ( v30.x < v31.x )
      v12 = v30.x;
    if ( v7 < x )
      v10 = v7;
    if ( v12 <= v10 )
    {
      v13 = x;
      if ( v7 < x )
        v13 = v7;
    }
    else
    {
      v13 = v31.x;
      if ( v30.x < v31.x )
        v13 = v30.x;
    }
    *a4 = v13;
    v14 = v9;
    v15 = x;
    if ( v11 > v9 )
      v14 = v11;
    if ( v7 > x )
      v15 = v7;
    if ( v14 >= v15 )
    {
      v9 = x;
      if ( v7 > x )
        v9 = v7;
    }
    else if ( v11 > v9 )
    {
      v9 = v11;
    }
    *a5 = v9;
    if ( v13 <= v9 )
    {
      v16 = v31.y;
      v17 = v31.y;
      v18 = v30.y;
      v19 = y;
      if ( v30.y < v31.y )
        v17 = v30.y;
      if ( v32 < y )
        v19 = v32;
      if ( v17 <= v19 )
      {
        v20 = y;
        if ( v32 < y )
          v20 = v32;
      }
      else
      {
        v20 = v31.y;
        if ( v30.y < v31.y )
          v20 = v30.y;
      }
      a4[1] = v20;
      v21 = v16;
      v22 = y;
      if ( v18 > v16 )
        v21 = v18;
      if ( v32 > y )
        v22 = v32;
      if ( v21 >= v22 )
      {
        v16 = y;
        if ( v32 > y )
          v16 = v32;
      }
      else if ( v18 > v16 )
      {
        v16 = v18;
      }
      a5[1] = v16;
      if ( v20 <= v16 )
      {
        v23 = v7 - x;
        v8 = 1;
        if ( v23 <= 0 )
          v24 = v23 >> 31;
        else
          v24 = 1;
        if ( v32 - y <= 0 )
          v25 = (v32 - y) >> 31;
        else
          v25 = 1;
        if ( v13 - v9 <= 0 )
          v26 = (v13 - v9) >> 31;
        else
          v26 = 1;
        v27 = v20 - v16;
        if ( v27 <= 0 )
          v28 = v27 >> 31;
        else
          v28 = 1;
        if ( v24 * v25 != v26 * v28 )
        {
          *a4 = v9;
          *a5 = v13;
        }
      }
    }
  }
  return v8;
}
