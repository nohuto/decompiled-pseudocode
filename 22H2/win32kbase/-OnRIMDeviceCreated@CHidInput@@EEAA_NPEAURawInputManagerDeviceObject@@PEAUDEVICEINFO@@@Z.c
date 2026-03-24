/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00B81B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0033100 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMCreateHandleForObject @ 0x1C006B090 (HMCreateHandleForObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A6A98 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1C01A7660 (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01BDAC8 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(CHidInput *this, unsigned __int64 **a2, struct DEVICEINFO *a3)
{
  char v4; // si
  __int64 v6; // rbx
  CInputSystemMetrics *v7; // rcx
  bool v8; // zf
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)a2 + 72) & 0x80u) != 0 )
  {
    v6 = HMCreateHandleForObject(a2[71], 0x16u);
    if ( v6 )
    {
      if ( *((_DWORD *)a3 + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 724LL);
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v9);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      if ( *(_QWORD *)(v6 + 736) != -1LL )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 731LL);
      v8 = *(_DWORD *)(v6 + 24) == 7;
      *(_QWORD *)(v6 + 736) = *(_QWORD *)a3;
      if ( v8 && PTPTelemetry::ShouldPtpSettingFire() )
      {
        PTPTelemetry::PTPConfigUpdateEx(a3);
        if ( PTPTelemetry::s_HasTpDevice )
          PTPTelemetry::s_SettingsFired = 1;
      }
      CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(v7, a3, 1);
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
