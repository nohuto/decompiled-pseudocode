__int64 __fastcall PopPolicyDeviceHandleWakeAlarmNotification(__int64 a1)
{
  int v2; // ecx
  bool v3; // si
  __int64 v4; // rax
  NTSTATUS DeviceObjectPointer; // ebx
  IRP *v6; // rax
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // eax
  int v14; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v15; // [rsp+5Ch] [rbp-ACh] BYREF
  char v16; // [rsp+5Eh] [rbp-AAh] BYREF
  char v17; // [rsp+5Fh] [rbp-A9h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-A0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-90h] BYREF
  __int64 v22; // [rsp+90h] [rbp-78h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  __int128 OutputBuffer; // [rsp+A8h] [rbp-60h] BYREF
  int v25; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v27; // [rsp+E8h] [rbp-20h]
  __int64 v28; // [rsp+F0h] [rbp-18h]
  int *v29; // [rsp+F8h] [rbp-10h]
  __int64 v30; // [rsp+100h] [rbp-8h]
  char *v31; // [rsp+108h] [rbp+0h]
  __int64 v32; // [rsp+110h] [rbp+8h]
  char *v33; // [rsp+118h] [rbp+10h]
  __int64 v34; // [rsp+120h] [rbp+18h]
  char *v35; // [rsp+128h] [rbp+20h]
  __int64 v36; // [rsp+130h] [rbp+28h]
  __int16 *v37; // [rsp+138h] [rbp+30h]
  __int64 v38; // [rsp+140h] [rbp+38h]
  char *v39; // [rsp+148h] [rbp+40h]
  __int64 v40; // [rsp+150h] [rbp+48h]
  char *v41; // [rsp+158h] [rbp+50h]
  __int64 v42; // [rsp+160h] [rbp+58h]
  PFILE_OBJECT *p_FileObject; // [rsp+168h] [rbp+60h]
  __int64 v44; // [rsp+170h] [rbp+68h]
  char *v45; // [rsp+178h] [rbp+70h]
  __int64 v46; // [rsp+180h] [rbp+78h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+188h] [rbp+80h]
  __int64 v48; // [rsp+190h] [rbp+88h]
  struct _KEVENT *p_Event; // [rsp+198h] [rbp+90h]
  __int64 v50; // [rsp+1A0h] [rbp+98h]

  v25 = 0;
  v22 = 0LL;
  DeviceObject = 0LL;
  LODWORD(v18) = 1;
  OutputBuffer = 0LL;
  FileObject = 0LL;
  Event.Header.WaitListHead = 0LL;
  IoStatusBlock = 0LL;
  EmClientQueryRuleState(&GUID_EM_RULE_TREAT_TAD_AS_RTC, &v18);
  v3 = (_DWORD)v18 == 2;
  v4 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v4 && (_DWORD)v18 != 2 )
  {
    DeviceObjectPointer = IoGetDeviceObjectPointer(*(PUNICODE_STRING *)(a1 + 40), 3u, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_11;
    KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(
           0x29421Cu,
           DeviceObject,
           0LL,
           0,
           &OutputBuffer,
           0x14u,
           0,
           (PKEVENT)&Event.Header.WaitListHead,
           &IoStatusBlock);
    if ( v6 )
    {
      DeviceObjectPointer = IofCallDriver(DeviceObject, v6);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
    }
    else
    {
      DeviceObjectPointer = -1073741670;
    }
    ObfDereferenceObject(FileObject);
    if ( DeviceObjectPointer < 0 )
    {
LABEL_11:
      OutputBuffer = 0LL;
      v25 = 0;
    }
    if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      LODWORD(DeviceObject) = v7;
      v27 = &v18;
      v14 = OutputBuffer;
      LODWORD(v18) = DeviceObjectPointer;
      v29 = &v14;
      v31 = (char *)&v14 + 1;
      v33 = (char *)&v14 + 2;
      v35 = (char *)&v14 + 3;
      v15 = WORD2(OutputBuffer);
      v37 = &v15;
      v39 = (char *)&v15 + 1;
      v16 = BYTE6(OutputBuffer);
      v41 = &v16;
      LODWORD(FileObject) = DWORD2(OutputBuffer);
      p_FileObject = &FileObject;
      v17 = BYTE12(OutputBuffer);
      v45 = &v17;
      p_DeviceObject = &DeviceObject;
      p_Event = &Event;
      v28 = 4LL;
      v30 = 1LL;
      v32 = 1LL;
      v34 = 1LL;
      v36 = 1LL;
      v38 = 1LL;
      v40 = 1LL;
      v42 = 1LL;
      v44 = 4LL;
      v46 = 1LL;
      v48 = 4LL;
      *(_QWORD *)&Event.Header.Lock = 0x1000000LL;
      v50 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)&word_14003024E,
        0LL,
        0LL,
        0xEu,
        &v26);
    }
  }
  PopAcquirePolicyLock(v2);
  v11 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v11 || v3 )
  {
    if ( byte_140C3D6F3 )
    {
      byte_140C3D6F3 = 0;
      PopResetCurrentPolicies();
    }
    v12 = 0;
    PopAcpiTimeAndAlarmCapabilities = 0LL;
  }
  else
  {
    if ( byte_140C3D6F3 != 1 )
    {
      byte_140C3D6F3 = 1;
      PopResetCurrentPolicies();
    }
    v12 = v25;
    PopAcpiTimeAndAlarmCapabilities = OutputBuffer;
  }
  dword_140C3A130 = v12;
  return PopReleasePolicyLock(v9, v8, v10);
}
