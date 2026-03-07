__int64 __fastcall IopRegisterDeviceInterface(
        const wchar_t *a1,
        int *a2,
        const wchar_t *a3,
        char a4,
        PVOID *a5,
        __int64 a6)
{
  unsigned int *v6; // rdi
  HANDLE v7; // r12
  unsigned int *v8; // rsi
  ULONG_PTR v9; // r14
  unsigned int *v10; // r13
  int DeviceInterfaceName; // ebx
  wchar_t *Pool2; // rax
  _DWORD *v13; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdi
  struct _KTHREAD *v16; // rax
  ULONG_PTR v17; // rcx
  int v18; // esi
  char v19; // si
  int v20; // eax
  const wchar_t *v21; // r12
  int ObjectProperty; // eax
  char v23; // si
  int Object; // eax
  unsigned int v26; // ebx
  wchar_t *v27; // rax
  size_t v28; // [rsp+30h] [rbp-D0h]
  size_t v29; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+38h] [rbp-C8h]
  char v31; // [rsp+60h] [rbp-A0h] BYREF
  char v32; // [rsp+61h] [rbp-9Fh]
  unsigned int v33; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v35; // [rsp+70h] [rbp-90h] BYREF
  PVOID v36; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+8Ch] [rbp-74h] BYREF
  int v40; // [rsp+90h] [rbp-70h] BYREF
  const wchar_t *v41; // [rsp+98h] [rbp-68h]
  const wchar_t *v42; // [rsp+A0h] [rbp-60h]
  PVOID v43; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int128 Source2; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t Str2[40]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t v48[40]; // [rsp+120h] [rbp+20h] BYREF

  v41 = a1;
  v45 = a6;
  v6 = 0LL;
  v35 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  v36 = 0LL;
  LOBYTE(v38) = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0LL;
  v31 = 0;
  BugCheckParameter2 = 0LL;
  v43 = 0LL;
  v40 = 0;
  v39 = 0;
  *a5 = 0LL;
  v32 = a4;
  v42 = a3;
  Source2 = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  v33 = 512;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 1024LL, 538996816LL);
  *a5 = Pool2;
  if ( !Pool2 )
    goto LABEL_45;
  LODWORD(v28) = 512;
  DeviceInterfaceName = CmGetDeviceInterfaceName((__int64)&v33, Str2, v41, v42, 0, Pool2, v28, &v33);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v26 = v33;
  v27 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v33, 538996816LL);
  *a5 = v27;
  if ( !v27 )
  {
LABEL_45:
    DeviceInterfaceName = -1073741670;
    goto LABEL_46;
  }
  LODWORD(v29) = v26;
  DeviceInterfaceName = CmGetDeviceInterfaceName((__int64)&v33, Str2, v41, v42, 0, v27, v29, &v33);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  v13 = (_DWORD *)v45;
  if ( v45 )
    *v13 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v15 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, (__int64)*a5, &BugCheckParameter2) < 0 )
  {
    v9 = BugCheckParameter2;
    v19 = v38;
  }
  else
  {
    v16 = KeGetCurrentThread();
    v9 = BugCheckParameter2;
    v17 = BugCheckParameter2;
    --v16->KernelApcDisable;
    ExAcquirePushLockSharedEx(v17, 0LL);
    v18 = *(_DWORD *)(v9 + 32);
    ExReleasePushLockEx((__int64 *)v9, 0LL);
    KeLeaveCriticalRegion();
    v19 = v18 & 1;
  }
  v20 = PiDmAddCacheReferenceForObject(4u, (__int64)Str2, (volatile signed __int32 **)&v43);
  v10 = (unsigned int *)v43;
  DeviceInterfaceName = v20;
  if ( v20 < 0 )
    goto LABEL_42;
  v21 = v41;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1u, (__int64)v41, (volatile signed __int32 **)&v36);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_42;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v21,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)&v40,
                     (__int64)&Source2,
                     16,
                     (__int64)&v39,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    Source2 = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
LABEL_42:
    v7 = Handle;
LABEL_53:
    v8 = (unsigned int *)v36;
    v6 = (unsigned int *)v35;
    goto LABEL_23;
  }
  if ( !PnpIsNullGuid(&Source2) )
  {
    DeviceInterfaceName = PnpStringFromGuid((int *)&Source2, v48);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_42;
    DeviceInterfaceName = PiDmAddCacheReferenceForObject(5u, (__int64)v48, (volatile signed __int32 **)&v35);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_42;
  }
  if ( !v19 )
  {
    DeviceInterfaceName = PiPnpRtlBeginOperation((__int64 **)&P);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_42;
    DeviceInterfaceName = CmCreateDeviceInterface(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            2,
                            (unsigned int)&Handle,
                            (__int64)&v31,
                            0);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_42;
  }
  if ( !v9 )
  {
    Object = PiDmGetObject(3LL, (__int64)*a5, &BugCheckParameter2);
    v9 = BugCheckParameter2;
    DeviceInterfaceName = Object;
    if ( Object < 0 )
      goto LABEL_42;
  }
  PiDmListAddObject(0, (ULONG_PTR)v10, (__int64 *)v9, 0LL);
  v23 = v31;
  do
    ++v15;
  while ( v21[v15] );
  v30 = (__int64)v21;
  v7 = Handle;
  DeviceInterfaceName = PnpSetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)*a5,
                          3u,
                          (__int64)Handle,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstanceId,
                          18,
                          v30,
                          2 * (int)v15 + 2,
                          v31 != 0 ? 0x20000 : 0);
  if ( DeviceInterfaceName < 0 )
  {
    if ( v23 )
      CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
    goto LABEL_53;
  }
  v8 = (unsigned int *)v36;
  PiDmListAddObject(1u, (ULONG_PTR)v36, (__int64 *)v9, 0LL);
  v6 = (unsigned int *)v35;
  if ( v35 )
    PiDmListAddObject(2u, (ULONG_PTR)v35, (__int64 *)v9, 0LL);
LABEL_23:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v32 )
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(0LL, (__int64 *)*a5, 1);
    goto LABEL_26;
  }
LABEL_46:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_26:
  if ( v7 )
    ZwClose(v7);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  if ( v9 )
    PiDmObjectRelease((unsigned int *)v9);
  if ( v10 )
  {
    PiDmRemoveCacheReferenceForObject(v10[7], *((_QWORD *)v10 + 2));
    PiDmObjectRelease(v10);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(v8[7], *((_QWORD *)v8 + 2));
    PiDmObjectRelease(v8);
  }
  if ( v6 )
  {
    PiDmRemoveCacheReferenceForObject(v6[7], *((_QWORD *)v6 + 2));
    PiDmObjectRelease(v6);
  }
  return (unsigned int)DeviceInterfaceName;
}
