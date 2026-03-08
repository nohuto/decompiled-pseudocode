/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x1405CBE04
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x140AC4218 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)VfXdvEnabled;
}
