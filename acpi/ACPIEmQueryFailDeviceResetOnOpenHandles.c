/*
 * XREFs of ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C00439DC
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0080330 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C0085F40 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     ACPIComputeDeviceIdMutiStringLength @ 0x1C0043918 (ACPIComputeDeviceIdMutiStringLength.c)
 */

__int64 __fastcall ACPIEmQueryFailDeviceResetOnOpenHandles(int a1, _WORD *a2)
{
  __int64 v2; // r10
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]
  __int64 *v8; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  v6 = a1;
  v5[0] = a2;
  v5[1] = 2 * ACPIComputeDeviceIdMutiStringLength(a2);
  v8 = &v4;
  return ((__int64 (__fastcall *)(GUID *, __int64 **, __int64, __int64, _QWORD *, __int64))EmClientRuleEvaluate)(
           &GUID_EM_RULE_ACPI_DEVICE_FAIL_RESET_ON_OPEN_HANDLES,
           &v8,
           1LL,
           v2,
           v5,
           24LL);
}
