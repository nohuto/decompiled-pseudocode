/*
 * XREFs of PiSwPdoPnPDispatch @ 0x1408064B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     _PnpStringFromGuid @ 0x1406881E8 (_PnpStringFromGuid.c)
 *     PnpAllocatePWSTR @ 0x1406CD7F4 (PnpAllocatePWSTR.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1408068A8 (PiSwDeviceMakeCompatibleIds.c)
 *     PnpAllocateMultiSZ @ 0x14080706C (PnpAllocateMultiSZ.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140807AF0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDestroyDeviceObject @ 0x14096423C (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x140964760 (PiSwProcessRemove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _QWORD *DeviceExtension; // rdi
  signed int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int MinorFunction; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  const wchar_t *v20; // rcx
  size_t v21; // rdx
  signed int MultiSZ; // eax
  struct _KTHREAD *v24; // rax
  _QWORD *v25; // r10
  ULONG v26; // ecx
  ULONG v27; // ecx
  ULONG v28; // ecx
  ULONG v29; // ecx
  wchar_t *v30; // rax
  struct _KTHREAD *v31; // rax
  __int64 v32; // rdx
  ULONG Length; // ecx
  struct _KTHREAD *v34; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  __m128i si128; // xmm0
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // edx
  ULONG_PTR v41; // rax
  void *v42; // rcx
  struct _KTHREAD *v43; // rax
  __int64 v44; // rdx
  struct _KTHREAD *v45; // rax
  ULONG_PTR Information; // rax
  ULONG_PTR v47; // rdx
  unsigned __int64 v48; // rax
  __int64 Pool2; // rax
  ULONG_PTR v50; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v52; // ebx
  int v53; // ebx
  __int64 v54; // rdx
  struct _KTHREAD *v55; // rax
  __int64 v56; // rdx
  char v57; // cl
  __int64 v58; // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (DeviceExtension[1] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_27;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 9 )
  {
    if ( MinorFunction != 9 )
    {
      if ( CurrentStackLocation->MinorFunction )
      {
        v14 = MinorFunction - 1;
        if ( !v14 )
          goto LABEL_11;
        v15 = v14 - 1;
        if ( !v15 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
          v52 = *((_DWORD *)DeviceExtension + 2) | 2;
          *((_DWORD *)DeviceExtension + 2) = v52;
          v53 = v52 & 0x48;
          LOBYTE(v54) = v53 == 8;
          PiSwProcessRemove(DeviceObject, v54);
          if ( v53 != 8 )
            PiSwDestroyDeviceObject(DeviceObject);
          goto LABEL_66;
        }
        v16 = v15 - 1;
        if ( !v16 )
          goto LABEL_11;
        v17 = v16 - 1;
        if ( !v17 )
          goto LABEL_11;
        v18 = v17 - 1;
        if ( !v18 )
          goto LABEL_11;
        v19 = v18 - 1;
        if ( !v19 )
          goto LABEL_11;
        if ( v19 != 1 || CurrentStackLocation->Parameters.Read.Length != 4 )
          goto LABEL_27;
        Pool2 = ExAllocatePool2(256LL, 16LL, 1466986064LL);
        v50 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = 1;
          *(_QWORD *)(Pool2 + 8) = DeviceObject;
          ObfReferenceObject(DeviceObject);
          Irp->IoStatus.Information = v50;
          goto LABEL_11;
        }
LABEL_74:
        Status = -1073741670;
        goto LABEL_27;
      }
      v43 = KeGetCurrentThread();
      --v43->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( (DeviceExtension[1] & 1) == 0 )
      {
        LOBYTE(v44) = 1;
        Status = PiSwDeviceInterfacesUpdateState(*DeviceExtension, v44);
        if ( Status < 0 )
          PiSwDeviceInterfacesUpdateState(*DeviceExtension, 0LL);
        else
          *((_DWORD *)DeviceExtension + 2) |= 1u;
        goto LABEL_26;
      }
      goto LABEL_45;
    }
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
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
      v37 = HIDWORD(SecurityContext->SecurityQos) | 0x240;
      HIDWORD(SecurityContext->SecurityQos) = v37;
      v38 = v37 ^ ((unsigned __int8)v37 ^ (unsigned __int8)(16 * *(_DWORD *)(*DeviceExtension + 64LL))) & 0x10;
      HIDWORD(SecurityContext->SecurityQos) = v38;
      v39 = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(*DeviceExtension + 64LL) << 6)) & 0x80;
      HIDWORD(SecurityContext->SecurityQos) = v39;
      v40 = v39 ^ (v39 ^ (*(_DWORD *)(*DeviceExtension + 64LL) << 15)) & 0x20000;
      HIDWORD(SecurityContext->SecurityQos) = v40;
      HIDWORD(SecurityContext->SecurityQos) = v40 ^ ((unsigned __int16)v40 ^ (unsigned __int16)~(32
                                                                                               * *(_DWORD *)(*DeviceExtension + 64LL))) & 0x100;
LABEL_45:
      Status = 0;
      goto LABEL_26;
    }
LABEL_76:
    Status = -1073741810;
    goto LABEL_26;
  }
  v8 = MinorFunction - 12;
  if ( !v8 )
  {
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v32 = *DeviceExtension;
    if ( !*DeviceExtension )
      goto LABEL_76;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      if ( Length != 1 )
        goto LABEL_26;
      v20 = *(const wchar_t **)(v32 + 56);
    }
    else
    {
      v20 = *(const wchar_t **)(v32 + 48);
    }
    if ( !v20 )
      goto LABEL_26;
    v21 = 0x7FFFFFFFLL;
    goto LABEL_24;
  }
  v9 = v8 - 7;
  if ( !v9 )
  {
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v25 = (_QWORD *)*DeviceExtension;
    if ( !*DeviceExtension )
      goto LABEL_76;
    v26 = CurrentStackLocation->Parameters.Read.Length;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( !v27 )
      {
        v42 = (void *)v25[3];
        if ( !v42 )
          goto LABEL_26;
        MultiSZ = PnpAllocateMultiSZ(v42);
        goto LABEL_25;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_25;
      }
      v29 = v28 - 1;
      if ( v29 )
      {
        if ( v29 != 2 || !v25[5] )
          goto LABEL_26;
        v30 = (wchar_t *)ExAllocatePool2(256LL, 78LL, 1466986064LL);
        Irp->IoStatus.Information = (ULONG_PTR)v30;
        if ( !v30 )
        {
          Status = -1073741670;
          goto LABEL_26;
        }
        MultiSZ = PnpStringFromGuid(*(int **)(*DeviceExtension + 40LL), v30);
        goto LABEL_25;
      }
      v20 = (const wchar_t *)v25[2];
      v21 = 200LL;
    }
    else
    {
      v20 = (const wchar_t *)v25[1];
      v21 = 200LL;
    }
LABEL_24:
    MultiSZ = PnpAllocatePWSTR(v20, v21, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
LABEL_25:
    Status = MultiSZ;
LABEL_26:
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
    goto LABEL_27;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v45 = KeGetCurrentThread();
    --v45->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( *DeviceExtension )
    {
      Information = Irp->IoStatus.Information;
      v47 = Information | 2;
      v48 = Information & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (*(_DWORD *)(*DeviceExtension + 64LL) & 4) == 0 )
        v47 = v48;
      Irp->IoStatus.Information = v47;
      goto LABEL_45;
    }
    goto LABEL_76;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v41 = ExAllocatePool2(256LL, 24LL, 1466986064LL);
    if ( v41 )
    {
      *(_DWORD *)(v41 + 20) = 0;
      *(_DWORD *)(v41 + 16) = 15;
      *(GUID *)v41 = GUID_BUS_TYPE_SW_DEVICE;
      Irp->IoStatus.Information = v41;
      goto LABEL_11;
    }
    goto LABEL_74;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
    goto LABEL_27;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v55 = KeGetCurrentThread();
    --v55->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v56 = *((_DWORD *)DeviceExtension + 2) | 4u;
    *((_DWORD *)DeviceExtension + 2) = v56;
    v57 = v56;
    if ( (v56 & 8) != 0 )
    {
      v58 = *DeviceExtension;
      if ( *DeviceExtension )
      {
        if ( *(PDEVICE_OBJECT *)(v58 + 120) == DeviceObject && (*(_DWORD *)(v58 + 4) & 2) != 0 )
        {
          v57 = v56 | 0x40;
          *((_DWORD *)DeviceExtension + 2) = v56 | 0x40;
        }
      }
    }
    LOBYTE(v56) = (v57 & 0x48) == 8;
    PiSwProcessRemove(DeviceObject, v56);
LABEL_66:
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
    goto LABEL_11;
  }
  if ( v13 == 2 )
  {
    PiSwCompleteCreate(DeviceObject);
LABEL_11:
    Status = 0;
  }
LABEL_27:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
