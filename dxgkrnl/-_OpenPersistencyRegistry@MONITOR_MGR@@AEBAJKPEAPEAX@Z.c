/*
 * XREFs of ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C02156A4
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0215610 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C03C2BFC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C03C3130 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00105E0 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C001D7C0 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

__int64 __fastcall MONITOR_MGR::_OpenPersistencyRegistry(MONITOR_MGR *this, ACCESS_MASK a2, void **a3)
{
  __int64 v6; // rax
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  __int64 v8; // rbx
  void *v9; // r8
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  NTSTATUS v17; // eax
  void *DeviceRegKey; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v19; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v20[2]; // [rsp+38h] [rbp-38h] BYREF
  int v21; // [rsp+58h] [rbp-18h]
  wchar_t v22; // [rsp+5Ch] [rbp-14h]

  if ( a2 != 131097 && a2 != 131078 && a2 != 983103 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v6 = *((_QWORD *)this + 3);
  DeviceRegKey = 0LL;
  if ( !*(_QWORD *)(v6 + 16) )
    WdLogSingleEntry0(1LL);
  if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 216LL) )
    WdLogSingleEntry0(1LL);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL)
                                                                           + 216LL));
  if ( !DeviceAttachmentBaseRef )
    WdLogSingleEntry0(1LL);
  v8 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 1u, a2, &DeviceRegKey);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v8 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v8);
    return (unsigned int)v8;
  }
  v9 = DeviceRegKey;
  if ( !DeviceRegKey )
  {
    WdLogSingleEntry0(1LL);
    v9 = DeviceRegKey;
  }
  v21 = *(_DWORD *)L"cy";
  *a3 = 0LL;
  v22 = aMonitorpersist[18];
  v19.Buffer = (wchar_t *)v20;
  v20[0] = *(_OWORD *)L"MonitorPersistency";
  *(_QWORD *)&v19.Length = 2490404LL;
  v20[1] = *(_OWORD *)L"ersistency";
  v10 = DxgkOpenRegistrySubkey(a3, a2, v9, &v19);
  v8 = v10;
  if ( v10 != -1073741772 )
  {
    if ( v10 >= 0 )
    {
      if ( !*a3 )
        WdLogSingleEntry0(1LL);
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  if ( a2 == 131078 || a2 == 983103 )
  {
    v17 = DxgkCreateRegistrySubkey(a3, a2, DeviceRegKey, &v19);
    v8 = v17;
    if ( v17 >= 0 )
      goto LABEL_17;
LABEL_23:
    WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v8);
    goto LABEL_17;
  }
  v15 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
  *(_QWORD *)(v15 + 32) = -1073741772LL;
LABEL_17:
  ZwClose(DeviceRegKey);
  return (unsigned int)v8;
}
