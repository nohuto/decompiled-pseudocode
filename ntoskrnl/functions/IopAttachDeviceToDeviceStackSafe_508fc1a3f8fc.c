__int64 __fastcall IopAttachDeviceToDeviceStackSafe(__int64 a1, __int64 a2, __int64 *a3)
{
  bool v4; // r13
  bool v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r14
  char v10; // bl
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rax
  struct _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // rsi
  __int64 *v21; // r12
  unsigned __int16 v22; // r13
  PDEVICE_OBJECT v23; // r13
  NTSTATUS v24; // edi
  struct _OBJECT_NAME_INFORMATION *v25; // rax
  __int16 v26; // di
  __int64 v27; // rbx
  unsigned int v28; // eax
  int v29; // ecx
  __int64 *v30; // rdx
  struct _OBJECT_NAME_INFORMATION *v31; // rax
  __int64 v32; // rax
  __int64 *v33; // r12
  unsigned __int16 v34; // r13
  PDEVICE_OBJECT v35; // r13
  NTSTATUS v36; // edi
  struct _OBJECT_NAME_INFORMATION *Pool2; // rax
  __int64 v38; // rbx
  __int16 v39; // di
  unsigned int ActivityIdThread; // eax
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // edx
  bool v45; // [rsp+40h] [rbp-F8h]
  bool v46; // [rsp+41h] [rbp-F7h]
  KIRQL OldIrql; // [rsp+42h] [rbp-F6h]
  KIRQL OldIrqla[2]; // [rsp+42h] [rbp-F6h]
  KIRQL OldIrqlb[2]; // [rsp+42h] [rbp-F6h]
  ULONG Length; // [rsp+44h] [rbp-F4h] BYREF
  PDEVICE_OBJECT DiskDeviceObject; // [rsp+48h] [rbp-F0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-E8h]
  __int64 v53; // [rsp+58h] [rbp-E0h]
  __int64 v54; // [rsp+60h] [rbp-D8h] BYREF
  const wchar_t *v55; // [rsp+68h] [rbp-D0h]
  struct _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+70h] [rbp-C8h] BYREF
  struct _OBJECT_NAME_INFORMATION v57; // [rsp+B0h] [rbp-88h] BYREF

  v4 = 0;
  DiskDeviceObject = *(PDEVICE_OBJECT *)(a1 + 312);
  v5 = 0;
  v45 = 0;
  v46 = 0;
  v53 = a2;
  v7 = a2;
  OldIrql = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovAttachDeviceToDeviceStack(a1, v7);
  v8 = *(_QWORD *)(v7 + 24);
  v9 = v7;
  while ( v8 )
  {
    v9 = v8;
    v8 = *(_QWORD *)(v8 + 24);
  }
  v10 = 0;
  Object = (PVOID)IopGetDeviceAttachmentBase(v7);
  v11 = Object;
  v12 = *((unsigned int *)Object + 18);
  if ( (unsigned int)v12 <= 0x35 )
  {
    v13 = 0x20000100100108LL;
    if ( _bittest64(&v13, v12) )
    {
      v14 = *((_DWORD *)Object + 12) & 0x10000000;
      if ( FeatureDeveloperVolume )
      {
        v15 = *((_QWORD *)Object + 39);
        v4 = v14 != 0;
        v45 = v14 != 0;
        v11 = (_QWORD *)(*(_DWORD *)(v15 + 32) & 0x2000);
        v5 = (*(_DWORD *)(v15 + 32) & 0x2000) != 0;
        v46 = v5;
        if ( !IopBlockLegacyFsFilters && !v14 && !(_DWORD)v11 )
          goto LABEL_18;
        goto LABEL_12;
      }
      if ( v14 || IopBlockLegacyFsFilters )
      {
LABEL_12:
        v10 = 1;
        if ( (unsigned __int8)IopIsKnownGoodLegacyFsFilter(*(_QWORD *)(a1 + 8) + 56LL, v11) )
          v10 = 0;
        else
          ObfReferenceObject(Object);
LABEL_18:
        v11 = Object;
      }
    }
  }
  if ( (*(_DWORD *)(v9 + 48) & 0x80u) != 0
    || (*(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) & 0xF) != 0
    || *(_BYTE *)(v9 + 76) >= 0x7Du
    || v10 )
  {
    v9 = 0LL;
    if ( a3 )
      *a3 = 0LL;
  }
  else
  {
    if ( a3 )
      *a3 = v9;
    *(_BYTE *)(a1 + 76) = *(_BYTE *)(v9 + 76) + 1;
    *(_DWORD *)(a1 + 152) = *(_DWORD *)(v9 + 152);
    *(_WORD *)(a1 + 304) = *(_WORD *)(v9 + 304);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) & 0x10) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x10u;
    if ( (*(_DWORD *)(v9 + 48) & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 48) |= 0x8000000u;
    _InterlockedExchange64((volatile __int64 *)(v9 + 24), a1);
    ++*(_WORD *)(v9 + 306);
    *(_QWORD *)&DiskDeviceObject->Flags = v9;
    v16 = *(_QWORD *)(v11[39] + 40LL);
    if ( v16 && *(int *)(v16 + 396) < 0 )
    {
      DiskDeviceObject = (PDEVICE_OBJECT)1;
      PnpRequestDeviceAction(*(PVOID *)(v16 + 32), 0LL, 0LL, 0LL);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, OldIrql);
  if ( v10 )
  {
    if ( IopBlockLegacyFsFilters )
    {
      if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
        McTemplateK0hzr0_EtwWriteTransfer(
          v18,
          v17,
          0,
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 56LL) >> 1,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL));
      goto LABEL_76;
    }
    if ( !FeatureDeveloperVolume )
    {
      if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) == 0 )
      {
LABEL_76:
        ObfDereferenceObject(Object);
        goto LABEL_77;
      }
      v32 = *(_QWORD *)(a1 + 8);
      p_ObjectNameInfo = &v57;
      v54 = 1835034LL;
      v33 = &v54;
      v34 = *(_WORD *)(v32 + 56) >> 1;
      DiskDeviceObject = 0LL;
      *(_WORD *)OldIrqlb = v34;
      v55 = L"(Unavailable)";
      Length = 64;
      if ( KeGetCurrentIrql() < 2u && IoGetDiskDeviceObject((PDEVICE_OBJECT)Object, &DiskDeviceObject) >= 0 )
      {
        v35 = DiskDeviceObject;
        v36 = ObQueryNameString(DiskDeviceObject, &v57, Length, &Length);
        if ( v36 == -1073741820 )
        {
          Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, Length, 1850699593LL);
          p_ObjectNameInfo = Pool2;
          if ( Pool2 )
            v36 = ObQueryNameString(v35, Pool2, Length, &Length);
          else
            v36 = -1073741670;
        }
        ObfDereferenceObject(v35);
        v34 = *(_WORD *)OldIrqlb;
        if ( v36 >= 0 )
          v33 = (__int64 *)p_ObjectNameInfo;
      }
      if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
      {
        v38 = *(_QWORD *)(a1 + 8);
        v39 = *(_WORD *)v33 >> 1;
        ActivityIdThread = (unsigned int)IoGetActivityIdThread();
        McTemplateK0hzr0hzr2_EtwWriteTransfer(
          v41,
          (unsigned int)IoMgr_LegacyFsFilterBlockedOnScm,
          ActivityIdThread,
          v34,
          *(_QWORD *)(v38 + 64),
          v39,
          v33[1]);
      }
      if ( p_ObjectNameInfo )
      {
        v31 = &v57;
LABEL_73:
        if ( p_ObjectNameInfo != v31 )
          ExFreePoolWithTag(p_ObjectNameInfo, 0);
      }
