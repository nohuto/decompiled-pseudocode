/*
 * XREFs of LdrpPrepareModuleForExecution @ 0x18003D888
 * Callers:
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlIsCriticalSectionLockedByThread @ 0x180014890 (RtlIsCriticalSectionLockedByThread.c)
 *     LdrpDynamicShimModule @ 0x18003D9A4 (LdrpDynamicShimModule.c)
 *     LdrpNotifyLoadOfGraph @ 0x18003DB84 (LdrpNotifyLoadOfGraph.c)
 *     LdrpReleaseLoaderLock @ 0x18003E664 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6C4 (LdrpAcquireLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D048 (LdrpInitializeGraphRecurse.c)
 *     LdrpCondenseGraph @ 0x18006F434 (LdrpCondenseGraph.c)
 *     LdrpAddNodeServiceTag @ 0x1800798B0 (LdrpAddNodeServiceTag.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpPrepareModuleForExecution(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v10; // al
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
    return (unsigned int)v4;
  v5 = *(_QWORD *)(a1 + 152);
  switch ( *(_DWORD *)(v5 + 56) )
  {
    case 5:
      LdrpCondenseGraph(v5);
      break;
    case 6:
      break;
    case 7:
      goto LABEL_9;
    default:
      if ( (unsigned int)(*(_DWORD *)(v5 + 56) - 8) >= 2 )
        return (unsigned int)-1073741595;
      return (unsigned int)v4;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 && LODWORD(NtCurrentTeb()->SubProcessTag) )
    LdrpAddNodeServiceTag(*(_QWORD *)(a1 + 152));
  v4 = LdrpNotifyLoadOfGraph(*(_QWORD *)(a1 + 152));
  if ( v4 >= 0 )
  {
    v4 = LdrpDynamicShimModule(*(_QWORD *)(a1 + 152));
    if ( v4 >= 0 )
    {
LABEL_9:
      v6 = *(_QWORD *)(a1 + 176);
      if ( v6 && (*(_BYTE *)(v6 + 32) & 1) == 0 )
      {
        LdrpAcquireLoaderLock();
        v7 = *(_QWORD *)(a1 + 152);
        v11 = 0;
        v4 = LdrpInitializeGraphRecurse(v7, a2, &v11);
        LdrpReleaseLoaderLock(v8, 2LL);
      }
      return (unsigned int)v4;
    }
    v10 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1937,
        (unsigned int)"LdrpPrepareModuleForExecution",
        1,
        (__int64)"Failed to load for appcompat reasons\n");
      v10 = LdrpDebugFlags;
    }
    if ( (v10 & 0x40) != 0 )
      __debugbreak();
  }
  return (unsigned int)v4;
}
