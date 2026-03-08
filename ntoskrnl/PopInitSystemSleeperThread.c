/*
 * XREFs of PopInitSystemSleeperThread @ 0x1409887A0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406DBE00 (PsLookupThreadByThreadId.c)
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA2FFC (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140AA309C (PopPushPowerStateTransitionRecord.c)
 */

__int64 __fastcall PopInitSystemSleeperThread(LONG a1, struct _KEVENT *a2, _OWORD *a3)
{
  __int64 result; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  HANDLE ProcessId[2]; // [rsp+58h] [rbp-1h] BYREF
  __int128 v13; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+84h] [rbp+2Bh]
  __int128 v17; // [rsp+88h] [rbp+2Fh]
  PEPROCESS Process; // [rsp+C8h] [rbp+6Fh] BYREF
  PETHREAD Thread; // [rsp+D8h] [rbp+7Fh] BYREF

  a2[3].Header.LockNV = a1;
  v16 = 0;
  Handle = 0LL;
  Process = 0LL;
  Thread = 0LL;
  *(_OWORD *)ProcessId = 0LL;
  KeInitializeEvent(a2, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 1, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 2, SynchronizationEvent, 0);
  v14 = 0LL;
  v13 = 0x30uLL;
  v15 = 512;
  v17 = 0LL;
  result = PsCreateSystemThreadEx(
             (__int64)&Handle,
             0,
             &v13,
             0LL,
             (__int64)ProcessId,
             (__int64)PopTransitionToSleep,
             (__int64)a2,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    ZwClose(Handle);
    PsLookupProcessByProcessId(ProcessId[0], &Process);
    PsLookupThreadByThreadId(ProcessId[1], &Thread);
    v6 = PopPushPowerStateTransitionRecord(Process, Thread, 0LL);
    KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
    if ( v6 >= 0 )
      PoDelistPowerStateTransitionBlocker(v8, v7, v9, v10);
    if ( Process )
      ObfDereferenceObject(Process);
    if ( Thread )
      ObfDereferenceObject(Thread);
    result = 0LL;
    *a3 = *(_OWORD *)ProcessId;
  }
  return result;
}
