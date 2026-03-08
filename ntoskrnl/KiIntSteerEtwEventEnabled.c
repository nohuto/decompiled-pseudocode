/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x1402A9098
 * Callers:
 *     KiIntSteerLogState @ 0x1402903C8 (KiIntSteerLogState.c)
 *     KiIntSteerLogStatus @ 0x1402A8FAC (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 */

BOOLEAN __fastcall KiIntSteerEtwEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( KiIntSteerEtwHandle )
    return EtwEventEnabled(KiIntSteerEtwHandle, EventDescriptor);
  else
    return 0;
}
