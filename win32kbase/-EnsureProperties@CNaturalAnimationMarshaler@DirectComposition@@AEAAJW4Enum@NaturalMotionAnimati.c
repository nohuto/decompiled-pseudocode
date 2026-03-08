/*
 * XREFs of ?EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimationType@@@Z @ 0x1C026B59C
 * Callers:
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C026B690 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::EnsureProperties(float *a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  float v4; // xmm0_4
  float v5; // xmm1_4

  v2 = 0;
  v3 = *((_DWORD *)a1 + 41);
  if ( !v3 )
  {
    if ( a2 == 1 )
    {
      v4 = FLOAT_0_5;
      v5 = FLOAT_10_0;
    }
    else
    {
      if ( a2 != 2 )
        return (unsigned int)-1073741811;
      v4 = FLOAT_0_050000001;
      v5 = FLOAT_0_69999999;
    }
    a1[42] = v5;
    a1[43] = v4;
    *((_DWORD *)a1 + 41) = a2;
    return v2;
  }
  if ( v3 != a2 )
    return (unsigned int)-1073741811;
  return v2;
}
