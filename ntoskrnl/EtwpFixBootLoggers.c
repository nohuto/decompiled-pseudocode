__int64 EtwpFixBootLoggers()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v3; // r14
  unsigned int *v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __int64 *v11; // rcx
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+30h] [rbp-40h] BYREF
  __int16 *v13; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF

  v0 = 0LL;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  v1 = EtwpHostSiloState;
  v2 = 4;
  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  v3 = 2LL;
  if ( *(_DWORD *)(EtwpHostSiloState + 16) > 4u )
  {
    do
    {
      v4 = EtwpAcquireLoggerContextByLoggerId(v1, v2, 0);
      v5 = (__int64)v4;
      if ( v4 )
      {
        if ( (v4[204] & 0x80000000) != 0 )
        {
          EtwpGetSecurityDescriptorByGuid(v4 + 69, &v13);
          EtwpInitializeLoggerSecurityDescriptor(v5, v13);
          EtwpFreeSecurityDescriptor((void **)&v13);
          ClientSecurityQos.Length = 12;
          ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
          *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
          SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)(v5 + 704));
          v11 = *(__int64 **)(v5 + 1096);
          *(_QWORD *)(v5 + 304) = EtwpRefTimeSystem;
          EtwpStartLoggerThread(*v11, v5);
        }
        EtwpReleaseLoggerContext((unsigned int *)v5, 0);
      }
      v1 = EtwpHostSiloState;
      ++v2;
    }
    while ( v2 < *(_DWORD *)(EtwpHostSiloState + 16) );
  }
  v6 = 0LL;
  v7 = 2LL;
  do
  {
    v8 = _mm_loadu_si128((const __m128i *)&EtwpBootDeferredGroupMask[v6 / 4]);
    v9 = _mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v6 / 0x10]);
    v6 += 16LL;
    *(__m128i *)(&ClientSecurityQos.ContextTrackingMode + v6) = _mm_and_si128(v8, v9);
    --v7;
  }
  while ( v7 );
  if ( (int)EtwpEnableKernelTrace(PerfGlobalGroupMask, v14, EtwpHostSiloState, 0) < 0 )
  {
    KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
    do
    {
      PerfGlobalGroupMask[v0] = (__int128)_mm_and_si128(
                                            _mm_andnot_si128(
                                              _mm_loadu_si128((const __m128i *)&v14[v0]),
                                              (__m128i)_xmm_ffffffffffffffffffffffffffffffff),
                                            _mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v0]));
      ++v0;
      --v3;
    }
    while ( v3 );
    KeReleaseMutant(&EtwpGroupMaskMutex, 1, 0, 0);
  }
  return 0LL;
}
