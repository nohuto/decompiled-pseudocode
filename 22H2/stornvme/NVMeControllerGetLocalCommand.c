/*
 * XREFs of NVMeControllerGetLocalCommand @ 0x1C00043E0
 * Callers:
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0023F44 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 * Callees:
 *     NVMeControllerAllocateLocalCommand @ 0x1C00041A4 (NVMeControllerAllocateLocalCommand.c)
 */

_BYTE *__fastcall NVMeControllerGetLocalCommand(__int64 a1)
{
  _BYTE *result; // rax

  if ( a1 != -4512 )
    StorPortExtendedFunction(37LL, a1, a1 + 4512);
  result = (_BYTE *)NVMeControllerAllocateLocalCommand(a1);
  if ( result )
    *result = 1;
  return result;
}
