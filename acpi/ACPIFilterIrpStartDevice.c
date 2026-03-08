/*
 * XREFs of ACPIFilterIrpStartDevice @ 0x1C00867A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     ACPIInitStartDevice @ 0x1C002DA2C (ACPIInitStartDevice.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C002E2DC (ACPIQueryGedDeviceInterface.c)
 */

__int64 __fastcall ACPIFilterIrpStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // rcx
  __int64 DeviceExtension; // rbx
  char *IrpText; // rax
  const char *v8; // r8
  const char *v9; // r10
  char v10; // r11
  int v11; // eax
  int v12; // edx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v5, *(_BYTE *)(v2 + 1));
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x18u,
      (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
      a2,
      (__int64)IrpText,
      *(_DWORD *)(a2 + 48),
      v10,
      v8,
      v9);
  }
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 1008), 0x26u) )
  {
    v11 = ACPIQueryGedDeviceInterface((_QWORD *)DeviceExtension);
    if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        8,
        25,
        (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
        v11);
    }
  }
  result = ACPIInitStartDevice(
             a1,
             v2,
             (void (__fastcall *)(__int64, __int64, __int64))ACPIFilterIrpStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
