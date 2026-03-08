/*
 * XREFs of ?InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000FADC
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18000F1BC (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::InitializeShadowEffect(
        CTreeEffectLayer *this,
        struct ID2D1Effect *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  CTreeEffectLayer *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = this;
  if ( !a2 )
    return 2147942487LL;
  LODWORD(v16) = 1;
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, CTreeEffectLayer **, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         &v16,
         4);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x4AEu, 0LL);
  }
  else
  {
    LODWORD(v16) = 0;
    v8 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CTreeEffectLayer **, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           1LL,
           0LL,
           &v16,
           4);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4B1u, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, const struct D2D_MATRIX_3X2_F *, int))(*(_QWORD *)a2 + 72LL))(
              a2,
              2LL,
              0LL,
              a3,
              24);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x4B4u, 0LL);
      }
      else
      {
        v12 = *(_QWORD *)a2;
        *(float *)&v16 = FLOAT_0_5;
        v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CTreeEffectLayer **, int))(v12 + 72))(
                a2,
                3LL,
                0LL,
                &v16,
                4);
        v7 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x4B6u, 0LL);
      }
    }
  }
  return v7;
}
