OPM::CMonitorPDO *__fastcall OPM::CMonitorPDO::CMonitorPDO(
        OPM::CMonitorPDO *this,
        struct _LUID *a2,
        unsigned int a3,
        int *a4)
{
  PVOID *v4; // r15
  OPM::CMutex *Pool2; // rax
  unsigned int v8; // edx
  void **v9; // rax
  struct _KMUTANT **v10; // rbx
  void **v11; // r14
  NTSTATUS DeviceInterfaces; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 DxgkWin32kInterface; // rax
  struct _KMUTANT *v16; // rcx
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-10h] BYREF
  PVOID EventCategoryData; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+50h]
  int *v21; // [rsp+A8h] [rbp+58h]

  v21 = a4;
  v20 = a3;
  v4 = (PVOID *)((char *)this + 16);
  *(_QWORD *)this = &OPM::CMonitorPDO::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  if ( *a4 < 0 )
    return this;
  *((struct _LUID *)this + 8) = *a2;
  SymbolicLinkList = 0LL;
  LODWORD(EventCategoryData) = 0;
  Pool2 = (OPM::CMutex *)ExAllocatePool2(258LL, 8LL, 1297108807LL);
  if ( !Pool2 )
  {
    v11 = 0LL;
    goto LABEL_17;
  }
  v9 = (void **)OPM::CMutex::CMutex(Pool2, (int *)&EventCategoryData);
  v10 = (struct _KMUTANT **)v9;
  v11 = v9;
  if ( !v9 )
  {
LABEL_17:
    DeviceInterfaces = -1073741801;
    goto LABEL_18;
  }
  DeviceInterfaces = (int)EventCategoryData;
  if ( (int)EventCategoryData < 0 )
    goto LABEL_18;
  *((_QWORD *)this + 1) = v9;
  v11 = 0LL;
  OPM::CMutex::Lock(v9);
  EventCategoryData = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v14, v13);
  DeviceInterfaces = (*(__int64 (__fastcall **)(struct _LUID *, _QWORD, PVOID *, PVOID *))(DxgkWin32kInterface + 456))(
                       a2,
                       v20,
                       &EventCategoryData,
                       v4);
  if ( DeviceInterfaces < 0
    || (ObfReferenceObject(*v4),
        DeviceInterfaces = IoRegisterPlugPlayNotification(
                             EventCategoryTargetDeviceChange,
                             0,
                             EventCategoryData,
                             (PDRIVER_OBJECT)gpWin32kDriverObject,
                             OPM::CMonitorPDO::MonitorPDORemovalCallback,
                             this,
                             (PVOID *)this + 5),
        ObfDereferenceObject(EventCategoryData),
        EventCategoryData = 0LL,
        DeviceInterfaces < 0)
    || (DeviceInterfaces = IoRegisterPlugPlayNotification(
                             EventCategoryDeviceInterfaceChange,
                             0,
                             &GUID_DEVINTERFACE_MONITOR,
                             (PDRIVER_OBJECT)gpWin32kDriverObject,
                             OPM::CMonitorPDO::MonitorInterfaceCallback,
                             this,
                             (PVOID *)this + 6),
        DeviceInterfaces < 0) )
  {
LABEL_6:
    v16 = *v10;
    if ( *v10 )
LABEL_7:
      KeReleaseMutex(v16, 0);
LABEL_18:
    if ( SymbolicLinkList )
    {
      ExFreePoolWithTag(SymbolicLinkList, 0);
      SymbolicLinkList = 0LL;
    }
    if ( v11 )
      OPM::CMutex::`scalar deleting destructor'(v11, v8);
    goto LABEL_22;
  }
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, (PDEVICE_OBJECT)*v4, 0, &SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
    goto LABEL_11;
  if ( !*SymbolicLinkList )
  {
    DeviceInterfaces = -1073741823;
    goto LABEL_6;
  }
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 24), SymbolicLinkList);
LABEL_11:
  SymbolicLinkList = 0LL;
  v16 = *v10;
  if ( *v10 )
    goto LABEL_7;
LABEL_22:
  if ( DeviceInterfaces >= 0 )
  {
    *((_QWORD *)this + 7) = PsGetCurrentProcessId();
  }
  else
  {
    if ( *((_QWORD *)this + 1) )
      OPM::CMonitorPDO::Destroy(this);
    *v21 = DeviceInterfaces;
  }
  return this;
}
