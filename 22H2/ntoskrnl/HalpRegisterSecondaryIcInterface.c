/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1404D1334
 * Callers:
 *     HaliSetSystemInformation @ 0x140866474 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x1404D08E0 (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x14086571C (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
