/*
 * XREFs of PoRequestShutdownEvent @ 0x1408253E0
 * Callers:
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 * Callees:
 *     PopRequestShutdownWait @ 0x140825424 (PopRequestShutdownWait.c)
 */

NTSTATUS __stdcall PoRequestShutdownEvent(PVOID *Event)
{
  NTSTATUS result; // eax

  if ( Event )
    *Event = 0LL;
  result = PopRequestShutdownWait(KeGetCurrentThread());
  if ( result >= 0 )
  {
    if ( Event )
      *Event = &PopShutdownEvent;
    return 0;
  }
  return result;
}
