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
  unsigned int v15; // r9d
  __int64 v16; // rdi
  __int64 v17; // r9
  struct _RECTL *v18; // rdx
  struct _RECTL v19; // xmm0
  struct _POINTL *v20; // rax
  __int64 v21; // r15
  ULONG *p_Vertex3; // rbx
  struct _TRIVERTEX *v23; // rsi
  struct _TRIVERTEX *v24; // r14
  struct _TRIVERTEX *v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  struct _TRIVERTEX *v29; // rax
  struct _TRIVERTEX *v30; // r13
  unsigned int v31; // r15d
  unsigned int v32; // ebx
  ULONG Vertex1; // r9d
  ULONG Vertex2; // r8d
  __int64 Vertex3; // rdx
  unsigned int v36; // eax
  unsigned __int8 v37; // cl
  unsigned int v39; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-4Ch]
  __int64 v41; // [rsp+38h] [rbp-48h] BYREF
  struct _GRADIENT_TRIANGLE *v42; // [rsp+40h] [rbp-40h]
  void (*v43)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v44; // [rsp+50h] [rbp-30h]
  struct _TRIVERTEX *v45; // [rsp+58h] [rbp-28h]
  struct _TRIVERTEX *v46; // [rsp+60h] [rbp-20h]
  struct _TRIVERTEX *v47; // [rsp+68h] [rbp-18h]
  struct _TRIVERTEX *v48; // [rsp+70h] [rbp-10h]

  v10 = a8;
  v43 = 0LL;
  v13 = a4;
  v14 = 1;
  if ( a8->bottom - a8->top <= 0 )
    return 0;
  v15 = a8->bottom - a8->top - 1;
  if ( v15 > 0x6666661 )
    return 0;
  if ( 40 * v15 == -208 )
    return 0;
  v16 = Win32AllocPoolZInit(40 * v15 + 208, 1734624615LL);
  if ( !v16 )
    return 0;
  v41 = *((_QWORD *)a1 + 16);
  if ( v41 || (v41 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1776LL)) != 0 )
  {
    bDetermineTriangleFillRoutine(
      a1,
      (struct XEPALOBJ *)&v41,
      &v43,
      (void (**)(struct SURFACE *, struct _GRADIENTRECTDATA *))&a8);
    v18 = a9;
    v19 = *v10;
    *(_DWORD *)(v16 + 144) = a7;
    *(_QWORD *)(v16 + 160) = &v41;
    v20 = a10;
    *(struct _RECTL *)v16 = v19;
    *(_QWORD *)(v16 + 152) = a2;
    *(struct _POINTL *)(v16 + 128) = *v20;
    if ( v18->right - v18->left < 0x4000 && v18->bottom - v18->top < 0x4000 )
    {
      if ( (_DWORD)Size )
      {
        v21 = (unsigned int)Size;
        p_Vertex3 = &a5->Vertex3;
        do
        {
          v23 = &a3[*(p_Vertex3 - 2)];
          v24 = &a3[*(p_Vertex3 - 1)];
          if ( bIsTriangleInBounds(v23, v24, &a3[*p_Vertex3], (struct _TRIANGLEDATA *)v16) )
            v14 = bCalculateAndDrawTriangle(a1, v23, v24, v25, (struct _TRIANGLEDATA *)v16, v43);
          p_Vertex3 += 3;
          --v21;
        }
        while ( v21 );
      }
      goto LABEL_39;
    }
    if ( (unsigned int)v13 >= 0xFFFFFFE3
      || (LODWORD(v26) = Size, v40 = Size + 58, (unsigned int)Size >= 0xFFFFFFC6)
      || (a8 = (struct _RECTL *)(unsigned int)(Size + 58),
          v27 = (unsigned int)(v13 + 29),
          v28 = v27 * 16 + 13LL * (_QWORD)a8,
          v28 > 0xFFFFFFFF) )
    {
      Win32FreePool((void *)v16);
      return 0LL;
    }
    if ( (_DWORD)v28 )
    {
      v29 = (struct _TRIVERTEX *)Win32AllocPool((unsigned int)v28, 1953920071LL, 0x4000LL, v17);
      v48 = v29;
      v30 = v29;
      if ( v29 )
      {
        v40 -= 2;
        v42 = (struct _GRADIENT_TRIANGLE *)&v29[v27];
        v31 = v13 + 28;
        v44 = (unsigned __int8 *)&v29[v27] + 12 * (_QWORD)a8;
        memmove(v29, a3, 16 * v13);
        memmove(v42, a5, 12LL * (unsigned int)Size);
        memset_0(v44, 0, (unsigned int)Size);
        v32 = v40;
        LODWORD(a8) = v13;
        v39 = Size;
        while ( 1 )
        {
          Vertex1 = v42[(unsigned int)(v26 - 1)].Vertex1;
          if ( Vertex1 >= v31
            || (Vertex2 = v42[(unsigned int)(v26 - 1)].Vertex2, Vertex2 >= v31)
            || (Vertex3 = v42[(unsigned int)(v26 - 1)].Vertex3, (unsigned int)Vertex3 >= v31) )
          {
LABEL_33:
            Win32FreePool(v30);
            goto LABEL_39;
          }
          v45 = &v30[Vertex3];
          v46 = &v30[Vertex2];
          v47 = &v30[Vertex1];
          if ( !bIsTriangleInBounds(v47, v46, v45, (struct _TRIANGLEDATA *)v16) )
            goto LABEL_27;
          if ( !(unsigned int)bSplitTriangle(v30, (unsigned int *)&a8, v42, &v39, v44) )
            break;
          LODWORD(v13) = (_DWORD)a8;
          if ( (unsigned int)a8 > v31 )
            goto LABEL_33;
          LODWORD(v26) = v39;
          if ( v39 > v32 )
            goto LABEL_33;
LABEL_32:
          if ( !(_DWORD)v26 )
            goto LABEL_33;
        }
        v36 = bCalculateAndDrawTriangle(a1, v47, v46, v45, (struct _TRIANGLEDATA *)v16, v43);
        LODWORD(v13) = (_DWORD)a8;
        v14 = v36;
        LODWORD(v26) = v39;
        do
        {
LABEL_27:
          v26 = (unsigned int)(v26 - 1);
          v37 = v44[v26];
          if ( v37 )
          {
            LODWORD(v13) = v13 - 1;
            LODWORD(a8) = v13;
          }
        }
        while ( (_DWORD)v26 && v37 == 1 );
        v30 = v48;
        v32 = v40;
        v39 = v26;
        goto LABEL_32;
      }
    }
  }
  v14 = 0;
LABEL_39:
  Win32FreePool((void *)v16);
  return v14;
}
