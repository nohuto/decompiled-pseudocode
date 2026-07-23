/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x1405A0914
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14099A1F0 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x1409CDB8C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
