/*
 * XREFs of MiDelayFaultingThread @ 0x140643864
 * Callers:
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     MiWaitForAvailablePages @ 0x1406512FC (MiWaitForAvailablePages.c)
 */

NTSTATUS __fastcall MiDelayFaultingThread(int a1)
{
  _KPROCESS *Process; // rdx
  __int64 v2; // rax
  const LARGE_INTEGER *v3; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a1 == 1 )
  {
    v2 = Process[1].IdealProcessor[25];
    v3 = &MiHalfSecond;
    return MiWaitForAvailablePages(*(_QWORD *)(qword_140C67048 + 8 * v2), v3);
  }
  if ( a1 == 2 )
  {
    v2 = Process[1].IdealProcessor[25];
    v3 = &Mi30Milliseconds;
    return MiWaitForAvailablePages(*(_QWORD *)(qword_140C67048 + 8 * v2), v3);
  }
  return KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
}
