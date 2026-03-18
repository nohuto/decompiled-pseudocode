/*
 * XREFs of ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x1C01F3340
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C01F30A0 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C019FC14 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1C01A0910 (RIMSetExtendedPointerDeviceProperty.c)
 *     ?MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA?AUReportDescriptor@1@AEBUtagRECT@@0@Z @ 0x1C01F3AA4 (-MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA-AUReportDescriptor@1@AEBUtagRECT@@0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall VirtualTouchpadProcessor::CreateRimDevice(VirtualTouchpadProcessor *this, struct VPTPTouchpad *a2)
{
  int v2; // eax
  char *v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  struct tagHID_POINTER_DEVICE_INFO *v13; // rcx
  __int128 v14; // xmm0
  struct tagHID_POINTER_DEVICE_INFO *v15; // rcx
  __int128 v16; // xmm0
  struct tagHID_POINTER_DEVICE_INFO *v17; // rcx
  __int128 v18; // xmm0
  struct tagHID_POINTER_DEVICE_INFO *v19; // rcx
  _BYTE v20[20]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v21[8]; // [rsp+40h] [rbp-40h] BYREF
  __int16 v22; // [rsp+B0h] [rbp+30h] BYREF
  char *v23; // [rsp+B8h] [rbp+38h] BYREF

  v2 = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 11);
  v22 = 1282;
  *((_DWORD *)a2 + 48) = v2;
  *((_DWORD *)a2 + 50) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 13);
  *((_DWORD *)a2 + 49) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 12);
  *((_DWORD *)a2 + 51) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 14);
  VirtualTouchpadProcessor::MakeReportDescriptor(this, v20, (char *)a2 + 192, (char *)a2 + 124);
  v4 = *(char **)v20;
  if ( !*(_QWORD *)v20 )
    return 3221225495LL;
  memset(v21, 0, sizeof(v21));
  v23 = 0LL;
  LOWORD(v21[5]) = *(_WORD *)&v20[8];
  v21[6] = &v22;
  v21[4] = *(_QWORD *)v20;
  LOWORD(v21[7]) = 2;
  v8 = RIMIDE_CreateGenericHidDevice((__int64)v21, &v23);
  if ( v8 >= 0 )
  {
    v8 = RawInputManagerDeviceObjectResolveHandle(v23, 3u, 1, (PVOID *)a2 + 4);
    if ( v8 >= 0 )
    {
      v10 = *((_QWORD *)a2 + 4);
      v11 = *((_DWORD *)a2 + 39);
      *(_QWORD *)&v20[8] = 0LL;
      *(_DWORD *)&v20[16] = 0;
      *(_DWORD *)&v20[4] = v11;
      v12 = v10 + 560;
      *(_DWORD *)v20 = 3;
      if ( !v10 )
        v12 = 472LL;
      RIMSetExtendedPointerDeviceProperty(
        *(struct tagHID_POINTER_DEVICE_INFO **)v12,
        (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)v20);
      v13 = *(struct tagHID_POINTER_DEVICE_INFO **)v12;
      *(_DWORD *)&v20[8] = 0;
      *(_QWORD *)v20 = 2LL;
      RIMSetExtendedPointerDeviceProperty(v13, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)v20);
      v14 = *(_OWORD *)((char *)a2 + 140);
      v15 = *(struct tagHID_POINTER_DEVICE_INFO **)v12;
      *(_DWORD *)v20 = 4;
      *(_OWORD *)&v20[4] = v14;
      RIMSetExtendedPointerDeviceProperty(v15, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)v20);
      v16 = *((_OWORD *)a2 + 10);
      v17 = *(struct tagHID_POINTER_DEVICE_INFO **)v12;
      *(_DWORD *)v20 = 5;
      *(_OWORD *)&v20[4] = v16;
      RIMSetExtendedPointerDeviceProperty(v17, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)v20);
      v18 = *((_OWORD *)a2 + 11);
      v19 = *(struct tagHID_POINTER_DEVICE_INFO **)v12;
      *(_DWORD *)v20 = 6;
      *(_OWORD *)&v20[4] = v18;
      RIMSetExtendedPointerDeviceProperty(v19, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)v20);
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    v4);
  return (unsigned int)v8;
}
