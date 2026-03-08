/*
 * XREFs of SyncEvalObject @ 0x1C0054E8C
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     LogSchedEvent @ 0x1C004E3AC (LogSchedEvent.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     RestartContext @ 0x1C00512E8 (RestartContext.c)
 *     GetThreadCurrentContext @ 0x1C00537E0 (GetThreadCurrentContext.c)
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005496C (NestAsyncEvalObject.c)
 */

__int64 __fastcall SyncEvalObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v8; // r14
  int v9; // eax
  __int64 ThreadCurrentContext; // rdi
  KIRQL v11; // r10
  KIRQL CurrentIrql; // al
  unsigned int v13; // ebx
  unsigned int restarted; // eax
  KIRQL v15; // al
  KIRQL v16; // al
  NTSTATUS v17; // eax
  const void *v18; // rbx
  __int64 ObjectPath; // rax
  char *v20; // rdx
  void *v21; // rdi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-60h]
  __int64 *v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  int v26; // [rsp+50h] [rbp-30h]
  int v27; // [rsp+54h] [rbp-2Ch]
  __int128 v28; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF
  int v30; // [rsp+B0h] [rbp+30h] BYREF

  v30 = 0;
  v27 = 0;
  v26 = 8;
  v25 = a1 + 120;
  v24 = &v25;
  v8 = 0;
  v28 = 0LL;
  memset(&Event, 0, 20);
  v9 = EmClientRuleEvaluate(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_EVAL, &v24, 1LL, &v30);
  if ( v9 >= 0 && v30 == 2 || v9 == -1073741818 && v30 )
  {
    v8 = 1;
    _InterlockedAdd(&gAllowInvalidReclaimMemoryMap, 1u);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  ThreadCurrentContext = GetThreadCurrentContext();
  KeReleaseSpinLock(&SpinLock, v11);
  if ( ThreadCurrentContext )
  {
    if ( (*(_DWORD *)(ThreadCurrentContext + 64) & 0x100) != 0 )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(ThreadCurrentContext, -1072431098);
      PrintDebugMessage(179, 0LL, 0LL, 0LL, 0LL);
      v13 = -1072431098;
      goto LABEL_13;
    }
    CurrentIrql = KeGetCurrentIrql();
    LogSchedEvent(1314085198, ThreadCurrentContext, CurrentIrql, a1, 0LL);
    v13 = NestAsyncEvalObject(a1, a2, a3, a4, (__int64)Timeout, (__int64)&v28);
    if ( v13 != 32772 )
      goto LABEL_13;
    restarted = RestartContext(ThreadCurrentContext, 0);
  }
  else
  {
    v15 = KeGetCurrentIrql();
    LogSchedEvent(1398361667, 0LL, v15, a1, 0LL);
    restarted = AsyncEvalObject(a1, a2, a3, a4, (__int64)EvalMethodComplete, (__int64)&v28, 0);
  }
  v13 = restarted;
LABEL_13:
  v16 = KeGetCurrentIrql();
  if ( v13 == 32772 )
  {
    if ( v16 >= 2u )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(ThreadCurrentContext, -1072431098);
      ObjectPath = GetObjectPath(a1);
      v20 = byte_1C00622D0;
      v21 = (void *)ObjectPath;
      if ( ObjectPath )
        v20 = (char *)ObjectPath;
      PrintDebugMessage(181, v20, 0LL, 0LL, 0LL);
      v13 = -1072431098;
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
    }
    else
    {
      while ( 1 )
      {
        v17 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v18 = (const void *)v17;
        if ( v17 )
          break;
        v13 = v28;
        if ( (_DWORD)v28 == 32771 )
          v13 = RestartContext(*((__int64 *)&v28 + 1), 0);
        if ( v13 != 32772 )
          goto LABEL_25;
      }
      LogError(-1072431098);
      AcpiDiagTraceAmlError(ThreadCurrentContext, -1072431098);
      PrintDebugMessage(180, v18, 0LL, 0LL, 0LL);
      v13 = -1072431098;
    }
  }
LABEL_25:
  if ( v8 )
    _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  return v13;
}
