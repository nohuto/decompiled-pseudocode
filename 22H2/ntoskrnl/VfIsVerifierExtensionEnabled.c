/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x1405A0624
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1409991E0 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x1409CCB9C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
