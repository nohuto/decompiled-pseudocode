/*
 * XREFs of ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C014C818
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C014C640 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CF858 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C014CA04 (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C014CDD8 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C014CEB4 (-bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bCalculateAndDrawTriangle(
        struct SURFACE *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIANGLEDATA *a5,
        void (*a6)(struct SURFACE *, struct _TRIANGLEDATA *))
{
  struct _TRIVERTEX *v8; // r9
  struct _TRIVERTEX *v9; // rbx
  struct _TRIVERTEX *v10; // rdx
  int v11; // eax
  struct _TRIVERTEX *v12; // rdx
  struct _TRIANGLEDATA *v13; // r9
  struct _TRIVERTEX *v14; // rdi
  LONG y; // edx
  LONG v16; // ecx
  int v17; // r8d
  _DWORD *v18; // rdx

  if ( !a6 )
    return 0LL;
  v8 = a2;
  if ( a2->y <= a3->y )
  {
    v8 = a3;
    a3 = a2;
  }
  v9 = a4;
  if ( v8->y <= a4->y )
    a4 = v8;
  else
    v9 = v8;
  v10 = a3;
  if ( a3->y <= a4->y )
  {
    v10 = a4;
    a4 = a3;
  }
  v11 = lCalculateTriangleArea(a4, v10, v9, a5);
  if ( !v11 )
    return 0LL;
  v14 = v12;
  if ( v11 < 0 )
  {
    v14 = v9;
    v9 = v12;
    if ( (int)lCalculateTriangleArea(a4, v14, v12, v13) <= 0 )
      return 0LL;
  }
  y = a4->y;
  if ( y <= *((_DWORD *)a5 + 1) )
    y = *((_DWORD *)a5 + 1);
  *((_DWORD *)a5 + 28) = y;
  v16 = v14->y;
  if ( v16 <= v9->y )
    v16 = v9->y;
  if ( v16 >= *((_DWORD *)a5 + 3) )
    v16 = *((_DWORD *)a5 + 3);
  *((_DWORD *)a5 + 29) = v16;
  v17 = 0;
  if ( v16 - y > 0 )
  {
    v18 = (_DWORD *)((char *)a5 + 172);
    do
    {
      *(v18 - 1) = 0x7FFFFFFF;
      *v18 = 0x80000000;
      ++v17;
      v18 += 10;
    }
    while ( v17 < *((_DWORD *)a5 + 29) - *((_DWORD *)a5 + 28) );
  }
  if ( a4->Red > 0xFF00u )
    a4->Red = -256;
  if ( a4->Green > 0xFF00u )
    a4->Green = -256;
  if ( a4->Blue > 0xFF00u )
    a4->Blue = -256;
  if ( v14->Red > 0xFF00u )
    v14->Red = -256;
  if ( v14->Green > 0xFF00u )
    v14->Green = -256;
  if ( v14->Blue > 0xFF00u )
    v14->Blue = -256;
  if ( v9->Red > 0xFF00u )
    v9->Red = -256;
  if ( v9->Green > 0xFF00u )
    v9->Green = -256;
  if ( v9->Blue > 0xFF00u )
    v9->Blue = -256;
  bCalulateColorGradient(a4, v14, v9, a5);
  vCalculateLine(a4, v14, a5);
  vCalculateLine(v14, v9, a5);
  vCalculateLine(v9, a4, a5);
  if ( bUMPDSecurityGateEx()
    && !*((_QWORD *)a5 + 19)
    && ((char *)a6 == (char *)vGradientFill4 || (char *)a6 == (char *)vGradientFill8) )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bCalculateAndDrawTriangle:pfnG references NULL ptData->pxlo.\n",
        1008);
  }
  else
  {
    ((void (__fastcall *)(struct SURFACE *, struct _TRIANGLEDATA *))a6)(a1, a5);
  }
  return 1LL;
}
