/*
 * XREFs of HvlMarkHiberPhase @ 0x140544504
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     HvlpMarkHvlPagesForHibernation @ 0x140544C40 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140544D14 (HvlpMarkHypervisorPagesForHibernation.c)
 */

__int64 HvlMarkHiberPhase()
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 && !VslVsmEnabled )
    result = HvlpMarkHypervisorPagesForHibernation();
  if ( HvlHypervisorConnected )
    return HvlpMarkHvlPagesForHibernation();
  return result;
}
