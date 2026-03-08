/*
 * XREFs of SyncLoadDDB @ 0x1C00AB82C
 * Callers:
 *     AMLILoadDDB @ 0x1C00AB124 (AMLILoadDDB.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     RestartContext @ 0x1C00512E8 (RestartContext.c)
 *     FreeContext @ 0x1C0053624 (FreeContext.c)
 *     GetThreadCurrentContext @ 0x1C00537E0 (GetThreadCurrentContext.c)
 */

__int64 __fastcall SyncLoadDDB(char *Entry)
{
  char v2; // si
  unsigned int restarted; // ebx
  __int64 ThreadCurrentContext; // rbx
  KIRQL v5; // r10
  NTSTATUS v6; // eax
  const void *v7; // rbp
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = 0;
  v2 = 0;
  if ( (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_LOAD, &v11) >= 0 && v11 == 2 )
  {
    v2 = 1;
    _InterlockedIncrement(&gAllowInvalidReclaimMemoryMap);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ThreadCurrentContext = GetThreadCurrentContext();
    KeReleaseSpinLock(&SpinLock, v5);
    if ( ThreadCurrentContext )
    {
      restarted = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
      PrintDebugMessage(182, 0LL, 0LL, 0LL, 0LL);
      *((_QWORD *)Entry + 11) = 0LL;
      FreeContext(Entry);
    }
    else
    {
      v9 = 0LL;
      memset(&Event, 0, 20);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *((_DWORD *)Entry + 16) |= 0x200u;
      *((_QWORD *)Entry + 21) = EvalMethodComplete;
      *((_QWORD *)Entry + 23) = &v9;
      restarted = RestartContext((__int64)Entry, 0);
      if ( restarted == 32772 )
      {
        while ( 1 )
        {
          v6 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v7 = (const void *)v6;
          if ( v6 )
            break;
          restarted = v9;
          if ( (_DWORD)v9 == 32771 )
            restarted = RestartContext(*((__int64 *)&v9 + 1), 0);
          if ( restarted != 32772 )
            goto LABEL_15;
        }
        restarted = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
        PrintDebugMessage(183, v7, 0LL, 0LL, 0LL);
      }
    }
LABEL_15:
    if ( v2 )
      _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  }
  else
  {
    restarted = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
    PrintDebugMessage(184, 0LL, 0LL, 0LL, 0LL);
    *((_QWORD *)Entry + 11) = 0LL;
    FreeContext(Entry);
  }
  return restarted;
}
