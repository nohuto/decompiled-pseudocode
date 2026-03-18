/*
 * XREFs of ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C0176230
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C002E950 (GreReleaseSemaphoreInternal.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0072044 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngOpenAdapterFromHdc(struct _D3DKMT_OPENADAPTERFROMHDC *a1)
{
  struct _D3DKMT_OPENADAPTERFROMHDC *v2; // rax
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // r9
  __int16 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r8
  const WCHAR *v10; // rdx
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  _DWORD *p_hAdapter; // rdx
  _QWORD *p_AdapterLuid; // rdx
  _DWORD *p_VidPnSourceId; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h]
  _BYTE v23[24]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v24[9]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_OPENADAPTERFROMHDC *)MmUserProbeAddress;
  DestinationString = *(struct _UNICODE_STRING *)&v2->hDc;
  v22 = *(_QWORD *)&v2->AdapterLuid.HighPart;
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v24, *(HDC *)&DestinationString.Length);
  if ( v24[0] )
  {
    v5 = *(_QWORD *)(v24[0] + 48LL);
    v25 = v5;
    if ( v5 )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 48), 11);
      v6 = *(unsigned int *)(v5 + 40);
      v7 = 1;
      v8 = *(_DWORD *)(v5 + 40) & 1;
      v9 = 0x20000LL;
      if ( (*(_DWORD *)(v5 + 40) & 1) != 0 && (v6 & 0x20000) == 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v25) )
      {
        v4 = *(_DWORD *)(*(_QWORD *)(v5 + 2552) + 256LL);
        DestinationString = 0LL;
        v10 = *(const WCHAR **)(v5 + 2552);
LABEL_24:
        RtlInitUnicodeString(&DestinationString, v10);
        DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
        goto LABEL_27;
      }
      if ( !(_DWORD)v8 )
        goto LABEL_42;
      if ( ((unsigned int)v6 & (unsigned int)v9) != 0 )
      {
LABEL_27:
        EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 48), v9);
        GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v5 + 48));
        goto LABEL_28;
      }
      v8 = *(_QWORD *)(v5 + 2552);
      if ( v8 && (v11 = *(struct _DEVICE_OBJECT **)(v8 + 304)) != 0LL && (*(_DWORD *)(v8 + 164) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v8 + 256);
      }
      else
      {
LABEL_42:
        if ( ((unsigned int)v6 & (unsigned int)v9) != 0 )
          goto LABEL_27;
        v12 = *(_QWORD *)(v5 + 2552);
        if ( !v12
          || (*(_DWORD *)(v12 + 160) & 0x4000000) == 0
          || (unsigned __int16)(gProtocolType - v7) > 0xFFFDu
          || !Object
          || (PVOID)PsGetCurrentProcess(65533LL, v8, v9, v6) == gpepCSRSS
          || UserIsCurrentProcessDwm(v14, v13, v9, v15) )
        {
          goto LABEL_27;
        }
        v16 = *(_QWORD *)(v5 + 2552);
        v4 = *(_DWORD *)(v16 + 256);
        if ( dword_1C0297080 )
        {
          DestinationString = 0LL;
          v10 = &xmmword_1C0297098;
          goto LABEL_24;
        }
        v11 = *(struct _DEVICE_OBJECT **)(v16 + 304);
        if ( !v11 )
          goto LABEL_27;
      }
      DeviceObject = v11;
      ObfReferenceObject(v11);
      DeviceObjectPointer = 0;
      goto LABEL_27;
    }
  }
LABEL_28:
  memset(v23, 0, sizeof(v23));
  if ( DeviceObjectPointer < 0 )
    goto LABEL_32;
  *(_QWORD *)v23 = DeviceObject;
  if ( FileObject )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    FileObject = 0LL;
  }
  DeviceObjectPointer = ((__int64 (__fastcall *)(_BYTE *))qword_1C02966A0)(v23);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_32:
    *(_QWORD *)&v23[8] = 0LL;
    *(_DWORD *)&v23[16] = 0;
    v4 = 0;
  }
  p_hAdapter = &a1->hAdapter;
  if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
    p_hAdapter = (_DWORD *)MmUserProbeAddress;
  *p_hAdapter = *(_DWORD *)&v23[8];
  p_AdapterLuid = &a1->AdapterLuid;
  if ( (unsigned __int64)&a1->AdapterLuid >= MmUserProbeAddress )
    p_AdapterLuid = (_QWORD *)MmUserProbeAddress;
  *p_AdapterLuid = *(_QWORD *)&v23[12];
  p_VidPnSourceId = &a1->VidPnSourceId;
  if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
    p_VidPnSourceId = (_DWORD *)MmUserProbeAddress;
  *p_VidPnSourceId = v4;
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return (unsigned int)DeviceObjectPointer;
}
