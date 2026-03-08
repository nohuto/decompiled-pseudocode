/*
 * XREFs of KiModifySystemAllowedCpuSetsWithLock @ 0x1403991C4
 * Callers:
 *     KeModifySystemAllowedCpuSets @ 0x140399138 (KeModifySystemAllowedCpuSets.c)
 *     KeCpuPartitionMoveCpus @ 0x140572954 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KeIsSubsetAffinityEx @ 0x1402B13D0 (KeIsSubsetAffinityEx.c)
 *     KiValidateCpuSetMasks @ 0x140399340 (KiValidateCpuSetMasks.c)
 *     KeCpuSetReportParkedProcessors @ 0x140399388 (KeCpuSetReportParkedProcessors.c)
 *     RtlWriteAcquireTickLock @ 0x1403BB750 (RtlWriteAcquireTickLock.c)
 */

__int64 __fastcall KiModifySystemAllowedCpuSetsWithLock(
        unsigned int a1,
        char *a2,
        unsigned __int16 *a3,
        int a4,
        int a5)
{
  char *v5; // rsi
  __int64 v6; // r14
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // r12d
  int v12; // ebp
  unsigned int v13; // r8d
  __int64 *v14; // r11
  __int64 v15; // r10
  char *v16; // r13
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  signed __int64 v21; // [rsp+20h] [rbp-38h]

  v5 = a2;
  v6 = a4;
  v9 = 0LL;
  result = KiValidateCpuSetMasks(a2);
  if ( (int)result >= 0 )
  {
    if ( !a3 || (unsigned int)KeIsSubsetAffinityEx(a3, (unsigned __int16 *)KeActiveProcessors) )
    {
      v11 = 32;
      if ( a1 < 0x20 )
        v11 = a1;
      v12 = 0;
      KxAcquireSpinLock(&KiCpuSetLock);
      RtlWriteAcquireTickLock(&KiCpuSetSequence);
      v13 = 0;
      v14 = &KiSystemAllowedCpuSets[v6];
      v15 = 0LL;
      v16 = (char *)((char *)qword_140D1EFE8 - v5);
      v21 = &KiReservedCpuSets - (_UNKNOWN *)v5;
      do
      {
        v17 = *(_QWORD *)&v16[(_QWORD)v5];
        if ( a3 )
        {
          if ( (unsigned __int16)v13 >= *a3 )
            v18 = 0LL;
          else
            v18 = *(_QWORD *)&a3[4 * (unsigned __int16)v13 + 4];
        }
        else if ( v13 < v11 )
        {
          v18 = *(_QWORD *)v5;
        }
        else
        {
          v18 = 0LL;
          if ( !(_DWORD)v6 )
            v18 = *(_QWORD *)&v16[(_QWORD)v5];
        }
        if ( a5 )
        {
          if ( a5 == 1 )
          {
            v9 = KiSystemAllowedCpuSets[v15 + v6] | v18;
          }
          else if ( a5 == 2 )
          {
            v9 = *v14 & ~v18;
          }
        }
        else
        {
          v9 = v18;
        }
        v19 = ~*(_QWORD *)&v5[v21] & v9;
        if ( (unsigned __int16)v13 < *(_WORD *)KiSystemCpuPartition )
          v20 = *(_QWORD *)(KiSystemCpuPartition + 8LL * (unsigned __int16)v13 + 8);
        else
          v20 = 0LL;
        v9 = v20 & v19;
        KiSystemAllowedCpuSets[v15 + v6] = v9;
        if ( (v17 & v9) != v17 )
          v12 = 1;
        ++v13;
        v5 += 8;
        v15 += 2LL;
        v14 += 2;
      }
      while ( v13 < 0x20 );
      if ( !(_DWORD)v6 )
        KiRestrictedSystemCpuSetsActive = v12;
      ++KiCpuSetSequence;
      KeCpuSetReportParkedProcessors(0LL);
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
