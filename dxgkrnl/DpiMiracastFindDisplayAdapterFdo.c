__int64 __fastcall DpiMiracastFindDisplayAdapterFdo(struct _DEVICE_OBJECT *Object, __int64 *a2, _BYTE *a3)
{
  char v4; // bl
  __int64 *v5; // r15
  struct _DEVICE_OBJECT *v6; // r13
  __int64 v7; // rbp
  int MiracastSupportInternal; // r14d
  char v9; // al
  int DisplayAdapterFdoIhv; // eax
  __int64 v11; // r12
  __int64 v12; // rsi
  bool v13; // zf
  struct _IO_REMOVE_LOCK *v14; // r15
  int v15; // ecx
  struct _DEVICE_OBJECT *LowerDeviceObject; // r15
  struct _DEVICE_OBJECT *v17; // r13
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a2;
  v6 = Object;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v4 = 1;
  }
  v23 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v7 = 0LL;
  MiracastSupportInternal = DxgkMiracastQueryMiracastSupportInternal((__int64)&v19);
  if ( MiracastSupportInternal < 0 )
    goto LABEL_48;
  v9 = BYTE8(v19);
  if ( a3 )
    *a3 = BYTE8(v19);
  if ( v9 )
  {
    DisplayAdapterFdoIhv = DpiMiracastFindDisplayAdapterFdoIhv(&v23);
    v7 = v23;
    MiracastSupportInternal = DisplayAdapterFdoIhv;
    goto LABEL_42;
  }
  v11 = qword_1C013B4C8;
  MiracastSupportInternal = -1073741275;
  if ( *(_QWORD *)v11 == v11 )
  {
LABEL_47:
    *v5 = 0LL;
    goto LABEL_48;
  }
  do
  {
    if ( MiracastSupportInternal >= 0 )
    {
      v5 = a2;
      goto LABEL_52;
    }
    KeWaitForSingleObject((PVOID)(v11 + 72), Executive, 0, 0, 0LL);
    v12 = *(_QWORD *)(v11 + 56);
    if ( *(_QWORD *)v12 == v12 )
      goto LABEL_40;
    while ( 1 )
    {
      v13 = *(_DWORD *)(v12 + 16) == 1953656900;
      v7 = v12;
      v23 = v12;
      if ( v13 && *(_DWORD *)(v12 + 20) == 2 )
      {
        v14 = (struct _IO_REMOVE_LOCK *)(v12 + 64);
        if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v12 + 64), (PVOID)v12, File, 1u, 0x20u) >= 0 )
          break;
      }
LABEL_37:
      v12 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 == *(_QWORD *)(v11 + 56) )
        goto LABEL_40;
    }
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v12 + 484) )
      DpiCheckForOutstandingD3Requests(v12);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v12 + 168), 1u);
    v15 = *(_DWORD *)(v12 + 236);
    if ( v15 != 2 && (*(_DWORD *)(v12 + 240) != 2 || ((v15 - 3) & 0xFFFFFFFC) != 0 || v15 == 4)
      || *(_DWORD *)(v12 + 3240) == -1
      || *(_DWORD *)(v12 + 4000) == 1
      || *(_DWORD *)(v12 + 284) != 1
      || !*(_QWORD *)(v12 + 4872) )
    {
      goto LABEL_34;
    }
    LowerDeviceObject = v6;
    ObfReferenceObject(v6);
    if ( v6 )
    {
      while ( LowerDeviceObject != *(struct _DEVICE_OBJECT **)(v12 + 24) )
      {
        v17 = LowerDeviceObject;
        LowerDeviceObject = IoGetLowerDeviceObject(LowerDeviceObject);
        if ( v17 )
          ObfDereferenceObject(v17);
        if ( !LowerDeviceObject )
          goto LABEL_31;
      }
      ObfDereferenceObject(LowerDeviceObject);
LABEL_31:
      v6 = Object;
    }
    if ( LowerDeviceObject != *(struct _DEVICE_OBJECT **)(v12 + 24) )
    {
      v14 = (struct _IO_REMOVE_LOCK *)(v12 + 64);
LABEL_34:
      if ( *(_BYTE *)(v12 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v12 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 168));
      KeLeaveCriticalRegion();
      IoReleaseRemoveLockEx(v14, (PVOID)v12, 0x20u);
      v7 = 0LL;
      v23 = 0LL;
      goto LABEL_37;
    }
    MiracastSupportInternal = 0;
LABEL_40:
    KeReleaseMutex((PRKMUTEX)(v11 + 72), 0);
    v11 = *(_QWORD *)v11;
  }
  while ( *(_QWORD *)v11 != qword_1C013B4C8 );
  v5 = a2;
LABEL_42:
  if ( MiracastSupportInternal < 0 )
  {
    if ( v7 )
    {
      if ( *(_BYTE *)(v7 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
      KeLeaveCriticalRegion();
    }
    goto LABEL_47;
  }
LABEL_52:
  *v5 = v7;
  MiracastSupportInternal = 0;
LABEL_48:
  if ( v4 )
  {
    _InterlockedExchange64(&qword_1C013B4D8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)MiracastSupportInternal;
}