LABEL_75:
      v7 = v53;
      goto LABEL_76;
    }
    if ( (!v4 || (Microsoft_Windows_Kernel_IOEnableBits & 4) == 0)
      && (!v5 || (Microsoft_Windows_Kernel_IOEnableBits & 4) == 0) )
    {
      goto LABEL_76;
    }
    v19 = *(_QWORD *)(a1 + 8);
    p_ObjectNameInfo = &ObjectNameInfo;
    v54 = 1835034LL;
    v21 = &v54;
    v22 = *(_WORD *)(v19 + 56) >> 1;
    DiskDeviceObject = 0LL;
    *(_WORD *)OldIrqla = v22;
    v55 = L"(Unavailable)";
    Length = 64;
    if ( KeGetCurrentIrql() < 2u && IoGetDiskDeviceObject((PDEVICE_OBJECT)Object, &DiskDeviceObject) >= 0 )
    {
      v23 = DiskDeviceObject;
      v24 = ObQueryNameString(DiskDeviceObject, &ObjectNameInfo, Length, &Length);
      if ( v24 == -1073741820 )
      {
        v25 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, Length, 1850699593LL);
        p_ObjectNameInfo = v25;
        if ( v25 )
          v24 = ObQueryNameString(v23, v25, Length, &Length);
        else
          v24 = -1073741670;
      }
      ObfDereferenceObject(v23);
      v22 = *(_WORD *)OldIrqla;
      if ( v24 >= 0 )
        v21 = (__int64 *)p_ObjectNameInfo;
    }
    v26 = *(_WORD *)v21 >> 1;
    if ( v45 )
    {
      if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) == 0 )
        goto LABEL_58;
      v27 = *(_QWORD *)(a1 + 8);
      v28 = (unsigned int)IoGetActivityIdThread();
      v30 = IoMgr_LegacyFsFilterBlockedOnScm;
    }
    else
    {
      if ( !v46 || (Microsoft_Windows_Kernel_IOEnableBits & 4) == 0 )
      {
LABEL_58:
        if ( p_ObjectNameInfo )
        {
          v31 = &ObjectNameInfo;
          goto LABEL_73;
        }
        goto LABEL_75;
      }
      v27 = *(_QWORD *)(a1 + 8);
      v28 = (unsigned int)IoGetActivityIdThread();
      v30 = IoMgr_LegacyFsFilterAttachDisallowed;
    }
    McTemplateK0hzr0hzr2_EtwWriteTransfer(v29, (_DWORD)v30, v28, v22, *(_QWORD *)(v27 + 64), v26, v21[1]);
    goto LABEL_58;
  }
LABEL_77:
  v42 = *(_DWORD *)(v7 + 72);
  if ( v42 <= 0x14 )
  {
    v43 = 1048840;
    if ( _bittest(&v43, v42) )
    {
      if ( FltMgrCallbacks )
        (*(void (__fastcall **)(__int64, __int64))(FltMgrCallbacks + 40))(a1, v7);
    }
  }
  return v9;
}
