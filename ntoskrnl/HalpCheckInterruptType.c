/*
 * XREFs of HalpCheckInterruptType @ 0x1403AE16C
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140517908 (HalpDisableSecondaryInterrupt.c)
 *     HalpEnableSecondaryInterrupt @ 0x14085E574 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1402FCE50 (HalpIsInterruptTypeSecondary.c)
 */

bool __fastcall HalpCheckInterruptType(_DWORD *a1)
{
  bool result; // al

  result = 0;
  if ( *a1 == 1 )
    return HalpIsInterruptTypeSecondary(a1[2], a1[16]);
  return result;
}
