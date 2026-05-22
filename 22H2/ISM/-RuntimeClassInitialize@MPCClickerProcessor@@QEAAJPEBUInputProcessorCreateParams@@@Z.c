/*
 * XREFs of ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18019935C
 * Callers:
 *     ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180198160 (--$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F7C0 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::call_once__lambda_a2967a5fef4bd4911d3370ff5cbae9e9___ @ 0x180198318 (std--call_once__lambda_a2967a5fef4bd4911d3370ff5cbae9e9___.c)
 */

__int64 __fastcall MPCClickerProcessor::RuntimeClassInitialize(
        MPCClickerProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  MPCClickerProcessor *v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v8 = this;
    std::call_once__lambda_a2967a5fef4bd4911d3370ff5cbae9e9___(v4, (__int64)&v8);
    *((_QWORD *)this + 584) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1170) = 0;
    *((_QWORD *)this + 587) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1176) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
