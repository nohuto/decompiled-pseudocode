/*
 * XREFs of HUBDSM_DeConfiguringDeviceOnClientRequest @ 0x1C001F5F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C002B8C4 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_DeConfiguringDeviceOnClientRequest(__int64 a1)
{
  HUBDTX_SetDeviceNullConfigurationUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
