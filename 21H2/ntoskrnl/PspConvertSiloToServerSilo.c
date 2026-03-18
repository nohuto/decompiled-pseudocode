/*
 * XREFs of PspConvertSiloToServerSilo @ 0x1409ABCF4
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020A400 (PsIsServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PspJobHasChildren @ 0x1406E5090 (PspJobHasChildren.c)
 *     PspUnlockJob @ 0x1406FFE90 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406FFED4 (PspLockJobExclusive.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x1409ABFB0 (PspDeleteServerSiloGlobals.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AC2BC (PspQueueDeferredWorkAndWait.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1409E24C0 (EtwTraceJobServerSiloStateChange.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A34854 (ObGetSiloRootDirectoryPath.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspConvertSiloToServerSilo(__int64 a1, char a2, ULONG_PTR a3, char a4)
{
  unsigned int v8; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rdi
  int SiloRootDirectoryPath; // ebp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx

  v8 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x560uLL, 0x476C6953u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x560uLL);
  v11[326] = 0;
  v11[327] = 259;
  *((_BYTE *)v11 + 1368) = a4;
  if ( a3
    && (SiloRootDirectoryPath = ObpReferenceObjectByHandleWithTag(
                                  a3,
                                  2,
                                  (__int64)ExEventObjectType,
                                  a2,
                                  0x65446953u,
                                  (_QWORD *)v11 + 164,
                                  0LL,
                                  0LL),
        SiloRootDirectoryPath < 0)
    || (SiloRootDirectoryPath = ObGetSiloRootDirectoryPath(a1, v11 + 320), SiloRootDirectoryPath < 0)
    || ((CurrentThread = KeGetCurrentThread(), PspLockJobExclusive(a1, (__int64)CurrentThread), !PsIsServerSilo(a1))
      ? (!PsGetParentSilo(v14)
       ? (!PspJobHasChildren(a1)
        ? ((*(_DWORD *)(a1 + 256) & 0x400000) != 0
         ? (*(_QWORD *)(a1 + 1464) = v11, SiloRootDirectoryPath = 0)
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
