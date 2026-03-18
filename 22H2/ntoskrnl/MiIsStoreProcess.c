/*
 * XREFs of MiIsStoreProcess @ 0x140216DB4
 * Callers:
 *     MiProcessSuitableForCombining @ 0x140216D74 (MiProcessSuitableForCombining.c)
 *     MiAgeWorkingSet @ 0x14025B650 (MiAgeWorkingSet.c)
 *     MiCheckFatalAccessViolation @ 0x14036810C (MiCheckFatalAccessViolation.c)
 *     MiOrderTrimList @ 0x14046B68E (MiOrderTrimList.c)
 *     MiStoreCheckCandidatePage @ 0x14046CFE0 (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MiCloneProcessAddressSpace @ 0x140A489C4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1192) )
  {
    if ( *(_QWORD *)(v1 + 1344) == a1 )
      return 1LL;
  }
  return result;
}
