/*
 * XREFs of PoRequestShutdownEvent @ 0x14082D450
 * Callers:
 *     SepRmCommandServerThread @ 0x14082D2D0 (SepRmCommandServerThread.c)
 * Callees:
 *     PopRequestShutdownWait @ 0x14082D494 (PopRequestShutdownWait.c)
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
