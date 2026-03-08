/*
 * XREFs of ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C0232C38
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0211E80 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0211F60 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0218D70 (UpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0031FA0 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C0097DB4 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C0097F04 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsPublicPointerDevice @ 0x1C0218060 (IsPublicPointerDevice.c)
 *     ?GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0232BB8 (-GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

void __fastcall CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(
        CInputSystemMetrics *this,
        const struct DEVICEINFO *a2)
{
  int *v2; // r14
  __int64 v4; // rdx
  CInputSystemMetrics *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  unsigned int v9; // esi
  __int64 v10; // rbx
  int HardwareType; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 i; // rbp
  __int64 v19; // rbx
  int v20; // ebx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-28h] BYREF
  char v24; // [rsp+28h] [rbp-20h]

  v2 = (int *)gpInputSystemMetrics;
  if ( IsPublicPointerDevice((__int64)a2) )
  {
    v8 = 0;
    v9 = 0;
    if ( (_BYTE)v6 )
    {
      v10 = *((_QWORD *)a2 + 59);
      HardwareType = CInputSystemMetrics::GetHardwareType(v5, (const struct tagHID_POINTER_DEVICE_INFO *)v10);
      v9 = v2[2];
      v12 = *(unsigned int *)(v10 + 768);
      v8 = v2[1] | HardwareType;
      if ( v9 <= (unsigned int)v12 )
        v9 = *(_DWORD *)(v10 + 768);
    }
    else
    {
      v13 = SGDGetUserSessionState(v5, v4, v6, v7);
      CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
        (CInpLockSharedIfNeeded *)&v23,
        *(struct CInpPushLock **)(*(_QWORD *)(v13 + 16840) + 1320LL));
      v12 = *(_QWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 16840);
      for ( i = **(_QWORD **)(v12 + 1328); i; i = *(_QWORD *)(i + 56) )
      {
        if ( IsPublicPointerDevice(i) && (*(_DWORD *)(i + 184) & 0x400) == 0 )
        {
          v19 = *(_QWORD *)(i + 472);
          v8 |= CInputSystemMetrics::GetHardwareType(
                  (CInputSystemMetrics *)v12,
                  (const struct tagHID_POINTER_DEVICE_INFO *)v19);
          if ( v9 <= *(_DWORD *)(v19 + 768) )
            v9 = *(_DWORD *)(v19 + 768);
        }
      }
      if ( !v24 )
      {
        ExReleasePushLockSharedEx(v23, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( (v8 & 0xFFFFFF30) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 157);
    v20 = v9;
    if ( v9 > 0xFFFF )
      v20 = 0xFFFF;
    v21 = v8 & 0xCF | (v20 << 8);
    if ( v21 != *v2 )
    {
      CInputSystemMetrics::WriteSystemMetricsKey(v12, v21, 0);
      CInputSystemMetrics::WriteSystemMetricsKey(v22, v21, 1);
      *v2 = v21;
    }
    if ( v8 != v2[1] )
    {
      CInputSystemMetrics::WritePointerDevicePresenceKey((CInputSystemMetrics *)v12, v8);
      v2[1] = v8;
    }
    v2[2] = v9;
  }
}
