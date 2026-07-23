/*
 * XREFs of PspFoldProcessAccountingIntoJob @ 0x14060BA1C
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     PsAddProcessEnergyValues @ 0x140275E60 (PsAddProcessEnergyValues.c)
 *     PoEnergyEstimationEnabled @ 0x1402AA040 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1406D8A30 (PsQueryProcessEnergyValues.c)
 */

char __fastcall PspFoldProcessAccountingIntoJob(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdx
  char result; // al
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  _BYTE v15[432]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = a3[1];
  v7 = *a3;
  *(_QWORD *)(a1 + 1024) += a3[2];
  *(_QWORD *)(a1 + 176) += a3[3];
  *(_QWORD *)(a1 + 160) += v6;
  *(_QWORD *)(a1 + 168) += v7;
  *(_QWORD *)(a1 + 184) += v6;
  v8 = 6LL;
  *(_QWORD *)(a1 + 192) += v7;
  v9 = (_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 200) += a3[4];
  do
  {
    *v9 += *(_QWORD *)((char *)v9 + (_QWORD)a3 - a1 - 448);
    ++v9;
    --v8;
  }
  while ( v8 );
  *(_DWORD *)(a1 + 208) += *(_DWORD *)(a2 + 1668);
  *(_QWORD *)(a1 + 1584) += a3[11];
  *(_QWORD *)(a1 + 1592) += a3[12];
  v10 = *(_QWORD **)(a2 + 2232);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 536) += *v10;
    *(_QWORD *)(a1 + 544) += v10[1];
    *(_QWORD *)(a1 + 552) += v10[2];
    *(_QWORD *)(a1 + 560) += v10[3];
    *(_QWORD *)(a1 + 568) += v10[4];
  }
  v11 = *(_QWORD *)(a2 + 1616);
  if ( v11 > *(_QWORD *)(a1 + 600) )
  {
    _m_prefetchw((const void *)(a1 + 600));
    v13 = *(_QWORD *)(a1 + 600);
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 600), v11, v13);
    }
    while ( v13 != v14 && v11 > v13 );
  }
  result = PoEnergyEstimationEnabled();
  if ( result )
  {
    PsQueryProcessEnergyValues(a2, v15);
    return PsAddProcessEnergyValues(*(_QWORD *)(a1 + 1328), (__int64)v15);
  }
  return result;
}
