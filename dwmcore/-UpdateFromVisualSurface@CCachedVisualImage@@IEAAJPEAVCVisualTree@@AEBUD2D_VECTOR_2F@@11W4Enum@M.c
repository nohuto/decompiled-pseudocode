/*
 * XREFs of ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1800B3EF0
 * Callers:
 *     ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B3E04 (-GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B44DC (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x1802178DC (-ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateFromVisualSurface(
        __int64 *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        int a6)
{
  unsigned int v6; // esi
  char v7; // bp
  __int64 v9; // r14
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  __int64 v16; // rax
  float v17; // xmm6_4
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  float v24[28]; // [rsp+30h] [rbp-78h]

  v6 = 0;
  v7 = 0;
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 64);
  else
    v9 = 0LL;
  v10 = *a3;
  v11 = a3[1];
  v12 = *a3 + *a4;
  v13 = v11 + a4[1];
  v24[0] = *a3;
  v24[1] = v11;
  v24[2] = v12;
  v24[3] = v13;
  v14 = (float)(int)floorf_0(*a5 + 0.5);
  v15 = floorf_0(a5[1] + 0.5);
  v16 = a1[18];
  v17 = (float)(int)v15;
  if ( v16 != v9 )
  {
    if ( v16 )
      (*(void (__fastcall **)(__int64 *))(*a1 + 192))(a1);
    v19 = *a1;
    *((_WORD *)a1 + 888) = 0;
    a1[18] = v9;
    v20 = (*(__int64 (__fastcall **)(__int64 *))(v19 + 184))(a1);
    v6 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x20Fu, 0LL);
      return v6;
    }
    v22 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 224))(a1);
    v6 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x211u, 0LL);
      return v6;
    }
    v7 = 1;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 24) - v10) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 25) - v11) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 26) - v12) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 27) - v13) & _xmm) > 0.0000011920929 )
  {
    v7 = 1;
    *((_OWORD *)a1 + 6) = *(_OWORD *)v24;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)a1 + 15) - v14) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)a1 + 16) - v17) & _xmm) > 0.0000011920929 )
  {
    v7 = 1;
    *((double *)a1 + 15) = v14;
    *((double *)a1 + 16) = v17;
  }
  if ( *((_DWORD *)a1 + 44) != a6 )
  {
    *((_DWORD *)a1 + 44) = a6;
    goto LABEL_14;
  }
  if ( v7 )
LABEL_14:
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 72))(a1, 0LL, 0LL);
  return v6;
}
