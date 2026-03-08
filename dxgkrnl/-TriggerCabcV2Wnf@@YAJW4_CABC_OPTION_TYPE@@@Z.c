/*
 * XREFs of ?TriggerCabcV2Wnf@@YAJW4_CABC_OPTION_TYPE@@@Z @ 0x1C02F7AD8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TriggerCabcV2Wnf(int a1)
{
  NTSTATUS v1; // eax
  int ValueData; // [rsp+50h] [rbp+8h] BYREF

  ValueData = a1;
  v1 = RtlWriteRegistryValue(2u, L"GraphicsDrivers", L"CABCOption", 4u, &ValueData, 4u);
  if ( v1 < 0 )
    WdLogSingleEntry1(3LL, v1);
  return ZwUpdateWnfStateData(&WNF_DXGK_CABC_OPTION_CHANGED, &ValueData, 4LL, 0LL, 0LL, 0, 0);
}
