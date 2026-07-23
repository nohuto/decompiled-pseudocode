/*
 * XREFs of WheaTerminateProcess @ 0x14095D6F4
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1405268C0 (KiMcheckAlternateReturn.c)
 * Callees:
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     WheapLogProcessTerminateEvent @ 0x1405BD938 (WheapLogProcessTerminateEvent.c)
 *     PsTerminateProcess @ 0x14061B628 (PsTerminateProcess.c)
 */

__int64 WheaTerminateProcess()
{
  _KPROCESS *Process; // rdi
  unsigned __int16 *v1; // rax
  const wchar_t *v2; // rbx
  int v3; // ebp
  int v4; // esi
  int ProcessId; // eax

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = (unsigned __int16 *)Process[1].ActiveProcessors.Bitmap[2];
  v2 = (const wchar_t *)*((_QWORD *)v1 + 1);
  if ( v2 )
  {
    v3 = *v1;
  }
  else
  {
    v2 = L"(Unknown)";
    v3 = 4;
  }
  v4 = PsTerminateProcess((ULONG_PTR)Process);
  if ( v4 >= 0 )
  {
    ProcessId = (unsigned int)PsGetProcessId(Process);
    WheapLogProcessTerminateEvent(ProcessId, (__int64)v2, v3);
  }
  return (unsigned int)v4;
}
