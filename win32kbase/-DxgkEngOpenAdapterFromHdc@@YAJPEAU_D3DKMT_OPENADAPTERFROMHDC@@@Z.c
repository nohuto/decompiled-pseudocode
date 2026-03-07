__int64 __fastcall DxgkEngOpenAdapterFromHdc(struct _D3DKMT_OPENADAPTERFROMHDC *a1)
{
  struct _D3DKMT_OPENADAPTERFROMHDC *v2; // rax
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rbx
  struct _DEVICE_OBJECT *v7; // rcx
  int v8; // r8d
  int v9; // esi
  int v10; // edx
  const WCHAR *v11; // rdx
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  PDEVICE_OBJECT v15; // rcx
  __int64 DxgkWin32kInterface; // rax
  _DWORD *p_hAdapter; // rdx
  _QWORD *p_AdapterLuid; // rdx
  _DWORD *p_VidPnSourceId; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  _BOOL8 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-68h] BYREF
  HDC v31[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h]
  _OWORD v33[4]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v34; // [rsp+98h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_OPENADAPTERFROMHDC *)MmUserProbeAddress;
  *(_OWORD *)v31 = *(_OWORD *)&v2->hDc;
  v32 = *(_QWORD *)&v2->AdapterLuid.HighPart;
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v31, v31[0]);
  if ( v31[0] )
  {
    v6 = *((_QWORD *)v31[0] + 6);
    v34 = v6;
    if ( v6 )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v6 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v6 + 48), 11LL);
      v8 = *(_DWORD *)(v6 + 40);
      v9 = 1;
      if ( (v8 & 0x20001) != 1 )
        goto LABEL_35;
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v34) )
      {
        v4 = *(_DWORD *)(*(_QWORD *)(v6 + 2552) + 248LL);
        DestinationString = 0LL;
        v11 = *(const WCHAR **)(v6 + 2552);
LABEL_8:
        RtlInitUnicodeString(&DestinationString, v11);
        DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
        goto LABEL_9;
      }
      if ( v10 == 1
        && (v21 = *(_QWORD *)(v6 + 2552)) != 0
        && (v7 = *(struct _DEVICE_OBJECT **)(v21 + 296)) != 0LL
        && (*(_DWORD *)(v21 + 164) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v21 + 248);
      }
      else
      {
LABEL_35:
        if ( (v8 & 0x20000) != 0 )
          goto LABEL_9;
        v22 = *(_QWORD *)(v6 + 2552);
        if ( !v22 || (*(_DWORD *)(v22 + 160) & 0x4000000) == 0 )
          goto LABEL_9;
        v23 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
        v25 = (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu;
        if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
          || !*(_QWORD *)(v23 + 3096)
          || (PVOID)PsGetCurrentProcess(v25, v23, 65533LL, v24) == gpepCSRSS
          || UserIsCurrentProcessDwm(v25, v26, v27, v28) )
        {
          v9 = 0;
        }
        if ( !v9 )
          goto LABEL_9;
        v4 = *(_DWORD *)(*(_QWORD *)(v6 + 2552) + 248LL);
        v29 = *(_QWORD *)(SGDGetSessionState(v25) + 24);
        if ( *(_DWORD *)(v29 + 3080) )
        {
          DestinationString = 0LL;
          v11 = (const WCHAR *)(v29 + 3104);
          goto LABEL_8;
        }
        v7 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(v6 + 2552) + 296LL);
        if ( !v7 )
        {
LABEL_9:
          EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(v6 + 48));
          v12 = *(struct _ERESOURCE **)(v6 + 48);
          if ( v12 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v12);
            PsLeavePriorityRegion(v14, v13);
          }
          goto LABEL_11;
        }
      }
      DeviceObject = v7;
      ObfReferenceObject(v7);
      DeviceObjectPointer = 0;
      goto LABEL_9;
    }
  }
LABEL_11:
  memset(v33, 0, 24);
  if ( DeviceObjectPointer < 0 )
    goto LABEL_40;
  v15 = DeviceObject;
  *(_QWORD *)&v33[0] = DeviceObject;
  if ( FileObject )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    FileObject = 0LL;
  }
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v15, v5);
  DeviceObjectPointer = (*(__int64 (__fastcall **)(_OWORD *))(DxgkWin32kInterface + 64))(v33);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_40:
    *((_QWORD *)&v33[0] + 1) = 0LL;
    LODWORD(v33[1]) = 0;
    v4 = 0;
  }
  p_hAdapter = &a1->hAdapter;
  if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
    p_hAdapter = (_DWORD *)MmUserProbeAddress;
  *p_hAdapter = DWORD2(v33[0]);
  p_AdapterLuid = &a1->AdapterLuid;
  if ( (unsigned __int64)&a1->AdapterLuid >= MmUserProbeAddress )
    p_AdapterLuid = (_QWORD *)MmUserProbeAddress;
  *p_AdapterLuid = *(_QWORD *)((char *)v33 + 12);
  p_VidPnSourceId = &a1->VidPnSourceId;
  if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
    p_VidPnSourceId = (_DWORD *)MmUserProbeAddress;
  *p_VidPnSourceId = v4;
  DCOBJ::~DCOBJ((DCOBJ *)v31);
  return (unsigned int)DeviceObjectPointer;
}
