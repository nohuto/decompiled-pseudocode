/*
 * XREFs of NVMeControllerGetLocalCommand @ 0x1C000352C
 * Callers:
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0023ED4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 * Callees:
 *     NVMeControllerAllocateLocalCommand @ 0x1C00032F0 (NVMeControllerAllocateLocalCommand.c)
 */

_BYTE *__fastcall NVMeControllerGetLocalCommand(__int64 a1)
{
  _BYTE *result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( a1 == -4512 || (unsigned int)StorPortExtendedFunction(37LL, a1, a1 + 4512, &v3) || !v3 )
    result = (_BYTE *)NVMeControllerAllocateLocalCommand(a1);
  else
    result = (_BYTE *)(v3 - 112);
  if ( result )
    *result = 1;
  return result;
}
