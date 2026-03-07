__int64 __fastcall sub_140003CFC(__int64 a1)
{
  __int64 Pool2; // rax
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rax

  Pool2 = ExAllocatePool2(64LL, 32LL, 808477538LL);
  if ( !Pool2 || (v4 = sub_1400A2E8C(Pool2, L"Failed to allocate string")) == 0 || (v5 = *(_QWORD *)(v4 + 16)) == 0 )
  {
    v5 = 0LL;
    v4 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v6 = *(volatile signed __int32 **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 16) = v5;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
    return *(_QWORD *)(v7 + 24) == 0LL ? 0xC0000017 : 0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOBYTE(v3) = 2;
    sub_1400A3054(
      *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
      v3,
      1,
      12,
      (__int64)&unk_1400D4650,
      (__int64)L"m_defaultString");
  }
  return 3221225495LL;
}
