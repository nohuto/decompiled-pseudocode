/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x1405A06E4
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1409991F0 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x1409CCB8C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
