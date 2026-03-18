/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C01E26B0
 * Callers:
 *     <none>
 * Callees:
 *     HMCreateHandleForObject @ 0x1C004DE50 (HMCreateHandleForObject.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01DEE38 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1C01DFC6C (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01F8448 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v4; // di
  __int64 v5; // rdx
  CInputSystemMetrics *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  bool v9; // zf

  v4 = 1;
  if ( (*((_DWORD *)a2 + 72) & 0x80u) != 0 )
  {
    v7 = HMCreateHandleForObject(*((_QWORD **)a2 + 70), 0x16u);
    if ( v7 )
    {
      if ( *((_DWORD *)a3 + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v8);
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      if ( *(_QWORD *)(v7 + 784) != -1LL )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v8);
      v9 = *(_DWORD *)(v7 + 24) == 7;
      *(_QWORD *)(v7 + 784) = *(_QWORD *)a3;
      if ( v9 && PTPTelemetry::ShouldPtpSettingFire() )
      {
        PTPTelemetry::PTPConfigUpdateEx(a3);
        if ( PTPTelemetry::s_HasTpDevice )
          PTPTelemetry::s_SettingsFired = 1;
      }
      CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(v6, a3, 1);
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
