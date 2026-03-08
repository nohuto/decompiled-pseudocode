/*
 * XREFs of HalpIommuSupportEnabled @ 0x1403A9670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIommuSupportEnabled()
{
  return (unsigned int)HalpIommuPolicy <= 1 || HalpIommuPolicy == 3;
}
