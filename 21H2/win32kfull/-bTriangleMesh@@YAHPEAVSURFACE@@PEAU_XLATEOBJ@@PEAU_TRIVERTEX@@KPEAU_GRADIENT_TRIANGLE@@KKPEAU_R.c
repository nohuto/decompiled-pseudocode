/*
 * XREFs of ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0288570
 * Callers:
 *     EngGradientFill @ 0x1C00093E0 (EngGradientFill.c)
 * Callees:
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C0009BFC (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C0287C60 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 *     ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0288144 (-bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C02881B8 (-bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z.c)
 */

__int64 __fastcall bTriangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        unsigned int a4,
        struct _GRADIENT_TRIANGLE *a5,
        size_t Size,
        unsigned int a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10)
{
  struct _RECTL *v10; // rbx
  __int64 v13; // r14
  unsigned int v14; // r12d
  int v15; // r9d
  __int64 v16; // rdi
  struct _RECTL *v17; // rdx
  struct _RECTL v18; // xmm0
  struct _POINTL *v19; // rax
  __int64 v20; // r15
  ULONG *p_Vertex3; // rbx
  struct _TRIVERTEX *v22; // rsi
  struct _TRIVERTEX *v23; // r14
  struct _TRIVERTEX *v24; // r8
  __int64 v25; // rsi
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  struct _TRIVERTEX *v28; // rax
  struct _TRIVERTEX *v29; // r13
  unsigned int v30; // r15d
  struct SURFACE *v31; // rbx
  ULONG Vertex1; // r9d
  ULONG Vertex2; // r8d
  __int64 Vertex3; // rdx
  unsigned int v35; // eax
  unsigned __int8 v36; // cl
  unsigned int v38; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-4Ch]
  __int64 v40; // [rsp+38h] [rbp-48h] BYREF
  struct _GRADIENT_TRIANGLE *v41; // [rsp+40h] [rbp-40h]
  void (*v42)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v43; // [rsp+50h] [rbp-30h]
  struct _TRIVERTEX *v44; // [rsp+58h] [rbp-28h]
  struct _TRIVERTEX *v45; // [rsp+60h] [rbp-20h]
  struct _TRIVERTEX *v46; // [rsp+68h] [rbp-18h]
  struct _TRIVERTEX *v47; // [rsp+70h] [rbp-10h]

  v10 = a8;
  v42 = 0LL;
  v13 = a4;
  v14 = 1;
  v15 = a8->bottom - a8->top;
  if ( v15 <= 0 )
    return 0;
  if ( (unsigned int)(v15 - 1) > 0x6666661 )
    return 0;
  if ( 40 * v15 == -168 )
    return 0;
  v16 = Win32AllocPoolZInit((unsigned int)(40 * v15 + 168), 1734624615LL);
  if ( !v16 )
    return 0;
  v40 = *((_QWORD *)a1 + 16);
  if ( v40 || (v40 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1776LL)) != 0 )
  {
    bDetermineTriangleFillRoutine(
      a1,
      (struct XEPALOBJ *)&v40,
      &v42,
      (void (**)(struct SURFACE *, struct _GRADIENTRECTDATA *))&a8);
    v17 = a9;
    v18 = *v10;
    *(_DWORD *)(v16 + 144) = a7;
    *(_QWORD *)(v16 + 160) = &v40;
    v19 = a10;
    *(struct _RECTL *)v16 = v18;
    *(_QWORD *)(v16 + 152) = a2;
    *(struct _POINTL *)(v16 + 128) = *v19;
    if ( v17->right - v17->left < 0x4000 && v17->bottom - v17->top < 0x4000 )
    {
      if ( (_DWORD)Size )
      {
        v20 = (unsigned int)Size;
        p_Vertex3 = &a5->Vertex3;
        do
        {
          v22 = &a3[*(p_Vertex3 - 2)];
          v23 = &a3[*(p_Vertex3 - 1)];
          if ( bIsTriangleInBounds(v22, v23, &a3[*p_Vertex3], (struct _TRIANGLEDATA *)v16) )
            v14 = bCalculateAndDrawTriangle(a1, v22, v23, v24, (struct _TRIANGLEDATA *)v16, v42);
          p_Vertex3 += 3;
          --v20;
        }
        while ( v20 );
      }
      goto LABEL_38;
    }
    if ( (unsigned int)v13 >= 0xFFFFFFE3
      || (LODWORD(v25) = Size, v39 = Size + 58, (unsigned int)Size >= 0xFFFFFFC6)
      || (a8 = (struct _RECTL *)(unsigned int)(Size + 58),
          v26 = (unsigned int)(v13 + 29),
          v27 = v26 * 16 + 13LL * (_QWORD)a8,
          v27 > 0xFFFFFFFF) )
    {
      Win32FreePool(v16);
      return 0LL;
    }
    if ( (_DWORD)v27 )
    {
      v28 = (struct _TRIVERTEX *)Win32AllocPool((unsigned int)v27, 1953920071LL);
      v47 = v28;
      v29 = v28;
      if ( v28 )
      {
        v39 -= 2;
        v41 = (struct _GRADIENT_TRIANGLE *)&v28[v26];
        v30 = v13 + 28;
        v43 = (unsigned __int8 *)&v28[v26] + 12 * (_QWORD)a8;
        memmove(v28, a3, 16 * v13);
        memmove(v41, a5, 12LL * (unsigned int)Size);
        memset(v43, 0, (unsigned int)Size);
        v31 = a1;
        LODWORD(a8) = v13;
        v38 = Size;
        while ( 1 )
        {
          Vertex1 = v41[(unsigned int)(v25 - 1)].Vertex1;
          if ( Vertex1 >= v30
            || (Vertex2 = v41[(unsigned int)(v25 - 1)].Vertex2, Vertex2 >= v30)
            || (Vertex3 = v41[(unsigned int)(v25 - 1)].Vertex3, (unsigned int)Vertex3 >= v30) )
          {
LABEL_33:
            Win32FreePool(v29);
            goto LABEL_38;
          }
          v44 = &v29[Vertex3];
          v45 = &v29[Vertex2];
          v46 = &v29[Vertex1];
          if ( !bIsTriangleInBounds(v46, v45, v44, (struct _TRIANGLEDATA *)v16) )
            goto LABEL_27;
          if ( !(unsigned int)bSplitTriangle(v29, (unsigned int *)&a8, v41, &v38, v43) )
            break;
          LODWORD(v13) = (_DWORD)a8;
          if ( (unsigned int)a8 > v30 )
            goto LABEL_33;
          LODWORD(v25) = v38;
          if ( v38 > v39 )
            goto LABEL_33;
LABEL_32:
          if ( !(_DWORD)v25 )
            goto LABEL_33;
        }
        v35 = bCalculateAndDrawTriangle(v31, v46, v45, v44, (struct _TRIANGLEDATA *)v16, v42);
        LODWORD(v13) = (_DWORD)a8;
        v14 = v35;
        LODWORD(v25) = v38;
        do
        {
LABEL_27:
          v25 = (unsigned int)(v25 - 1);
          v36 = v43[v25];
          if ( v36 )
          {
            LODWORD(v13) = v13 - 1;
            LODWORD(a8) = v13;
          }
        }
        while ( (_DWORD)v25 && v36 == 1 );
        v29 = v47;
        v31 = a1;
        v38 = v25;
        goto LABEL_32;
      }
    }
  }
  v14 = 0;
LABEL_38:
  Win32FreePool(v16);
  return v14;
}
