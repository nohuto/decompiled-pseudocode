/*
 * XREFs of ?GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z @ 0x1C001E8AC
 * Callers:
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C001E4F4 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?GTF_InitWorkset@MonDescParser@@YAXPEAU_GTF_WORKSET@1@@Z @ 0x1C001EB2C (-GTF_InitWorkset@MonDescParser@@YAXPEAU_GTF_WORKSET@1@@Z.c)
 */

void __fastcall MonDescParser::GTF_UsingVerticalRefreshFrequency_Stage1(
        MonDescParser *this,
        struct MonDescParser::_GTF_WORKSET *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        MonDescParser *a6)
{
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // r10d
  int v9; // edx
  int v10; // r8d
  double v11; // xmm0_8
  double v12; // xmm5_8
  double v13; // xmm2_8
  double v14; // xmm1_8
  double v15; // xmm7_8
  double v16; // xmm6_8
  double v17; // xmm8_8
  double v18; // xmm2_8
  double v19; // xmm0_8
  double v20; // xmm6_8
  double v21; // xmm0_8
  double v22; // xmm1_8
  double v23; // xmm0_8
  double v24; // xmm5_8
  double v25; // xmm1_8
  double v26; // xmm0_8
  double v27; // xmm0_8

  MonDescParser::GTF_InitWorkset(a6, a2);
  v11 = (double)v10;
  v12 = (double)(int)((double)v9 * 0.125 + 0.5) * 8.0;
  *(double *)(v6 + 64) = v12;
  if ( v8 )
    v11 = v11 * 0.5;
  v13 = (double)(int)(v11 + 0.5);
  *(double *)(v6 + 216) = v13;
  v14 = (double)(v7 / a5);
  if ( v8 )
    v14 = v14 + v14;
  *(double *)(v6 + 184) = v14;
  *(_QWORD *)(v6 + 120) = 0LL;
  *(_QWORD *)(v6 + 24) = 0LL;
  if ( v8 )
    v15 = DOUBLE_0_5;
  else
    v15 = 0.0;
  *(double *)(v6 + 88) = v15;
  v16 = (1.0 / v14 - 0.00055) / (v13 + 0.0 + 1.0 + v15) * 1000000.0;
  *(double *)(v6 + 56) = v16;
  v17 = (double)(int)(550.0 / v16 + 0.5);
  *(double *)(v6 + 224) = v17;
  *(double *)(v6 + 160) = v17 - 3.0;
  v18 = v13 + 0.0 + 0.0 + v17 + v15 + 1.0;
  *(double *)(v6 + 144) = v18;
  v19 = 1.0 / v16 / v18 * 1000000.0;
  *(double *)(v6 + 176) = v19;
  v20 = v16 / (v14 / v19);
  *(double *)(v6 + 48) = v20;
  v21 = 1.0 / v20 / v18 * 1000000.0;
  *(double *)(v6 + 168) = v21;
  if ( v8 )
    v21 = v21 * 0.5;
  v22 = *(double *)(v6 + 8);
  *(double *)(v6 + 192) = v21;
  v23 = v20 * *(double *)v6;
  *(_QWORD *)(v6 + 96) = 0LL;
  v24 = v12 + 0.0 + 0.0;
  *(double *)(v6 + 152) = v17 + 1.0;
  *(_QWORD *)(v6 + 112) = 0LL;
  *(double *)(v6 + 128) = v24;
  v25 = v22 - v23 / 1000.0;
  *(double *)(v6 + 72) = v25;
  v26 = (double)(int)(v25 * v24 / (100.0 - v25) * 0.0625 + 0.5) * 16.0;
  *(double *)(v6 + 32) = v26;
  v27 = v26 + v24;
  *(double *)(v6 + 136) = v27;
  *(double *)(v6 + 104) = v27 / v20 * 1000000.0;
  *(double *)(v6 + 40) = 1000.0 / v20 * 1000.0;
}
