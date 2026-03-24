/*
 * XREFs of ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AD9B0
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008F4A0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0090110 (ACPIFilterIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockIsDockDevice @ 0x1C0020C40 (ACPIDockIsDockDevice.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C002D274 (ACPIDockFindCorrespondingDock.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1C004AC64 (WPP_RECORDER_SF_qqqss.c)
 *     ACPIDetectEjectDevices @ 0x1C004F600 (ACPIDetectEjectDevices.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryEjectRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // r8
  const char *v9; // rax
  const char *v10; // r10
  char *CorrespondingDock; // rax
  int v13; // edi
  __int64 v14; // rdx
  char *v15; // rax
  char *v16; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = (_QWORD *)DeviceExtension;
  v7 = *(__int64 **)(DeviceExtension + 720);
  if ( v7 )
  {
    if ( ACPIDockIsDockDevice(v7) )
      CorrespondingDock = ACPIDockFindCorrespondingDock((__int64)v6);
    else
      CorrespondingDock = 0LL;
    v13 = ACPIDetectEjectDevices((__int64)v6, a3, (__int64)CorrespondingDock);
    if ( v13 < 0 )
    {
      v14 = v6[1];
      v15 = byte_1C00701BA;
      v16 = byte_1C00701BA;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = (char *)v6[71];
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = (char *)v6[72];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0x11u,
          (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
          v13,
          (char)v6,
          (__int64)v15,
          (__int64)v16);
    }
    return (unsigned int)v13;
  }
  else
  {
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = byte_1C00701BA;
    v10 = byte_1C00701BA;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)v6[71];
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = (const char *)v6[72];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x10u,
        (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
        a2,
        0,
        (char)v6,
        v9,
        v10);
    return 3221225485LL;
  }
}
