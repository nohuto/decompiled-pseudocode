/*
 * XREFs of ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C022ED34
 * Callers:
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C015D858 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 * Callees:
 *     <none>
 */

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
  int v8; // esi
  unsigned __int8 *v11; // r10
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  int v15; // r8d
  struct _UFIXPOINT_PIXEL *v16; // rbx
  unsigned __int8 *v17; // r11
  int v18; // r12d
  unsigned __int8 *v19; // r15
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  bool v26; // cc
  unsigned __int8 *v27; // rax
  int v28; // r8d
  unsigned __int8 *v29; // rdx
  int v30; // ebp
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // r11d
  int v35; // ebx
  int v36; // ebp
  int v37; // r15d
  int v38; // ecx
  int v39; // ecx
  int v40; // edx
  int v41; // r12d
  struct _UFIXPOINT_PIXEL *v42; // rsi
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  unsigned __int8 *v48; // [rsp+0h] [rbp-48h]
  __int64 v49; // [rsp+0h] [rbp-48h]
  int v50; // [rsp+58h] [rbp+10h]
  int v51; // [rsp+78h] [rbp+30h]

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
        v48 = v17;
        v18 = v8;
        if ( v15 && v15 < a3 )
        {
          v19 = &v17[v14];
          v20 = (unsigned __int16)((v15 << 16) / (unsigned int)a3);
          v21 = 0x10000 - v20;
          v22 = v20 * v17[1] + (0x10000 - v20) * v17[v14 + 1];
          if ( !a4 )
          {
            *((_DWORD *)v16 + 3) = v22;
            *((_DWORD *)v16 + 2) = v20 * *v17 + v21 * *v19;
            *((_DWORD *)v16 + 1) = v21 * v17[v14 - 1] + v20 * *(v17 - 1);
            v24 = *(v17 - 2);
            v17 += v14;
            *(_DWORD *)v16 = v21 * *v11 + v20 * v24;
LABEL_20:
            v16 = (struct _UFIXPOINT_PIXEL *)((char *)v16 + 16);
            goto LABEL_21;
          }
          *((_BYTE *)a4 + 3) = (unsigned int)(v22 + 0x8000) >> 16;
          *((_BYTE *)a4 + 2) = (v20 * *v17 + 0x8000 + v21 * (unsigned int)*v19) >> 16;
          *((_BYTE *)a4 + 1) = (v21 * v17[v14 - 1] + 0x8000 + v20 * (unsigned int)*(v17 - 1)) >> 16;
          v23 = *(v17 - 2);
          v17 += v14;
          *(_BYTE *)a4 = (v21 * (unsigned int)*v11 + v20 * v23 + 0x8000) >> 16;
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
          v17 += v14;
          *(_DWORD *)a4 = *(_DWORD *)v11;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
LABEL_21:
        v8 = v18 + 1;
        v26 = v15 < a3;
        v15 -= a3;
        if ( v26 )
          v15 += a6;
        v27 = v11;
        if ( v15 >= a3 )
        {
          v17 = v48;
          v8 = v18;
        }
        v11 += v14;
        if ( v15 >= a3 )
          v11 = v27;
      }
      while ( v8 < a8 );
    }
    if ( !v15 )
      return;
    v28 = (unsigned __int16)((v15 << 16) / a3);
    v29 = &v11[-v14];
    v30 = 0x10000 - v28;
    v31 = (0x10000 - v28) * v11[3] + v28 * v11[-v14 + 3];
    if ( !a4 )
    {
      *((_DWORD *)v16 + 3) = v31;
      *((_DWORD *)v16 + 2) = v28 * v29[2] + v30 * v11[2];
      *((_DWORD *)v16 + 1) = v30 * v11[1] + v28 * v29[1];
      *(_DWORD *)v16 = v28 * *v29 + v30 * *v11;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v31 + 0x8000) >> 16;
    *((_BYTE *)a4 + 2) = (v28 * v29[2] + 0x8000 + v30 * (unsigned int)v11[2]) >> 16;
    *((_BYTE *)a4 + 1) = (v30 * v11[1] + 0x8000 + v28 * (unsigned int)v29[1]) >> 16;
    v32 = v28 * *v29;
    v33 = v30 * *v11 + 0x8000;
