/*
 * XREFs of ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C01844B4
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01843AC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02F2040 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02F24D4 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C01847D4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C02F5950 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OpenPersistencyRegistry(MONITOR_MGR *this, __int64 a2, void **a3)
{
  ACCESS_MASK v4; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  void *DeviceRegKey; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v30; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v31[2]; // [rsp+38h] [rbp-38h] BYREF
  int v32; // [rsp+58h] [rbp-18h]
  wchar_t v33; // [rsp+5Ch] [rbp-14h]

  v4 = a2;
  if ( (_DWORD)a2 != 131097 && (_DWORD)a2 != 131078 && (_DWORD)a2 != 983103 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  v6 = *((_QWORD *)this + 1);
  DeviceRegKey = 0LL;
  if ( !*(_QWORD *)(v6 + 16) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v6, a2);
    WdLogEvent5_WdAssertion(v21);
    v6 = *((_QWORD *)this + 1);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v6 + 16) + 216LL) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v6, a2);
    WdLogEvent5_WdAssertion(v22);
    v6 = *((_QWORD *)this + 1);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(v6 + 16) + 216LL));
  if ( !DeviceAttachmentBaseRef )
  {
    v23 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v23);
  }
  v10 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 1u, v4, &DeviceRegKey);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v10 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v28 + 32) = v10;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v10;
  }
  v13 = DeviceRegKey;
  if ( !DeviceRegKey )
  {
    v24 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v24);
    v13 = DeviceRegKey;
  }
  v32 = *(_DWORD *)L"cy";
  *a3 = 0LL;
  v33 = aMonitorpersist[18];
  v30.Buffer = (wchar_t *)v31;
  v31[0] = *(_OWORD *)L"MonitorPersistency";
  *(_QWORD *)&v30.Length = 2490404LL;
  v31[1] = *(_OWORD *)L"ersistency";
  v14 = DxgkOpenRegistrySubkey(a3, v4, v13, &v30);
  v10 = v14;
  if ( v14 != -1073741772 )
  {
    if ( v14 >= 0 )
    {
      if ( !*a3 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v16, v15);
        WdLogEvent5_WdAssertion(v27);
      }
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  if ( v4 == 131078 || v4 == 983103 )
  {
    v25 = DxgkCreateRegistrySubkey(a3, v4, DeviceRegKey, &v30);
    v10 = v25;
    if ( v25 >= 0 )
      goto LABEL_17;
LABEL_23:
    v26 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v26 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v26 + 32) = v10;
    WdLogEvent5_WdError(v26);
    goto LABEL_17;
  }
  v17 = WdLogNewEntry5_WdTrace(v16, v15);
  *(_QWORD *)(v17 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *(_QWORD *)(v17 + 32) = -1073741772LL;
LABEL_17:
  ZwClose(DeviceRegKey);
  return (unsigned int)v10;
}
