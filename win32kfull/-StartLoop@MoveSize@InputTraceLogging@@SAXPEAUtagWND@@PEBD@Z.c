void __fastcall InputTraceLogging::MoveSize::StartLoop(struct tagWND *a1, const char *a2)
{
  __int64 v2; // r8
  __int64 *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  __m128i v6; // xmm2
  __m128i v7; // xmm0
  __int32 v8; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v10; // [rsp+58h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 32LL) )
    {
      v5 = v3[5];
      v10 = v4;
      v6 = *(__m128i *)(v5 + 88);
      v7 = _mm_srli_si128(v6, 8);
      LODWORD(v13) = _mm_cvtsi128_si32(v7);
      LODWORD(v12) = v7.m128i_i32[1];
      v8 = v6.m128i_i32[1];
      v11 = *v3;
      v9 = _mm_cvtsi128_si32(v6);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)&dword_1C035C080,
        byte_1C031D8CC,
        v2,
        (__int64)v3,
        (__int64)&v11,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v13,
        (__int64)&v12,
        (void **)&v10);
    }
  }
}
