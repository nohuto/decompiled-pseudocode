/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x1405FDEEC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140A4F19C (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x140A8682C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)VfXdvEnabled;
}
