/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1403AA98C
 * Callers:
 *     HaliSetSystemInformation @ 0x14085AF78 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x1403AA9B8 (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x14085AFC8 (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
