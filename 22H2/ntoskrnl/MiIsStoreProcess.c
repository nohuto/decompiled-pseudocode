/*
 * XREFs of MiIsStoreProcess @ 0x1403334C0
 * Callers:
 *     MiAgeWorkingSet @ 0x140208B00 (MiAgeWorkingSet.c)
 *     MiInPagePageTable @ 0x14028C440 (MiInPagePageTable.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiCheckFatalAccessViolation @ 0x140318CBC (MiCheckFatalAccessViolation.c)
 *     MiStoreCheckCandidatePage @ 0x14033166C (MiStoreCheckCandidatePage.c)
 *     MiCapturePfnVm @ 0x140367A50 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiOrderTrimList @ 0x14053B580 (MiOrderTrimList.c)
 *     MiCombinePte @ 0x14055C840 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x14055CB64 (MiCombineWorkingSet.c)
 *     MiCloneProcessAddressSpace @ 0x1408D90B0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1160) )
  {
    if ( *(_QWORD *)(v1 + 1280) == a1 )
      return 1LL;
  }
  return result;
}
