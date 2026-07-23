/*
 * XREFs of IopParseDevice @ 0x14064E680
 * Callers:
 *     IopParseFile @ 0x14067B690 (IopParseFile.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140200960 (PsReleaseSiloHardReference.c)
 *     PsAcquireSiloHardReference @ 0x140200A10 (PsAcquireSiloHardReference.c)
 *     IopCreateSecurityCheck @ 0x140201880 (IopCreateSecurityCheck.c)
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     SeAccessCheck @ 0x140206720 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     IopVerifierExAllocatePool @ 0x14022C350 (IopVerifierExAllocatePool.c)
 *     IopDeleteFileObjectExtension @ 0x1402524EC (IopDeleteFileObjectExtension.c)
 *     KeEnterCriticalRegionThread @ 0x14025ABE0 (KeEnterCriticalRegionThread.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentProcessSessionId @ 0x14025EE20 (PsGetCurrentProcessSessionId.c)
 *     KeReadStateSemaphore @ 0x14026E9C0 (KeReadStateSemaphore.c)
 *     IopIncrementVpbRefCount @ 0x14028F728 (IopIncrementVpbRefCount.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopCheckDeviceAndDriver @ 0x1402D3AF0 (IopCheckDeviceAndDriver.c)
 *     RtlCopyUnicodeString @ 0x1402D3C70 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x1402D3CF0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1402D3EF0 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x1402D3F10 (IopDequeueIrpFromThread.c)
 *     IoCallDriverWithTracing @ 0x1402D4050 (IoCallDriverWithTracing.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     IopCheckVpbMounted @ 0x1402D40D0 (IopCheckVpbMounted.c)
 *     IopDoFullTraverseCheck @ 0x1402D42F0 (IopDoFullTraverseCheck.c)
 *     IopDecrementDeviceObjectRef @ 0x1402D4340 (IopDecrementDeviceObjectRef.c)
 *     PsIsHostSilo @ 0x1402D5230 (PsIsHostSilo.c)
 *     IopGetSetSpecificExtension @ 0x1402D7298 (IopGetSetSpecificExtension.c)
 *     IopDereferenceVpbAndFree @ 0x1402F4AA0 (IopDereferenceVpbAndFree.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1403142D0 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x1403142F0 (IopSymlinkGetECP.c)
 *     PsGetServerSiloServiceSessionId @ 0x14032D5C0 (PsGetServerSiloServiceSessionId.c)
 *     PsIsThreadTerminating @ 0x14033E4B0 (PsIsThreadTerminating.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     RtlGetActiveConsoleId @ 0x14034ADC0 (RtlGetActiveConsoleId.c)
 *     IopGetDevicePDO @ 0x14034C5D8 (IopGetDevicePDO.c)
 *     IopSetFileObjectExtensionFlag @ 0x1403618B0 (IopSetFileObjectExtensionFlag.c)
 *     IoGetSilo @ 0x1403618F0 (IoGetSilo.c)
 *     PsIsServerSilo @ 0x140361920 (PsIsServerSilo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x1405063DC (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x140507690 (IopAllowRemoteDASD.c)
 *     IopIsSecurityContextAppContainer @ 0x14050774C (IopIsSecurityContextAppContainer.c)
 *     SeFastTraverseCheck @ 0x140595CD0 (SeFastTraverseCheck.c)
 *     SeOpenObjectAuditAlarm @ 0x1405D99E0 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1405D9A40 (SeAppendPrivileges.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     SeLockSubjectContext @ 0x140643550 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1406435B0 (SeUnlockSubjectContext.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     RtlMapGenericMask @ 0x1406505C0 (RtlMapGenericMask.c)
 *     IoGetIrpExtraCreateParameter @ 0x140650610 (IoGetIrpExtraCreateParameter.c)
 *     IopCheckBackupRestorePrivilege @ 0x140650630 (IopCheckBackupRestorePrivilege.c)
 *     SeSetAccessStateGenericMapping @ 0x140650800 (SeSetAccessStateGenericMapping.c)
 *     IopAllocRealFileObject @ 0x140650820 (IopAllocRealFileObject.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140650C60 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopRetrieveTransactionParameters @ 0x1406511B0 (IopRetrieveTransactionParameters.c)
 *     IopQueryInformation @ 0x140668540 (IopQueryInformation.c)
 *     IopCheckTopDeviceHint @ 0x14067C0AC (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x140682B0C (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x140682E30 (IopSymlinkCreateECP.c)
 *     IopSymlinkProcessReparse @ 0x140683108 (IopSymlinkProcessReparse.c)
 *     IoQueryFileInformation @ 0x1406A5170 (IoQueryFileInformation.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1406A64E4 (IopSymlinkEnforceEnabledTypes.c)
 *     SeTokenIsAdmin @ 0x14070E6D0 (SeTokenIsAdmin.c)
 *     IopCancelAlertedRequest @ 0x1408910DC (IopCancelAlertedRequest.c)
 *     IoCancelFileOpen @ 0x140893670 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x140894114 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopGetNetworkOpenInformation @ 0x1408948E4 (IopGetNetworkOpenInformation.c)
 *     PsGetParentSilo @ 0x140905B40 (PsGetParentSilo.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409C99C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C9A9C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        struct _DEVICE_OBJECT *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        char a4,
        int a5,
        PUNICODE_STRING AbsoluteObjectName,
        PCUNICODE_STRING SourceString,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PADAPTER_OBJECT *a11)
{
  int v11; // r14d
  PACCESS_STATE v12; // rbx
  unsigned int *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r9
  __int64 v16; // rdx
  ULONG_PTR v17; // r13
  unsigned __int64 v18; // rcx
  __int64 result; // rax
  bool v20; // al
  __int64 v21; // rax
  ULONG_PTR v22; // rax
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  struct _DMA_ADAPTER *DevicePDO; // rax
  struct _DMA_ADAPTER *v29; // rbx
  ACCESS_MASK *p_RemainingDesiredAccess; // rsi
  ACCESS_MASK RemainingDesiredAccess; // r15d
  char v32; // dl
  __int64 v33; // rcx
  int v34; // r10d
  char v35; // r9
  char v36; // r14
  ULONG ActiveConsoleId; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // ebx
  bool v42; // bl
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  char v44; // r14
  PACCESS_TOKEN ClientToken; // rcx
  PACCESS_STATE v46; // rbx
  ACCESS_MASK v47; // eax
  UNICODE_STRING *v48; // rsi
  struct _KTHREAD *v49; // rsi
  char v50; // al
  char v51; // r14
  unsigned __int16 Length; // r8
  __int64 v53; // rdx
  __int64 v54; // rbx
  PDEVICE_OBJECT AttachedDevice; // r14
  int v56; // esi
  __int64 v57; // rax
  int v58; // ecx
  _BOOL8 v59; // r8
  PCUNICODE_STRING v60; // rsi
  int v61; // eax
  PACCESS_STATE v62; // rsi
  __int64 Irp; // rax
  __int64 v64; // r13
  char v65; // dl
  __int64 v66; // rsi
  int v67; // eax
  int v68; // r8d
  char v69; // al
  ULONG_PTR v70; // rdi
  PADAPTER_OBJECT v71; // rdi
  struct _DMA_ADAPTER *v72; // rbx
  ULONG_PTR v73; // rbx
  unsigned __int64 DeviceType; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  _DWORD *Silo; // rbx
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v81; // rsi
  __int64 v82; // rax
  int v83; // edx
  unsigned __int16 v84; // ax
  PVOID PoolWithTag; // rax
  void *v86; // rcx
  unsigned __int16 v87; // ax
  PVOID v88; // rax
  ULONG_PTR v89; // rdi
  __int16 *MostRecentlyUsedName; // rdx
  NTSTATUS updated; // eax
  struct _KSEMAPHORE *p_DmaOperations; // rsi
  char v93; // dl
  NTSTATUS v94; // eax
  unsigned __int8 v95; // al
  int v96; // edx
  BOOLEAN v97; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v99; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v102; // eax
  bool v103; // zf
  unsigned __int8 v104; // al
  struct _KPRCB *v105; // r10
  _DWORD *v106; // r9
  int v107; // eax
  int v108; // esi
  unsigned __int8 v109; // r15
  struct _ECP_LIST *v110; // r14
  _DWORD *v111; // rbx
  unsigned __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rcx
  char v115; // al
  int v116; // r8d
  int v117; // ecx
  int v118; // ecx
  PDEVICE_OBJECT v119; // rbx
  ULONG_PTR v120; // rax
  unsigned __int64 v121; // rcx
  __int64 v122; // rax
  PUNICODE_STRING v123; // r13
  wchar_t *v124; // rsi
  wchar_t *Buffer; // rcx
  __int64 v126; // rax
  ULONG_PTR v127; // rdi
  ULONG_PTR v128; // rdx
  struct _DMA_ADAPTER *v129; // rcx
  ULONG_PTR v130; // rcx
  PADAPTER_OBJECT v131; // rbx
  ULONG_PTR v132; // rcx
  int v133; // ecx
  void *v134; // rcx
  __int64 v135; // r8
  int v136; // ecx
  unsigned __int64 v137; // rax
  __int64 v138; // r10
  unsigned int v139; // ecx
  PACCESS_STATE v140; // rcx
  __int64 v141; // rbx
  __int64 v142; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  ULONG_PTR v144; // rcx
  __int64 v145; // rbx
  __int64 v146; // rax
  unsigned __int64 v147; // rax
  __int64 v148; // rcx
  NTSTATUS FileInformation; // eax
  char v150; // si
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 v152; // rdx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  void *v154; // r15
  PVOID Pool; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v157; // rbx
  NTSTATUS v158; // eax
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-F8h] BYREF
  int v160; // [rsp+64h] [rbp-F4h]
  int v161; // [rsp+68h] [rbp-F0h]
  ACCESS_MASK GrantedAccess; // [rsp+6Ch] [rbp-ECh] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-E8h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-E0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v166; // [rsp+88h] [rbp-D0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp-C8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-C0h]
  char v169; // [rsp+A0h] [rbp-B8h]
  ULONG ReturnedLength; // [rsp+A4h] [rbp-B4h] BYREF
  PVOID v171; // [rsp+A8h] [rbp-B0h] BYREF
  PVOID P; // [rsp+B0h] [rbp-A8h]
  int v173; // [rsp+B8h] [rbp-A0h]
  struct _ECP_LIST *v174; // [rsp+C0h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+C8h] [rbp-90h] BYREF
  _DWORD *v176; // [rsp+D8h] [rbp-80h] BYREF
  _BYTE *v177; // [rsp+E0h] [rbp-78h]
  UNICODE_STRING ObjectTypeName; // [rsp+E8h] [rbp-70h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+F8h] [rbp-60h] BYREF
  __int128 v180; // [rsp+100h] [rbp-58h] BYREF
  __int64 v181; // [rsp+110h] [rbp-48h]
  void *v182; // [rsp+118h] [rbp-40h]
  __int64 (__fastcall *v184)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+168h] [rbp+10h] BYREF
  PACCESS_STATE AccessState; // [rsp+170h] [rbp+18h]
  char v186; // [rsp+178h] [rbp+20h]

  v186 = a4;
  AccessState = a3;
  v12 = a3;
  v13 = (unsigned int *)BugCheckParameter2;
  v14 = a8;
  GrantedAccess = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v180 = 0LL;
  v181 = 0LL;
  v173 = 0;
  LOBYTE(v161) = 0;
  ReturnedLength = 0;
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  P = 0LL;
  v174 = 0LL;
  v171 = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v11) = 4;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  *a11 = 0LL;
  DmaAdapter = 0LL;
  if ( !v14 )
    return 3221225508LL;
  while ( 1 )
  {
    v15 = 0x60010000110040LL;
    v16 = 0x1080020084LL;
    if ( *(_WORD *)v14 != 8 || *(_WORD *)(v14 + 2) != 224 )
      return 3221225508LL;
    v17 = (ULONG_PTR)v13;
    BugCheckParameter1 = (ULONG_PTR)v13;
    if ( *(_DWORD *)(v14 + 32) == 1 )
    {
      *(_DWORD *)(v14 + 32) = -1096154543;
      *(_QWORD *)(v14 + 40) = v13;
      *(_DWORD *)(v14 + 16) = 0;
      ObfReferenceObject(v13);
      return 0LL;
    }
    if ( (*(_DWORD *)(v14 + 152) & 0x10) != 0 )
    {
      v18 = v13[18];
      if ( *(_QWORD *)(v14 + 24) == 2684354563LL )
      {
        if ( (unsigned int)v18 > 0x24 || !_bittest64(&v16, v18) )
          goto LABEL_10;
      }
      else
      {
        LOBYTE(v16) = (unsigned int)v18 <= 0x24 && _bittest64(&v16, v18);
        v20 = (unsigned int)v18 <= 0x36 && _bittest64(&v15, v18);
        if ( !(_BYTE)v16 && !v20 )
        {
LABEL_10:
          *(_DWORD *)(v14 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v14 + 152) & 8, v16, *(_QWORD *)(v14 + 168));
        AccessStatus = result;
        if ( (int)result < 0 )
          goto LABEL_431;
      }
    }
    v21 = *(_QWORD *)(v14 + 40);
    if ( v21 )
    {
      v17 = *(_QWORD *)(v21 + 8);
      BugCheckParameter1 = v17;
    }
    if ( *(_DWORD *)(v17 + 72) == 7 )
    {
      v22 = v17;
      v23 = v17;
      do
      {
        if ( *(_QWORD *)(v22 + 56) )
          break;
        v22 = *(_QWORD *)(v22 + 24);
        v23 = v22;
      }
      while ( v22 );
      if ( v23 && v23 != v17 )
      {
        *(_DWORD *)(v14 + 152) |= 2u;
        v17 = v23;
        BugCheckParameter1 = v23;
      }
    }
    result = IopCheckDeviceAndDriver(v14, v17);
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_431;
    if ( (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v14 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo(v25, v24);
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v14 + 64) & 0x40000) == 0 )
      {
        DevicePDO = (struct _DMA_ADAPTER *)IopGetDevicePDO(v17);
        v29 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            HalPutDmaAdapter(v29);
            IopDecrementDeviceObjectRef(v17, 0);
            *(_DWORD *)(v14 + 16) = -1073741790;
            return 3221225506LL;
          }
          HalPutDmaAdapter(v29);
        }
      }
      v12 = AccessState;
    }
    p_RemainingDesiredAccess = &v12->RemainingDesiredAccess;
    RtlMapGenericMask(&v12->RemainingDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RtlMapGenericMask(&v12->OriginalDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    SeSetAccessStateGenericMapping(v12, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RemainingDesiredAccess = v12->RemainingDesiredAccess;
    IopCheckBackupRestorePrivilege(v12);
    v32 = *(_BYTE *)(v14 + 136);
    if ( v32 && !SourceString->Length || (v12->Flags & 0x100) != 0 )
      RemainingDesiredAccess |= v12->PreviouslyGrantedAccess;
    v33 = *(_QWORD *)(v14 + 40);
    LOBYTE(v34) = v161;
    if ( v33 && (*(_DWORD *)(v33 + 80) & 0x400000) != 0 )
    {
      v34 = (unsigned __int8)v161;
      if ( !SourceString->Length )
        v34 = 1;
      v161 = v34;
    }
    v35 = v186;
    if ( (v186 || (*(_DWORD *)(v14 + 84) & 1) != 0) && (!v33 || (_BYTE)v34) && !v32 )
    {
      v36 = v11 & 0xDF;
      if ( SourceString->Length )
      {
        p_SubjectSecurityContext = &v12->SubjectSecurityContext;
        if ( IopDoFullTraverseCheck(v17, v186, &v12->SubjectSecurityContext) )
        {
          v48 = AbsoluteObjectName;
          LOBYTE(v11) = (v36 ^ IopCreateSecurityCheck(
                                 v17,
                                 0LL,
                                 v12,
                                 RemainingDesiredAccess | 0x20,
                                 1,
                                 Privileges,
                                 &GrantedAccess,
                                 AbsoluteObjectName,
                                 &ObjectTypeName,
                                 (__int64)CurrentThread,
                                 0)) & 1 ^ v36;
        }
        else
        {
          if ( (v12->Flags & 1) != 0 )
          {
            LOBYTE(v11) = v36 | 1;
          }
          else
          {
            v49 = CurrentThread;
            KeEnterCriticalRegionThread((__int64)CurrentThread);
            ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
            LOBYTE(v11) = (v36 ^ SeFastTraverseCheck(*(_QWORD *)(v17 + 272), (__int64)v12, 32)) & 1 ^ v36;
            if ( (v11 & 1) == 0 )
            {
              Privileges = 0LL;
              SeLockSubjectContext(p_SubjectSecurityContext);
              LOBYTE(v11) = ((v11 | 0x20) ^ SeAccessCheck(
                                              *(PSECURITY_DESCRIPTOR *)(v17 + 272),
                                              p_SubjectSecurityContext,
                                              1u,
                                              0x20u,
                                              0,
                                              &Privileges,
                                              (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                              1,
                                              &GrantedAccess,
                                              &AccessStatus)) & 1 ^ (v11 | 0x20);
              if ( Privileges )
              {
                SeAppendPrivileges(AccessState, Privileges);
                CmSiFreeMemory(Privileges);
              }
            }
            ExReleaseResourceLite(&IopSecurityResource);
            KeLeaveCriticalRegionThread((__int64)v49);
          }
          v48 = AbsoluteObjectName;
        }
      }
      else
      {
        v42 = 0;
        if ( (*(_DWORD *)(v17 + 52) & 0x40001) != 0 && (RemainingDesiredAccess & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v40 = PsGetCurrentServerSilo(v39, v38);
            v41 = PsGetServerSiloServiceSessionId(v40);
            if ( v41 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v42 = 1;
          }
        }
        Privileges = 0LL;
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        SeLockSubjectContext(&AccessState->SubjectSecurityContext);
        v44 = v36 | 0x20;
        if ( !v42 )
          goto LABEL_68;
        ClientToken = p_SubjectSecurityContext->ClientToken;
        if ( !p_SubjectSecurityContext->ClientToken )
          ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(ClientToken) )
        {
LABEL_68:
          LOBYTE(v11) = (v44 ^ SeAccessCheck(
                                 *(PSECURITY_DESCRIPTOR *)(v17 + 272),
                                 p_SubjectSecurityContext,
                                 (v44 & 0x20) != 0,
                                 RemainingDesiredAccess,
                                 0,
                                 &Privileges,
                                 (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                 1,
                                 &GrantedAccess,
                                 &AccessStatus)) & 1 ^ v44;
          v46 = AccessState;
          if ( Privileges )
          {
            SeAppendPrivileges(AccessState, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v11 & 1) != 0 )
          {
            v47 = GrantedAccess;
            v46->PreviouslyGrantedAccess |= GrantedAccess;
            *p_RemainingDesiredAccess &= ~(v47 | 0x2000000);
            *(_BYTE *)(v14 + 136) = 1;
          }
        }
        else
        {
          LOBYTE(v11) = v44 & 0xFE;
          AccessStatus = -1073741790;
        }
        v48 = AbsoluteObjectName;
        SeOpenObjectAuditAlarm(
          &ObjectTypeName,
          (PVOID)v17,
          AbsoluteObjectName,
          *(PSECURITY_DESCRIPTOR *)(v17 + 272),
          AccessState,
          0,
          v11 & 1,
          1,
          &AccessState->GenerateOnClose);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      if ( (v11 & 0x20) != 0 )
        SeUnlockSubjectContext(p_SubjectSecurityContext);
      if ( (v11 & 1) == 0 )
        goto LABEL_317;
      v35 = v186;
    }
    else
    {
      v48 = AbsoluteObjectName;
    }
    if ( *(_BYTE *)(v14 + 137) || *(_BYTE *)(v14 + 138) )
      v50 = 64;
    else
      v50 = 0;
    v51 = v50 | v11 & 0xBF;
    Length = SourceString->Length;
    if ( SourceString->Length
      || (v53 = *(_QWORD *)(v14 + 40)) != 0
      || (RemainingDesiredAccess & 0xFEE1FF7F) != 0
      || (v51 & 0x40) != 0 )
    {
      LOBYTE(v11) = v51 & 0xF7;
      v53 = *(_QWORD *)(v14 + 40);
    }
    else
    {
      LOBYTE(v11) = v51 | 8;
    }
    v160 = v11;
    v54 = 0LL;
    v166 = 0LL;
    if ( !v53 || (*(_DWORD *)(v53 + 80) & 0x800) != 0 )
    {
      AttachedDevice = (PDEVICE_OBJECT)v17;
      DeviceObject = (PDEVICE_OBJECT)v17;
      v56 = v160;
      if ( *(_QWORD *)(v17 + 56) && (v160 & 8) == 0 )
      {
        if ( (*(_DWORD *)(v17 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x800) == 0
          && (v35 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && (v53 || Length)
          && !(_BYTE)v161 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v17,
                  (void *)v17,
                  AccessState,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_317;
        }
        v57 = IopCheckVpbMounted(v14, v17, (__int64)SourceString, &AccessStatus);
        v54 = v57;
        v166 = v57;
        if ( !v57 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v57 + 8);
        DeviceObject = AttachedDevice;
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        LOBYTE(v56) = v56 | 2;
        v160 = v56;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        DeviceObject = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = BugCheckParameter2;
      DeviceObject = BugCheckParameter2;
      if ( *(_QWORD *)(v53 + 16) )
      {
        v54 = *(_QWORD *)(v53 + 16);
        v166 = v54;
        if ( (*(_DWORD *)(v17 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x800) == 0
          && (v35 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && !(_BYTE)v161 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v17,
                  (void *)v17,
                  AccessState,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &GrantedAccess,
                  v48,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_317;
        }
        IopIncrementVpbRefCount(v54, 1);
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        if ( v54 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v54 + 8);
          DeviceObject = AttachedDevice;
        }
        v56 = v160;
        LOBYTE(v56) = v160 | 2;
        v160 = v56;
      }
      else
      {
        LOBYTE(v56) = v160;
      }
    }
    v58 = *(_DWORD *)(v17 + 52);
    if ( (v58 & 0x40001) != 0
      && (*(_DWORD *)(v17 + 48) & 0x600100) == 0
      && (v58 & 0x100) == 0
      && IopIsSecurityContextAppContainer(&AccessState->SubjectSecurityContext) )
    {
      if ( !v54 )
        goto LABEL_317;
      if ( (*(_DWORD *)(*(_QWORD *)(v54 + 8) + 48LL) & 0x20000) == 0 )
      {
        IopDereferenceVpbAndFree(v54);
LABEL_317:
        IopDecrementDeviceObjectRef(v17, 0);
        return 3221225506LL;
      }
    }
    if ( (v56 & 2) != 0 )
    {
      v59 = (v56 & 8) != 0;
      v60 = SourceString;
      AccessStatus = IopCheckTopDeviceHint(&DeviceObject, v14, v59, SourceString);
      if ( AccessStatus < 0 )
      {
        if ( v54 )
          IopDereferenceVpbAndFree(v54);
        IopDecrementDeviceObjectRef(v17, 0);
        return (unsigned int)AccessStatus;
      }
      AttachedDevice = DeviceObject;
    }
    else
    {
      v60 = SourceString;
    }
    v61 = *(_DWORD *)(v14 + 152);
    if ( (v61 & 0x10) != 0 )
      *(_DWORD *)(v14 + 152) = v61 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*(_DWORD *)(v17 + 52) & 0x100000) != 0)
      && (v186 || (*(_DWORD *)(v14 + 84) & 1) != 0)
      && (*(_QWORD *)(v14 + 40) || v60->Length) )
    {
      v62 = AccessState;
      if ( !(_BYTE)v161 )
      {
        Privileges = 0LL;
        if ( !IopCreateSecurityCheck(
                v17,
                AttachedDevice,
                AccessState,
                RemainingDesiredAccess,
                *(_DWORD *)(v14 + 88),
                0LL,
                &GrantedAccess,
                AbsoluteObjectName,
                &ObjectTypeName,
                (__int64)CurrentThread,
                1) )
        {
          IopDecrementDeviceObjectRef(v17, 0);
          if ( v54 )
            IopDereferenceVpbAndFree(v54);
          return 3221225506LL;
        }
      }
    }
    else
    {
      v62 = AccessState;
    }
    Irp = IopAllocateIrpExReturn();
    v64 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0);
      if ( v54 )
        IopDereferenceVpbAndFree(v54);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v65 = v186;
    *(_BYTE *)(Irp + 64) = v186;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v180 = a9;
    *((_QWORD *)&v180 + 1) = v62;
    LODWORD(v181) = RemainingDesiredAccess;
    HIDWORD(v181) = *(_DWORD *)(v14 + 64);
    v66 = *(_QWORD *)(Irp + 184) - 72LL;
    v177 = (_BYTE *)v66;
    *(_BYTE *)(v66 + 3) = 0;
    v67 = *(_DWORD *)(v14 + 120);
    v68 = a5;
    if ( v67 )
    {
      if ( v67 == 1 )
        *(_BYTE *)v66 = 1;
      else
        *(_BYTE *)v66 = 19;
      *(_QWORD *)(v66 + 32) = *(_QWORD *)(v14 + 128);
    }
    else
    {
      *(_BYTE *)v66 = 0;
      *(_DWORD *)(v66 + 32) = *(_DWORD *)(v14 + 80);
      v69 = *(_BYTE *)(v14 + 84);
      *(_BYTE *)(v66 + 2) = v69;
      if ( (v68 & 0x40) == 0 )
        *(_BYTE *)(v66 + 2) = v69 | 0x80;
    }
    *(_QWORD *)(v64 + 88) = *(_QWORD *)(v14 + 56);
    *(_QWORD *)(v64 + 24) = *(_QWORD *)(v14 + 72);
    *(_DWORD *)(v66 + 16) = (*(_DWORD *)(v14 + 88) << 24) | *(_DWORD *)(v14 + 64) & 0xFFFFFF;
    *(_WORD *)(v66 + 24) = *(_WORD *)(v14 + 68);
    *(_WORD *)(v66 + 26) = *(_WORD *)(v14 + 70);
    *(_QWORD *)(v66 + 8) = &v180;
    *(_QWORD *)(v64 + 112) = *(_QWORD *)(v14 + 168);
    *(_QWORD *)(v64 + 72) = BugCheckParameter4;
    *(_QWORD *)(v64 + 8) = 0LL;
    *(_BYTE *)(v64 + 65) = 0;
    *(_BYTE *)(v64 + 68) = 0;
    *(_QWORD *)(v64 + 80) = 0LL;
    *(_QWORD *)(v64 + 104) = 0LL;
    *(_QWORD *)(v64 + 160) = 0LL;
    if ( !*(_BYTE *)(v14 + 137) )
    {
      v70 = BugCheckParameter1;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&DmaAdapter,
                       (_DWORD)AttachedDevice,
                       BugCheckParameter1,
                       v68,
                       v65,
                       v14,
                       a10,
                       0,
                       RemainingDesiredAccess);
      if ( AccessStatus < 0 )
      {
        IoFreeIrp((PIRP)v64);
        IopDecrementDeviceObjectRef(v70, 0);
        if ( v54 )
          IopDereferenceVpbAndFree(v54);
        v129 = DmaAdapter;
        if ( DmaAdapter )
        {
          DmaAdapter->DmaOperations = 0LL;
          HalPutDmaAdapter(v129);
          result = (unsigned int)AccessStatus;
          *(_DWORD *)(v14 + 16) = AccessStatus;
          return result;
        }
        goto LABEL_430;
      }
      v71 = DmaAdapter;
      goto LABEL_186;
    }
    v72 = *(struct _DMA_ADAPTER **)(v14 + 144);
    memset(v72, 0, 0x110uLL);
    v71 = v72 + 3;
    DmaAdapter = v72 + 3;
    LOBYTE(v72[1].DmaOperations) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v72);
    *(_QWORD *)&v72->Version = 1LL;
    if ( (a5 & 0x40) == 0 )
      *(_DWORD *)&v72[8].Version |= 0x20000u;
    *(_DWORD *)&v71->Version = 14155781;
    *(_QWORD *)&v72[7].Version = *(_QWORD *)(v14 + 40);
    v73 = BugCheckParameter1;
    v71->DmaOperations = (_DMA_OPERATIONS *)BugCheckParameter1;
    if ( (*(_DWORD *)(v14 + 152) & 0x20) != 0 )
    {
      if ( v186 )
      {
        if ( (AttachedDevice->Flags & 0x40000) != 0
          || (DeviceType = AttachedDevice->DeviceType, (unsigned int)DeviceType <= 0x35)
          && (v75 = 0x20000100100108LL, _bittest64(&v75, DeviceType)) )
        {
          AccessStatus = IopRetrieveTransactionParameters(AttachedDevice, v14, RemainingDesiredAccess, v71);
          if ( AccessStatus < 0 )
            break;
        }
      }
    }
    if ( !PsIsHostSilo(*(_QWORD *)(a10 + 8))
      || (v76 = *(_QWORD *)&v71[4].Version) != 0 && (v77 = IoGetSilo(v76), !PsIsHostSilo(v77)) )
    {
      v176 = 0LL;
      if ( *(_QWORD *)&v71[4].Version && PsIsServerSilo(*(_QWORD *)(a10 + 8)) )
        Silo = (_DWORD *)IoGetSilo(v78);
      else
        Silo = *(_DWORD **)(a10 + 8);
      if ( !PsIsHostSilo((__int64)Silo) )
      {
        AccessStatus = PsAcquireSiloHardReference(Silo);
        if ( AccessStatus < 0 )
          goto LABEL_329;
        SetSpecificExtension = IopGetSetSpecificExtension((__int64)v71, 7u, 0x10u, 1, &v176, 0LL);
        AccessStatus = SetSpecificExtension;
        if ( SetSpecificExtension < 0 )
        {
          PsReleaseSiloHardReference(Silo);
          SetSpecificExtension = AccessStatus;
        }
        v81 = v176;
        if ( SetSpecificExtension < 0 )
        {
LABEL_329:
          IoFreeIrp((PIRP)v64);
          v130 = BugCheckParameter1;
          goto LABEL_327;
        }
        *v176 = 16;
        *((_QWORD *)v81 + 1) = Silo;
        v81[1] |= 1u;
        ObfReferenceObjectWithTag(Silo, 0x70536F49u);
      }
      v66 = (__int64)v177;
LABEL_186:
      v73 = BugCheckParameter1;
    }
    if ( (v160 & 8) != 0 )
      *(_DWORD *)&v71[5].Version |= 0x800u;
    v82 = *(_QWORD *)(v14 + 216);
    if ( (v82 & 1) != 0 )
    {
      v83 = 32;
LABEL_193:
      IopSetFileObjectExtensionFlag((__int64)v71, v83, 1);
      goto LABEL_194;
    }
    if ( (v82 & 2) != 0 )
    {
      v83 = 64;
      goto LABEL_193;
    }
LABEL_194:
    *(_QWORD *)(v64 + 192) = v71;
    *(_QWORD *)(v66 + 48) = v71;
    v84 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v84 >= 0x38u )
      {
        if ( v84 >= 0x78u )
        {
          if ( v84 < 0xF8u )
            v84 = 248;
        }
        else
        {
          v84 = 120;
        }
      }
      else
      {
        v84 = 56;
      }
      WORD1(v71[5].DmaOperations) = v84;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v84, 0x6D4E6F49u);
      *(_QWORD *)&v71[6].Version = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v64);
        IopDecrementDeviceObjectRef(v73, 0);
        if ( v166 )
          IopDereferenceVpbAndFree(v166);
        v71->DmaOperations = 0LL;
        if ( !*(_BYTE *)(v14 + 137) )
        {
          HalPutDmaAdapter(v71);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString((PUNICODE_STRING)&v71[5].DmaOperations, SourceString);
    if ( *(_BYTE *)(v14 + 137) )
    {
      LOBYTE(v184) = 0;
      AccessStatus = IopQueryInformation(v14, AttachedDevice, v64, v66, &v184);
      if ( AccessStatus < 0 || (_BYTE)v184 )
      {
        v133 = *(_DWORD *)(v64 + 48);
        *(_DWORD *)(v14 + 16) = v133;
        *(_QWORD *)(v14 + 24) = *(_QWORD *)(v64 + 56);
        if ( v133 == 260 )
        {
          v134 = *(void **)(v64 + 160);
          if ( v134 )
          {
            ExFreePoolWithTag(v134, 0);
            *(_QWORD *)(v64 + 160) = 0LL;
            *(_QWORD *)(v14 + 40) = 0LL;
          }
        }
        if ( LOWORD(v71[5].DmaOperations) )
          ExFreePoolWithTag(*(PVOID *)&v71[6].Version, 0);
        if ( *(_QWORD *)&v71[13].Version )
          IopDeleteFileObjectExtension((__int64)v71);
        v132 = BugCheckParameter1;
        goto LABEL_352;
      }
      if ( !RtlEqualUnicodeString((PCUNICODE_STRING)&v71[5].DmaOperations, SourceString, 0) )
      {
        v86 = *(void **)&v71[6].Version;
        if ( v86 )
        {
          ExFreePoolWithTag(v86, 0);
          RtlInitUnicodeString((PUNICODE_STRING)&v71[5].DmaOperations, 0LL);
        }
        v87 = SourceString->Length;
        if ( SourceString->Length )
        {
          if ( v87 >= 0x38u )
          {
            if ( v87 >= 0x78u )
            {
              if ( v87 < 0xF8u )
                v87 = 248;
            }
            else
            {
              v87 = 120;
            }
          }
          else
          {
            v87 = 56;
          }
          WORD1(v71[5].DmaOperations) = v87;
          v88 = ExAllocatePoolWithTag(PagedPool, v87, 0x6D4E6F49u);
          *(_QWORD *)&v71[6].Version = v88;
          if ( !v88 )
          {
            if ( *(_QWORD *)&v71[13].Version )
              IopDeleteFileObjectExtension((__int64)v71);
            IopDecrementDeviceObjectRef(BugCheckParameter1, 0);
            if ( v166 )
              IopDereferenceVpbAndFree(v166);
            IoFreeIrp((PIRP)v64);
            return 3221225626LL;
          }
          RtlCopyUnicodeString((PUNICODE_STRING)&v71[5].DmaOperations, SourceString);
        }
      }
      v89 = BugCheckParameter1;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&DmaAdapter,
                       (_DWORD)AttachedDevice,
                       BugCheckParameter1,
                       a5,
                       v186,
                       v14,
                       a10,
                       1,
                       RemainingDesiredAccess);
      if ( AccessStatus < 0 )
      {
        v131 = DmaAdapter;
        if ( LOWORD(DmaAdapter[5].DmaOperations) )
          ExFreePoolWithTag(*(PVOID *)&DmaAdapter[6].Version, 0);
        if ( *(_QWORD *)&v131[13].Version )
          IopDeleteFileObjectExtension((__int64)v131);
        v132 = v89;
LABEL_352:
        IopDecrementDeviceObjectRef(v132, 0);
        if ( v166 )
          IopDereferenceVpbAndFree(v166);
        IoFreeIrp((PIRP)v64);
        return (unsigned int)AccessStatus;
      }
      v71 = DmaAdapter;
      *(_QWORD *)(v66 + 48) = DmaAdapter;
      *(_QWORD *)(v64 + 192) = v71;
    }
    if ( !*(_DWORD *)(v14 + 120) )
    {
      ExtraCreateParameter = 0LL;
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v64, &ExtraCreateParameter);
      if ( ExtraCreateParameter )
      {
        if ( IopSymlinkGetECP(ExtraCreateParameter, &v171) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)v171);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v64,
                        MostRecentlyUsedName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        MostRecentlyUsedName[1]);
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v64 + 48) = updated;
              *(_QWORD *)(v64 + 56) = 0LL;
              LOBYTE(v160) = v160 & 0xFB;
            }
          }
        }
      }
    }
    p_DmaOperations = (struct _KSEMAPHORE *)&v71[9].DmaOperations;
    KeInitializeEvent((PRKEVENT)&v71[9].DmaOperations, NotificationEvent, 0);
    *(_QWORD *)(v14 + 8) = v71;
    v93 = v160;
    if ( (v160 & 4) != 0 )
    {
      IopQueueThreadIrp(v64);
      v94 = IoCallDriverWithTracing(AttachedDevice, v64);
      AccessStatus = v94;
      v93 = v160;
    }
    else
    {
      v94 = AccessStatus;
    }
    if ( v94 == 259 )
    {
      v95 = v93 | 0x80;
      v96 = v93 & 0x7F;
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 )
        v96 = v95;
      v160 = v96;
      v97 = (unsigned __int8)v96 >> 7;
      AccessStatus = KeWaitForSingleObject(p_DmaOperations, Executive, 0, (unsigned __int8)v96 >> 7, 0LL);
      if ( AccessStatus == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( PsIsThreadTerminating(KeGetCurrentThread())
            || !KeReadStateSemaphore(p_DmaOperations) && *(_BYTE *)(v64 + 68) )
          {
            break;
          }
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v99 = KeGetCurrentIrql();
              if ( v99 <= 0xFu && CurrentIrql <= 0xFu && v99 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v102 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v103 = (v102 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v102;
                if ( v103 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          AccessStatus = KeWaitForSingleObject(p_DmaOperations, Executive, 0, v97, 0LL);
          if ( AccessStatus != 257 )
            goto LABEL_252;
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v104 = KeGetCurrentIrql();
            if ( v104 <= 0xFu && CurrentIrql <= 0xFu && v104 >= 2u )
            {
              v105 = KeGetCurrentPrcb();
              v106 = v105->SchedulerAssist;
              v107 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v103 = (v107 & v106[5]) == 0;
              v106[5] &= v107;
              if ( v103 )
                KiRemoveSystemWorkPriorityKick((__int64)v105);
            }
          }
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(p_DmaOperations, (PIRP)v64);
      }
LABEL_252:
      AccessStatus = BugCheckParameter4[0];
      v71 = DmaAdapter;
    }
    AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v64, &v174);
    v108 = *(_DWORD *)(v14 + 84) & 8;
    v109 = v108 != 0;
    v110 = v174;
    if ( *(_DWORD *)(v64 + 48) == 260 )
    {
      P = *(PVOID *)(v64 + 160);
      if ( !v174 || IopSymlinkGetECP(v174, &v171) == -1073741275 )
      {
        AccessStatus = IopSymlinkCreateECP((PIRP)v64, (__int64)&v171);
        if ( AccessStatus >= 0 )
        {
          if ( !v110 )
          {
            AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v64, &v174);
            v110 = v174;
          }
        }
        else
        {
          *(_QWORD *)(v64 + 56) = 0LL;
          *(_DWORD *)(v64 + 48) = AccessStatus;
        }
      }
      if ( *(_DWORD *)(v64 + 48) == 260 )
      {
        v111 = P;
        if ( v108 && v110 )
          v109 = IopCheckAndUpdateStopOnSymlinkEcp(v110, *(unsigned int *)(v64 + 56), P);
        IopSymlinkProcessReparse(v64, v71, v111, v109);
        v112 = *(_QWORD *)(v64 + 56) - 2684354563LL;
        if ( v112 <= 0x16 )
        {
          v113 = 4194817LL;
          if ( _bittest64(&v113, v112) )
          {
            if ( *(int *)(v64 + 48) < 0 )
              goto LABEL_280;
            v114 = *((unsigned __int16 *)v111 + 3);
            v115 = 0;
            if ( !(_WORD)v114 )
              v115 = 16;
            v116 = v160;
            LOBYTE(v116) = v115 | v160 & 0xEF;
            v160 = v116;
            if ( (v116 & 0x10) == 0 && *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v114) != 58 )
              goto LABEL_280;
            v117 = *(_DWORD *)(v14 + 64);
            if ( (v117 & 0x41) != 0 || *v177 )
              goto LABEL_280;
            if ( *v111 == -1610612733 )
              goto LABEL_278;
            if ( *v111 != -1610612724 )
              goto LABEL_280;
            if ( (int)v111[4] < 0 )
            {
LABEL_278:
              v118 = v117 | 1;
LABEL_279:
              *(_DWORD *)(v14 + 64) = v118;
            }
            else if ( (v111[4] & 0x40000000) != 0 )
            {
              v118 = v117 | 0x40;
              goto LABEL_279;
            }
LABEL_280:
            if ( !v109 )
            {
              ExFreePoolWithTag(v111, 0);
              P = 0LL;
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(v64 + 48) || *(_DWORD *)(v14 + 120) )
    {
      v119 = DeviceObject;
    }
    else
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v71, v110, AbsoluteObjectName);
      v119 = DeviceObject;
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, (PFILE_OBJECT)v71);
        *(_QWORD *)(v64 + 56) = 0LL;
        *(_DWORD *)(v64 + 48) = AccessStatus;
      }
    }
    if ( v110 )
      *(_QWORD *)(v14 + 168) = v110;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v64 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    HIDWORD(v71[9].DmaOperations) = 1;
    v11 = v160;
    if ( (v160 & 4) != 0 )
    {
      *(_QWORD *)(v64 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v64);
    }
    if ( (*(_BYTE *)(v64 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v64 + 24), 0);
    IoFreeIrp((PIRP)v64);
    v120 = BugCheckParameter4[1];
    *(_QWORD *)(v14 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (*(_DWORD *)&v71[5].Version & 0x200000) != 0 )
      {
        HalPutDmaAdapter(v71);
        *(_QWORD *)(v14 + 8) = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v14 + 16) = AccessStatus;
        return result;
      }
      if ( LOWORD(v71[5].DmaOperations) )
      {
        ExFreePoolWithTag(*(PVOID *)&v71[6].Version, 0);
        LOWORD(v71[5].DmaOperations) = 0;
      }
      v71->DmaOperations = 0LL;
      HalPutDmaAdapter(v71);
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0);
      if ( v166 )
        IopDereferenceVpbAndFree(v166);
      *(_QWORD *)(v14 + 8) = 0LL;
      goto LABEL_430;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v71);
      if ( v119 != RelatedDeviceObject )
      {
        v144 = *(_QWORD *)&v71[1].Version;
        v145 = v166;
        if ( v144 != v166 )
        {
          if ( v144 )
            IopIncrementVpbRefCount(v144, 1);
          if ( v145 )
            IopDereferenceVpbAndFree(v145);
        }
      }
      if ( (v160 & 0x40) == 0 )
      {
        *a11 = v71;
        *(_DWORD *)(v14 + 32) = -1096154543;
        ObfReferenceObject(v71);
        v146 = *(_QWORD *)&v71[4].Version;
        if ( (!v146 || (*(_DWORD *)(v146 + 80) & 0x400000) != 0) && !LOWORD(v71[5].DmaOperations) )
        {
          v147 = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)v147 <= 0x20 )
          {
            v148 = 0x100000308LL;
            if ( _bittest64(&v148, v147) )
              *(_DWORD *)&v71[5].Version |= 0x400000u;
          }
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(v14 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(v14 + 137) )
      {
        if ( *(_BYTE *)(v14 + 208) )
        {
          FileInformation = IoQueryFileInformation(
                              (PFILE_OBJECT)v71,
                              *(FILE_INFORMATION_CLASS *)(v14 + 200),
                              *(_DWORD *)(v14 + 204),
                              *(PVOID *)(v14 + 112),
                              (PULONG)(v14 + 204));
          goto LABEL_421;
        }
        v150 = 0;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( *(_BYTE *)(v14 + 139) )
        {
          if ( FastIoDispatch )
          {
            if ( FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
            {
              FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryNetworkOpenInfo;
              if ( FastIoQueryNetworkOpenInfo )
              {
                v157 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
                LOBYTE(v142) = 1;
                v150 = FastIoQueryNetworkOpenInfo(
                         v71,
                         v142,
                         *(_QWORD *)(v14 + 104),
                         BugCheckParameter4,
                         RelatedDeviceObject);
                if ( v157 )
                  VfFastIoCheckState(v157);
              }
            }
          }
          if ( !v150 )
          {
            v158 = IoQueryFileInformation(
                     (PFILE_OBJECT)v71,
                     FileNetworkOpenInformation,
                     0x38u,
                     *(PVOID *)(v14 + 104),
                     &ReturnedLength);
            AccessStatus = v158;
            if ( v158 == -1073741811 || v158 == -1073741822 )
            {
              FileInformation = IopGetNetworkOpenInformation(v71);
LABEL_421:
              AccessStatus = FileInformation;
            }
          }
        }
        else
        {
          v152 = 0LL;
          v171 = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          v184 = FastIoQueryBasicInfo;
          if ( FastIoQueryBasicInfo )
          {
            v154 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
            v182 = v154;
            LOBYTE(v152) = 1;
            v150 = FastIoQueryBasicInfo(v71, v152, *(_QWORD *)(v14 + 96), BugCheckParameter4, RelatedDeviceObject);
            v169 = v150;
            if ( v154 )
              VfFastIoCheckState(v154);
          }
          if ( v150 )
          {
            AccessStatus = BugCheckParameter4[0];
          }
          else
          {
            Pool = IopVerifierExAllocatePool(NonPagedPoolNx, 0x28uLL);
            v171 = Pool;
            if ( Pool )
            {
              AccessStatus = IoQueryFileInformation(
                               (PFILE_OBJECT)v71,
                               FileBasicInformation,
                               0x28u,
                               Pool,
                               &ReturnedLength);
              if ( AccessStatus >= 0 )
                memmove(*(void **)(v14 + 96), Pool, ReturnedLength);
              ExFreePoolWithTag(Pool, 0);
            }
            else
            {
              AccessStatus = -1073741670;
            }
          }
        }
      }
      *(_DWORD *)(v14 + 32) = -1096154543;
      IopCloseFile(0LL, (struct _FILE_OBJECT *)v71, 1LL, 1LL);
      HalPutDmaAdapter(v71);
      *(_QWORD *)(v14 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(v14 + 16) = AccessStatus;
      return result;
    }
    if ( (v120 & 0xFFFFFFFFFFFFFFFDuLL) != 0
      && ((v121 = v120 - 2684354563u, v120 - 2684354563u > 0x16) || (v122 = 4194817LL, !_bittest64(&v122, v121)) || v109) )
    {
      v123 = AbsoluteObjectName;
    }
    else
    {
      v123 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < LOWORD(v71[5].DmaOperations) )
      {
        v124 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, LOWORD(v71[5].DmaOperations), 0x63466F49u);
        if ( !v124 )
        {
          *(_DWORD *)(v14 + 16) = -1073741670;
          return 3221225626LL;
        }
        Buffer = v123->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        v123->Buffer = v124;
        v123->MaximumLength = (unsigned __int16)v71[5].DmaOperations;
      }
      RtlCopyUnicodeString(v123, (PCUNICODE_STRING)&v71[5].DmaOperations);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v126 = 4194817LL;
        if ( _bittest64(&v126, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(v14 + 40) = 0LL;
      }
    }
    if ( LOWORD(v71[5].DmaOperations) )
    {
      ExFreePoolWithTag(*(PVOID *)&v71[6].Version, 0);
      LOWORD(v71[5].DmaOperations) = 0;
    }
    v71->DmaOperations = 0LL;
    HalPutDmaAdapter(v71);
    *(_QWORD *)(v14 + 8) = 0LL;
    v127 = BugCheckParameter1;
    IopDecrementDeviceObjectRef(BugCheckParameter1, 0);
    if ( v166 )
      IopDereferenceVpbAndFree(v166);
    v128 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v14 + 40) = 0LL;
      v135 = 4194817LL;
      if ( v128 - 2684354563u <= 0x16 && _bittest64(&v135, v128 - 2684354563u) )
      {
        *(_DWORD *)(v14 + 152) |= 0x10u;
        v136 = *(_DWORD *)(v14 + 152);
        v137 = *(unsigned int *)(v127 + 72);
        if ( (unsigned int)v137 <= 0x24 && (v138 = 0x1080020084LL, _bittest64(&v138, v137)) )
          v139 = v136 | 8;
        else
          v139 = v136 & 0xFFFFFFF7;
        *(_DWORD *)(v14 + 152) = v139;
      }
      if ( *(_BYTE *)(v14 + 136) )
        KeBugCheckEx(0xF9u, v127, (ULONG_PTR)DeviceObject, (ULONG_PTR)v123, v128);
      if ( (*(_DWORD *)(*(_QWORD *)(v127 + 312) + 32LL) & 0x800) == 0 )
      {
        v140 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v140->Flags &= ~0x100u;
      }
      if ( v128 - 2684354563u <= 0x16 && _bittest64(&v135, v128 - 2684354563u) && v109 )
      {
        *(_QWORD *)(v14 + 24) = P;
        *(_DWORD *)(v14 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v128 == 2684354585 || v128 == 2 )
      {
        v141 = a10;
        *(_QWORD *)(v141 + 8) = PsGetParentSilo(*(_QWORD *)(a10 + 8));
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v173 > 0x20 )
      return 3221225473LL;
    *a11 = 0LL;
    DmaAdapter = 0LL;
    v12 = AccessState;
    v13 = (unsigned int *)BugCheckParameter2;
  }
  IoFreeIrp((PIRP)v64);
  v130 = v73;
LABEL_327:
  IopDecrementDeviceObjectRef(v130, 0);
  if ( v166 )
  {
    IopDereferenceVpbAndFree(v166);
    result = (unsigned int)AccessStatus;
    *(_DWORD *)(v14 + 16) = AccessStatus;
    return result;
  }
LABEL_430:
  result = (unsigned int)AccessStatus;
LABEL_431:
  *(_DWORD *)(v14 + 16) = result;
  return result;
}
