/*
 * XREFs of ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x1C0224464
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C02241A8 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C01C6AB0 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1C01C7680 (RIMSetExtendedPointerDeviceProperty.c)
 *     ?MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA?AUReportDescriptor@1@AEBUtagRECT@@0@Z @ 0x1C0224DB4 (-MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA-AUReportDescriptor@1@AEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall VirtualTouchpadProcessor::CreateRimDevice(VirtualTouchpadProcessor *this, struct VPTPTouchpad *a2)
{
  int v2; // eax
  char *v4; // r14
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct tagHID_POINTER_DEVICE_INFO *v9; // rcx
  __int128 v10; // xmm0
  struct tagHID_POINTER_DEVICE_INFO *v11; // rcx
  __int128 v12; // xmm0
  struct tagHID_POINTER_DEVICE_INFO *v13; // rcx
  __int128 v14; // xmm0
  struct tagHID_POINTER_DEVICE_INFO *v15; // rcx
  _BYTE v16[20]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v17[8]; // [rsp+40h] [rbp-40h] BYREF
  __int16 v18; // [rsp+C0h] [rbp+40h] BYREF
  int v19; // [rsp+C8h] [rbp+48h]
  char *v20; // [rsp+D0h] [rbp+50h] BYREF

  v2 = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 11);
  v18 = 1282;
  *((_DWORD *)a2 + 48) = v2;
  *((_DWORD *)a2 + 50) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 13);
  *((_DWORD *)a2 + 49) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 12);
  *((_DWORD *)a2 + 51) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 14);
  VirtualTouchpadProcessor::MakeReportDescriptor(this, v16, (char *)a2 + 192, (char *)a2 + 124);
  v4 = *(char **)v16;
  if ( !*(_QWORD *)v16 )
    return 3221225495LL;
  memset(v17, 0, sizeof(v17));
  LOWORD(v17[5]) = *(_WORD *)&v16[8];
  v17[4] = *(_QWORD *)v16;
  v17[6] = &v18;
  LOWORD(v17[7]) = 2;
  v20 = 0LL;
  v6 = RIMIDE_CreateGenericHidDevice((__int64)v17, &v20);
  if ( v6 >= 0 )
  {
    v6 = RawInputManagerDeviceObjectResolveHandle(v20, 3u, 1, (PVOID *)a2 + 4);
    if ( v6 >= 0 )
    {
      v7 = *((_QWORD *)a2 + 4);
      *(_DWORD *)&v16[4] = *((_DWORD *)a2 + 39);
      *(_QWORD *)&v16[8] = 0LL;
      v8 = v7 + 544;
      *(_DWORD *)&v16[16] = 0;
      if ( !v7 )
        v8 = 472LL;
      *(_DWORD *)v16 = 3;
      RIMSetExtendedPointerDeviceProperty(
        *(struct tagHID_POINTER_DEVICE_INFO **)v8,
        (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)v16);
      v9 = *(struct tagHID_POINTER_DEVICE_INFO **)v8;
      *(_QWORD *)v16 = 2LL;
      *(_DWORD *)&v16[8] = 0;
      RIMSetExtendedPointerDeviceProperty(v9, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)v16);
      v10 = *(_OWORD *)((char *)a2 + 140);
      v11 = *(struct tagHID_POINTER_DEVICE_INFO **)v8;
      *(_DWORD *)v16 = 4;
      *(_OWORD *)&v16[4] = v10;
      RIMSetExtendedPointerDeviceProperty(v11, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)v16);
      v12 = *((_OWORD *)a2 + 10);
      v13 = *(struct tagHID_POINTER_DEVICE_INFO **)v8;
      *(_DWORD *)v16 = 5;
      *(_OWORD *)&v16[4] = v12;
      RIMSetExtendedPointerDeviceProperty(v13, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)v16);
      v14 = *((_OWORD *)a2 + 11);
      v15 = *(struct tagHID_POINTER_DEVICE_INFO **)v8;
      *(_DWORD *)v16 = 6;
      *(_OWORD *)&v16[4] = v14;
      RIMSetExtendedPointerDeviceProperty(v15, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)v16);
    }
  }
  else
  {
    v19 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 432);
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  return (unsigned int)v6;
}
