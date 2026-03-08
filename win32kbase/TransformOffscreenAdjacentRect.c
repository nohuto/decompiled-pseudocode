/*
 * XREFs of TransformOffscreenAdjacentRect @ 0x1C016845C
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00152E0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C000C99C (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     FindAdjacentMonitor @ 0x1C0168370 (FindAdjacentMonitor.c)
 */

__int64 __fastcall TransformOffscreenAdjacentRect(
        LONG *a1,
        int *a2,
        struct tagRECT *a3,
        unsigned int a4,
        unsigned int a5)
{
  LONG left; // r8d
  LONG top; // ecx
  LONG right; // ecx
  LONG bottom; // ecx
  __int64 AdjacentMonitor; // rax
  unsigned int v14; // r8d
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  bool v20; // cc
  int v21; // eax
  int v22; // ecx
  __int64 result; // rax
  __int128 v24; // [rsp+30h] [rbp-48h] BYREF

  left = *a1;
  v24 = 0LL;
  if ( left >= a3->left )
    left = a3->left;
  *a1 = left;
  top = a1[1];
  if ( top >= a3->top )
    top = a3->top;
  a1[1] = top;
  right = a1[2];
  if ( right <= a3->right )
    right = a3->right;
  a1[2] = right;
  bottom = a1[3];
  if ( bottom <= a3->bottom )
    bottom = a3->bottom;
  a1[3] = bottom;
  AdjacentMonitor = FindAdjacentMonitor(a3, a5);
  v14 = TransformRectBetweenCoordinateSpacesPerMonitor((__int64)&v24, (__int64)a3, a4, a5, AdjacentMonitor);
  v15 = a2[2];
  v16 = v24;
  if ( *a2 < (int)v24 )
    v16 = *a2;
  v17 = a2[1];
  *a2 = v16;
  v18 = DWORD1(v24);
  if ( v17 < SDWORD1(v24) )
    v18 = v17;
  v19 = DWORD2(v24);
  v20 = v15 <= SDWORD2(v24);
  a2[1] = v18;
  if ( !v20 )
    v19 = v15;
  v21 = a2[3];
  a2[2] = v19;
  v22 = HIDWORD(v24);
  if ( v21 > SHIDWORD(v24) )
    v22 = v21;
  result = v14;
  a2[3] = v22;
  return result;
}
