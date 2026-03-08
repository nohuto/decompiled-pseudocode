/*
 * XREFs of ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z @ 0x18023AA20
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18023A720 (-SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x180238FF0 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetTimespanProperty(CNaturalAnimation *this, int a2, const struct TimeSpan *a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbx
  void (__fastcall **v7)(__int64); // rax
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  int v11; // eax
  __m128 v12; // xmm2
  __m128 v13; // rt1
  float v15; // [rsp+48h] [rbp+10h]

  v3 = 0;
  if ( a2 == 16 )
  {
    v10 = *(float *)a3;
    if ( (*(_DWORD *)a3 & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v12 = 0LL;
      v12.m128_f32[0] = (float)(int)v10 - v10;
      v13.m128_f32[0] = FLOAT_N0_5;
      v11 = (int)v10 - _mm_cmple_ss(v12, v13).m128_u32[0];
    }
    else
    {
      v15 = v10 + 6291456.25;
      v11 = (int)(LODWORD(v15) << 10) >> 11;
    }
    *((_DWORD *)this + 104) = v11;
  }
  else if ( a2 == 49 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
    v6 = *((_QWORD *)this + 56);
    if ( v6 )
      (**(void (__fastcall ***)(__int64))v6)(v6);
    v7 = *(void (__fastcall ***)(__int64))v6;
    v8 = *(float *)(v6 + 28);
    v9 = 1.0 / (float)(*(float *)a3 / 1000.0);
    *(float *)(v6 + 28) = v8;
    *(float *)(v6 + 32) = v9;
    *(float *)(v6 + 20) = v9 * v9;
    *(float *)(v6 + 24) = (float)(v8 + v8) * v9;
    v7[1](v6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x456u, 0LL);
  }
  return v3;
}
