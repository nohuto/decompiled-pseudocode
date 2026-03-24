/*
 * XREFs of ColorSpaceTransformCombine @ 0x1C0061FC4
 * Callers:
 *     ?ConvertToMatrix_3x4@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0061CC4 (-ConvertToMatrix_3x4@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z.c)
 *     ?ConvertToMatrix_V2@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0061DE4 (-ConvertToMatrix_V2@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00EB514 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C0140054 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 * Callees:
 *     memmove @ 0x1C0028D00 (memmove.c)
 */

__int64 __fastcall ColorSpaceTransformCombine(const void **a1, int *a2, __int64 a3)
{
  const void *v3; // r11
  int v8; // eax
  bool v9; // zf
  char *v10; // rbp
  _DWORD *v11; // rax
  int v12; // eax
  _DWORD *v13; // rax
  int v14; // r10d
  unsigned int v15; // esi
  char *v16; // rbp
  __int64 v17; // r13
  float *v18; // r9
  int v19; // r12d
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // r15
  int v23; // r14d
  int v24; // r8d
  unsigned int v25; // ecx
  unsigned int v26; // eax
  float v27; // xmm4_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  __int64 v30; // rcx
  float v31; // xmm4_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm0_4

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
    v16 = v10 + 4;
    v17 = 4096LL;
    do
    {
      v18 = (float *)*((_QWORD *)a2 + 2);
      v19 = 4095 - v14;
      if ( *a2 == 2 )
      {
        if ( v14 )
        {
          v20 = v15 + 1;
          v21 = ((v19 * *((unsigned __int16 *)v18 + v15) + v14 * (unsigned int)*((unsigned __int16 *)v18 + v20))
               * (unsigned __int128)0x10010010010011uLL) >> 64;
          v22 = (v21
               + (((unsigned __int64)(v19 * *((unsigned __int16 *)v18 + v15)
                                    + v14 * (unsigned int)*((unsigned __int16 *)v18 + v20))
                 - v21) >> 1)) >> 15;
          v23 = (v19 * *((unsigned __int16 *)v18 + v15 + 256)
               + v14 * (unsigned int)*((unsigned __int16 *)v18 + v20 + 256))
              / 0xFFF0;
          v24 = (v19 * *((unsigned __int16 *)v18 + v15 + 512)
               + v14 * (unsigned int)*((unsigned __int16 *)v18 + v20 + 512))
              / 0xFFF0;
        }
        else
        {
          LODWORD(v22) = *((unsigned __int16 *)v18 + v15) >> 4;
          v23 = *((unsigned __int16 *)v18 + v15 + 256) >> 4;
          v24 = *((unsigned __int16 *)v18 + v15 + 512) >> 4;
        }
        v25 = v14 + 255;
        v14 -= 3840;
        if ( v25 < 0xFFF )
          v14 = v25;
        v26 = v15 + 1;
        if ( v25 < 0xFFF )
          v26 = v15;
        v15 = v26;
        v27 = (float)(int)v22 / 4095.0;
        v28 = (float)v24 / 4095.0;
        v29 = (float)v23 / 4095.0;
      }
      else
      {
        if ( v14 )
        {
          v30 = v15 + 1;
          v31 = (float)((float)((float)v14 * v18[3 * v30 + 6]) + (float)((float)v19 * v18[3 * v15 + 6])) / 4095.0;
          v32 = (float)((float)((float)v19 * v18[3 * v15 + 8]) + (float)((float)v14 * v18[3 * v30 + 8])) / 4095.0;
          v33 = (float)((float)((float)v14 * v18[3 * v30 + 7]) + (float)((float)v19 * v18[3 * v15 + 7])) / 4095.0;
        }
        else
        {
          v31 = v18[3 * v15 + 6];
          v33 = v18[3 * v15 + 7];
          v32 = v18[3 * v15 + 8];
        }
        v27 = (float)(v31 * *v18) + v18[3];
        v29 = (float)(v33 * v18[1]) + v18[4];
        v28 = (float)(v32 * v18[2]) + v18[5];
        if ( v27 >= 0.0 )
          v34 = fminf(1.0, v27);
        else
          v34 = 0.0;
        LODWORD(v22) = (int)(float)(v34 * 4095.0);
        if ( v29 >= 0.0 )
          v35 = fminf(1.0, v29);
        else
          v35 = 0.0;
        v23 = (int)(float)(v35 * 4095.0);
        if ( v28 >= 0.0 )
          v36 = fminf(1.0, v28);
        else
          v36 = 0.0;
        v14 += 1024;
        v24 = (int)(float)(v36 * 4095.0);
        if ( (unsigned int)v14 >= 0xFFF )
        {
          v14 -= 4095;
          ++v15;
        }
      }
      if ( v3 )
      {
        *((_DWORD *)v16 - 1) = *((_DWORD *)v3 + 3 * (unsigned int)v22);
        *(_DWORD *)v16 = *((_DWORD *)v3 + 3 * (unsigned int)v23 + 1);
        v28 = *((float *)v3 + 3 * (unsigned int)v24 + 2);
      }
      else
      {
        *((float *)v16 - 1) = v27;
        *(float *)v16 = v29;
      }
      *((float *)v16 + 1) = v28;
      v16 += 12;
      --v17;
    }
    while ( v17 );
  }
  return 0LL;
}
