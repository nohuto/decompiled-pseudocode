/*
 * XREFs of PspEnforceLimitsJobPreCallback @ 0x1407E8A50
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspQueryRateControlHistory @ 0x1407E8B5C (PspQueryRateControlHistory.c)
 */

__int64 __fastcall PspEnforceLimitsJobPreCallback(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  int v5; // r12d
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // ebp

  v2 = 0;
  *(_DWORD *)(a1 + 1448) = PspEnforcementSequenceNumber;
  if ( (*(_DWORD *)(a1 + 1040) & 6) != 0 || *(_DWORD *)(a1 + 1064) || (*(_DWORD *)(a1 + 1536) & 0x800) != 0 )
  {
    v5 = (_DWORD)a2 + 44;
    *a2 = *(_QWORD *)(a1 + 976);
    v6 = 0;
    v7 = 60LL;
    a2[1] = *(_QWORD *)(a1 + 1016);
    a2[2] = 0LL;
    do
    {
      v8 = *(_QWORD *)(a1 + 1200);
      if ( !v8 || (v9 = *(_DWORD *)(v7 + v8)) == 0 )
        v9 = 1;
      PspQueryRateControlHistory(a1, v9, 0, v5, v6);
      *(_DWORD *)((char *)a2 + v7 - 28) = v9;
      ++v6;
      v7 += 4LL;
      v5 += 4;
    }
    while ( v6 < 3 );
  }
  else
  {
    memset((void *)(a1 + 1336), 0, 0x68uLL);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1536), 0xFFBFFFFF);
    return (unsigned int)-1073741536;
  }
  return v2;
}
