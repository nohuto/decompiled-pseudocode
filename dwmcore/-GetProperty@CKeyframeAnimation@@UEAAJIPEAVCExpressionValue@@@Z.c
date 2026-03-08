/*
 * XREFs of ?GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802366B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x1800BAF68 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::GetProperty(CKeyframeAnimation *this, int a2, struct CExpressionValue *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // xmm0_4
  float AnimationTimeLength; // xmm0_4
  __int64 v9; // r9
  float v10; // xmm0_4

  v3 = a2 - 16;
  if ( !v3 )
  {
    v10 = (float)*((int *)this + 122);
    *((_DWORD *)a3 + 18) = 42;
    *(float *)a3 = v10;
    goto LABEL_11;
  }
  v4 = v3 - 14;
  if ( !v4 )
  {
    AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
    *(_DWORD *)(v9 + 72) = 42;
    *(_BYTE *)(v9 + 76) = 1;
    *(float *)v9 = AnimationTimeLength * 1000.0;
    return 0;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = *((_DWORD *)this + 132);
    goto LABEL_7;
  }
  if ( v5 == 2 )
  {
    v7 = *((_DWORD *)this + 133);
LABEL_7:
    *(_DWORD *)a3 = v7;
    *((_DWORD *)a3 + 18) = 18;
LABEL_11:
    *((_BYTE *)a3 + 76) = 1;
    return 0;
  }
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x8D4u, 0LL);
  return v6;
}
