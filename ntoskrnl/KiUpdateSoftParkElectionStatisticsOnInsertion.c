/*
 * XREFs of KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14036DF98
 * Callers:
 *     KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x14040AFD4 (KiUpdateLocalReadyQueueStatisticsOnInsertion.c)
 * Callees:
 *     KiScheduleSoftParkElectionIfNecessary @ 0x140258400 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KeQueryGroupAffinityEx @ 0x1403B16A0 (KeQueryGroupAffinityEx.c)
 *     KiAcquireSoftParkElectionLock @ 0x14040A5D8 (KiAcquireSoftParkElectionLock.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting @ 0x14040AF08 (Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting.c)
 */

__int64 __fastcall KiUpdateSoftParkElectionStatisticsOnInsertion(__int64 a1, __int64 a2)
{
  int IsEnabledNoReporting; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v7; // si
  unsigned int v8; // eax
  __int16 v9; // dx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax

  IsEnabledNoReporting = Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting();
  v6 = *(unsigned int *)(a2 + 84);
  *(_BYTE *)(a2 + 1648) = *(_BYTE *)(a2 + 512);
  v7 = IsEnabledNoReporting != 0;
  *(_DWORD *)(a2 + 2292) = v6;
  v8 = *(_DWORD *)(a2 + 80);
  if ( v8 <= (unsigned int)v6 )
    v8 = v6;
  *(_BYTE *)(a2 + 1650) = v8 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  *(_BYTE *)(a2 + 1649) = *(_BYTE *)(a2 + 516);
  if ( v7 )
  {
    v9 = *(_WORD *)(a1 + 662);
    *(_OWORD *)(a2 + 2304) = 0LL;
    v10 = *(_QWORD *)(a2 + 576);
    *(_WORD *)(a2 + 2312) = v9;
    *(_QWORD *)(a2 + 2304) = KeQueryGroupAffinityEx(v10);
  }
  if ( *(_DWORD *)(a2 + 2292) > (unsigned int)KeSoftParkedQueueThreshold )
    *(_DWORD *)(a2 + 2292) = KeSoftParkedQueueThreshold;
  if ( v7 )
    KiAcquireSoftParkElectionLock(a1, v5, v6);
  *(_QWORD *)(a2 + 2296) = *(_QWORD *)(a1 + 696);
  ++*(_DWORD *)(a1 + 704);
  *(_QWORD *)(a1 + 712) += *(unsigned int *)(a2 + 2292);
  if ( v7 )
    *(_QWORD *)(a1 + 1680) |= *(_QWORD *)(a2 + 2304);
  v11 = *(unsigned __int8 *)(a2 + 1649) + 8 * (*(unsigned __int8 *)(a2 + 1650) + 2LL * *(unsigned __int8 *)(a2 + 1648));
  *(_QWORD *)(a1 + 8 * v11 + 784) += *(unsigned int *)(a2 + 2292);
  result = KiScheduleSoftParkElectionIfNecessary(a1);
  if ( v7 )
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 688), 0LL);
  return result;
}
