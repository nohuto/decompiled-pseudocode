/*
 * XREFs of ?SysMmInitializeGlobal@@YAXXZ @ 0x1C02183DC
 * Callers:
 *     DriverEntry @ 0x1C03DEE7C (DriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C00200C0 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00200D4 (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     McGenEventRegister_EtwRegister @ 0x1C00200E8 (McGenEventRegister_EtwRegister.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0023FE8 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     Feature_IommuInterfaceV2_Smm__private_ReportDeviceUsage @ 0x1C00274E0 (Feature_IommuInterfaceV2_Smm__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     SmmQueryRegistry @ 0x1C021B7B0 (SmmQueryRegistry.c)
 */

void __fastcall SysMmInitializeGlobal(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edi
  int IommuInterface; // eax
  int v5; // eax

  if ( McGenEventRegister_EtwRegister(&SysMmControlGuid, a2, SysMmControlGuid_Context, SysMmControlGuid_Context) < 0 )
  {
    WdLogSingleEntry1(1LL, 33LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(((NTSTATUS)(Status)) >= 0)", 33LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !SysMmControlGuid_Context[0] )
  {
    WdLogSingleEntry1(1LL, 34LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(SysMmControlGuid_Context.RegistrationHandle) != 0",
      34LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SmmQueryRegistry();
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
    v2 = dword_1C0140CD0 | 0x200;
  }
  else
  {
    Feature_IommuInterfaceV2_Smm__private_ReportDeviceUsage();
    v2 = dword_1C0140CD0 | 0x100;
  }
  dword_1C0140CD0 = v2;
  if ( (v2 & 0x200) != 0 )
    v3 = 3;
  else
    v3 = ((v2 & 0x100) != 0) + 1;
  IommuInterface = IoGetIommuInterfaceEx(v3, 0LL, &SmmGlobal);
  if ( IommuInterface < 0 )
  {
    WdLogSingleEntry2(3LL, v3, IommuInterface);
    dword_1C0140BE8 = 0;
  }
  if ( SmmUseIommuV2Interface() || SmmUseIommuV3Interface() )
  {
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))qword_1C0140BF0)(
           1LL,
           0LL,
           0LL,
           0LL,
           &qword_1C0140CC8);
    if ( v5 < 0 )
    {
      WdLogSingleEntry1(3LL, v5);
      dword_1C0140BE8 = 0;
    }
  }
}
