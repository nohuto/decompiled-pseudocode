__int64 __fastcall KiTryLocalThreadSchedule(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, __int64 a5)
{
  char *v5; // rdi
  bool v6; // zf
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  int v18; // edx
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v5 = (char *)a5;
  v6 = (*(_BYTE *)(a1 + 13244) & 1) == 0;
  v24[0] = 0LL;
  if ( v6 || *(_BYTE *)(a3 + 643) != 15 && *(_DWORD *)(a3 + 84) >= (unsigned int)KiShortExecutionCycles )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 192);
  v11 = *(unsigned __int16 *)(v10 + 136);
  if ( (unsigned __int16)v11 >= *a4 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)&a4[4 * v11 + 4];
  v13 = *(_QWORD *)(v10 + 8);
  v25 = v13 & v12;
  if ( *(_BYTE *)(a5 + 1) && (v13 & v12) == 0 )
  {
    v13 = *(_QWORD *)(v10 + 16) & *(_QWORD *)(v10 + 96);
    v25 = v13 & v12;
  }
  v14 = v25 & *(_QWORD *)(v10 + 8LL * *(int *)(a5 + 4) + 16);
  v25 = v14;
  if ( !v14 )
    return 0LL;
  v15 = v14;
  v16 = *(_QWORD *)(a1 + 34928) & v14;
  if ( v16 )
  {
    v14 &= *(_QWORD *)(a1 + 34928);
    v25 = v16;
    v15 = v16;
  }
  if ( KiDispatchInterruptCost != -1 && *(_QWORD *)(a1 + 13088) && (v15 & *(_QWORD *)(a1 + 200)) != 0 )
  {
    if ( !*(_DWORD *)(a1 + 13144) && (*(_WORD *)(a1 + 13244) & 0xFFDF) == 1 )
    {
      v21 = *(_QWORD *)(a1 + 13096);
      if ( v21 == -1LL )
      {
        if ( !(unsigned __int8)KiQueryDpcRuntimeHistory(a1, *(_QWORD *)(a1 + 13088), v24) )
        {
          v14 = v25;
          *(_QWORD *)(a1 + 13096) = -2LL;
          goto LABEL_14;
        }
        v21 = v24[0];
        *(_QWORD *)(a1 + 13096) = v24[0];
      }
      if ( v21 != -2LL )
      {
        v22 = __rdtsc();
        v23 = (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - *(_QWORD *)(a1 + 13104);
        if ( v21 < v23 || v21 - v23 < KiDispatchInterruptCost )
          return a1;
      }
    }
    v14 = v25;
  }
LABEL_14:
  if ( (*(_BYTE *)(v10 + 184) & 1) == 0 )
    goto LABEL_18;
  if ( *v5 && (unsigned __int8)KiFindRankBiasedIdleSmtSet(a1, &v25) )
    goto LABEL_42;
  v17 = *v5;
  v14 = v25 & *(_QWORD *)(v10 + 24);
  if ( v14 )
  {
    if ( !v17
      || (unsigned int)((0x101010101010101LL
                       * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled )
    {
LABEL_18:
      if ( (v14 & ~*(_QWORD *)(a1 + 34912)) != 0 )
        v14 &= ~*(_QWORD *)(a1 + 34912);
      goto LABEL_20;
    }
    return 0LL;
  }
  if ( v17 )
    return 0LL;
  if ( !(unsigned __int8)KiReduceByEffectiveIdleSmtSet(a1, &v25) )
  {
    v14 = v25;
    goto LABEL_18;
  }
LABEL_42:
  v14 = v25;
LABEL_20:
  v18 = *(unsigned __int8 *)(a1 + 208);
  v19 = *(_DWORD *)(a1 + 34900);
  if ( *(_BYTE *)(a2 + 208) == (_BYTE)v18 && (*(_QWORD *)(a1 + 34920) & *(_QWORD *)(a2 + 200)) != 0LL )
    LOBYTE(v19) = *(_BYTE *)(a2 + 209);
  _BitScanForward64(&v20, __ROR8__(v14, v19));
  return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v18 + (((_BYTE)v20 + (_BYTE)v19) & 0x3F)]];
}
