/*
 * XREFs of NVMeControllerPostPowerUp @ 0x1C0006760
 * Callers:
 *     NVMeControllerPowerUp @ 0x1C000E398 (NVMeControllerPowerUp.c)
 * Callees:
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C001BCD4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 */

__int64 __fastcall NVMeControllerPostPowerUp(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 4020);
  if ( (result & 2) != 0 )
  {
    *(_DWORD *)(a1 + 4020) = result & 0xFFFFFFFD;
    return NVMeSetNonOperationalPowerStatePermissiveMode(a1);
  }
  return result;
}
