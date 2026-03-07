__int64 __fastcall UMPDOBJ::pfo(UMPDOBJ *this, __m128i **a2)
{
  __m128i *v2; // rax
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i v12; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+98h] [rbp+10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return 1LL;
  v6 = v2[1];
  v7 = v2[3];
  v12 = *v2;
  v8 = v2[2];
  v13[0] = v6;
  v9 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v13[1] = v8;
  v13[2] = v7;
  if ( v9 >= (unsigned __int64)MmSystemRangeStart )
  {
    AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v15);
    v14 = 0LL;
    v11 = SGDGetSessionState(v10);
    if ( NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LookUp(
           *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(v11 + 32) + 23480LL),
           (_QWORD *)v13 + 1,
           &v14) )
    {
      v9 = 0LL;
    }
    *((_QWORD *)&v13[0] + 1) = v9;
    if ( v15 )
    {
      GreReleasePushLockShared(v15);
      KeLeaveCriticalRegion();
    }
  }
  return UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 176), (const void **)a2, 0x40u, &v12);
}
