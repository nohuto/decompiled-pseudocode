/*
 * XREFs of KeRestoreIptStateAfterProcessorComesOnline @ 0x140383644
 * Callers:
 *     PopHandleNextState @ 0x1409938B0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AE4D0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreIptState @ 0x14051A2F0 (KiRestoreIptState.c)
 */

struct _KPRCB *KeRestoreIptStateAfterProcessorComesOnline()
{
  struct _KPRCB *result; // rax
  _XSAVE_AREA *ExtendedState; // rdx

  if ( (_DWORD)KiIptMsrMask )
  {
    result = KeGetCurrentPrcb();
    ExtendedState = result->ExtendedState;
    if ( ExtendedState )
      return (struct _KPRCB *)KiRestoreIptState((char *)ExtendedState + (unsigned int)KeXStateLength);
  }
  return result;
}
