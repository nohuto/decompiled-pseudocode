/*
 * XREFs of MiIsStoreProcess @ 0x140229574
 * Callers:
 *     MiAgeWorkingSet @ 0x1402248A0 (MiAgeWorkingSet.c)
 *     MiProcessSuitableForCombining @ 0x140229534 (MiProcessSuitableForCombining.c)
 *     MiCheckFatalAccessViolation @ 0x1402FCEDC (MiCheckFatalAccessViolation.c)
 *     MiOrderTrimList @ 0x14046378E (MiOrderTrimList.c)
 *     MiStoreCheckCandidatePage @ 0x1404650E0 (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiCloneProcessAddressSpace @ 0x140A45CF4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1192) )
  {
    if ( *(_QWORD *)(v1 + 1344) == a1 )
      return 1LL;
  }
  return result;
}
