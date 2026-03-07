__int64 __fastcall ColorSpaceTransformCombine(const void **a1, int *a2, __int64 a3)
{
  const void *v3; // r10
  int v8; // eax
  bool v9; // zf
  char *v10; // rbp
  _DWORD *v11; // rax
  int v12; // eax
  _DWORD *v13; // rax
  int v14; // r9d
  unsigned int v15; // edi
  __int64 v16; // r14
  char *v17; // rbp
  int v18; // r13d
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int128 v25; // rax
  unsigned __int64 v26; // r8
  unsigned int v27; // eax
  float v28; // xmm4_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float *v31; // rdx
  __int64 v32; // rcx
  float v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  __int64 v39; // [rsp+80h] [rbp+18h]

  v3 = 0LL;
  if ( !a3 )
    return 3221225485LL;
  v8 = *a2;
  if ( *a2 == 1 )
  {
    if ( *((_QWORD *)a2 + 1) || *((_QWORD *)a2 + 2) )
      return 3223192391LL;
  }
  else
  {
    if ( v8 == 2 )
    {
      v9 = *((_QWORD *)a2 + 1) == 1536LL;
    }
    else
    {
      if ( v8 != 3 )
        return 3223192391LL;
      v9 = *((_QWORD *)a2 + 1) == 12324LL;
    }
    if ( !v9 || !*((_QWORD *)a2 + 2) )
      return 3223192391LL;
  }
  if ( *(_DWORD *)a3 == 4 )
  {
    v10 = (char *)(*(_QWORD *)(a3 + 16) + 52LL);
  }
  else
  {
    if ( *(_DWORD *)a3 != 5 )
      return 3223192391LL;
    v11 = *(_DWORD **)(a3 + 16);
    v10 = (char *)(v11 + 1);
    *v11 = 1;
  }
  if ( a1 )
  {
    v12 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == *(_DWORD *)a3 )
    {
      if ( v12 == 4 )
      {
        memmove(*(void **)(a3 + 16), a1[2], 0x30uLL);
        *(_DWORD *)(*(_QWORD *)(a3 + 16) + 48LL) = *((_DWORD *)a1[2] + 12);
        v3 = (char *)a1[2] + 52;
      }
      else if ( v12 == 5 )
      {
        v13 = a1[2];
        if ( *v13 == 1 )
          v3 = v13 + 1;
      }
      goto LABEL_24;
    }
    return 3223192391LL;
  }
