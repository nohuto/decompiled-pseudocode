/*
 * XREFs of PnpGetRegistryDword @ 0x14039BC5C
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x14084274C (PipDmgGetDriverDmarCompatLevel.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 *     PnpInitializePnpWatchdogs @ 0x140B6180C (PnpInitializePnpWatchdogs.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140B61878 (PnpQueryWatchdogTimeoutConfiguration.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1403C0C9C (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetRegistryDword(void *a1, __int64 a2, _DWORD *a3)
{
  int RegistryValue; // eax
  unsigned int *v5; // rcx
  unsigned int v6; // ebx

  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1);
  v5 = 0LL;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( (unsigned __int8)PnpValidateRegistryDword(0LL) )
      *a3 = *(unsigned int *)((char *)v5 + v5[2]);
    else
      v6 = -1073741271;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
