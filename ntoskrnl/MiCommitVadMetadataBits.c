/*
 * XREFs of MiCommitVadMetadataBits @ 0x1407D2944
 * Callers:
 *     MiCommitInitialVadMetadataBits @ 0x1407285AC (MiCommitInitialVadMetadataBits.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiCommitVadCfgBits @ 0x1407D2AEC (MiCommitVadCfgBits.c)
 */

__int64 __fastcall MiCommitVadMetadataBits(__int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // r10
  _KPROCESS *Process; // r13
  __int64 v7; // r12
  unsigned int v8; // r11d
  __int64 v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rax
  _DWORD *v12; // rcx
  int v13; // edi
  __int16 v14; // ax
  __int64 v15; // r14
  __int16 v16; // bp
  int v17; // eax
  __int64 result; // rax
  __int64 v19; // [rsp+88h] [rbp+10h]

  v3 = *(unsigned __int8 *)(a1 + 32);
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0LL;
  v8 = 0;
  v19 = *(unsigned int *)(a1 + 24);
  LODWORD(v9) = *(_DWORD *)(a1 + 24) << 12;
  LODWORD(v10) = (*(_DWORD *)(a1 + 28) << 12) | 0xFFF;
  if ( a2 )
  {
    v17 = 3;
    v9 = *a2;
    v10 = a2[1] | 0xFFF;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x200000) != 0 )
      goto LABEL_18;
    v11 = *(_QWORD *)(a1 + 72);
    v12 = *(_DWORD **)v11;
    v13 = *(_DWORD *)(*(_QWORD *)v11 + 56LL);
    if ( (v13 & 0x20) == 0 )
      goto LABEL_18;
    v14 = -31132;
    v15 = *(_QWORD *)(*(_QWORD *)v12 + 56LL);
    v16 = *(_WORD *)(v15 + 48);
    if ( Process[1].Affinity.StaticBitmap[30] )
    {
      v14 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( !v14 )
        v14 = -31132;
    }
    if ( v16 != v14 && v16 != -31132 )
    {
      v17 = 3;
      a3 |= 2u;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(v15 + 51) & 4) != 0 )
    {
      if ( (v19 | (v3 << 32)) - ((__int64)(*(_QWORD *)(a1 + 80) - *((_QWORD *)v12 + 17)) >> 3) != *(_QWORD *)(*(_QWORD *)v12 + 32LL) >> 12
        || (v13 & 0x20000000) != 0
        || (v17 = 1, v12[22] == -1) )
      {
        v17 = 2;
      }
      v7 = (__int64)v12;
    }
    else
    {
LABEL_18:
      v17 = 3;
    }
  }
LABEL_12:
  if ( (a3 & 1) == 0 )
    return v8;
  result = MiCommitVadCfgBits((_DWORD)Process, a1, v9, (int)v10 + 1, v7, v17, a3);
  v8 = result;
  if ( (int)result >= 0 )
    return v8;
  return result;
}
