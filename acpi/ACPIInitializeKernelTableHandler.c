/*
 * XREFs of ACPIInitializeKernelTableHandler @ 0x1C002E260
 * Callers:
 *     ACPIRootIrpRemoveDevice @ 0x1C003D280 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInitialize @ 0x1C00A8F78 (ACPIInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ACPIInitializeKernelTableHandler(char a1, __int64 a2)
{
  NTSTATUS result; // eax
  int SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  char v5; // [rsp+34h] [rbp-24h]
  __int16 v6; // [rsp+35h] [rbp-23h]
  char v7; // [rsp+37h] [rbp-21h]
  __int64 (__fastcall *v8)(__int64); // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v5 = a1;
  v6 = 0;
  v7 = 0;
  SystemInformation = 1094930505;
  v9 = a2;
  v8 = ACPIEnumMapTableHandler;
  result = ZwSetSystemInformation(SystemRegisterFirmwareTableInformationHandler, &SystemInformation, 0x18uLL);
  if ( a1 )
    return ZwPowerInformation(SystemBatteryState|0x40, 0LL, 0, 0LL, 0);
  return result;
}
