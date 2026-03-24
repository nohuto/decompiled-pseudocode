/*
 * XREFs of ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01BDB98
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00B7E90 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00B8050 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C01AF590 (UpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C000B528 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C008B454 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C008B5A4 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     IsPublicPointerDevice @ 0x1C00B49B8 (IsPublicPointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01BDB24 (-GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

void __fastcall CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(
        CInputSystemMetrics *this,
        const struct DEVICEINFO *a2)
{
  struct CInputSystemMetrics *v2; // r14
  CInputSystemMetrics *v4; // rcx
  char v5; // r8
  int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // rbx
  int HardwareType; // eax
  __int64 v10; // rcx
  struct DEVICEINFO *i; // rsi
  __int64 v12; // rbx
  int v13; // ebx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  char v17; // [rsp+28h] [rbp-20h]

  v2 = gpInputSystemMetrics;
  if ( IsPublicPointerDevice((__int64)a2) )
  {
    v6 = 0;
    v7 = 0;
    if ( v5 )
    {
      v8 = *((_QWORD *)a2 + 60);
      HardwareType = CInputSystemMetrics::GetHardwareType(v4, (const struct tagHID_POINTER_DEVICE_INFO *)v8);
      v7 = *((_DWORD *)v2 + 2);
      v10 = *(unsigned int *)(v8 + 720);
      v6 = *((_DWORD *)v2 + 1) | HardwareType;
      if ( v7 <= (unsigned int)v10 )
        v7 = *(_DWORD *)(v8 + 720);
    }
    else
    {
      CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
        (CInpLockSharedIfNeeded *)&v16,
        (struct CInpPushLock *)&CBaseInput::_sLock);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( IsPublicPointerDevice((__int64)i) && (*((_DWORD *)i + 46) & 0x400) == 0 )
        {
          v12 = *((_QWORD *)i + 60);
          v6 |= CInputSystemMetrics::GetHardwareType(
                  (CInputSystemMetrics *)v10,
                  (const struct tagHID_POINTER_DEVICE_INFO *)v12);
          if ( v7 <= *(_DWORD *)(v12 + 720) )
            v7 = *(_DWORD *)(v12 + 720);
        }
      }
      if ( !v17 )
      {
        ExReleasePushLockSharedEx(v16, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( (v6 & 0xFFFFFF30) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 157);
    v13 = v7;
    if ( v7 > 0xFFFF )
      v13 = 0xFFFF;
    v14 = v6 & 0xCF | (v13 << 8);
    if ( v14 != *(_DWORD *)v2 )
    {
      CInputSystemMetrics::WriteSystemMetricsKey(v10, v14, 0);
      CInputSystemMetrics::WriteSystemMetricsKey(v15, v14, 1);
      *(_DWORD *)v2 = v14;
    }
    if ( v6 != *((_DWORD *)v2 + 1) )
    {
      CInputSystemMetrics::WritePointerDevicePresenceKey((CInputSystemMetrics *)v10, v6);
      *((_DWORD *)v2 + 1) = v6;
    }
    *((_DWORD *)v2 + 2) = v7;
  }
}
