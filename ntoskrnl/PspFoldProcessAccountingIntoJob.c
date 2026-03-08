/*
 * XREFs of PspFoldProcessAccountingIntoJob @ 0x1406F8590
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1406FB110 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     PsAddProcessEnergyValues @ 0x14023820C (PsAddProcessEnergyValues.c)
 *     PoEnergyEstimationEnabled @ 0x1402384C0 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1406B0B60 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PspFoldProcessAccountingIntoJob(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  _OWORD v15[27]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = a3[1];
  v7 = *a3;
  *(_QWORD *)(a1 + 1240) += a3[2];
  *(_QWORD *)(a1 + 176) += a3[3];
  *(_QWORD *)(a1 + 160) += v6;
  *(_QWORD *)(a1 + 168) += v7;
  *(_QWORD *)(a1 + 184) += v6;
  v8 = 6LL;
  *(_QWORD *)(a1 + 192) += v7;
  v9 = (_QWORD *)(a1 + 584);
  *(_QWORD *)(a1 + 200) += a3[4];
  do
  {
    *v9 += *(_QWORD *)((char *)v9 + (_QWORD)a3 - a1 - 544);
    ++v9;
    --v8;
  }
  while ( v8 );
  *(_DWORD *)(a1 + 208) += *(_DWORD *)(a2 + 1668);
  *(_QWORD *)(a1 + 1800) += a3[11];
  *(_QWORD *)(a1 + 1808) += a3[12];
  v10 = *(_QWORD **)(a2 + 2232);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 632) += *v10;
    *(_QWORD *)(a1 + 640) += v10[1];
    *(_QWORD *)(a1 + 648) += v10[2];
    *(_QWORD *)(a1 + 656) += v10[3];
    *(_QWORD *)(a1 + 664) += v10[4];
  }
  v11 = *(_QWORD *)(a2 + 1616);
  if ( v11 > *(_QWORD *)(a1 + 696) )
  {
    _m_prefetchw((const void *)(a1 + 696));
    v13 = *(_QWORD *)(a1 + 696);
    do
    {
      if ( v11 <= v13 )
        break;
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 696), v11, v13);
    }
    while ( v13 != v14 );
  }
  result = PoEnergyEstimationEnabled();
  if ( (_BYTE)result )
  {
    PsQueryProcessEnergyValues((_QWORD *)a2, v15);
    return PsAddProcessEnergyValues(*(_QWORD **)(a1 + 1544), (__int64)v15);
  }
  return result;
}
