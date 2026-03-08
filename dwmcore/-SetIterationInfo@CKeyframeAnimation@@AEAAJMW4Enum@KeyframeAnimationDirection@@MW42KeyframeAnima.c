/*
 * XREFs of ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x180097DFC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180097F68 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x180236828 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ceilf_0 @ 0x1801176EC (ceilf_0.c)
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 */

__int64 __fastcall CKeyframeAnimation::SetIterationInfo(__int64 a1, float a2, int a3, float a4, int a5)
{
  char v5; // bp
  int v6; // r14d
  char v7; // si
  unsigned int v10; // ebx
  float v12; // xmm7_4
  int v13; // eax
  float v14; // xmm6_4
  __m128 v15; // xmm2
  __m128 v16; // rt1
  float v17; // [rsp+80h] [rbp+8h]

  v5 = *(_BYTE *)(a1 + 581);
  v6 = 0;
  v7 = 0;
  if ( (v5 & 1) != 0 )
  {
    v10 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147418113, 0x3E7u, 0LL);
    return v10;
  }
  if ( a2 != 1.0 )
  {
    if ( a2 >= 0.0 )
    {
      if ( a2 > 0.0 )
      {
        v6 = (int)ceilf_0(a2) - 1;
        v14 = a2 - floorf_0(a2);
        if ( v14 != 0.0 )
          *(float *)(a1 + 552) = v14;
      }
    }
    else
    {
      v6 = -1;
    }
  }
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        a3 = 0;
        break;
      case 2:
        goto LABEL_4;
      case 3:
        a3 = 2;
        break;
      case 4:
        v6 = 0;
        goto LABEL_4;
      default:
        v10 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(a3 - 3, 0LL, 0, -2147024809, 0x42Au, 0LL);
        return v10;
    }
    v7 = 1;
  }
LABEL_4:
  if ( a5 && (unsigned int)(a5 - 1) >= 2 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a5 - 1, 0LL, 0, -2147024809, 0x43Du, 0LL);
  }
  else
  {
    *(_DWORD *)(a1 + 544) = v6;
    *(_DWORD *)(a1 + 576) = a5;
    *(_DWORD *)(a1 + 572) = a3;
    *(_BYTE *)(a1 + 581) = (8 * v7) | v5 & 0xF7;
    if ( a4 > 0.0 )
    {
      v12 = a4 * 1000.0;
      if ( COERCE_UNSIGNED_INT(fabs(a4 * 1000.0)) > 0x497FFFF0 )
      {
        v15 = 0LL;
        v15.m128_f32[0] = (float)(int)v12 - v12;
        v16.m128_f32[0] = FLOAT_N0_5;
        v13 = (int)v12 - _mm_cmple_ss(v15, v16).m128_u32[0];
      }
      else
      {
        v17 = v12 + 6291456.25;
        v13 = (int)(LODWORD(v17) << 10) >> 11;
      }
      *(_DWORD *)(a1 + 488) = v13;
    }
    return 0;
  }
  return v10;
}
