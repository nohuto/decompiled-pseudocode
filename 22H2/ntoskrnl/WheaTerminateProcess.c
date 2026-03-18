/*
 * XREFs of WheaTerminateProcess @ 0x140A080D0
 * Callers:
 *     KiMcheckAlternateReturn @ 0x140580420 (KiMcheckAlternateReturn.c)
 * Callees:
 *     PsGetProcessId @ 0x1402FA490 (PsGetProcessId.c)
 *     WheaGetCurrentProcessName @ 0x140611CB0 (WheaGetCurrentProcessName.c)
 *     WheapLogProcessTerminateEvent @ 0x1406134A0 (WheapLogProcessTerminateEvent.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 */

__int64 WheaTerminateProcess()
{
  struct _KPROCESS *Process; // rdi
  int v1; // ebx
  int ProcessId; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  WheaGetCurrentProcessName((void **)&v5, (unsigned int *)&v4);
  v1 = PsTerminateProcess((ULONG_PTR)Process);
  if ( v1 >= 0 )
  {
    ProcessId = (unsigned int)PsGetProcessId(Process);
    WheapLogProcessTerminateEvent(ProcessId, v5, v4);
  }
  return (unsigned int)v1;
}
