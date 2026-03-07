NTSTATUS __stdcall PoRegisterPowerSettingCallback(
        PDEVICE_OBJECT DeviceObject,
        LPCGUID SettingGuid,
        PPOWER_SETTING_CALLBACK Callback,
        PVOID Context,
        PVOID *Handle)
{
  GUID *v7; // rdi
  bool v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 Pool2; // rax
  char *v12; // rbx
  GUID v13; // xmm0
  __int64 *PowerSettingConfiguration; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 **v17; // rcx
  NTSTATUS v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v23; // rax
  __int64 *v24; // rax
  int v25; // [rsp+28h] [rbp-E0h] BYREF
  int v26; // [rsp+2Ch] [rbp-DCh]
  __int128 *v27; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING v28; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT v29; // [rsp+48h] [rbp-C0h]
  __int128 v30; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v31[528]; // [rsp+68h] [rbp-A0h] BYREF

  v25 = 0;
  v27 = 0LL;
  v29 = DeviceObject;
  v7 = (GUID *)SettingGuid;
  v26 = dword_140C3D48C;
  v30 = 0LL;
  v8 = 0;
  v28 = 0LL;
  if ( PopStateIsSessionSpecific(SettingGuid) )
    return -1073741811;
  v9 = 0LL;
  if ( Callback )
  {
    v10 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *(_QWORD *)&v7->Data1;
    if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *(_QWORD *)&v7->Data1 )
      v10 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)v7->Data4;
    if ( !v10 )
    {
      *(_QWORD *)&v28.Length = 34078720LL;
      memset(v31, 0, 0x208uLL);
      v28.Buffer = (wchar_t *)v31;
      if ( (int)RtlPcToFileName((unsigned __int64)Callback, &v28) >= 0 )
      {
        DWORD2(v30) = 16;
        *(_QWORD *)&v30 = &v28;
        v27 = &v30;
        if ( (int)EmClientRuleEvaluate(&GUID_EM_PO_CONSOLE_STATE_CHANGE_REMAP_RULE, &v27, 1LL, &v25) >= 0 )
        {
          v24 = &PopPrimaryDisplayVisibleStateErratum;
          if ( v25 != 2 )
            v24 = 0LL;
          v9 = (unsigned __int64 *)v24;
        }
      }
    }
  }
  ExAcquireFastMutex(&PopSettingLock);
  Pool2 = ExAllocatePool2(256LL, 112LL, 1952797520LL);
  v12 = (char *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 1952797520;
    v13 = *v7;
    *(_QWORD *)(Pool2 + 80) = Callback;
    *(_QWORD *)(Pool2 + 88) = Context;
    *(GUID *)(Pool2 + 52) = v13;
    *(_QWORD *)(Pool2 + 96) = v29;
    if ( v9 )
    {
      PopEnsureErratumSubscribed(v9);
      v7 = (GUID *)(v9 + 2);
    }
    *(GUID *)(v12 + 36) = *v7;
    PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, -1);
    if ( PowerSettingConfiguration )
    {
      v15 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1 )
        v15 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_IDLE_BACKGROUND_TASK.Data4;
      if ( !v15 )
        goto LABEL_31;
      v16 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1 )
        v16 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_BACKGROUND_TASK_NOTIFICATION.Data4;
      if ( !v16 )
LABEL_31:
        *((_QWORD *)v12 + 9) = PowerSettingConfiguration[v26 + 8];
      v17 = (__int64 **)PowerSettingConfiguration[3];
      if ( *v17 == PowerSettingConfiguration + 2 )
      {
        *(_QWORD *)v12 = PowerSettingConfiguration + 2;
        *((_QWORD *)v12 + 1) = v17;
        *v17 = (__int64 *)v12;
        PowerSettingConfiguration[3] = (__int64)v12;
        goto LABEL_18;
      }
    }
    else
    {
      v23 = (_QWORD *)qword_140C3C6B8;
      if ( *(__int64 **)qword_140C3C6B8 == &PopRegisteredPowerSettingCallbacks )
      {
        *(_QWORD *)v12 = &PopRegisteredPowerSettingCallbacks;
        *((_QWORD *)v12 + 1) = v23;
        *v23 = v12;
        qword_140C3C6B8 = (__int64)v12;
LABEL_18:
        v18 = 0;
        v8 = (unsigned int)PopOsInitPhase >= 3;
        if ( Handle )
          *Handle = v12;
        goto LABEL_20;
      }
    }
    __fastfail(3u);
  }
  v18 = -1073741670;
LABEL_20:
  ExReleaseFastMutex(&PopSettingLock);
  if ( v8 )
    PopSetNotificationWork(0x20u, v19, v20, v21);
  return v18;
}
