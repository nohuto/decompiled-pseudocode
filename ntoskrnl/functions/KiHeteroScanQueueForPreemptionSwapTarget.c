__int64 __fastcall KiHeteroScanQueueForPreemptionSwapTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  unsigned int v8; // edi
  _BYTE *v9; // r13
  unsigned __int64 v10; // r10
  unsigned int v11; // r12d
  unsigned __int16 v12; // r9
  __int64 v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // r8
  char v16; // dl
  unsigned int v17; // ecx
  unsigned __int16 v18; // ax
  __int64 v19; // r11
  __int16 v20; // bx
  unsigned __int64 v21; // r11
  unsigned int v22; // r8d
  __int64 v23; // r9
  unsigned int v24; // ebx
  __int64 v25; // r8
  unsigned __int8 v26; // r9
  unsigned __int8 v27; // dl
  _BYTE *v28; // rbx
  char v29; // dl
  int v30; // ecx
  int v31; // ebx
  int v33; // [rsp+20h] [rbp-108h]
  __int64 v35; // [rsp+30h] [rbp-F8h]
  _BYTE *v37; // [rsp+40h] [rbp-E8h]
  _BYTE v38[128]; // [rsp+50h] [rbp-D8h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 657);
  v7 = v5;
  v8 = *(unsigned __int8 *)(a1 + 656);
  v35 = a4 & *(_QWORD *)(a1 + 664);
  v33 = *(unsigned __int8 *)(a1 + 657);
  v37 = &v38[v5];
  memmove(&v38[v5], (const void *)(a1 + 528), *(unsigned __int8 *)(a1 + 656));
  v9 = &v38[v5 + 64];
  memmove(&v38[v5 + 64], (const void *)(a1 + 592), v8);
  v10 = 0LL;
  v11 = v5 + v8;
  v12 = -1;
  v13 = 0LL;
  v14 = v5;
  if ( (unsigned int)v5 >= (unsigned int)v5 + v8 )
    return 0LL;
  v15 = (unsigned int)v5;
  do
  {
    if ( (v35 & (1LL << v14)) != 0 )
    {
      v16 = v38[v15];
      if ( v16 >= 0 && (v16 & 0x7F) <= *(char *)a5 )
      {
        v17 = v38[v15 + 64] & 7;
        if ( v17 <= 2 || v17 - 5 <= 1 )
        {
          v18 = KiHeteroComputeThreadImportance(v17, v16 & 0x7F);
          if ( v18 <= *(_WORD *)(a5 + 18) )
          {
            v13 |= v19;
            if ( v18 < v12 )
              v12 = v18;
          }
        }
      }
    }
    ++v14;
    ++v15;
  }
  while ( v14 < v11 );
  if ( !v13 )
    return 0LL;
  v20 = *(_WORD *)(a5 + 18);
  if ( v12 == v20 )
  {
    if ( KiHgsPlusEnabled == (_BYTE)v10 )
      return 0LL;
    v24 = v5;
    v25 = a3;
    v21 = v10;
    do
    {
      if ( (v13 & (1LL << v24)) != 0 )
      {
        v26 = *(_BYTE *)(a5 + 16);
        v27 = (*v9 >> 3) & 7;
        if ( v27 != v26
          && KiHeteroIsSwapBeneficialForPerformance(
               KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v24]],
               v27,
               v25,
               v26) )
        {
          v21 |= 1LL << v24;
        }
      }
      ++v24;
      ++v9;
    }
    while ( v24 < v11 );
    LODWORD(v5) = v33;
  }
  else
  {
    v21 = v10;
    v22 = v5;
    do
    {
      if ( (v13 & (1LL << v22)) != 0
        && (unsigned __int16)KiHeteroComputeThreadImportance(v38[v7 + 64] & 7, v38[v7] & 0x7F) != v20 )
      {
        v21 |= v23;
      }
      ++v22;
      ++v7;
    }
    while ( v22 < v11 );
  }
  if ( !v21 )
    return 0LL;
  v28 = v37;
  v29 = 63;
  do
  {
    if ( (v21 & (1LL << v5)) != 0 )
    {
      v30 = *v28 & 0x7F;
      if ( v30 >= v29 )
      {
        if ( v30 == v29 )
          v10 |= 1LL << v5;
      }
      else
      {
        v10 = 1LL << v5;
        v29 = *v28 & 0x7F;
      }
    }
    LODWORD(v5) = v5 + 1;
    ++v28;
  }
  while ( (unsigned int)v5 < v11 );
  v31 = *(unsigned __int8 *)(a2 + 208);
  return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v31
                                                             + (unsigned int)KiFindBiasedSetMember(
                                                                               v10,
                                                                               *(unsigned __int8 *)(a2 + 209))]];
}
