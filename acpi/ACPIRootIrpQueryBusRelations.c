/*
 * XREFs of ACPIRootIrpQueryBusRelations @ 0x1C0093D88
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C007A330 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0094220 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDetectDockDevices @ 0x1C0019FD0 (ACPIDetectDockDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE34 (ACPIDetectPdoDevices.c)
 *     AcpiCheckExternalConnection @ 0x1C0083BF4 (AcpiCheckExternalConnection.c)
 */

__int64 __fastcall ACPIRootIrpQueryBusRelations(ULONG_PTR a1, __int64 a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int8 v9; // r14
  char *v10; // rax
  const char *v11; // r8
  const char *v12; // r10
  char v13; // r11
  int v15; // edi
  char *v16; // rax
  const char *v17; // r8
  const char *v18; // r10
  char *IrpText; // rax
  const char *v20; // r8
  const char *v21; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = *(_QWORD *)(a2 + 184);
  v8 = DeviceExtension;
  v9 = *(_BYTE *)(v7 + 1);
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    AcpiCheckExternalConnection();
    v15 = ACPIDetectPdoDevices(a1, a3);
    if ( v15 >= 0 )
    {
      v15 = ACPIDetectDockDevices(v8, a3);
      if ( v15 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), v9);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x12u,
          0xEu,
          (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
          a2,
          (__int64)IrpText,
          v15,
          v8,
          v20,
          v21);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), v9);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xDu,
        (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
        a2,
        (__int64)v16,
        v15,
        v8,
        v17,
        v18);
    }
    return (unsigned int)v15;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = ACPIDebugGetIrpText(*(_QWORD *)(DeviceExtension + 8), *(_BYTE *)(v7 + 1));
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xCu,
        (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
        a2,
        (__int64)v10,
        v13,
        v8,
        v11,
        v12);
    }
    return 3221225485LL;
  }
}
