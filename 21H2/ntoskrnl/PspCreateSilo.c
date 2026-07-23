/*
 * XREFs of PspCreateSilo @ 0x1405D90DC
 * Callers:
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     PspJobHasChildren @ 0x1405D91D4 (PspJobHasChildren.c)
 *     PspAllocStorage @ 0x140621810 (PspAllocStorage.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406823D4 (PspLockJobExclusive.c)
 *     PspFreeStorage @ 0x14090EF38 (PspFreeStorage.c)
 */

__int64 __fastcall PspCreateSilo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // rdi
  __int64 result; // rax
  unsigned int v6; // esi
  __int64 v7; // rcx
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v8 = 0LL;
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return 3221225569LL;
  if ( !*(_QWORD *)(a1 + 1304) )
  {
    result = PspAllocStorage(&v8);
    if ( (int)result < 0 )
      return result;
    v3 = (void *)v8;
  }
  PspLockJobExclusive(a1, CurrentThread);
  if ( (unsigned __int8)PspJobHasChildren(a1) )
  {
    v6 = -1073740529;
  }
  else if ( (*(_DWORD *)(a1 + 1320) & 0x40000000) != 0 )
  {
    v6 = -1073740536;
  }
  else if ( (*(_DWORD *)(a1 + 256) & 0x402000) != 0 )
  {
    v7 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1304), (signed __int64)v3, 0LL) != 0);
    v8 &= v7;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1320), 0x40000000u);
    v3 = (void *)v8;
    v6 = 0;
  }
  else
  {
    v6 = -1073741811;
  }
  PspUnlockJob(a1, CurrentThread);
  if ( v3 )
    PspFreeStorage(v3);
  return v6;
}
