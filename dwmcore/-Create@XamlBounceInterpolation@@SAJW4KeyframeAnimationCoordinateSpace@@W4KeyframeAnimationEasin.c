/*
 * XREFs of ?Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x18026438C
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055D38 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800D7E90 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlBounceInterpolation::Create(int a1, unsigned int a2, int a3, float a4, _QWORD *a5)
{
  float v5; // xmm6_4
  int v6; // esi
  char *v9; // rax
  char *v10; // rbx

  v5 = a4;
  v6 = 0;
  if ( a3 >= 0 )
    v6 = a3;
  if ( !_finite(a4) || a4 < 1.0 )
    v5 = *(float *)&FLOAT_1_0;
  v9 = (char *)KeyframeInterpolation::operator new(0x28uLL);
  v10 = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 12) = 0LL;
    *(_QWORD *)(v9 + 20) = 0LL;
    *(_QWORD *)(v9 + 28) = 0LL;
    *((_DWORD *)v9 + 9) = 0;
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &XamlBounceInterpolation::`vftable';
    ((void (__fastcall *)(char *))XamlBounceInterpolation::`vftable')(v9);
  }
  else
  {
    v10 = 0LL;
  }
  if ( a2 > 2 )
    a2 = 0;
  *((_DWORD *)v10 + 4) = a1;
  *((_DWORD *)v10 + 6) = a2;
  *((_DWORD *)v10 + 8) = v6;
  *((float *)v10 + 9) = fmaxf(1.01, v5);
  *a5 = v10;
  return 0LL;
}
