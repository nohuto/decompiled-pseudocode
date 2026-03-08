/*
 * XREFs of ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C03222E4
 * Callers:
 *     NtDxgkDuplicateHandle @ 0x1C03250F0 (NtDxgkDuplicateHandle.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000A070 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1C0322084 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     ?FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z @ 0x1C033FD9C (-FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z.c)
 *     ??0DXGKVMB_GUEST_TRANSACTION@@QEAA@PEAXI@Z @ 0x1C036D5AC (--0DXGKVMB_GUEST_TRANSACTION@@QEAA@PEAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0371BC8 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C0383C60 (-VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKV.c)
 *     ?BeginTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C03920B8 (-BeginTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z.c)
 *     ?CancelTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C039213C (-CancelTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z.c)
 *     ?EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z @ 0x1C03922F8 (-EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall DxgkpDuplicateHandleToVm(struct _D3DKMT_DUPLICATEHANDLE *a1)
{
  struct DXGVIRTUALMACHINE *v1; // rdi
  void *v3; // rcx
  unsigned int v4; // r15d
  NTSTATUS v5; // eax
  struct _DXGSHAREDALLOCOBJECT *v6; // r12
  int v7; // ebx
  ACCESS_MASK GrantedAccess; // r14d
  struct DXGVIRTUALMACHINE *VirtualMachineByGuidAndAcquireLock; // rax
  unsigned int v10; // r8d
  int v11; // eax
  int v12; // eax
  DXGSHAREDVMOBJECT *v13; // r14
  DXGSHAREDVMOBJECT *v15; // [rsp+30h] [rbp-39h] BYREF
  union _LARGE_INTEGER v16; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v17[128]; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v18; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+E8h] [rbp+7Fh] BYREF

  v19 = 0LL;
  v1 = 0LL;
  v15 = 0LL;
  v3 = *(void **)a1;
  v4 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v18 = 0;
  v5 = ObReferenceObjectByHandle(v3, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &HandleInformation);
  v6 = (struct _DXGSHAREDALLOCOBJECT *)Object;
  v7 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL, *(_QWORD *)a1);
    goto LABEL_15;
  }
  GrantedAccess = HandleInformation.GrantedAccess;
  if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
    GrantedAccess = *((_DWORD *)a1 + 10);
  VirtualMachineByGuidAndAcquireLock = FindVirtualMachineByGuidAndAcquireLock((struct _GUID *)((char *)a1 + 8));
  v1 = VirtualMachineByGuidAndAcquireLock;
  if ( !VirtualMachineByGuidAndAcquireLock )
  {
    WdLogSingleEntry4(
      3LL,
      *((unsigned int *)a1 + 2),
      *((unsigned __int16 *)a1 + 6),
      *((unsigned __int16 *)a1 + 7),
      *((_QWORD *)a1 + 2));
    v7 = -1073741275;
    goto LABEL_19;
  }
  if ( *((_DWORD *)VirtualMachineByGuidAndAcquireLock + 98) < 0x14u )
  {
    v7 = -1073741823;
    WdLogSingleEntry1(3LL, -1073741823LL);
LABEL_18:
    _InterlockedDecrement((volatile signed __int32 *)v1 + 20);
    ExReleasePushLockSharedEx((char *)v1 + 64, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  v7 = DxgkpCreateSharedVmObjectsForExistingResource(
         *((struct DXGPROCESSVMWP **)VirtualMachineByGuidAndAcquireLock + 7),
         *(void **)a1,
         v6,
         &v15,
         &v18);
  if ( v7 < 0 )
  {
    v4 = v18;
  }
  else
  {
    DXGKVMB_GUEST_TRANSACTION::DXGKVMB_GUEST_TRANSACTION((DXGKVMB_GUEST_TRANSACTION *)v17, &v19, v10);
    DXGVIRTUALMACHINE::BeginTransaction(v1, (struct DXGKVMB_GUEST_TRANSACTION *)v17);
    v4 = v18;
    v11 = DXG_HOST_GLOBAL_VMBUS::VmBusSendDuplicateHandle(
            (struct DXGVIRTUALMACHINE *)((char *)v1 + 160),
            v6,
            v18,
            *((void **)a1 + 3),
            GrantedAccess,
            (struct DXGKVMB_GUEST_TRANSACTION *)v17);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v16.QuadPart = -50000000LL;
      v12 = DXGVIRTUALMACHINE::EndTransaction(v1, (struct DXGKVMB_GUEST_TRANSACTION *)v17, &v16);
      v7 = v12;
      if ( v12 >= 0 )
        goto LABEL_18;
      WdLogSingleEntry2(3LL, v12, 3123LL);
    }
    else
    {
      WdLogSingleEntry2(3LL, v11, 3113LL);
      DXGVIRTUALMACHINE::CancelTransaction(v1, (struct DXGKVMB_GUEST_TRANSACTION *)v17);
    }
  }
LABEL_15:
  v19 = 0LL;
  v13 = v15;
  if ( v15 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)v1 + 7), v4);
    DXGSHAREDVMOBJECT::ReleaseReference(v13);
  }
  if ( v1 )
    goto LABEL_18;
LABEL_19:
  *((_QWORD *)a1 + 4) = v19;
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