LABEL_24:
  if ( *a2 == 1 )
  {
    if ( v3 )
      memmove(v10, v3, 0xC000uLL);
  }
  else
  {
    v14 = 0;
    v15 = 0;
    v16 = 4096LL;
    v17 = v10 + 4;
    v39 = 4096LL;
    do
    {
      v18 = 4095 - v14;
      if ( *a2 == 2 )
      {
        v19 = *((_QWORD *)a2 + 2);
        v20 = v15 + 1;
        if ( v14 )
        {
          v21 = ((v18 * *(unsigned __int16 *)(v19 + 2LL * v15) + v14
                                                               * (unsigned int)*(unsigned __int16 *)(v19 + 2 * v20))
               * (unsigned __int128)0x10010010010011uLL) >> 64;
          v22 = (v21
               + (((unsigned __int64)(v18 * *(unsigned __int16 *)(v19 + 2LL * v15)
                                    + v14 * (unsigned int)*(unsigned __int16 *)(v19 + 2 * v20))
                 - v21) >> 1)) >> 15;
          v23 = ((v18 * *(unsigned __int16 *)(v19 + 2LL * v15 + 512)
                + v14 * (unsigned int)*(unsigned __int16 *)(v19 + 2 * v20 + 512))
               * (unsigned __int128)0x10010010010011uLL) >> 64;
          v24 = (v23
               + (((unsigned __int64)(v18 * *(unsigned __int16 *)(v19 + 2LL * v15 + 512)
                                    + v14 * (unsigned int)*(unsigned __int16 *)(v19 + 2 * v20 + 512))
                 - v23) >> 1)) >> 15;
          v25 = (v18 * *(unsigned __int16 *)(v19 + 2LL * v15 + 1024)
               + v14 * (unsigned int)*(unsigned __int16 *)(v19 + 2 * v20 + 1024))
              * (unsigned __int128)0x10010010010011uLL;
          v26 = (*((_QWORD *)&v25 + 1)
               + (((unsigned __int64)(v18 * *(unsigned __int16 *)(v19 + 2LL * v15 + 1024)
                                    + v14 * (unsigned int)*(unsigned __int16 *)(v19 + 2 * v20 + 1024))
                 - *((_QWORD *)&v25 + 1)) >> 1)) >> 15;
        }
        else
        {
          LODWORD(v22) = *(unsigned __int16 *)(v19 + 2LL * v15) >> 4;
          LODWORD(v24) = *(unsigned __int16 *)(v19 + 2LL * v15 + 512) >> 4;
          LODWORD(v26) = *(unsigned __int16 *)(v19 + 2LL * v15 + 1024) >> 4;
        }
        v16 = v39;
        v27 = v14 + 255;
        v14 -= 3840;
        if ( v27 < 0xFFF )
        {
          LODWORD(v20) = v15;
          v14 = v27;
        }
        v15 = v20;
        v28 = (float)(int)v22 / 4095.0;
        v29 = (float)(int)v26 / 4095.0;
        v30 = (float)(int)v24 / 4095.0;
      }
      else
      {
        v31 = (float *)*((_QWORD *)a2 + 2);
        if ( v14 )
        {
          v32 = v15 + 1;
          v33 = (float)((float)((float)v14 * v31[3 * v32 + 6]) + (float)((float)v18 * v31[3 * v15 + 6])) / 4095.0;
          v34 = (float)((float)((float)v18 * v31[3 * v15 + 8]) + (float)((float)v14 * v31[3 * v32 + 8])) / 4095.0;
          v35 = (float)((float)((float)v18 * v31[3 * v15 + 7]) + (float)((float)v14 * v31[3 * v32 + 7])) / 4095.0;
        }
        else
        {
          v33 = v31[3 * v15 + 6];
          v35 = v31[3 * v15 + 7];
          v34 = v31[3 * v15 + 8];
        }
        v28 = (float)(v33 * *v31) + v31[3];
        v30 = (float)(v35 * v31[1]) + v31[4];
        v29 = (float)(v34 * v31[2]) + v31[5];
        if ( v28 >= 0.0 )
          v36 = fminf(1.0, v28);
        else
          v36 = 0.0;
        LODWORD(v22) = (int)(float)(v36 * 4095.0);
        if ( v30 >= 0.0 )
          v37 = fminf(1.0, v30);
        else
          v37 = 0.0;
        LODWORD(v24) = (int)(float)(v37 * 4095.0);
        if ( v29 >= 0.0 )
          v38 = fminf(1.0, v29);
        else
          v38 = 0.0;
        v14 += 1024;
        LODWORD(v26) = (int)(float)(v38 * 4095.0);
        if ( (unsigned int)v14 >= 0xFFF )
        {
          v14 -= 4095;
          ++v15;
        }
      }
      if ( v3 )
      {
        *((_DWORD *)v17 - 1) = *((_DWORD *)v3 + 3 * (unsigned int)v22);
        *(_DWORD *)v17 = *((_DWORD *)v3 + 3 * (unsigned int)v24 + 1);
        v29 = *((float *)v3 + 3 * (unsigned int)v26 + 2);
      }
      else
      {
        *((float *)v17 - 1) = v28;
        *(float *)v17 = v30;
      }
      *((float *)v17 + 1) = v29;
      v17 += 12;
      v39 = --v16;
    }
    while ( v16 );
  }
  return 0LL;
}
