__int64 __fastcall IopLegacyResourceAllocation(int a1, __int64 a2, __int64 a3, __int64 a4, const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v6; // r14d
  __int64 v9; // r12
  PDEVICE_OBJECT v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // r9
  int RootEnumeratedDeviceObject; // edi
  void *v14; // rcx
  __int64 v15; // rsi
  int DeviceNode; // eax
  _QWORD *v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // r11
  PDEVICE_OBJECT v25; // rcx
  const void **v26; // rsi
  _DWORD *v27; // rcx
  size_t v28; // r12
  void *Pool2; // r14
  _DWORD *v30; // rax
  void *v31; // rbx
  unsigned int v32; // eax
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v34[8]; // [rsp+40h] [rbp-40h] BYREF
  PVOID v37; // [rsp+D0h] [rbp+50h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  v9 = a2;
  v10 = 0LL;
  v11 = 0LL;
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  RootEnumeratedDeviceObject = -1073741823;
  if ( a3 )
  {
    v14 = *(void **)(*(_QWORD *)(a3 + 312) + 40LL);
    v37 = v14;
    if ( v14 )
    {
      v10 = (PDEVICE_OBJECT)a3;
      v11 = v14;
LABEL_4:
      RootEnumeratedDeviceObject = 0;
      goto LABEL_6;
    }
    if ( (*(_DWORD *)(a3 + 48) & 0x1000) == 0 )
    {
      DeviceNode = PipAllocateDeviceNode(a3, (__int64)&v37);
      v18 = v37;
      RootEnumeratedDeviceObject = DeviceNode;
      if ( v37 )
      {
        if ( DeviceNode == -1073740946 )
        {
          IopDestroyDeviceNode((char *)v37);
          goto LABEL_15;
        }
        PipSetDevNodeFlags((__int64)v37, 0x20000);
        RootEnumeratedDeviceObject = 0;
        v10 = (PDEVICE_OBJECT)a3;
        v11 = v18;
      }
      else
      {
        RootEnumeratedDeviceObject = -1073741670;
      }
      v6 = a1;
    }
  }
  else
  {
    v19 = (_QWORD *)IopLegacyDeviceNode;
    v37 = (PVOID)IopLegacyDeviceNode;
    v20 = IopLegacyDeviceNode;
    v21 = IopLegacyDeviceNode;
    v22 = IopLegacyDeviceNode;
    if ( IopLegacyDeviceNode )
    {
      v12 = IopLegacyDeviceNode;
      v23 = IopLegacyDeviceNode;
      v24 = IopLegacyDeviceNode;
      do
      {
        v21 = v12;
        v22 = v24;
        if ( *(_QWORD *)(v23 + 432) == v9 )
          break;
        v19 = (_QWORD *)*v19;
        v37 = v19;
        v20 = (__int64)v19;
        v12 = (__int64)v19;
        v21 = (__int64)v19;
        v23 = (__int64)v19;
        v24 = (__int64)v19;
        v22 = (__int64)v19;
      }
      while ( v19 );
    }
    if ( v20 )
    {
      v10 = *(PDEVICE_OBJECT *)(v22 + 32);
      v11 = (_QWORD *)v21;
      goto LABEL_4;
    }
    DeviceObject[0] = 0LL;
    RootEnumeratedDeviceObject = IopCreateRootEnumeratedDeviceObject(DeviceObject, v21, v22, v12);
    if ( RootEnumeratedDeviceObject >= 0 )
    {
      v10 = DeviceObject[0];
      v25 = DeviceObject[0];
      DeviceObject[0]->Flags |= 0x1000u;
      RootEnumeratedDeviceObject = PipAllocateDeviceNode((__int64)v25, (__int64)&v37);
      if ( RootEnumeratedDeviceObject == -1073740946 || (v11 = v37) == 0LL )
      {
        IoDeleteDevice(v10);
        RootEnumeratedDeviceObject = -1073741670;
        goto LABEL_15;
      }
      v10->DriverObject = (struct _DRIVER_OBJECT *)v9;
      PipSetDevNodeFlags((__int64)v11, 131073);
      PipSetDevNodeState((__int64)v11, 772);
      v11[54] = v9;
      *v11 = IopLegacyDeviceNode;
      if ( IopLegacyDeviceNode )
        *(_QWORD *)(IopLegacyDeviceNode + 8) = v11;
      IopLegacyDeviceNode = (__int64)v11;
    }
  }
  if ( RootEnumeratedDeviceObject < 0 )
    goto LABEL_15;
LABEL_6:
  if ( v11[2] )
  {
    if ( !a4 )
    {
LABEL_8:
      IopReleaseResources(v11);
      goto LABEL_9;
    }
  }
  else if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 4) == -1 )
      *(_DWORD *)(a4 + 4) = 1;
    v11[2] = IopRootDeviceNode;
  }
  if ( v11[52] || v11[68] )
    goto LABEL_8;
LABEL_9:
  if ( a4 )
  {
    memset(v34, 0, sizeof(v34));
    v34[0] = v10;
    v34[3] = a4;
    HIDWORD(v34[1]) = v6;
    LODWORD(v34[1]) = 128;
    PnpAllocateResources(1u, v34, 1, 0LL);
    RootEnumeratedDeviceObject = v34[7];
    if ( SLODWORD(v34[7]) >= 0 )
    {
      v26 = a5;
      v27 = (_DWORD *)v34[5];
      if ( *a5 )
        v27 = *a5;
      v28 = (unsigned int)PnpDetermineResourceListSize(v27);
      Pool2 = (void *)ExAllocatePool2(256LL, v28, 538996816LL);
      if ( Pool2 )
      {
        if ( *v26 )
          ExFreePoolWithTag((PVOID)v34[5], 0);
        else
          *v26 = (const void *)v34[5];
        ExAcquireFastMutex(&PiResourceListLock);
        v11[52] = Pool2;
        memmove(Pool2, *v26, v28);
        v11[53] = v34[6];
        ExReleaseFastMutex(&PiResourceListLock);
        v15 = v11[66];
        v9 = a2;
        goto LABEL_11;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v11[52] = v34[5];
      v11[53] = v34[6];
      ExReleaseFastMutex(&PiResourceListLock);
      IopReleaseResources(v11);
      RootEnumeratedDeviceObject = -1073741670;
    }
    IopRemoveLegacyDeviceNode(a3, v11);
    goto LABEL_15;
  }
  v15 = v11[66];
  IopRemoveLegacyDeviceNode(a3, v11);
LABEL_11:
  if ( v15 )
  {
    v30 = (_DWORD *)IopCombineLegacyResources(v15);
    v31 = v30;
    if ( v30 )
    {
      v32 = PnpDetermineResourceListSize(v30);
      IopWriteAllocatedResourcesToRegistry(v15, v31, v32);
      ExFreePoolWithTag(v31, 0);
    }
  }
  if ( a1 != 3 && a4 )
    IopSetLegacyResourcesFlag(v9);
LABEL_15:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)RootEnumeratedDeviceObject;
}
