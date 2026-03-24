/*
 * XREFs of ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00C0430
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00C0278 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00885A0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ??0CMutex@OPM@@QEAA@PEAJ@Z @ 0x1C00B09C0 (--0CMutex@OPM@@QEAA@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x1C013C294 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x1C013C2D0 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 */

OPM::CMonitorPDO *__fastcall OPM::CMonitorPDO::CMonitorPDO(
        OPM::CMonitorPDO *this,
        struct _LUID *a2,
        unsigned int a3,
        int *a4)
{
  PVOID *v4; // r15
  NTSTATUS DeviceInterfaces; // esi
  OPM::CMutex *PoolWithTag; // rax
  unsigned int v9; // edx
  OPM::CMutex *v10; // rax
  struct _KMUTANT **v11; // r14
  struct _KMUTANT **v12; // rbx
  void **v13; // rcx
  struct _KMUTANT *v14; // rcx
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-10h] BYREF
  PVOID EventCategoryData; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+50h]
  int *v19; // [rsp+A8h] [rbp+58h]

  v19 = a4;
  v18 = a3;
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
  DeviceInterfaces = 0;
  LODWORD(EventCategoryData) = 0;
  PoolWithTag = (OPM::CMutex *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x4D504F47u);
  if ( PoolWithTag )
  {
    v10 = OPM::CMutex::CMutex(PoolWithTag, (int *)&EventCategoryData);
    DeviceInterfaces = (int)EventCategoryData;
    v11 = (struct _KMUTANT **)v10;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = v11;
  if ( !v11 )
  {
    DeviceInterfaces = -1073741801;
    goto LABEL_14;
  }
  if ( DeviceInterfaces < 0 )
    goto LABEL_14;
  *((_QWORD *)this + 1) = v11;
  v13 = (void **)v11;
  v11 = 0LL;
  OPM::CMutex::Lock(v13);
  EventCategoryData = 0LL;
  DeviceInterfaces = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, PVOID *, PVOID *))qword_1C0250A58)(
                       a2,
                       v18,
                       &EventCategoryData,
                       v4);
  if ( DeviceInterfaces < 0 )
    goto LABEL_25;
  ObfReferenceObject(*v4);
  DeviceInterfaces = IoRegisterPlugPlayNotification(
                       EventCategoryTargetDeviceChange,
                       0,
                       EventCategoryData,
                       gpWin32kDriverObject,
                       OPM::CMonitorPDO::MonitorPDORemovalCallback,
                       this,
                       (PVOID *)this + 5);
  ObfDereferenceObject(EventCategoryData);
  EventCategoryData = 0LL;
  if ( DeviceInterfaces < 0 )
    goto LABEL_25;
  DeviceInterfaces = IoRegisterPlugPlayNotification(
                       EventCategoryDeviceInterfaceChange,
                       0,
                       &GUID_DEVINTERFACE_MONITOR,
                       gpWin32kDriverObject,
                       OPM::CMonitorPDO::MonitorInterfaceCallback,
                       this,
                       (PVOID *)this + 6);
  if ( DeviceInterfaces < 0 )
    goto LABEL_25;
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, (PDEVICE_OBJECT)*v4, 0, &SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
    goto LABEL_12;
  if ( !*SymbolicLinkList )
  {
    DeviceInterfaces = -1073741823;
LABEL_25:
    v14 = *v12;
    if ( !*v12 )
      goto LABEL_14;
    goto LABEL_13;
  }
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 24), SymbolicLinkList);
LABEL_12:
  SymbolicLinkList = 0LL;
  v14 = *v12;
  if ( *v12 )
  {
LABEL_13:
    KeReleaseMutex(v14, 0);
LABEL_14:
    if ( SymbolicLinkList )
    {
      ExFreePoolWithTag(SymbolicLinkList, 0);
      SymbolicLinkList = 0LL;
    }
    if ( v11 )
      OPM::CMutex::`scalar deleting destructor'(v11, v9);
  }
  if ( DeviceInterfaces < 0 )
  {
    if ( *((_QWORD *)this + 1) )
      OPM::CMonitorPDO::Destroy(this);
    *v19 = DeviceInterfaces;
  }
  else
  {
    *((_QWORD *)this + 7) = PsGetCurrentProcessId();
  }
  return this;
}
