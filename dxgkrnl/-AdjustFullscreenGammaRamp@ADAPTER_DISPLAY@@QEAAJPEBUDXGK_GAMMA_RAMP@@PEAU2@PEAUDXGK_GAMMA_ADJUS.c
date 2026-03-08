/*
 * XREFs of ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C02B6370
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179B90 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01D491C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?ScaleAndOffset@@YAGGMM@Z @ 0x1C02BABB8 (-ScaleAndOffset@@YAGGMM@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
        ADAPTER_DISPLAY *this,
        const struct DXGK_GAMMA_RAMP *a2,
        struct DXGK_GAMMA_RAMP *a3,
        struct DXGK_GAMMA_ADJUSTMENT *a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  float *v6; // rcx
  __int64 v7; // rax
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int16 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r11
  float v21; // xmm2_4
  float v22; // xmm1_4
  unsigned __int16 v23; // ax
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r11
  unsigned __int16 v27; // ax
  __int64 v28; // r9
  unsigned __int16 *v29; // rdx
  __int64 v30; // r11
  unsigned __int16 v31; // cx
  unsigned __int16 v32; // ax
  __int64 v33; // rdx
  __int64 v34; // r9
  unsigned __int16 v35; // r10
  unsigned __int16 v36; // ax
  unsigned __int16 *v37; // rdx
  unsigned __int16 v38; // r10
  unsigned __int16 v39; // ax
  __int64 v40; // rdx
  __int16 v41; // r10

  if ( *((_DWORD *)a3 + 4) == 2 )
  {
    if ( !a2 || *((_DWORD *)a2 + 4) == 2 )
    {
      v15 = *((_QWORD *)a3 + 4);
      if ( a2 )
        v16 = *((_QWORD *)a2 + 4);
      else
        v16 = 0LL;
      v17 = 0;
      v18 = v15 + 512;
      v19 = 256LL;
      v20 = v16 - v15;
      do
      {
        v21 = *((float *)a4 + 3);
        v22 = *(float *)a4;
        if ( v16 )
        {
          v23 = ScaleAndOffset(*(_WORD *)(v20 + v18 - 512), v22, v21);
          *(_WORD *)(v24 - 512) = v23;
          v27 = ScaleAndOffset(*(_WORD *)(v26 + v24), *(float *)(v25 + 4), *(float *)(v25 + 12));
          *v29 = v27;
          v31 = *(unsigned __int16 *)((char *)v29 + v30 + 512);
        }
        else
        {
          v32 = ScaleAndOffset(v17, v22, v21);
          *(_WORD *)(v33 - 512) = v32;
          v36 = ScaleAndOffset(v35, *(float *)(v34 + 4), *(float *)(v34 + 16));
          *v37 = v36;
          v31 = v38;
        }
        v39 = ScaleAndOffset(v31, *(float *)(v28 + 8), *(float *)(v28 + 20));
        *(_WORD *)(v40 + 512) = v39;
        v17 = v41 + 257;
        v18 = v40 + 2;
        --v19;
      }
      while ( v19 );
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( *((_DWORD *)a3 + 4) != 3 || !a2 || *((_DWORD *)a2 + 4) != 3 )
    return 3221225485LL;
  v4 = *((_QWORD *)a3 + 4);
  v5 = *((_QWORD *)a2 + 4) - v4;
  v6 = (float *)(v4 + 24);
  v7 = 1024LL;
  do
  {
    v8 = (float)(*(float *)((char *)v6 + v5) * *(float *)a4) + *((float *)a4 + 3);
    if ( v8 <= 1.0 )
      v9 = fmaxf(0.0, v8);
    else
      v9 = FLOAT_1_0;
    *v6 = v9;
    v10 = (float)(*(float *)((char *)v6 + v5 + 4) * *((float *)a4 + 1)) + *((float *)a4 + 4);
    if ( v10 <= 1.0 )
      v11 = fmaxf(0.0, v10);
    else
      v11 = FLOAT_1_0;
    v6[1] = v11;
    v12 = (float)(*(float *)((char *)v6 + v5 + 8) * *((float *)a4 + 2)) + *((float *)a4 + 5);
    if ( v12 <= 1.0 )
      v13 = fmaxf(0.0, v12);
    else
      v13 = FLOAT_1_0;
    v6[2] = v13;
    v6 += 3;
    --v7;
  }
  while ( v7 );
  return 0LL;
}
