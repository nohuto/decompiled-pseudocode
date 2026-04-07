/*
 * XREFs of ?_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z @ 0x1800061CC
 * Callers:
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x180005EC0 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x180005F50 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800B9DD0 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800B9E90 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAnimationResource::_ConvertDoubleToQPC(double a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  double v3; // xmm1_8
  LARGE_INTEGER Frequency; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  Frequency.QuadPart = 0LL;
  if ( QueryPerformanceFrequency(&Frequency) )
  {
    v2 = 0LL;
    v3 = (double)(int)(a1 * 1024.0 + 0.5) * 0.0009765625 * (double)(int)Frequency.LowPart;
    if ( v3 >= 9.223372036854776e18 )
    {
      v3 = v3 - 9.223372036854776e18;
      if ( v3 < 9.223372036854776e18 )
        v2 = 0x8000000000000000uLL;
    }
    return v2 + (unsigned int)(int)v3;
  }
  return v1;
}
