void __fastcall DxgkpGetBilinearLineFromSource(
        unsigned __int8 *a1,
        int a2,
        int a3,
        struct _PIXEL *a4,
        struct _UFIXPOINT_PIXEL *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  unsigned __int8 *v11; // r10
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  int v15; // r8d
  struct _UFIXPOINT_PIXEL *v16; // rdi
  unsigned __int8 *v17; // rsi
  unsigned __int8 *v18; // r14
  int v19; // r15d
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  bool v26; // cc
  int v27; // r8d
  unsigned __int8 *v28; // rdx
  int v29; // ebp
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  int v34; // esi
  int v35; // r14d
  int v36; // ebp
  int v37; // r15d
  int v38; // ecx
  int v39; // ecx
  int v40; // edx
  struct _UFIXPOINT_PIXEL *v41; // rbx
  int v42; // ecx
  int v43; // edx
  int v44; // edx
  int v45; // eax
  __int64 v46; // [rsp+40h] [rbp+8h]
  int v47; // [rsp+68h] [rbp+30h]

  v8 = a7;
  v11 = &a1[a7 * a2];
  if ( a6 == a3 )
  {
    if ( a7 < a8 )
    {
      v12 = (_DWORD *)((char *)a5 + 8);
      v13 = (unsigned int)(a8 - a7);
      do
      {
        if ( a4 )
        {
          *(_DWORD *)a4 = *(_DWORD *)v11;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          v12[1] = v11[3] << 16;
          *v12 = v11[2] << 16;
          *(v12 - 1) = v11[1] << 16;
          *(v12 - 2) = *v11 << 16;
          v12 += 4;
        }
        v11 += a2;
        --v13;
      }
      while ( v13 );
    }
    return;
  }
  v14 = a2;
  v15 = a7 * a6 % a3;
  if ( a6 > a3 )
  {
    v16 = a5;
    if ( a7 < a8 )
    {
      v17 = &v11[-a2 + 2];
      do
      {
        v18 = v17;
        if ( v15 && v15 < a3 )
        {
          v19 = (unsigned __int16)((v15 << 16) / (unsigned int)a3);
          v20 = 0x10000 - v19;
          v21 = v19 * v17[1];
          v22 = (0x10000 - v19) * v17[v14 + 1];
          if ( !a4 )
          {
            *((_DWORD *)v16 + 3) = v21 + v22;
            v24 = *v17;
            v17 += v14;
            *((_DWORD *)v16 + 2) = v20 * *v17 + v19 * v24;
            *((_DWORD *)v16 + 1) = v19 * *(v18 - 1) + v20 * v18[v14 - 1];
            *(_DWORD *)v16 = v20 * *v11 + v19 * *(v18 - 2);
LABEL_20:
            v16 = (struct _UFIXPOINT_PIXEL *)((char *)v16 + 16);
            goto LABEL_21;
          }
          *((_BYTE *)a4 + 3) = (unsigned int)(v21 + 0x8000 + v22) >> 16;
          v23 = *v17;
          v17 += v14;
          *((_BYTE *)a4 + 2) = (v20 * (unsigned int)*v17 + 0x8000 + v19 * v23) >> 16;
          *((_BYTE *)a4 + 1) = (v19 * *(v18 - 1) + 0x8000 + v20 * (unsigned int)v18[v14 - 1]) >> 16;
          *(_BYTE *)a4 = (v20 * *v11 + v19 * (unsigned int)*(v18 - 2) + 0x8000) >> 16;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          if ( !a4 )
          {
            *((_DWORD *)v16 + 3) = v17[v14 + 1] << 16;
            *((_DWORD *)v16 + 2) = v17[v14] << 16;
            v25 = v17[v14 - 1];
            v17 += v14;
            *((_DWORD *)v16 + 1) = v25 << 16;
            *(_DWORD *)v16 = *v11 << 16;
            goto LABEL_20;
          }
          *(_DWORD *)a4 = *(_DWORD *)v11;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
          v17 += v14;
        }
LABEL_21:
        v26 = v15 < a3;
        v15 -= a3;
        if ( v26 )
          v15 += a6;
        v26 = v15 < a3;
        if ( v15 < a3 )
        {
          v11 += v14;
          ++v8;
          v26 = v15 < a3;
        }
        if ( !v26 )
          v17 = v18;
      }
      while ( v8 < a8 );
    }
    if ( !v15 )
      return;
    v27 = (unsigned __int16)((v15 << 16) / a3);
    v28 = &v11[-v14];
    v29 = 0x10000 - v27;
    v30 = (0x10000 - v27) * v11[3] + v27 * v11[-v14 + 3];
    if ( !a4 )
    {
      *((_DWORD *)v16 + 3) = v30;
      *((_DWORD *)v16 + 2) = v29 * v11[2] + v27 * v28[2];
      *((_DWORD *)v16 + 1) = v29 * v11[1] + v27 * v28[1];
      *(_DWORD *)v16 = v27 * *v28 + v29 * *v11;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v30 + 0x8000) >> 16;
    *((_BYTE *)a4 + 2) = (v29 * v11[2] + 0x8000 + v27 * (unsigned int)v28[2]) >> 16;
    *((_BYTE *)a4 + 1) = (v29 * v11[1] + 0x8000 + v27 * (unsigned int)v28[1]) >> 16;
    v31 = v27 * *v28;
    v32 = v29 * *v11 + 0x8000;
LABEL_48:
    *(_BYTE *)a4 = (unsigned int)(v31 + v32) >> 16;
    return;
  }
  v33 = 0;
  v47 = a6 << 16;
  v34 = 0;
  v35 = v15 << 16;
  v36 = 0;
  v37 = 0;
  v38 = (unsigned __int16)((a6 << 16) / a3);
  if ( v15 > 0 )
  {
    v39 = (unsigned __int16)(v35 / a3);
    v37 = v39 * v11[-a2 + 3];
    v36 = v39 * v11[-a2 + 2];
    v34 = v39 * v11[-a2 + 1];
    v33 = v39 * v11[-a2];
    v38 = (unsigned __int16)((a6 << 16) / a3);
  }
  if ( a7 >= a8 )
  {
    v41 = a5;
  }
  else
  {
    v40 = a3 << 16;
    v41 = a5;
    v46 = (unsigned int)(a8 - a7);
    do
    {
      v35 += v47;
      v15 += a6;
      if ( v15 >= a3 )
      {
        v35 -= v40;
        v15 -= a3;
        v42 = (unsigned __int16)(v35 / a3);
        v43 = (unsigned __int16)((a6 << 16) / a3) - v42;
        if ( a4 )
        {
          *((_BYTE *)a4 + 3) = (v37 + v43 * (unsigned int)v11[3] + 0x8000) >> 16;
          *((_BYTE *)a4 + 2) = (v36 + v43 * (unsigned int)v11[2] + 0x8000) >> 16;
          *((_BYTE *)a4 + 1) = (v34 + v43 * (unsigned int)v11[1] + 0x8000) >> 16;
          *(_BYTE *)a4 = (v43 * (unsigned int)*v11 + v33 + 0x8000) >> 16;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
          v42 = (unsigned __int16)(v35 / a3);
        }
        else
        {
          *((_DWORD *)v41 + 3) = v37 + v43 * v11[3];
          *((_DWORD *)v41 + 2) = v36 + v43 * v11[2];
          *((_DWORD *)v41 + 1) = v34 + v43 * v11[1];
          *(_DWORD *)v41 = v33 + v43 * *v11;
          v41 = (struct _UFIXPOINT_PIXEL *)((char *)v41 + 16);
        }
        v40 = a3 << 16;
        v37 = v42 * v11[3];
        v36 = v42 * v11[2];
        v34 = v42 * v11[1];
        v33 = v42 * *v11;
        v38 = (unsigned __int16)((a6 << 16) / a3);
      }
      else
      {
        v37 += v38 * v11[3];
        v36 += v38 * v11[2];
        v34 += v38 * v11[1];
        v33 += v38 * *v11;
      }
      v11 += v14;
      --v46;
    }
    while ( v46 );
  }
  if ( v15 )
  {
    v44 = (unsigned __int16)(((a3 - v15) << 16) / a3);
    v45 = v37 + v44 * v11[3];
    if ( !a4 )
    {
      *((_DWORD *)v41 + 3) = v45;
      *((_DWORD *)v41 + 2) = v36 + v44 * v11[2];
      *((_DWORD *)v41 + 1) = v34 + v44 * v11[1];
      *(_DWORD *)v41 = v33 + v44 * *v11;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v45 + 0x8000) >> 16;
    *((_BYTE *)a4 + 2) = (v36 + v44 * (unsigned int)v11[2] + 0x8000) >> 16;
    *((_BYTE *)a4 + 1) = (v34 + v44 * (unsigned int)v11[1] + 0x8000) >> 16;
    v32 = v33 + 0x8000;
    v31 = v44 * *v11;
    goto LABEL_48;
  }
}
