/*
 * XREFs of SyncEvalObject @ 0x1C0004490
 * Callers:
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 * Callees:
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0023A98 (GetObjectPath.c)
 *     RestartContext @ 0x1C0023DF0 (RestartContext.c)
 *     LogSchedEvent @ 0x1C002A1C0 (LogSchedEvent.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     NestAsyncEvalObject @ 0x1C00683FC (NestAsyncEvalObject.c)
 */

__int64 __fastcall SyncEvalObject(__int64 a1, int a2, int a3, int a4)
{
  char v8; // si
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v11; // rbp
  __int64 v12; // rcx
  struct _KTHREAD *v13; // r9
  __int64 v14; // r10
  __int64 CurrentIrql; // r8
  unsigned __int32 v16; // ebx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  unsigned int restarted; // eax
  unsigned int v20; // ebx
  unsigned __int8 v21; // al
  __int64 result; // rax
  NTSTATUS v23; // ebx
  __int64 *v24; // rax
  __int64 ObjectPath; // rax
  void *v26; // rdx
  void *v27; // rdi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  _QWORD *v29; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v30[2]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v31; // [rsp+58h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF
  int v33; // [rsp+B0h] [rbp+8h] BYREF

  v30[1] = 8LL;
  v31 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v30[0] = a1 + 120;
  v29 = v30;
  v33 = 0;
  v8 = 0;
  v9 = EmClientRuleEvaluate(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_EVAL, &v29, 1LL, &v33);
  if ( v9 >= 0 && v33 == 2 || v9 == -1073741818 && v33 )
  {
    v8 = 1;
    _InterlockedIncrement(&gAllowInvalidReclaimMemoryMap);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  byte_1C00827B0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = RunningContextListHead - 392;
  if ( &RunningContextListHead != (__int64 *)RunningContextListHead )
  {
    while ( *(struct _KTHREAD **)(v12 + 408) != CurrentThread )
    {
      v24 = *(__int64 **)(v12 + 392);
      v12 = (__int64)(v24 - 49);
      if ( &RunningContextListHead == v24 )
        goto LABEL_5;
    }
    v11 = v12;
  }
LABEL_5:
  KeReleaseSpinLock(&SpinLock, byte_1C00827B0);
  if ( !v11 )
  {
    v13 = KeGetCurrentThread();
    v14 = (unsigned int)gReadyQueue;
    CurrentIrql = KeGetCurrentIrql();
    if ( (gDebugger & 0x8000) != 0 && qword_1C00828E0 )
    {
      v16 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00828D8 + 1, 1u);
      if ( (_DWORD)qword_1C00828D8 == 204 )
        v17 = v16 % 0xCC;
      else
        v17 = v16 % (unsigned int)qword_1C00828D8;
      v18 = 72LL * v17;
      *(_QWORD *)((char *)qword_1C00828E0 + v18 + 8) = MEMORY[0xFFFFF78000000008];
      *(_DWORD *)((char *)qword_1C00828E0 + v18) = 1398361667;
      *(_QWORD *)((char *)qword_1C00828E0 + v18 + 16) = v13;
      *(_QWORD *)((char *)qword_1C00828E0 + v18 + 24) = 0LL;
      *(_QWORD *)((char *)qword_1C00828E0 + v18 + 32) = 0LL;
      *(_QWORD *)((char *)qword_1C00828E0 + v18 + 40) = v14;
      *(_QWORD *)((char *)qword_1C00828E0 + v18 + 48) = CurrentIrql;
      *(_QWORD *)((char *)qword_1C00828E0 + v18 + 56) = a1;
      *(_QWORD *)((char *)qword_1C00828E0 + v18 + 64) = 0LL;
    }
    restarted = AsyncEvalObject(a1, a2, a3, a4, (__int64)EvalMethodComplete, (__int64)&v31, 0);
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v11 + 64) & 0x100) != 0 )
  {
    LogError(3222536198LL);
    AcpiDiagTraceAmlError(v11, 3222536198LL);
    PrintDebugMessage(179, 0, 0, 0, 0LL);
    v20 = -1072431098;
  }
  else
  {
    LogSchedEvent(1314085198, v11, KeGetCurrentIrql(), a1, 0LL);
    v20 = NestAsyncEvalObject(a1, a2, a3, a4, (__int64)Timeout, (__int64)&v31);
    if ( v20 == 32772 )
    {
      restarted = RestartContext(v11, 0LL);
LABEL_12:
      v20 = restarted;
    }
  }
  v21 = KeGetCurrentIrql();
  if ( v20 == 32772 )
  {
    if ( v21 >= 2u )
    {
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(v11, 3222536198LL);
      ObjectPath = GetObjectPath(a1);
      v26 = &unk_1C00701BA;
      if ( ObjectPath )
        LODWORD(v26) = ObjectPath;
      v27 = (void *)ObjectPath;
      PrintDebugMessage(181, (_DWORD)v26, 0, 0, 0LL);
      v20 = -1072431098;
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
    }
    else
    {
      while ( 1 )
      {
        v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        if ( v23 )
          break;
        v20 = v31;
        if ( (_DWORD)v31 == 32771 )
          v20 = RestartContext(*((_QWORD *)&v31 + 1), 0LL);
        if ( v20 != 32772 )
          goto LABEL_14;
      }
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(v11, 3222536198LL);
      PrintDebugMessage(180, v23, 0, 0, 0LL);
      v20 = -1072431098;
    }
  }
LABEL_14:
  result = v20;
  if ( v8 )
    _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  return result;
}
