__int64 __fastcall bSplitTriangle(
        struct _TRIVERTEX *a1,
        unsigned int *a2,
        struct _GRADIENT_TRIANGLE *a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 Vertex1; // rax
  ULONG Vertex2; // edx
  ULONG Vertex3; // ecx
  __int64 v12; // rsi
  struct _TRIVERTEX *v13; // r8
  __int64 v14; // rax
  LONG x; // edx
  LONG y; // r8d
  struct _TRIVERTEX *v17; // r9
  LONG v18; // r11d
  struct _TRIVERTEX *v19; // r14
  LONG v20; // r10d
  LONG v21; // r9d
  int v22; // eax
  int v23; // eax
  LONG v24; // ecx
  __int64 v25; // rdi
  int v26; // eax
  LONG v27; // edx
  int v28; // ecx
  __int64 v29; // r13
  int v30; // eax
  __int64 v31; // r14
  int v32; // eax
  int v33; // r9d
  int v34; // eax
  int v35; // edx
  __int64 v36; // rbx
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rdi
  __int64 v40; // r14
  __int64 v41; // rbx
  int v42; // r13d
  ULONG v43; // r14d
  __int64 v44; // rsi
  ULONG v45; // edi
  unsigned __int64 v46; // rbx
  unsigned int v47; // r8d
  float v48; // xmm1_4
  int v49; // eax
  int v50; // eax
  float v51; // xmm1_4
  unsigned int v52; // r8d
  unsigned int *v53; // r10
  ULONG v54; // r9d
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int8 *v58; // rax
  ULONG v60; // [rsp+28h] [rbp-51h]
  struct _TRIVERTEX v61; // [rsp+30h] [rbp-49h] BYREF
  __int64 v62; // [rsp+40h] [rbp-39h]
  __int64 v63; // [rsp+48h] [rbp-31h]
  unsigned __int64 v64; // [rsp+50h] [rbp-29h]
  struct _TRIVERTEX *v65; // [rsp+58h] [rbp-21h]
  struct _TRIVERTEX *v66; // [rsp+60h] [rbp-19h]
  struct _TRIVERTEX *v67; // [rsp+68h] [rbp-11h]
  __int64 v68; // [rsp+70h] [rbp-9h]
  __int64 v69; // [rsp+78h] [rbp-1h]
  __int64 v70; // [rsp+80h] [rbp+7h]
  int v73; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int *v74; // [rsp+F0h] [rbp+77h]

  v74 = a4;
  v6 = *a4 - 1;
  *(_QWORD *)&v61.x = 0LL;
  v8 = v6;
  Vertex1 = a3[v6].Vertex1;
  Vertex2 = a3[v8].Vertex2;
  Vertex3 = a3[v8].Vertex3;
  v73 = Vertex1;
  v12 = Vertex3;
  v69 = Vertex1;
  v70 = 16 * Vertex1;
  v60 = Vertex2;
  v13 = &a1[Vertex1];
  v14 = Vertex2;
  x = v13->x;
  v63 = 16 * v14;
  v67 = v13;
  y = v13->y;
  v17 = &a1[v14];
  v18 = v17->x;
  v64 = 16LL * Vertex3;
  v66 = v17;
  v19 = &a1[v64 / 0x10];
  v20 = v17->y;
  v21 = v19->x;
  v22 = v18 - x;
  v65 = v19;
  if ( x - v18 >= 0 )
    v22 = x - v18;
  v62 = v22;
  v23 = v20 - y;
  if ( y - v20 >= 0 )
    v23 = y - v20;
  v24 = x;
  v25 = v23;
  v26 = v21 - x;
  v27 = v19->y;
  v28 = v24 - v21;
  if ( v28 >= 0 )
    v26 = v28;
  v29 = v26;
  v30 = v27 - y;
  if ( y - v27 >= 0 )
    v30 = y - v27;
  v31 = v30;
  v32 = v18 - v21;
  v33 = v21 - v18;
  if ( v32 >= 0 )
    v33 = v32;
  v34 = v20 - v27;
  v35 = v27 - v20;
  v68 = v33;
  if ( v34 >= 0 )
    v35 = v34;
  v36 = v35;
  if ( v62 <= 0x4000 && v25 <= 0x4000 && v29 <= 0x4000 && v31 <= 0x4000 && v33 <= 0x4000LL && v35 <= 0x4000LL )
    return 0;
  v37 = lCalculateTriangleArea(v67, v66, v65, 0LL);
  v38 = 0;
  if ( v37 )
  {
    v39 = v62 * v62 + v25 * v25;
    v40 = v29 * v29 + v31 * v31;
    v41 = v68 * v68 + v36 * v36;
    if ( v39 <= v40 )
    {
      if ( v40 > v41 )
      {
        v43 = a3[v8].Vertex2;
        v45 = a3[v8].Vertex3;
        v46 = v64;
        v44 = v70;
        v42 = v73;
LABEL_31:
        v73 = 0;
        bFToL(
          (float)((float)((float)*(int *)((char *)&a1->x + v46) - (float)*(int *)((char *)&a1->x + v44)) * 0.5)
        + (float)*(int *)((char *)&a1->x + v44),
          &v61.x,
          6u);
        bFToL(
          (float)((float)((float)*(int *)((char *)&a1->y + v46) - (float)*(int *)((char *)&a1->y + v44)) * 0.5)
        + (float)*(int *)((char *)&a1->y + v44),
          &v61.y,
          v47);
        v48 = (float)*(unsigned __int16 *)((char *)&a1->Red + v44);
        bFToL((float)((float)((float)*(unsigned __int16 *)((char *)&a1->Red + v46) - v48) * 0.5) + v48, &v73, 6u);
        v49 = *(unsigned __int16 *)((char *)&a1->Green + v44);
        v61.Red = v73;
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&a1->Green + v46) - (float)v49) * 0.5) + (float)v49,
          &v73,
          6u);
        v50 = *(unsigned __int16 *)((char *)&a1->Blue + v44);
        v61.Green = v73;
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&a1->Blue + v46) - (float)v50) * 0.5) + (float)v50,
          &v73,
          6u);
        v61.Blue = v73;
        v51 = (float)*(unsigned __int16 *)((char *)&a1->Alpha + v44);
        bFToL((float)((float)((float)*(unsigned __int16 *)((char *)&a1->Alpha + v46) - v51) * 0.5) + v51, &v73, v52);
        v53 = v74;
        v61.Alpha = v73;
        v54 = *a2;
        v55 = *v74;
        a1[*a2] = v61;
        v56 = v55;
        a3[v56].Vertex1 = v42;
        a3[v56].Vertex2 = v43;
        a3[v56].Vertex3 = v54;
        v57 = (unsigned int)(v55 + 1);
        a3[v57].Vertex1 = v45;
        a3[v57].Vertex2 = v43;
        a3[v57].Vertex3 = v54;
        v58 = a5;
        a5[(unsigned int)(v55 + 1)] = 0;
        v38 = 1;
        v58[v55] = 1;
        *v53 = v55 + 2;
        *a2 = v54 + 1;
        return v38;
      }
      v43 = a3[v8].Vertex1;
      v42 = a3[v8].Vertex3;
      v44 = v64;
    }
    else
    {
      if ( v39 > v41 )
      {
        v42 = v73;
        v43 = v12;
      }
      else
      {
        v42 = a3[v8].Vertex3;
        v43 = a3[v8].Vertex1;
      }
      if ( v39 > v41 )
        v12 = v69;
      v44 = 16 * v12;
    }
    v45 = v60;
    v46 = v63;
    goto LABEL_31;
  }
  return v38;
}
