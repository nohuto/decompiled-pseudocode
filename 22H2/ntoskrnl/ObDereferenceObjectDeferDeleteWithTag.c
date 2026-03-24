/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1402C2A00
 * Callers:
 *     PspRevertContainerImpersonation @ 0x14021FAA0 (PspRevertContainerImpersonation.c)
 *     IopCallDriverReference @ 0x14022B670 (IopCallDriverReference.c)
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     KiAbProcessThreadLocks @ 0x140271744 (KiAbProcessThreadLocks.c)
 *     ExDeleteResourceLite @ 0x140275720 (ExDeleteResourceLite.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140275E04 (CcDereferenceSharedCacheMapFileObject.c)
 *     ExReinitializeResourceLite @ 0x140277FA0 (ExReinitializeResourceLite.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     ExReturnPoolQuota @ 0x14030631C (ExReturnPoolQuota.c)
 *     MmChangeSectionBackingFile @ 0x14031C484 (MmChangeSectionBackingFile.c)
 *     IopBoostThreadCallback @ 0x14031F200 (IopBoostThreadCallback.c)
 *     FsRtlpClearOwner @ 0x140375A58 (FsRtlpClearOwner.c)
 *     CcChangeBackingFileObject @ 0x1404E8A28 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x1405221D0 (KiMonitorCacheErrata.c)
 *     VrpDestroyNamespaceNode @ 0x1405D3260 (VrpDestroyNamespaceNode.c)
 *     VrpFreeKeyContext @ 0x1405D5A80 (VrpFreeKeyContext.c)
 *     PspChargeProcessWakeCounter @ 0x1405E6B10 (PspChargeProcessWakeCounter.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140315484 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
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
