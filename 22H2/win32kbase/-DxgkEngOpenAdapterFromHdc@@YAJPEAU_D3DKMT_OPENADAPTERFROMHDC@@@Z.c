/*
 * XREFs of ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C014A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0012124 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003A0E0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003C8E8 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C0048F20 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngOpenAdapterFromHdc(struct _D3DKMT_OPENADAPTERFROMHDC *a1)
{
  struct _D3DKMT_OPENADAPTERFROMHDC *v2; // rax
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // esi
  __int64 v5; // rbx
  int v6; // r9d
  __int16 v7; // r10
  __int64 v8; // rdx
  int v9; // r8d
  const WCHAR *v10; // rdx
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *p_hAdapter; // rdx
  _QWORD *p_AdapterLuid; // rdx
  _DWORD *p_VidPnSourceId; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h]
  _BYTE v22[24]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v23[9]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_OPENADAPTERFROMHDC *)MmUserProbeAddress;
  DestinationString = *(struct _UNICODE_STRING *)&v2->hDc;
  v21 = *(_QWORD *)&v2->AdapterLuid.HighPart;
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v23, *(HDC *)&DestinationString.Length);
  if ( v23[0] )
  {
    v5 = *(_QWORD *)(v23[0] + 48LL);
    v24 = v5;
    if ( v5 )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 48), 11);
      v6 = *(_DWORD *)(v5 + 40);
      v7 = 1;
      v8 = v6 & 1;
      v9 = 0x20000;
      if ( (v6 & 1) != 0 && (v6 & 0x20000) == 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v24) )
      {
        v4 = *(_DWORD *)(*(_QWORD *)(v5 + 2576) + 256LL);
        DestinationString = 0LL;
        v10 = *(const WCHAR **)(v5 + 2576);
LABEL_24:
        RtlInitUnicodeString(&DestinationString, v10);
        DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
        goto LABEL_27;
      }
      if ( !(_DWORD)v8 )
        goto LABEL_42;
      if ( (v6 & v9) != 0 )
      {
LABEL_27:
        EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 48), v9);
        GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v5 + 48));
        goto LABEL_28;
      }
      v8 = *(_QWORD *)(v5 + 2576);
      if ( v8 && (v11 = *(struct _DEVICE_OBJECT **)(v8 + 304)) != 0LL && (*(_DWORD *)(v8 + 164) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v8 + 256);
      }
      else
      {
LABEL_42:
        if ( (v6 & v9) != 0 )
          goto LABEL_27;
        v12 = *(_QWORD *)(v5 + 2576);
        if ( !v12
          || (*(_DWORD *)(v12 + 160) & 0x4000000) == 0
          || (unsigned __int16)(gProtocolType - v7) > 0xFFFDu
          || !Object
          || (PVOID)PsGetCurrentProcess(65533LL, v8) == gpepCSRSS
          || UserIsCurrentProcessDwm(v14, v13) )
        {
          goto LABEL_27;
        }
        v15 = *(_QWORD *)(v5 + 2576);
        v4 = *(_DWORD *)(v15 + 256);
        if ( dword_1C02512E0 )
        {
          DestinationString = 0LL;
          v10 = &Dest;
          goto LABEL_24;
        }
        v11 = *(struct _DEVICE_OBJECT **)(v15 + 304);
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
  memset(v22, 0, sizeof(v22));
  if ( DeviceObjectPointer < 0 )
    goto LABEL_32;
  *(_QWORD *)v22 = DeviceObject;
  if ( FileObject )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    FileObject = 0LL;
  }
  DeviceObjectPointer = ((__int64 (__fastcall *)(_BYTE *))qword_1C02508D0)(v22);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_32:
    *(_QWORD *)&v22[8] = 0LL;
    *(_DWORD *)&v22[16] = 0;
    v4 = 0;
  }
  p_hAdapter = &a1->hAdapter;
  if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
    p_hAdapter = (_DWORD *)MmUserProbeAddress;
  *p_hAdapter = *(_DWORD *)&v22[8];
  p_AdapterLuid = &a1->AdapterLuid;
  if ( (unsigned __int64)&a1->AdapterLuid >= MmUserProbeAddress )
    p_AdapterLuid = (_QWORD *)MmUserProbeAddress;
  *p_AdapterLuid = *(_QWORD *)&v22[12];
  p_VidPnSourceId = &a1->VidPnSourceId;
  if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
    p_VidPnSourceId = (_DWORD *)MmUserProbeAddress;
  *p_VidPnSourceId = v4;
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return (unsigned int)DeviceObjectPointer;
}
