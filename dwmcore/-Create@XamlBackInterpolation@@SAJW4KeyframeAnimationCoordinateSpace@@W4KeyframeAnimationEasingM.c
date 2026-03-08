/*
 * XREFs of ?Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1802642B4
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055D38 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800D7E90 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlBackInterpolation::Create(int a1, unsigned int a2, float a3, float **a4)
{
  float v4; // xmm6_4
  char *v8; // rax
  float *v9; // rbx
  __int64 result; // rax

  v4 = a3;
  if ( !_finite(a3) || a3 < 0.0 )
    v4 = 0.0;
  v8 = (char *)KeyframeInterpolation::operator new(0x28uLL);
  v9 = (float *)v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 12) = 0LL;
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_QWORD *)(v8 + 28) = 0LL;
    *((_DWORD *)v8 + 9) = 0;
    *((_DWORD *)v8 + 2) = 0;
    *(_QWORD *)v8 = &XamlBackInterpolation::`vftable';
    ((void (__fastcall *)(char *))XamlBackInterpolation::`vftable')(v8);
  }
  else
  {
    v9 = 0LL;
  }
  v9[8] = v4;
  if ( a2 > 2 )
    a2 = 0;
  *((_DWORD *)v9 + 4) = a1;
  result = 0LL;
  *((_DWORD *)v9 + 6) = a2;
  *a4 = v9;
  return result;
}
