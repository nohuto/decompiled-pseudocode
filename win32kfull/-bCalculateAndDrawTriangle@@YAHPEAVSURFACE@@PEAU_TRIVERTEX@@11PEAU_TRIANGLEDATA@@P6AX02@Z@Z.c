/*
 * XREFs of ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C028EC08
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C028F504 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D4254 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C028EE1C (-bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C028F8D8 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C028F930 (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
 */

__int64 __fastcall bCalculateAndDrawTriangle(
        struct SURFACE *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIANGLEDATA *a5,
        void (*a6)(struct SURFACE *, struct _TRIANGLEDATA *))
{
  struct _TRIVERTEX *v6; // rbx
  struct _TRIVERTEX *v8; // r10
  struct _TRIVERTEX *v9; // rdi
  struct _TRIVERTEX *v10; // rsi
  int v11; // eax
  struct _TRIANGLEDATA *v12; // r9
  struct _TRIVERTEX *v13; // r8
  LONG y; // edx
  LONG v15; // ecx
  LONG v16; // eax
  int v17; // r8d
  _DWORD *v18; // rdx

  v6 = a4;
  if ( !a6 )
    return 0LL;
  v8 = a2;
  if ( a2->y <= a3->y )
  {
    v8 = a3;
    a3 = a2;
  }
  v9 = v8;
  if ( v8->y > a4->y )
  {
    v9 = a4;
    v6 = v8;
  }
  v10 = v9;
  if ( a3->y <= v9->y )
    v9 = a3;
  else
    v10 = a3;
  v11 = lCalculateTriangleArea(v9, v10, v6, a5);
  if ( !v11 )
    return 0LL;
  if ( v11 < 0 )
  {
    v13 = v10;
    v10 = v6;
    v6 = v13;
    if ( (int)lCalculateTriangleArea(v9, v10, v13, v12) <= 0 )
      return 0LL;
  }
  y = v9->y;
  if ( y <= *((_DWORD *)a5 + 1) )
    y = *((_DWORD *)a5 + 1);
  *((_DWORD *)a5 + 28) = y;
  v15 = v10->y;
  if ( v15 <= v6->y )
    v15 = v6->y;
  v16 = *((_DWORD *)a5 + 3);
  if ( v15 < v16 )
    v16 = v15;
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
  if ( v9->Red > 0xFF00u )
    v9->Red = -256;
  if ( v9->Green > 0xFF00u )
    v9->Green = -256;
  if ( v9->Blue > 0xFF00u )
    v9->Blue = -256;
  if ( v10->Red > 0xFF00u )
    v10->Red = -256;
  if ( v10->Green > 0xFF00u )
    v10->Green = -256;
  if ( v10->Blue > 0xFF00u )
    v10->Blue = -256;
  if ( v6->Red > 0xFF00u )
    v6->Red = -256;
  if ( v6->Green > 0xFF00u )
    v6->Green = -256;
  if ( v6->Blue > 0xFF00u )
    v6->Blue = -256;
  bCalulateColorGradient(v9, v10, v6, a5);
  vCalculateLine(v9, v10, a5);
  vCalculateLine(v10, v6, a5);
  vCalculateLine(v6, v9, a5);
  if ( !(unsigned int)bUMPDSecurityGateEx()
    || *((_QWORD *)a5 + 19)
    || (char *)a6 != (char *)vGradientFill4 && (char *)a6 != (char *)vGradientFill8 )
  {
    ((void (__fastcall *)(struct SURFACE *, struct _TRIANGLEDATA *))a6)(a1, a5);
  }
  return 1LL;
}
