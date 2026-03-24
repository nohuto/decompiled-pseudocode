/*
 * XREFs of PiSwPdoPnPDispatch @ 0x14074E8B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     PnpAllocatePWSTR @ 0x1406B0F08 (PnpAllocatePWSTR.c)
 *     _PnpStringFromGuid @ 0x1406B1200 (_PnpStringFromGuid.c)
 *     PiSwProcessRemove @ 0x140732F28 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140733048 (PiSwDestroyDeviceObject.c)
 *     PnpAllocateMultiSZ @ 0x14074D52C (PnpAllocateMultiSZ.c)
 *     PiSwCompleteCreate @ 0x14074DC58 (PiSwCompleteCreate.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14074DF50 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140773010 (PiSwDeviceInterfacesUpdateState.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(struct _DEVICE_OBJECT *Object, PIRP Irp)
{
  _QWORD *DeviceExtension; // rdi
  signed int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int MinorFunction; // ecx
  struct _KTHREAD *v8; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  __m128i si128; // xmm0
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  const wchar_t *v20; // rcx
  size_t v21; // rdx
  signed int MultiSZ; // eax
  struct _KTHREAD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // r10
  ULONG Length; // ecx
  ULONG v28; // ecx
  ULONG v29; // ecx
  ULONG v30; // ecx
  wchar_t *v31; // rax
  struct _KTHREAD *v32; // rax
  __int64 v33; // rdx
  ULONG v34; // ecx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rdx
  GUID *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Information; // rax
  ULONG_PTR v40; // rdx
  unsigned __int64 v41; // rax
  void *v42; // rcx
  struct _KTHREAD *v43; // rax
  int v44; // eax
  struct _KTHREAD *v45; // rax
  int v46; // eax
  _QWORD *v47; // rax
  ULONG_PTR v48; // rbx

  DeviceExtension = Object->DeviceExtension;
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (DeviceExtension[1] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_26;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xC )
  {
    v15 = MinorFunction - 19;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        if ( *DeviceExtension )
        {
          Information = Irp->IoStatus.Information;
          v40 = Information | 2;
          v41 = Information & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (*(_DWORD *)(*DeviceExtension + 64LL) & 4) == 0 )
            v40 = v41;
          Irp->IoStatus.Information = v40;
          goto LABEL_12;
        }
LABEL_69:
        Status = -1073741810;
        goto LABEL_25;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_26;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          v43 = KeGetCurrentThread();
          --v43->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
          v44 = *((_DWORD *)DeviceExtension + 2) | 4;
          *((_DWORD *)DeviceExtension + 2) = v44;
          PiSwProcessRemove((__int64)Object, (v44 & 8) != 0);
LABEL_59:
          ExReleaseResourceLite(&PiSwLockObj);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_20;
        }
        if ( v19 != 2 )
          goto LABEL_26;
        PiSwCompleteCreate(Object);
      }
      else
      {
        PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x57706E50u);
        if ( !PoolWithTag )
          goto LABEL_67;
        *(_DWORD *)&PoolWithTag[1].Data2 = 0;
        PoolWithTag[1].Data1 = 15;
        *PoolWithTag = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
      }
LABEL_20:
      Status = 0;
      goto LABEL_26;
    }
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v26 = (_QWORD *)*DeviceExtension;
    if ( !*DeviceExtension )
      goto LABEL_69;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v28 = Length - 1;
      if ( !v28 )
      {
        v42 = (void *)v26[3];
        if ( !v42 )
          goto LABEL_25;
        MultiSZ = PnpAllocateMultiSZ(v42, 0x7FFFFFFFLL, v25, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v30 = v29 - 1;
      if ( v30 )
      {
        if ( v30 != 2 || !v26[5] )
          goto LABEL_25;
        v31 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v31;
        if ( !v31 )
        {
          Status = -1073741670;
          goto LABEL_25;
        }
        MultiSZ = PnpStringFromGuid(*(int **)(*DeviceExtension + 40LL), v31);
        goto LABEL_24;
      }
      v20 = (const wchar_t *)v26[2];
    }
    else
    {
      v20 = (const wchar_t *)v26[1];
    }
    v21 = 200LL;
LABEL_23:
    MultiSZ = PnpAllocatePWSTR(v20, v21, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
LABEL_24:
    Status = MultiSZ;
    goto LABEL_25;
  }
  if ( MinorFunction == 12 )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v33 = *DeviceExtension;
    if ( !*DeviceExtension )
      goto LABEL_69;
    v34 = CurrentStackLocation->Parameters.Read.Length;
    if ( v34 )
    {
      if ( v34 != 1 )
        goto LABEL_25;
      v20 = *(const wchar_t **)(v33 + 56);
    }
    else
    {
      v20 = *(const wchar_t **)(v33 + 48);
    }
    if ( !v20 )
      goto LABEL_25;
    v21 = 0x7FFFFFFFLL;
    goto LABEL_23;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( (DeviceExtension[1] & 1) == 0 )
    {
      LOBYTE(v36) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*DeviceExtension, v36);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*DeviceExtension, 0LL);
      else
        *((_DWORD *)DeviceExtension + 2) |= 1u;
      goto LABEL_25;
    }
    goto LABEL_12;
  }
  if ( MinorFunction == 1 )
    goto LABEL_20;
  if ( MinorFunction == 2 )
  {
    v45 = KeGetCurrentThread();
    --v45->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v46 = *((_DWORD *)DeviceExtension + 2) | 2;
    *((_DWORD *)DeviceExtension + 2) = v46;
    PiSwProcessRemove((__int64)Object, (v46 & 8) != 0);
    if ( (DeviceExtension[1] & 8) == 0 )
      PiSwDestroyDeviceObject(Object);
    goto LABEL_59;
  }
  if ( MinorFunction <= 6 )
    goto LABEL_20;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_26;
    v47 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
    v48 = (ULONG_PTR)v47;
    if ( v47 )
    {
      *(_DWORD *)v47 = 1;
      v47[1] = Object;
      ObfReferenceObject(Object);
      Irp->IoStatus.Information = v48;
      goto LABEL_20;
    }
LABEL_67:
    Status = -1073741670;
    goto LABEL_26;
  }
  if ( MinorFunction == 9 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( *DeviceExtension )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      SecurityContext->DesiredAccess = 0;
      SecurityContext->FullCreateOptions = 1;
      *(__m128i *)&SecurityContext[1].SecurityQos = si128;
      SecurityContext[1].DesiredAccess = _mm_cvtsi128_si32(si128);
      SecurityContext[1].FullCreateOptions = 0;
      LODWORD(SecurityContext[2].SecurityQos) = 0;
      v11 = HIDWORD(SecurityContext->SecurityQos) | 0x240;
      HIDWORD(SecurityContext->SecurityQos) = v11;
      v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(16 * *(_DWORD *)(*DeviceExtension + 64LL))) & 0x10;
      HIDWORD(SecurityContext->SecurityQos) = v12;
      v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(*DeviceExtension + 64LL) << 6)) & 0x80;
      HIDWORD(SecurityContext->SecurityQos) = v13;
      v14 = v13 ^ (v13 ^ (*(_DWORD *)(*DeviceExtension + 64LL) << 15)) & 0x20000;
      HIDWORD(SecurityContext->SecurityQos) = v14;
      HIDWORD(SecurityContext->SecurityQos) = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)~(32
                                                                                               * *(_DWORD *)(*DeviceExtension + 64LL))) & 0x100;
LABEL_12:
      Status = 0;
LABEL_25:
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_26;
    }
    goto LABEL_69;
  }
LABEL_26:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
