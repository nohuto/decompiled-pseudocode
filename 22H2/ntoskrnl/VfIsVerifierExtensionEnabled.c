/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x1405CE2B4
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140AA36CC (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x140AC8218 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)VfXdvEnabled;
}
