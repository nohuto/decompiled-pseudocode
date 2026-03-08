/*
 * XREFs of MiSimpleAgeWorkingSetTail @ 0x140463CB0
 * Callers:
 *     MiSimpleAgePte @ 0x140632C70 (MiSimpleAgePte.c)
 * Callees:
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x140463A5E (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x140463B2C (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiSimpleAgeWorkingSetTail(__int64 a1)
{
  __int64 i; // rbx
  _DWORD *v3; // rdx

  for ( i = *(_QWORD *)(a1 + 168);
        ;
        MiProcessVmAccessedInfo(
          a1,
          *(_DWORD **)(i + 248),
          (__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64))MiSimpleAgeWorkingSetEPTCallback,
          i) )
  {
    MiFlushTbList(*(int **)(i + 56));
    v3 = *(_DWORD **)(i + 248);
    if ( !v3 || !*v3 || !(unsigned int)MiQueryEPTAccessedState(a1, (__int64)v3, 1) )
      break;
  }
  return 0LL;
}
