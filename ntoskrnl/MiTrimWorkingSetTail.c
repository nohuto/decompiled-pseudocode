/*
 * XREFs of MiTrimWorkingSetTail @ 0x1402E29B0
 * Callers:
 *     MiTrimPte @ 0x140349060 (MiTrimPte.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140224C00 (MiGetAvailablePagesBelowPriority.c)
 *     MiTrimWorkingSetBuildup @ 0x1402E2A60 (MiTrimWorkingSetBuildup.c)
 *     MiTrimmedEnough @ 0x140349244 (MiTrimmedEnough.c)
 *     MiProcessVmAccessedInfo @ 0x140463A5E (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x140463B2C (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiTrimWorkingSetTail(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _DWORD *v5; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 168);
  v4 = *(_QWORD **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v1 + 174));
  while ( 1 )
  {
    MiTrimWorkingSetBuildup(a1, v3);
    if ( (*(_DWORD *)v3 & 0x800) != 0 )
    {
      v7 = *(_QWORD *)(v3 + 16) - *(_QWORD *)(v3 + 32);
      *(_QWORD *)(v1 + 8) += v7;
      *(_QWORD *)(v3 + 32) = *(_QWORD *)(v3 + 16);
      *(_QWORD *)(v4[2115] + 8LL * (*(_DWORD *)v3 & 0xF) + 2584) += v7;
    }
    v5 = *(_DWORD **)(v3 + 248);
    if ( !v5 || !*v5 || !(unsigned int)MiQueryEPTAccessedState(a1, v5, 0LL) )
      break;
    MiProcessVmAccessedInfo(a1, *(_QWORD *)(v3 + 248), MiTrimWorkingSetEPTCallback, v3);
  }
  if ( (*(_DWORD *)v3 & 0x8000) != 0 && (unsigned int)MiTrimmedEnough(v1, v3) )
    return 5LL;
  if ( (*(_DWORD *)v3 & 0xF) != 0
    && *(_QWORD *)(v3 + 16) < *(_QWORD *)(v3 + 8)
    && *(_QWORD *)(v3 + 40) >= 0x20000uLL
    && *(_QWORD *)(v1 + 144) >> 3 >= *(_QWORD *)(v3 + 40)
    && (unsigned __int64)MiGetAvailablePagesBelowPriority(v4, 6u) <= 0x120 )
  {
    *(_DWORD *)v3 = *(_DWORD *)v3 & 0xFFFFFF00 | (16 * (*(_DWORD *)v3 & 0xF | 0x1000));
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 16);
  }
  else if ( (*(_DWORD *)v3 & 0x10000) != 0 )
  {
    v8 = *(_QWORD *)(v3 + 16);
    if ( v8 >= *(_QWORD *)(v3 + 8) || v8 >= *(_QWORD *)(v3 + 24) + 576LL )
      *(_DWORD *)v3 = *(_DWORD *)v3 & 0xFFFEFFF0 | ((unsigned __int8)*(_DWORD *)v3 >> 4);
  }
  return 0LL;
}
