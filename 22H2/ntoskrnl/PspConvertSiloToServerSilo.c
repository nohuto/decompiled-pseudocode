/*
 * XREFs of PspConvertSiloToServerSilo @ 0x1409ACC94
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020C040 (PsIsServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetParentSilo @ 0x1406831E0 (PsGetParentSilo.c)
 *     PspUnlockJob @ 0x1406A3BFC (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406A3DF8 (PspLockJobExclusive.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspJobHasChildren @ 0x1407E6AD4 (PspJobHasChildren.c)
 *     PspDeleteServerSiloGlobals @ 0x1409ACF40 (PspDeleteServerSiloGlobals.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AD28C (PspQueueDeferredWorkAndWait.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1409E568C (EtwTraceJobServerSiloStateChange.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73EB4 (ObGetSiloRootDirectoryPath.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspConvertSiloToServerSilo(__int64 a1, char a2, ULONG_PTR a3, char a4)
{
  unsigned int v8; // ebx
  __int64 Pool2; // rax
  char *v11; // rdi
  int SiloRootDirectoryPath; // ebp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx

  v8 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  Pool2 = ExAllocatePool2(72LL, 1376LL, 1198287187LL);
  v11 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 1304) = 0;
  *(_DWORD *)(Pool2 + 1308) = 259;
  *(_BYTE *)(Pool2 + 1368) = a4;
  if ( a3
    && (SiloRootDirectoryPath = ObpReferenceObjectByHandleWithTag(
                                  a3,
                                  2,
                                  (__int64)ExEventObjectType,
                                  a2,
                                  0x65446953u,
                                  (_QWORD *)(Pool2 + 1312),
                                  0LL,
                                  0LL),
        SiloRootDirectoryPath < 0)
    || (SiloRootDirectoryPath = ObGetSiloRootDirectoryPath(a1, v11 + 1280), SiloRootDirectoryPath < 0)
    || ((CurrentThread = KeGetCurrentThread(), PspLockJobExclusive(a1, (__int64)CurrentThread), !PsIsServerSilo(a1))
      ? (!PsGetParentSilo(v14)
       ? (!PspJobHasChildren(a1)
        ? ((*(_DWORD *)(a1 + 256) & 0x400000) != 0
         ? (*(_QWORD *)(a1 + 1488) = v11, SiloRootDirectoryPath = 0)
         : (SiloRootDirectoryPath = -1073741811))
        : (SiloRootDirectoryPath = -1073740529))
       : (SiloRootDirectoryPath = -1073741791))
      : (SiloRootDirectoryPath = -1073740536),
        PspUnlockJob(a1, (__int64)CurrentThread),
        SiloRootDirectoryPath < 0) )
  {
    PspDeleteServerSiloGlobals(v11);
    return (unsigned int)SiloRootDirectoryPath;
  }
  else
  {
    EtwTraceJobServerSiloStateChange(a1, 0LL);
    if ( (int)PspQueueDeferredWorkAndWait(v15, a1) < 0 )
      return (unsigned int)-1073740955;
    return v8;
  }
}
