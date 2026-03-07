__int64 __fastcall _TTIntersectLine(
        struct tagPOINT a1,
        struct tagPOINT a2,
        const struct tagTOUCHTARGETINGCONTACT *a3,
        struct tagPOINT *a4,
        struct tagPOINT *a5)
{
  int v7; // edx
  LONG x; // eax
  LONG v11; // eax
  LONG y; // ecx
  LONG v13; // eax
  int v14; // ecx
  int v15; // ebp
  unsigned int *v16; // r14
  bool v17; // zf
  struct tagPOINT *v18; // rcx
  struct tagPOINT v20; // [rsp+40h] [rbp-28h] BYREF
  struct tagPOINT v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+70h] [rbp+8h] BYREF

  v7 = 0;
  v22 = 0;
  if ( a1 == a2 )
    return 0LL;
  x = a2.x;
  if ( a1.x > a2.x )
    x = a1.x;
  if ( x < *(_DWORD *)a3 )
    return 0LL;
  v11 = a2.x;
  if ( a1.x < a2.x )
    v11 = a1.x;
  if ( v11 > *((_DWORD *)a3 + 2) )
    return 0LL;
  y = a1.y;
  v13 = a1.y;
  if ( a1.y <= a2.y )
    v13 = a2.y;
  if ( v13 < *((_DWORD *)a3 + 1) )
    return 0LL;
  if ( a1.y >= a2.y )
    y = a2.y;
  if ( y > *((_DWORD *)a3 + 3) )
    return 0LL;
  v14 = *((_DWORD *)a3 + 11);
  v15 = 0;
  if ( v14 <= 0 )
    return 0LL;
  v16 = (unsigned int *)((char *)a3 + 48);
  while ( 1 )
  {
    v17 = v7 == 2;
    if ( v7 >= 2 )
      break;
    ++v15;
    _TTAddLineAndSegmentIntersection(
      a1,
      a2,
      *v16,
      v16[1],
      *((_DWORD *)a3 + 2 * (v15 % v14) + 12),
      *((_DWORD *)a3 + 2 * (v15 % v14) + 13),
      &v20,
      &v22);
    v14 = *((_DWORD *)a3 + 11);
    v16 += 2;
    v7 = v22;
    if ( v15 >= v14 )
    {
      v17 = v22 == 2;
      break;
    }
  }
  if ( !v17 )
    return 0LL;
  v18 = a5;
  *a4 = v20;
  *v18 = v21;
  return 1LL;
}
