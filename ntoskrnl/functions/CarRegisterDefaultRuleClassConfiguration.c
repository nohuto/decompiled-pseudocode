__int64 __fastcall CarRegisterDefaultRuleClassConfiguration(int a1, int a2)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-48h] BYREF
  __m128i si128; // [rsp+30h] [rbp-38h]
  __m128i v5; // [rsp+40h] [rbp-28h]
  __m128i v6; // [rsp+50h] [rbp-18h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = si128;
  v3[0] = a1;
  v6 = _mm_load_si128((const __m128i *)&_xmm);
  v3[2] = 5;
  v3[3] = 3;
  v3[1] = a2;
  return CarRegisterRuleClassConfiguration(v3);
}
