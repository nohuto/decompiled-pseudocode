/*
 * XREFs of ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01FC724
 * Callers:
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0211DD0 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0096A80 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     IsTouchpadDevice @ 0x1C00F422E (IsTouchpadDevice.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C01FC028 (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C0215D38 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ApiSetEditionDestroyEdgePalmRejectionZones @ 0x1C023D290 (ApiSetEditionDestroyEdgePalmRejectionZones.c)
 */

void __fastcall CTouchProcessor::OnRimDeviceClosed(CTouchProcessor *this, void *a2)
{
  void *v2; // rdi
  CTouchProcessor *v3; // rcx
  char v4; // bl
  char v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DelayZonePalmRejection *Instance; // rax

  v2 = a2;
  v3 = (CTouchProcessor *)WPP_GLOBAL_Control;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      335,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  LOBYTE(v6) = CTouchProcessor::IsTouchDevice(v3, v2);
  if ( v6 )
    ApiSetEditionDestroyEdgePalmRejectionZones(v2);
  if ( !IsTouchpadDevice((__int64)v2) )
  {
    Instance = DelayZonePalmRejection::GetInstance(v8, v7, v9, v10);
    if ( Instance )
      DelayZonePalmRejection::OnDeviceRemoval(Instance, v2);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v7 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      336,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
}
