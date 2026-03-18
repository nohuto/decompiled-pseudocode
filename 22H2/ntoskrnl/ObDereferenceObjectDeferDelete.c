/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x14020B8F0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     ObpDeleteSymbolicLinkName @ 0x140697B5C (ObpDeleteSymbolicLinkName.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmpRunDownCmRM @ 0x1406987D0 (CmpRunDownCmRM.c)
 *     ObpDeleteDirectoryObject @ 0x140698950 (ObpDeleteDirectoryObject.c)
 *     CmpDelayedDerefKeys @ 0x1406D591C (CmpDelayedDerefKeys.c)
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140704868 (MiObtainSectionForDriver.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     CmpFreePostBlock @ 0x140768860 (CmpFreePostBlock.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B6FA0 (ObpCreateSymbolicLinkName.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978B50 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14097ED58 (PfpServiceMainThreadBoostPrep.c)
 *     PfpScenCtxScenarioSet @ 0x140A883D8 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14020B950 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
