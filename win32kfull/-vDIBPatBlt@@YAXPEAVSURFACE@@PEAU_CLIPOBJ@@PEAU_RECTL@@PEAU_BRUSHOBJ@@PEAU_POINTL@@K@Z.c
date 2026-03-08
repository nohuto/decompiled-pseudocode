/*
 * XREFs of ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00E9FB8
 * Callers:
 *     EngBitBlt @ 0x1C0088BA0 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00032F8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall vDIBPatBlt(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6)
{
  int v9; // edi
  int v10; // r15d
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD); // r12
  int v13; // ebx
  _QWORD *pvRbrush; // rcx
  unsigned int i; // ebx
  LONG *v16; // rdx
  LONG v17; // ecx
  LONG left; // eax
  LONG v19; // r9d
  LONG right; // eax
  LONG v21; // r8d
  LONG top; // eax
  LONG v23; // eax
  LONG bottom; // r10d
  _QWORD v26[2]; // [rsp+40h] [rbp-1F8h] BYREF
  int v27; // [rsp+50h] [rbp-1E8h]
  int v28; // [rsp+54h] [rbp-1E4h]
  struct _RECTL *v29; // [rsp+58h] [rbp-1E0h]
  int v30; // [rsp+60h] [rbp-1D8h]
  LONG y; // [rsp+64h] [rbp-1D4h]
  int v32; // [rsp+68h] [rbp-1D0h]
  int v33; // [rsp+6Ch] [rbp-1CCh]
  int v34; // [rsp+70h] [rbp-1C8h]
  int v35; // [rsp+74h] [rbp-1C4h]
  struct _POINTL *v36; // [rsp+78h] [rbp-1C0h]
  void (__fastcall *v37)(_QWORD); // [rsp+80h] [rbp-1B8h]
  struct _CLIPOBJ *v38; // [rsp+88h] [rbp-1B0h]
  struct _RECTL *v39; // [rsp+90h] [rbp-1A8h]
  unsigned int v40; // [rsp+A0h] [rbp-198h] BYREF
  _OWORD v41[20]; // [rsp+A4h] [rbp-194h] BYREF

  v38 = a2;
  v39 = a3;
  v36 = a5;
  v29 = 0LL;
  v35 = 0;
  memset_0(&v40, 0, 0x144uLL);
  v9 = 0;
  v10 = 0;
  v11 = *((unsigned int *)a1 + 24);
  v12 = (void (__fastcall *)(_QWORD))qword_1C030C0E0[3 * v11 + a6];
  v37 = v12;
  v13 = *((_DWORD *)&aulMulFormat + v11);
  v34 = v13;
  if ( a2 )
  {
    if ( a2->iDComplexity == 1 )
    {
      v10 = 1;
      v40 = 1;
      v41[0] = a2->rclBounds;
    }
    else if ( a2->iDComplexity == 3 )
    {
      v9 = 1;
      v10 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
    }
  }
  v26[0] = *((_QWORD *)a1 + 10);
  v27 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v26[1] = pvRbrush[4];
  v28 = *((_DWORD *)pvRbrush + 7);
  v32 = *((_DWORD *)pvRbrush + 5) * v13;
  v33 = *((_DWORD *)pvRbrush + 6);
  v30 = v36->x * v13;
  y = v36->y;
  if ( v10 )
  {
    if ( !v9 )
      goto LABEL_10;
    do
    {
      v9 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v40, 0LL);
LABEL_10:
      for ( i = 0; i < v40; ++i )
      {
        v16 = (LONG *)&v41[i];
        v17 = *v16;
        left = a3->left;
        if ( *v16 < a3->left )
        {
          *v16 = left;
          v17 = left;
        }
        v19 = v16[2];
        right = a3->right;
        if ( v19 > right )
        {
          v16[2] = right;
          v19 = right;
        }
        v21 = v16[1];
        top = a3->top;
        if ( v21 < top )
        {
          v16[1] = top;
          v21 = top;
        }
        v23 = v16[3];
        bottom = a3->bottom;
        if ( v23 > bottom )
        {
          v16[3] = bottom;
          v23 = bottom;
        }
        if ( v21 < v23 && v17 < v19 )
        {
          v29 = (struct _RECTL *)&v41[i];
          v12(v26);
        }
      }
    }
    while ( v9 );
  }
  else
  {
    v29 = a3;
    v12(v26);
  }
}
