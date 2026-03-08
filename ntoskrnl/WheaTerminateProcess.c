/*
 * XREFs of WheaTerminateProcess @ 0x140A053E0
 * Callers:
 *     KiMcheckAlternateReturn @ 0x14057DEF0 (KiMcheckAlternateReturn.c)
 * Callees:
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     WheaGetCurrentProcessName @ 0x14060F890 (WheaGetCurrentProcessName.c)
 *     WheapLogProcessTerminateEvent @ 0x140611080 (WheapLogProcessTerminateEvent.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
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
  v1 = PsTerminateProcess(Process, 0xC0000713);
  if ( v1 >= 0 )
  {
    ProcessId = (unsigned int)PsGetProcessId(Process);
    WheapLogProcessTerminateEvent(ProcessId, v5, v4);
  }
  return (unsigned int)v1;
}