LABEL_48:
    *(_BYTE *)a4 = (unsigned int)(v32 + v33) >> 16;
    return;
  }
  v34 = 0;
  v35 = 0;
  v50 = a6 << 16;
  v36 = 0;
  v37 = 0;
  v38 = (unsigned __int16)((a6 << 16) / a3);
  v51 = v38;
  if ( v15 > 0 )
  {
    v39 = (unsigned __int16)((v15 << 16) / a3);
    v37 = v39 * v11[-a2 + 3];
    v36 = v39 * v11[-a2 + 2];
    v35 = v39 * v11[-a2 + 1];
    v34 = v39 * v11[-a2];
    v38 = v51;
  }
  if ( a7 >= a8 )
  {
    v42 = a5;
  }
  else
  {
    v40 = a3 << 16;
    v41 = v15 << 16;
    v42 = a5;
    v49 = (unsigned int)(a8 - a7);
    do
    {
      v41 += v50;
      v15 += a6;
      if ( v15 >= a3 )
      {
        v41 -= v40;
        v15 -= a3;
        v43 = (unsigned __int16)(v41 / a3);
        v44 = v51 - v43;
        v45 = v37 + (v51 - v43) * v11[3];
        if ( a4 )
        {
          *((_BYTE *)a4 + 3) = (unsigned int)(v45 + 0x8000) >> 16;
          *((_BYTE *)a4 + 2) = (v36 + v44 * (unsigned int)v11[2] + 0x8000) >> 16;
          *((_BYTE *)a4 + 1) = (v35 + v44 * (unsigned int)v11[1] + 0x8000) >> 16;
          *(_BYTE *)a4 = (v44 * (unsigned int)*v11 + v34 + 0x8000) >> 16;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
          v43 = (unsigned __int16)(v41 / a3);
        }
        else
        {
          *((_DWORD *)v42 + 3) = v45;
          *((_DWORD *)v42 + 2) = v36 + v44 * v11[2];
          *((_DWORD *)v42 + 1) = v35 + v44 * v11[1];
          *(_DWORD *)v42 = v34 + v44 * *v11;
          v42 = (struct _UFIXPOINT_PIXEL *)((char *)v42 + 16);
        }
        v40 = a3 << 16;
        v37 = v43 * v11[3];
        v36 = v43 * v11[2];
        v35 = v43 * v11[1];
        v34 = v43 * *v11;
        v38 = v51;
      }
      else
      {
        v37 += v38 * v11[3];
        v36 += v38 * v11[2];
        v35 += v38 * v11[1];
        v34 += v38 * *v11;
      }
      v11 += v14;
      --v49;
    }
    while ( v49 );
  }
  if ( v15 )
  {
    v46 = (unsigned __int16)(((a3 - v15) << 16) / a3);
    v47 = v37 + v46 * v11[3];
    if ( !a4 )
    {
      *((_DWORD *)v42 + 3) = v47;
      *((_DWORD *)v42 + 2) = v36 + v46 * v11[2];
      *((_DWORD *)v42 + 1) = v35 + v46 * v11[1];
      *(_DWORD *)v42 = v34 + v46 * *v11;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v47 + 0x8000) >> 16;
    *((_BYTE *)a4 + 2) = (v36 + v46 * (unsigned int)v11[2] + 0x8000) >> 16;
    *((_BYTE *)a4 + 1) = (v35 + v46 * (unsigned int)v11[1] + 0x8000) >> 16;
    v33 = v34 + 0x8000;
    v32 = v46 * *v11;
    goto LABEL_48;
  }
}
