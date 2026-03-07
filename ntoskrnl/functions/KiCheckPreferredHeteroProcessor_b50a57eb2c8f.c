_BOOL8 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3)
{
  __int64 v7; // rbp
  _WORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // r10
  unsigned __int8 ProcessorClassForPolicy; // r12
  int v21; // esi
  unsigned __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r10
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rcx
  int v29; // ebx
  __int128 v30; // [rsp+40h] [rbp-58h] BYREF
  int v31; // [rsp+50h] [rbp-48h]
  char v32; // [rsp+54h] [rbp-44h]
  __int128 v33; // [rsp+58h] [rbp-40h] BYREF
  __int64 v34; // [rsp+68h] [rbp-30h]

  v33 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v32 = 0;
  if ( !*(_BYTE *)(a1 + 125) )
    return 0LL;
  KiHeteroComputeThreadWorkloadProperties(a1, &v30);
  v7 = *(_QWORD *)(a2 + 192);
  v8 = *(_WORD **)(a1 + 576);
  v9 = *(unsigned __int16 *)(v7 + 136);
  if ( (unsigned __int16)v9 >= *v8 )
    return 0LL;
  v10 = *(_QWORD *)&v8[4 * v9 + 4];
  if ( !v10 )
    return 0LL;
  KiGenerateHeteroSets(
    *(_QWORD *)(a2 + 192),
    v10,
    HIDWORD(v30),
    (unsigned __int8)v31,
    DWORD1(v30),
    DWORD2(v30),
    (__int64)&v33);
  if ( (v34 & *(_QWORD *)(a2 + 200)) != 0
    && (!(unsigned __int8)KiIsQosGroupingActive(v11, *(_QWORD *)(*(_QWORD *)(a2 + 192) + 264LL), *(_QWORD *)(v7 + 8))
     || (v12 & v13) == 0
     || ((DWORD1(v30) - 1) & 0xFFFFFFFA) != 0
     || (v12 & *(_QWORD *)(a2 + 200)) != 0) )
  {
    if ( (*(_QWORD *)(a2 + 200) & (unsigned __int64)v33) != 0 )
      return 0LL;
    if ( !a3 )
      return (KeGetCurrentPrcb()->GroupSetMember & (unsigned __int64)v33) != 0;
    v14 = *(_QWORD *)(v7 + 24) & v13;
    v15 = *(_QWORD *)(a2 + 200) | *(_QWORD *)(v7 + 16);
    if ( (v15 & *(_QWORD *)(a2 + 34912)) != *(_QWORD *)(a2 + 34912) )
    {
      if ( v14 )
        v13 &= *(_QWORD *)(v7 + 24);
      v14 = v13;
    }
    v16 = v14 & *(_QWORD *)(v7 + 32);
    if ( (v15 & *(_QWORD *)(a2 + 34936)) != *(_QWORD *)(a2 + 34936) )
    {
      if ( v16 )
        v14 &= *(_QWORD *)(v7 + 32);
      v16 = v14;
    }
    if ( ((unsigned __int64)v33 & v16) == 0 )
    {
      ProcessorClassForPolicy = KiGetProcessorClassForPolicy(a2, HIDWORD(v30), (unsigned __int8)v31);
      if ( v19 )
      {
        v21 = *(unsigned __int16 *)(v7 + 136) << 6;
        do
        {
          _BitScanReverse64(&v22, v19);
          v23 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v21 + v22)]];
          if ( (unsigned __int8)KiGetProcessorClassForPolicy(v23, v17, v18) > ProcessorClassForPolicy )
            return 1LL;
          v19 = ~*(_QWORD *)(v23 + 200) & v24;
        }
        while ( v19 );
      }
      if ( !(unsigned __int8)KiIsThreadEligibleForPreemptionSwap(&v30)
        || *(_DWORD *)(a2 + 32472)
        || *(_DWORD *)(*(_QWORD *)(a2 + 34888) + 8LL) )
      {
        return 0LL;
      }
      v25 = *(_QWORD *)(v7 + 80) & *((_QWORD *)&v33 + 1) & ~v15;
      if ( (v15 & *(_QWORD *)(a2 + 34912)) == *(_QWORD *)(a2 + 34912) )
        v25 &= *(_QWORD *)(v7 + 40);
      if ( !v25 )
        return 0LL;
      v26 = *(unsigned int *)(a1 + 588);
      v27 = KiProcessorBlock[v26];
      if ( (v25 & *(_QWORD *)(v27 + 34880)) != 0 )
      {
        v28 = KiProcessorBlock[v26];
      }
      else
      {
        v29 = *(unsigned __int8 *)(v27 + 208);
        v28 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v29
                                                                  + (unsigned int)KiFindBiasedSetMember(
                                                                                    v25,
                                                                                    *(unsigned __int8 *)(v27 + 209))]];
      }
      if ( !KiHeteroScanQueueForPreemptionSwapTarget(*(_QWORD *)(v28 + 34888), v27, a2, v25, (__int64)&v30) )
        return 0LL;
    }
  }
  return 1LL;
}
