/*
 * XREFs of ?SetD2DEffectProperties@CBrightnessEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180254B30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrightnessEffect::SetD2DEffectProperties(CBrightnessEffect *this, struct ID2D1Effect *a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a2;
  v12 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 44), (__m128)*((unsigned int *)this + 45)).m128_u64[0];
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(v4 + 72))(
         a2,
         0LL,
         0LL,
         &v12,
         8);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x14u, 0LL);
  }
  else
  {
    v8 = *(_QWORD *)a2;
    v12 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 46), (__m128)*((unsigned int *)this + 47)).m128_u64[0];
    v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(v8 + 72))(
           a2,
           1LL,
           0LL,
           &v12,
           8);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x19u, 0LL);
  }
  return v7;
}
