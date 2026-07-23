/*
 * XREFs of PspConvertSiloToServerSilo @ 0x1409061B4
 * Callers:
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x1402F70B0 (PsIsServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspJobHasChildren @ 0x1405D91D4 (PspJobHasChildren.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406823D4 (PspLockJobExclusive.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetParentSilo @ 0x140905C50 (PsGetParentSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x14090640C (PspDeleteServerSiloGlobals.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409066E4 (PspQueueDeferredWorkAndWait.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1409361EC (EtwTraceJobServerSiloStateChange.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409809EC (ObGetSiloRootDirectoryPath.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspConvertSiloToServerSilo(__int64 a1, __int64 a2, ULONG_PTR a3, char a4)
{
  char v6; // r15
  unsigned int v8; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rdi
  ULONG v12; // r9d
  int SiloRootDirectoryPath; // ebp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *Tag; // [rsp+20h] [rbp-38h]

  v6 = a2;
  v8 = 0;
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return 3221225569LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x4A0uLL, 0x476C6953u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x4A0uLL);
  v11[278] = 0;
  v11[279] = 259;
  *((_BYTE *)v11 + 1176) = a4;
  if ( a3 )
  {
    LOBYTE(v12) = v6;
    LODWORD(Tag) = 1698982227;
    SiloRootDirectoryPath = ObpReferenceObjectByHandleWithTag(a3, 2LL, ExEventObjectType, v12, Tag, v11 + 280, 0LL, 0LL);
    if ( SiloRootDirectoryPath < 0 )
      goto LABEL_7;
  }
  SiloRootDirectoryPath = ObGetSiloRootDirectoryPath(a1, v11 + 272);
  if ( SiloRootDirectoryPath < 0
    || ((CurrentThread = KeGetCurrentThread(), PspLockJobExclusive(a1, (__int64)CurrentThread), !PsIsServerSilo(a1))
      ? (!PsGetParentSilo(v15)
       ? (!PspJobHasChildren(a1)
        ? ((*(_DWORD *)(a1 + 256) & 0x400000) != 0
         ? (*(_QWORD *)(a1 + 1272) = v11, SiloRootDirectoryPath = 0)
         : (SiloRootDirectoryPath = -1073741811))
        : (SiloRootDirectoryPath = -1073740529))
       : (SiloRootDirectoryPath = -1073741791))
      : (SiloRootDirectoryPath = -1073740536),
        PspUnlockJob(a1, (__int64)CurrentThread),
        SiloRootDirectoryPath < 0) )
  {
LABEL_7:
    PspDeleteServerSiloGlobals(v11);
    return (unsigned int)SiloRootDirectoryPath;
  }
  else
  {
    EtwTraceJobServerSiloStateChange(a1, 0LL);
    if ( (int)PspQueueDeferredWorkAndWait(v16, a1) < 0 )
      return (unsigned int)-1073740955;
    return v8;
  }
}
