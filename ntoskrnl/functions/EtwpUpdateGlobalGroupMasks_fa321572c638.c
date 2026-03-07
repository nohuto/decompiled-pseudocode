__int64 __fastcall EtwpUpdateGlobalGroupMasks(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int128 *v9; // rdx
  __int64 v10; // r9
  bool v11; // zf
  _DWORD *v12; // rbx
  __int128 v13; // xmm1
  void *i; // rcx
  void *NextSilo; // rax
  __int64 v16; // rdx
  __int128 *v17; // rcx
  __int64 v18; // r8
  __m128i si128; // xmm3
  __int64 v20; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  int v24; // r14d
  __int64 v26; // rdx
  void *v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int128 *v30; // rcx
  int v31; // eax
  __int128 v32; // [rsp+30h] [rbp-39h] BYREF
  __int128 v33; // [rsp+40h] [rbp-29h]
  __int128 v34; // [rsp+50h] [rbp-19h] BYREF
  __int128 v35; // [rsp+60h] [rbp-9h]
  _OWORD v36[2]; // [rsp+70h] [rbp+7h] BYREF

  v3 = a3;
  v4 = a2;
  v34 = 0LL;
  v35 = 0LL;
  memset(v36, 0, sizeof(v36));
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v6 = 8LL;
  if ( (unsigned int)v3 < 8
    && ((unsigned int)v4 >= *(_DWORD *)(a1 + 16) || (*(_QWORD *)(*(_QWORD *)(a1 + 456) + 8 * v4) & 1) != 0) )
  {
    v24 = -2147483611;
  }
  else
  {
    v7 = 10LL;
    v8 = a1 - (_QWORD)&v32 + 4284;
    v32 = 0LL;
    v33 = 0LL;
    do
    {
      v9 = &v32;
      v10 = 8LL;
      do
      {
        *(_DWORD *)v9 |= *(_DWORD *)((char *)v9 + v8);
        v9 = (__int128 *)((char *)v9 + 4);
        --v10;
      }
      while ( v10 );
      v8 += 32LL;
      --v7;
    }
    while ( v7 );
    v11 = EtwpBootPhase == 0;
    v12 = (_DWORD *)(a1 + 4252);
    v13 = v33;
    *(_OWORD *)(a1 + 4252) = v32;
    *(_OWORD *)(a1 + 4268) = v13;
    if ( !v11 )
    {
      for ( i = 0LL; ; i = v27 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        if ( !NextSilo )
          break;
        v26 = *((_QWORD *)PsGetServerSiloGlobals((__int64)NextSilo) + 108);
        if ( v26 )
        {
          v28 = 8LL;
          v29 = v26 - (_QWORD)&v32;
          v30 = &v32;
          do
          {
            *(_DWORD *)v30 |= *(_DWORD *)((char *)v30 + v29 + 4252);
            v30 = (__int128 *)((char *)v30 + 4);
            --v28;
          }
          while ( v28 );
        }
      }
    }
    v16 = EtwpHostSiloState - (_QWORD)&v32;
    v17 = &v32;
    v18 = 8LL;
    do
    {
      *(_DWORD *)v17 |= *(_DWORD *)((char *)v17 + v16 + 4252);
      v17 = (__int128 *)((char *)v17 + 4);
      --v18;
    }
    while ( v18 );
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v20 = 0LL;
    v21 = 2LL;
    do
    {
      v22 = _mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v20]);
      v23 = _mm_loadu_si128((const __m128i *)((char *)&v32 + v20 * 16));
      v36[v20++] = _mm_and_si128(_mm_andnot_si128(v23, si128), v22);
      *(__int128 *)((char *)&v33 + v20 * 16) = (__int128)_mm_and_si128(_mm_andnot_si128(v22, si128), v23);
      --v21;
    }
    while ( v21 );
    EtwpDisableKernelTrace(&v32, v36, a1, (unsigned int)v4);
    v24 = EtwpEnableKernelTrace(&v32, &v34, a1, (unsigned int)v4);
    if ( v24 < 0 )
    {
      do
      {
        v31 = ~*(_DWORD *)((char *)v12 + (_QWORD)&v34 - a1 - 4252);
        *v12 &= v31;
        v12[8 * v3 + 8] &= v31;
        *(_DWORD *)((char *)v12++ + (_QWORD)&v32 - a1 - 4252) &= v31;
        --v6;
      }
      while ( v6 );
    }
    PerfGlobalGroupMask[0] = v32;
    xmmword_140D1EAD0 = v33;
    if ( (BYTE4(v32) & 4) != 0 )
      _interlockedbittestandset(&KiCpuTracingFlags, 0);
    else
      _interlockedbittestandreset(&KiCpuTracingFlags, 0);
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return (unsigned int)v24;
}
