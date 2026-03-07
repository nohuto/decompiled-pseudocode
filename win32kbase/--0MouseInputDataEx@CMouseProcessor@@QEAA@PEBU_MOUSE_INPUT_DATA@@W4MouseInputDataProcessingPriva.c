__int64 __fastcall CMouseProcessor::MouseInputDataEx::MouseInputDataEx(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // xmm1_8
  __int128 v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-58h]
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp-28h] BYREF

  v11 = 0uLL;
  v12 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
  v8 = CMouseProcessor::EventTime::Now(&v15);
  v9 = *(_QWORD *)(v8 + 16);
  v13 = *(_OWORD *)v8;
  v14 = v9;
  ((void (__fastcall *)(__int64, __int64, __int128 *, _QWORD, __int128 *, _QWORD))CMouseProcessor::MouseInputDataEx::MouseInputDataEx)(
    a1,
    a2,
    &v13,
    a4,
    &v11,
    0LL);
  *(_DWORD *)(a1 + 88) = a3;
  return a1;
}
