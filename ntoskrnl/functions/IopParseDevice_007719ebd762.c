__int64 __fastcall IopParseDevice(
        struct _DEVICE_OBJECT *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        char a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PFILE_OBJECT *a11)
{
  PDEVICE_OBJECT v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  ULONG_PTR v16; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 result; // rax
  bool v19; // al
  __int64 v20; // rax
  _QWORD *v21; // rax
  ULONG_PTR v22; // rbx
  ULONG_PTR v23; // r8
  ULONG_PTR v24; // r9
  void *v25; // r10
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  void *v28; // r11
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  _DWORD *DevicePDO; // rax
  void *v32; // rbx
  PACCESS_STATE v33; // r10
  signed int RemainingDesiredAccess; // eax
  int OriginalDesiredAccess; // eax
  ACCESS_MASK v36; // esi
  char v37; // r11
  char v38; // r14
  int v39; // edx
  char v40; // r12
  char v41; // r15
  ULONG Flags; // ecx
  int v43; // ebx
  unsigned int v44; // edi
  __int64 ClientToken; // rcx
  char v46; // al
  int v47; // edi
  __int64 PrimaryToken; // rcx
  bool v49; // zf
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // r9d
  int v53; // edi
  struct _DEVICE_OBJECT *v54; // r14
  int v55; // eax
  int ActiveConsoleId; // ebx
  __int64 v57; // rax
  int v58; // ebx
  bool v59; // di
  PACCESS_STATE v60; // r15
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rbx
  PACCESS_TOKEN v62; // rcx
  int v63; // ecx
  PSECURITY_DESCRIPTOR *p_SecurityDescriptor; // rdi
  BOOLEAN v65; // al
  ACCESS_MASK v66; // eax
  struct _ACCESS_STATE *v67; // r15
  char v68; // al
  char v69; // di
  PCUNICODE_STRING v70; // r15
  unsigned __int16 Length; // r8
  __int64 v72; // rbx
  __int64 v73; // rdx
  PDEVICE_OBJECT AttachedDevice; // rdi
  int v75; // r9d
  PDEVICE_OBJECT v76; // rcx
  int v77; // r9d
  __int64 v78; // rax
  ULONG Characteristics; // ecx
  struct _ACCESS_STATE *v80; // r15
  int v81; // eax
  __int64 Irp; // rax
  __int64 v83; // r13
  char v84; // dl
  __int64 v85; // r14
  int v86; // eax
  char v87; // al
  PFILE_OBJECT v88; // r15
  _QWORD *v89; // rbx
  unsigned __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  _DWORD *Silo; // rbx
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v95; // rdi
  __int64 v96; // rax
  int v97; // edx
  unsigned __int16 v98; // ax
  __int64 Pool2; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 v101; // ax
  __int64 v102; // rax
  PVOID v103; // rsi
  struct _ECP_LIST *v104; // rcx
  NTSTATUS v105; // eax
  __int16 *v106; // rdx
  __int64 v107; // rax
  NTSTATUS updated; // eax
  KEVENT *p_Event; // rsi
  char v110; // dl
  _BYTE *v111; // rax
  struct _LIST_ENTRY *v113; // rbx
  NTSTATUS v114; // edi
  unsigned __int8 v115; // al
  int v116; // edx
  BOOLEAN v117; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v119; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v122; // eax
  unsigned __int8 v123; // cl
  struct _KPRCB *v124; // r10
  _DWORD *v125; // r9
  int v126; // eax
  NTSTATUS v127; // eax
  struct _ECP_LIST *v128; // rcx
  int v129; // edi
  char v130; // r12
  struct _ECP_LIST *v131; // rax
  _DWORD *v132; // rbx
  __int64 v133; // rcx
  __int64 v134; // rcx
  char v135; // al
  int v136; // r8d
  char *v137; // rdx
  __int64 v138; // rax
  int v139; // ecx
  int v140; // ecx
  __int64 v141; // r14
  _WORD *v142; // rbx
  int v143; // edi
  ULONG_PTR v144; // rsi
  __int64 RelatedFileObject; // rcx
  __int64 FileObjectExtension; // rsi
  FSRTL_ALLOCATE_ECP_FLAGS v147; // r8d
  int v148; // ecx
  unsigned int v149; // r14d
  ULONG_PTR v150; // rax
  unsigned __int64 v151; // rcx
  __int64 v152; // rax
  PUNICODE_STRING v153; // r13
  __int64 v154; // rdi
  wchar_t *v155; // rcx
  __int64 v156; // rax
  _QWORD *v157; // rdi
  ULONG_PTR v158; // rdx
  PFILE_OBJECT v159; // rcx
  PFILE_OBJECT v160; // rbx
  PVOID v161; // rcx
  int v162; // ecx
  void *v163; // rcx
  __int64 v164; // r8
  int v165; // ecx
  unsigned __int64 v166; // rax
  __int64 v167; // r10
  unsigned int v168; // ecx
  PACCESS_STATE v169; // r15
  __int64 v170; // rbx
  __int64 v171; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  ULONG_PTR Vpb; // rcx
  __int64 v174; // rbx
  struct _FILE_OBJECT *v175; // rax
  NTSTATUS XxxInformation; // eax
  char v177; // si
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  __int64 v180; // rdx
  PFILE_OBJECT *FastIoQueryBasicInfo; // rbx
  void *v182; // r14
  struct _IRP *v183; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v185; // rbx
  NTSTATUS v186; // eax
  ACCESS_MASK GrantedAccess; // [rsp+40h] [rbp-188h]
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-168h] BYREF
  char v189; // [rsp+64h] [rbp-164h]
  int v190; // [rsp+68h] [rbp-160h]
  char v191; // [rsp+6Ch] [rbp-15Ch] BYREF
  char v192; // [rsp+6Dh] [rbp-15Bh] BYREF
  char v193[2]; // [rsp+6Eh] [rbp-15Ah] BYREF
  __int64 v194; // [rsp+70h] [rbp-158h]
  ACCESS_MASK DesiredAccess[2]; // [rsp+78h] [rbp-150h] BYREF
  PACCESS_STATE AccessState; // [rsp+80h] [rbp-148h]
  PVOID Object; // [rsp+88h] [rbp-140h]
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-138h] BYREF
  int v199; // [rsp+98h] [rbp-130h]
  ACCESS_MASK v200; // [rsp+9Ch] [rbp-12Ch] BYREF
  PCUNICODE_STRING SourceString; // [rsp+A0h] [rbp-128h]
  PPRIVILEGE_SET v202; // [rsp+A8h] [rbp-120h] BYREF
  __int64 v203; // [rsp+B0h] [rbp-118h]
  PUNICODE_STRING AbsoluteObjectName; // [rsp+B8h] [rbp-110h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-108h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+C8h] [rbp-100h] BYREF
  char v207; // [rsp+D0h] [rbp-F8h]
  _DWORD Size[3]; // [rsp+D4h] [rbp-F4h] BYREF
  PVOID EcpContext; // [rsp+E0h] [rbp-E8h] BYREF
  PVOID P; // [rsp+E8h] [rbp-E0h]
  __int64 v211; // [rsp+F0h] [rbp-D8h]
  int v212; // [rsp+F8h] [rbp-D0h]
  PFILE_OBJECT *v213; // [rsp+100h] [rbp-C8h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+108h] [rbp-C0h] BYREF
  _DWORD *v215; // [rsp+118h] [rbp-B0h] BYREF
  _QWORD *v216; // [rsp+120h] [rbp-A8h]
  UNICODE_STRING ObjectTypeName; // [rsp+128h] [rbp-A0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+138h] [rbp-90h]
  _DWORD *v219; // [rsp+140h] [rbp-88h]
  __int128 v220; // [rsp+148h] [rbp-80h] BYREF
  __int64 v221; // [rsp+158h] [rbp-70h]
  void *v222; // [rsp+160h] [rbp-68h]
  __int64 v223; // [rsp+168h] [rbp-60h]
  struct _PRIVILEGE_SET Privileges; // [rsp+170h] [rbp-58h] BYREF
  struct _LIST_ENTRY v225; // [rsp+188h] [rbp-40h] BYREF

  v189 = a4;
  AccessState = a3;
  v11 = BugCheckParameter2;
  DeviceObject = BugCheckParameter2;
  AbsoluteObjectName = a6;
  SourceString = a7;
  v12 = a8;
  v194 = a8;
  v223 = a8;
  v211 = a10;
  v213 = a11;
  v200 = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v220 = 0LL;
  v221 = 0LL;
  v212 = 0;
  LOBYTE(v199) = 0;
  memset(Size, 0, sizeof(Size));
  ObjectTypeName = 0LL;
  v202 = 0LL;
  P = 0LL;
  ExtraCreateParameter = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v190) = 4;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  *a11 = 0LL;
  FileObject = 0LL;
  if ( !a8 )
    return 3221225508LL;
  while ( 1 )
  {
    v13 = 0x60010000110040LL;
    v14 = 0x1080020004LL;
    v15 = 2684354563LL;
    if ( *(_WORD *)v12 != 8 || *(_WORD *)(v12 + 2) != 224 )
      return 3221225508LL;
    v16 = (ULONG_PTR)v11;
    Object = v11;
    v219 = (_DWORD *)(v12 + 32);
    if ( *(_DWORD *)(v12 + 32) == 1 )
    {
      *(_DWORD *)(v12 + 32) = -1096154543;
      *(_QWORD *)(v12 + 40) = v11;
      *(_DWORD *)(v12 + 16) = 0;
      ObfReferenceObject(v11);
      return 0LL;
    }
    if ( (*(_DWORD *)(v12 + 152) & 0x10) != 0 )
    {
      DeviceType = v11->DeviceType;
      if ( *(_QWORD *)(v12 + 24) == 2684354563LL )
      {
        if ( (_DWORD)DeviceType != 7 && ((unsigned int)DeviceType > 0x24 || !_bittest64(&v14, DeviceType)) )
          goto LABEL_11;
      }
      else
      {
        LOBYTE(v15) = (_DWORD)DeviceType == 7 || (unsigned int)DeviceType <= 0x24 && _bittest64(&v14, DeviceType);
        v19 = (unsigned int)DeviceType <= 0x36 && _bittest64(&v13, DeviceType);
        if ( !(_BYTE)v15 && !v19 )
        {
LABEL_11:
          *(_DWORD *)(v12 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v12 + 152) & 8, v15, *(_QWORD *)(v12 + 168));
        AccessStatus = result;
        if ( (int)result < 0 )
          goto LABEL_420;
      }
    }
    v20 = *(_QWORD *)(v12 + 40);
    if ( v20 )
    {
      v16 = *(_QWORD *)(v20 + 8);
      Object = (PVOID)v16;
    }
    if ( *(_DWORD *)(v16 + 72) == 7 )
    {
      v21 = (_QWORD *)v16;
      v22 = v16;
      v23 = v16;
      v24 = v16;
      v25 = (void *)v16;
      do
      {
        v26 = (_QWORD *)v23;
        v27 = (_QWORD *)v24;
        v28 = v25;
        if ( v21[7] )
          break;
        v21 = *(_QWORD **)(v22 + 24);
        *(_QWORD *)DesiredAccess = v21;
        v22 = (ULONG_PTR)v21;
        v23 = (ULONG_PTR)v21;
        v26 = v21;
        v24 = (ULONG_PTR)v21;
        v27 = v21;
        v25 = v21;
        v28 = v21;
      }
      while ( v21 );
      if ( v26 && v27 != (_QWORD *)v16 )
      {
        *(_DWORD *)(v12 + 152) |= 2u;
        v16 = (ULONG_PTR)v28;
        Object = v28;
      }
    }
    result = IopCheckDeviceAndDriver(v12, v16);
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_420;
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 312) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v12 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v12 + 64) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO(v16);
        v32 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v32);
            IopDecrementDeviceObjectRef(v16, 0, 0);
            *(_DWORD *)(v12 + 16) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v32);
        }
      }
    }
    v33 = AccessState;
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
    if ( RemainingDesiredAccess < 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
    if ( (RemainingDesiredAccess & 0x40000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 20);
    if ( (RemainingDesiredAccess & 0x20000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 21);
    if ( (RemainingDesiredAccess & 0x10000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 22);
    AccessState->RemainingDesiredAccess = RemainingDesiredAccess & 0xFFFFFFF;
    OriginalDesiredAccess = v33->OriginalDesiredAccess;
    if ( OriginalDesiredAccess < 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
    if ( (OriginalDesiredAccess & 0x40000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 20);
    if ( (OriginalDesiredAccess & 0x20000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 21);
    if ( (OriginalDesiredAccess & 0x10000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 22);
    v33->OriginalDesiredAccess = OriginalDesiredAccess & 0xFFFFFFF;
    *(_OWORD *)((char *)v33->AuxData + 8) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v36 = v33->RemainingDesiredAccess;
    DesiredAccess[0] = v36;
    v37 = v189;
    v38 = v189 || (*(_DWORD *)(v12 + 84) & 1) != 0;
    v39 = *(_DWORD *)(v12 + 88);
    memset(&Privileges, 0, sizeof(Privileges));
    v40 = 0;
    v41 = 0;
    Flags = v33->Flags;
    if ( (Flags & 0x100) != 0 )
    {
      v12 = v194;
      goto LABEL_92;
    }
    if ( (*(_DWORD *)(v194 + 64) & 0x4000) == 0 )
    {
      v12 = v194;
      goto LABEL_92;
    }
    v33->Flags = Flags | 0x100;
    v43 = v36 | 0x11F01BF;
    if ( (v36 & 0x2000000) == 0 )
      v43 = v36;
    if ( ((v39 - 1) & 0xFFFFFFF9) != 0 || v39 == 7 )
    {
      v41 = 1;
      v44 = v43;
      goto LABEL_77;
    }
    v44 = v43;
    if ( (v43 & 0x11200A9) != 0 )
    {
      Privileges.PrivilegeCount = 1;
      Privileges.Control = 1;
      Privileges.Privilege[0].Luid = SeBackupPrivilege;
      Privileges.Privilege[0].Attributes = 0;
      if ( !v38 )
        goto LABEL_75;
      ClientToken = (__int64)v33->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        if ( v33->SubjectSecurityContext.ImpersonationLevel < SecurityImpersonation )
          goto LABEL_76;
      }
      else
      {
        ClientToken = (__int64)v33->SubjectSecurityContext.PrimaryToken;
      }
      v46 = SepPrivilegeCheck(ClientToken, (__int64)Privileges.Privilege, 1u, 1, v38);
      v33 = AccessState;
      if ( v46 )
      {
LABEL_75:
        v40 = 1;
        SeAppendPrivileges(v33, &Privileges);
        v33 = AccessState;
        AccessState->PreviouslyGrantedAccess |= v43 & 0x11200A9;
        v33->RemainingDesiredAccess &= 0xFEEDFF56;
        v44 = v43 & 0xFEEDFF56;
        v33->Flags |= 2u;
      }
    }
LABEL_76:
    v36 = DesiredAccess[0];
LABEL_77:
    v47 = v44 & 0x11F0116;
    if ( v47 || v41 )
    {
      Privileges.PrivilegeCount = 1;
      Privileges.Control = 1;
      Privileges.Privilege[0].Luid = SeRestorePrivilege;
      Privileges.Privilege[0].Attributes = 0;
      if ( !v38 )
        goto LABEL_85;
      PrimaryToken = (__int64)v33->SubjectSecurityContext.ClientToken;
      if ( PrimaryToken )
      {
        if ( v33->SubjectSecurityContext.ImpersonationLevel < SecurityImpersonation )
          goto LABEL_88;
      }
      else
      {
        PrimaryToken = (__int64)v33->SubjectSecurityContext.PrimaryToken;
      }
      if ( !SepPrivilegeCheck(PrimaryToken, (__int64)Privileges.Privilege, 1u, 1, v38) )
      {
        v33 = AccessState;
      }
      else
      {
LABEL_85:
        v40 = 1;
        SeAppendPrivileges(AccessState, &Privileges);
        v33 = AccessState;
        AccessState->PreviouslyGrantedAccess |= v47;
        v33->RemainingDesiredAccess &= 0xFEE0FEE9;
        v33->Flags |= 4u;
      }
    }
LABEL_88:
    v37 = v189;
    v49 = v40 == 0;
    v12 = v194;
    if ( v49 )
      *(_DWORD *)(v194 + 64) &= ~0x4000u;
LABEL_92:
    v50 = *(unsigned __int8 *)(v12 + 136);
    if ( (_BYTE)v50 && !SourceString->Length || (v33->Flags & 0x100) != 0 )
      v36 |= v33->PreviouslyGrantedAccess;
    v51 = *(_QWORD *)(v12 + 40);
    LOBYTE(v52) = v199;
    if ( v51 && (*(_DWORD *)(v51 + 80) & 0x400000) != 0 )
    {
      v52 = (unsigned __int8)v199;
      if ( !SourceString->Length )
        v52 = 1;
      v199 = v52;
    }
    if ( !v37 && (*(_DWORD *)(v12 + 84) & 1) == 0 || v51 && !(_BYTE)v52 )
    {
      v54 = (struct _DEVICE_OBJECT *)Object;
      v53 = v190;
      goto LABEL_140;
    }
    v53 = v190;
    v54 = (struct _DEVICE_OBJECT *)Object;
    if ( !(_BYTE)v50 )
    {
      LOBYTE(v53) = v190 & 0xDF;
      v190 = v53;
      v55 = *((_DWORD *)Object + 13);
      if ( !SourceString->Length )
      {
        v59 = 0;
        if ( (v55 & 0x40001) != 0 && (v36 & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId(v51, v50);
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v57 = PsGetCurrentServerSilo();
            v58 = PsGetServerSiloServiceSessionId(v57);
            if ( v58 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v59 = 1;
          }
        }
        v202 = 0LL;
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        v60 = AccessState;
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        SeLockSubjectContext(&AccessState->SubjectSecurityContext);
        LOBYTE(v190) = v190 | 0x20;
        if ( !v59 )
          goto LABEL_119;
        v62 = p_SubjectSecurityContext->ClientToken;
        if ( !p_SubjectSecurityContext->ClientToken )
          v62 = v60->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(v62) )
        {
LABEL_119:
          p_SecurityDescriptor = &v54->SecurityDescriptor;
          v65 = SeAccessCheck(
                  v54->SecurityDescriptor,
                  p_SubjectSecurityContext,
                  (v190 & 0x20) != 0,
                  v36,
                  0,
                  &v202,
                  (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                  1,
                  &v200,
                  &AccessStatus);
          v63 = v190;
          LOBYTE(v63) = (v190 ^ v65) & 1 ^ v190;
          v190 = v63;
          if ( v202 )
          {
            SeAppendPrivileges(v60, v202);
            CmSiFreeMemory(v202);
            LOBYTE(v63) = v190;
          }
          if ( (v63 & 1) != 0 )
          {
            v66 = v200;
            v60->PreviouslyGrantedAccess |= v200;
            v60->RemainingDesiredAccess &= ~(v66 | 0x2000000);
            *(_BYTE *)(v12 + 136) = 1;
          }
        }
        else
        {
          v63 = v190;
          LOBYTE(v63) = v190 & 0xFE;
          v190 = v63;
          AccessStatus = -1073741790;
          p_SecurityDescriptor = &v54->SecurityDescriptor;
        }
        SeOpenObjectAuditAlarmWithTransaction(
          &ObjectTypeName,
          v54,
          AbsoluteObjectName,
          *p_SecurityDescriptor,
          v60,
          0,
          v63 & 1,
          1,
          0LL,
          &v60->GenerateOnClose);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v53 = v190;
        goto LABEL_136;
      }
      if ( (v55 & 0x20100) == 0x20000 || !v37 )
      {
        p_SubjectSecurityContext = &v33->SubjectSecurityContext;
      }
      else
      {
        v191 = 0;
        p_SubjectSecurityContext = &v33->SubjectSecurityContext;
        SeIsAppContainerOrIdentifyLevelContext(&v33->SubjectSecurityContext, &v191);
        if ( v191 )
        {
          LOBYTE(v53) = (v53 ^ IopCreateSecurityCheck(
                                 (__int64)v54,
                                 0LL,
                                 AccessState,
                                 v36 | 0x20,
                                 1,
                                 v202,
                                 &v200,
                                 AbsoluteObjectName,
                                 &ObjectTypeName,
                                 (__int64)CurrentThread,
                                 0)) & 1 ^ v53;
LABEL_136:
          if ( (v53 & 0x20) != 0 )
            SeUnlockSubjectContext(p_SubjectSecurityContext);
          if ( (v53 & 1) == 0 )
            goto LABEL_188;
          v33 = AccessState;
          v37 = v189;
          goto LABEL_140;
        }
        v33 = AccessState;
      }
      if ( (v33->Flags & 1) != 0 )
      {
        LOBYTE(v53) = v53 | 1;
      }
      else
      {
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        v67 = AccessState;
        LOBYTE(v53) = (v53 ^ SeFastTraverseCheck((__int64)v54->SecurityDescriptor, (__int64)AccessState, 32)) & 1 ^ v53;
        if ( (v53 & 1) == 0 )
        {
          v202 = 0LL;
          SeLockSubjectContext(p_SubjectSecurityContext);
          LOBYTE(v53) = ((v53 | 0x20) ^ SeAccessCheck(
                                          v54->SecurityDescriptor,
                                          p_SubjectSecurityContext,
                                          1u,
                                          0x20u,
                                          0,
                                          &v202,
                                          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                          1,
                                          &v200,
                                          &AccessStatus)) & 1 ^ (v53 | 0x20);
          if ( v202 )
          {
            SeAppendPrivileges(v67, v202);
            CmSiFreeMemory(v202);
          }
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      goto LABEL_136;
    }
LABEL_140:
    v68 = *(_BYTE *)(v12 + 137) || *(_BYTE *)(v12 + 138) ? 64 : 0;
    v69 = v68 | v53 & 0xBF;
    v70 = SourceString;
    Length = SourceString->Length;
    if ( SourceString->Length || *(_QWORD *)(v12 + 40) || (v36 & 0xFEE1FF7F) != 0 || (v69 & 0x40) != 0 )
      LOBYTE(v53) = v69 & 0xF7;
    else
      LOBYTE(v53) = v69 | 8;
    v190 = v53;
    v72 = 0LL;
    v203 = 0LL;
    v73 = *(_QWORD *)(v12 + 40);
    if ( !v73 || (*(_DWORD *)(v73 + 80) & 0x800) != 0 )
    {
      AttachedDevice = v54;
      *(_QWORD *)DesiredAccess = v54;
      v76 = v54;
      v77 = v190;
      if ( v54->Vpb && (v190 & 8) == 0 )
      {
        if ( (v54->Characteristics & 0x100) != 0
          && (v54->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v37 || (*(_DWORD *)(v12 + 84) & 1) != 0)
          && (v73 || Length)
          && !(_BYTE)v199 )
        {
          v202 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v54,
                  v54,
                  v33,
                  v36,
                  *(_DWORD *)(v12 + 88),
                  0LL,
                  &v200,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_188;
        }
        v78 = IopCheckVpbMounted(v12, (ULONG_PTR)v54, (__int64)v70, &AccessStatus);
        v72 = v78;
        v203 = v78;
        if ( !v78 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v78 + 8);
        *(_QWORD *)DesiredAccess = AttachedDevice;
        v76 = AttachedDevice;
        v77 = v190;
      }
      if ( (*(_DWORD *)(v12 + 152) & 1) != 0 )
      {
        LOBYTE(v77) = v77 | 2;
        v190 = v77;
      }
      else if ( v76->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        *(_QWORD *)DesiredAccess = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = DeviceObject;
      *(_QWORD *)DesiredAccess = DeviceObject;
      if ( *(_QWORD *)(v73 + 16) )
      {
        v72 = *(_QWORD *)(v73 + 16);
        v203 = v72;
        if ( (v54->Characteristics & 0x100) != 0
          && (v54->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v37 || (*(_DWORD *)(v12 + 84) & 1) != 0)
          && !(_BYTE)v199 )
        {
          v202 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v54,
                  v54,
                  v33,
                  v36,
                  *(_DWORD *)(v12 + 88),
                  0LL,
                  &v200,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_188;
        }
        IopIncrementVpbRefCount(v72, 1);
      }
      if ( (*(_DWORD *)(v12 + 152) & 1) != 0 )
      {
        if ( v72 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v72 + 8);
          *(_QWORD *)DesiredAccess = AttachedDevice;
        }
        v75 = v190;
        LOBYTE(v75) = v190 | 2;
        v190 = v75;
      }
    }
    Characteristics = v54->Characteristics;
    if ( (Characteristics & 0x40001) == 0 || (v54->Flags & 0x600100) != 0 )
    {
      v80 = AccessState;
    }
    else
    {
      v80 = AccessState;
      if ( (Characteristics & 0x100) == 0 )
      {
        v192 = 0;
        SeIsAppContainerOrIdentifyLevelContext(&AccessState->SubjectSecurityContext, &v192);
        if ( v192 )
        {
          if ( !v72 )
            goto LABEL_188;
          if ( (*(_DWORD *)(*(_QWORD *)(v72 + 8) + 48LL) & 0x20000) == 0 )
          {
            IopDereferenceVpbAndFree(v72);
LABEL_188:
            IopDecrementDeviceObjectRef((ULONG_PTR)v54, 0, 0);
            return 3221225506LL;
          }
        }
      }
    }
    if ( (v190 & 2) != 0 )
      break;
LABEL_193:
    v81 = *(_DWORD *)(v12 + 152);
    if ( (v81 & 0x10) != 0 )
      *(_DWORD *)(v12 + 152) = v81 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (v54->Characteristics & 0x100000) != 0)
      && (v189 || (*(_DWORD *)(v12 + 84) & 1) != 0)
      && (*(_QWORD *)(v12 + 40) || SourceString->Length)
      && !(_BYTE)v199 )
    {
      v202 = 0LL;
      if ( !IopCreateSecurityCheck(
              (__int64)v54,
              AttachedDevice,
              v80,
              v36,
              *(_DWORD *)(v12 + 88),
              0LL,
              &v200,
              AbsoluteObjectName,
              &ObjectTypeName,
              (__int64)CurrentThread,
              1) )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)v54, 0, 0);
        if ( v72 )
          IopDereferenceVpbAndFree(v72);
        return 3221225506LL;
      }
    }
    Irp = IopAllocateIrpExReturn((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL);
    v83 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)v54, 0, 0);
      if ( v72 )
        IopDereferenceVpbAndFree(v72);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v84 = v189;
    *(_BYTE *)(Irp + 64) = v189;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v220 = a9;
    *((_QWORD *)&v220 + 1) = v80;
    LODWORD(v221) = v36;
    HIDWORD(v221) = *(_DWORD *)(v12 + 64);
    v85 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v85 - 69) = 0;
    v86 = *(_DWORD *)(v12 + 120);
    if ( v86 )
    {
      if ( v86 == 1 )
        *(_BYTE *)(v85 - 72) = 1;
      else
        *(_BYTE *)(v85 - 72) = 19;
      *(_QWORD *)(v85 - 40) = *(_QWORD *)(v12 + 128);
    }
    else
    {
      *(_BYTE *)(v85 - 72) = 0;
      *(_DWORD *)(v85 - 40) = *(_DWORD *)(v12 + 80);
      v87 = *(_BYTE *)(v12 + 84);
      *(_BYTE *)(v85 - 70) = v87;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v85 - 70) = v87 | 0x80;
    }
    *(_QWORD *)(v83 + 88) = *(_QWORD *)(v12 + 56);
    *(_QWORD *)(v83 + 24) = *(_QWORD *)(v12 + 72);
    *(_DWORD *)(v85 - 56) = (*(_DWORD *)(v12 + 88) << 24) | *(_DWORD *)(v12 + 64) & 0xFFFFFF;
    *(_WORD *)(v85 - 48) = *(_WORD *)(v12 + 68);
    *(_WORD *)(v85 - 46) = *(_WORD *)(v12 + 70);
    *(_QWORD *)(v85 - 64) = &v220;
    *(_QWORD *)(v83 + 112) = *(_QWORD *)(v12 + 168);
    *(_QWORD *)(v83 + 72) = BugCheckParameter4;
    *(_QWORD *)(v83 + 8) = 0LL;
    *(_BYTE *)(v83 + 65) = 0;
    *(_BYTE *)(v83 + 68) = 0;
    *(_QWORD *)(v83 + 80) = 0LL;
    *(_QWORD *)(v83 + 104) = 0LL;
    *(_QWORD *)(v83 + 160) = 0LL;
    if ( *(_BYTE *)(v12 + 137) )
    {
      v89 = *(_QWORD **)(v12 + 144);
      memset(v89, 0, 0x110uLL);
      v88 = (PFILE_OBJECT)(v89 + 6);
      FileObject = (PFILE_OBJECT)(v89 + 6);
      *((_BYTE *)v89 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v89);
      *v89 = 1LL;
      if ( (a5 & 0x40) == 0 )
        *((_DWORD *)v89 + 32) |= 0x20000u;
      v88->Type = 5;
      *((_WORD *)v89 + 25) = 216;
      v89[14] = *(_QWORD *)(v12 + 40);
      v89[7] = Object;
      if ( (*(_DWORD *)(v12 + 152) & 0x20) != 0 )
      {
        if ( v189 )
        {
          if ( (AttachedDevice->Flags & 0x40000) != 0
            || (v90 = AttachedDevice->DeviceType, (_DWORD)v90 == 8)
            || (unsigned int)v90 <= 0x35 && (v91 = 0x20000100100008LL, _bittest64(&v91, v90)) )
          {
            AccessStatus = IopRetrieveTransactionParameters((__int64)AttachedDevice, v12, v36, (__int64)(v89 + 6));
            if ( AccessStatus < 0 )
            {
LABEL_421:
              IoFreeIrp((PIRP)v83);
              IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
              if ( v203 )
              {
                IopDereferenceVpbAndFree(v203);
                result = (unsigned int)AccessStatus;
                *(_DWORD *)(v12 + 16) = AccessStatus;
                return result;
              }
LABEL_419:
              result = (unsigned int)AccessStatus;
LABEL_420:
              *(_DWORD *)(v12 + 16) = result;
              return result;
            }
          }
        }
      }
      if ( !PsIsHostSilo(*(_QWORD *)(v211 + 8)) || v89[14] && (v92 = IoGetSilo(v89[14]), !PsIsHostSilo(v92)) )
      {
        v215 = 0LL;
        if ( v89[14] && PsIsServerSilo(*(_QWORD *)(v211 + 8)) )
          Silo = (_DWORD *)IoGetSilo(v89[14]);
        else
          Silo = *(_DWORD **)(v211 + 8);
        if ( !PsIsHostSilo((__int64)Silo) )
        {
          AccessStatus = PsAcquireSiloHardReference(Silo);
          if ( AccessStatus < 0 )
            goto LABEL_421;
          SetSpecificExtension = IopGetSetSpecificExtension((__int64)v88, 7u, 0x10u, 1, &v215, 0LL);
          AccessStatus = SetSpecificExtension;
          if ( SetSpecificExtension < 0 )
          {
            PsReleaseSiloHardReference(Silo);
            SetSpecificExtension = AccessStatus;
          }
          v95 = v215;
          if ( SetSpecificExtension < 0 )
            goto LABEL_421;
          *v215 = 16;
          *((_QWORD *)v95 + 1) = Silo;
          v95[1] |= 1u;
          ObfReferenceObjectWithTag(Silo, 0x70536F49u);
        }
        AttachedDevice = *(PDEVICE_OBJECT *)DesiredAccess;
      }
    }
    else
    {
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&FileObject,
                       (_DWORD)AttachedDevice,
                       (_DWORD)Object,
                       a5,
                       v84,
                       v12,
                       v211,
                       0,
                       v36);
      if ( AccessStatus < 0 )
      {
        IoFreeIrp((PIRP)v83);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v72 )
          IopDereferenceVpbAndFree(v72);
        v159 = FileObject;
        if ( FileObject )
        {
          FileObject->DeviceObject = 0LL;
          ObfDereferenceObject(v159);
        }
        goto LABEL_419;
      }
      v88 = FileObject;
    }
    if ( (v190 & 8) != 0 )
      v88->Flags |= 0x800u;
    v96 = *(_QWORD *)(v12 + 216);
    if ( (v96 & 1) != 0 )
    {
      v97 = 32;
LABEL_244:
      IopSetFileObjectExtensionFlag((__int64)v88, v97, 1);
      goto LABEL_245;
    }
    if ( (v96 & 2) != 0 )
    {
      v97 = 64;
      goto LABEL_244;
    }
LABEL_245:
    *(_QWORD *)(v83 + 192) = v88;
    *(_QWORD *)(v85 - 24) = v88;
    v98 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v98 >= 0x38u )
      {
        if ( v98 >= 0x78u )
        {
          if ( v98 < 0xF8u )
            v98 = 248;
        }
        else
        {
          v98 = 120;
        }
      }
      else
      {
        v98 = 56;
      }
      v88->FileName.MaximumLength = v98;
      Pool2 = ExAllocatePool2(256LL, v98, 1833856841LL);
      v88->FileName.Buffer = (wchar_t *)Pool2;
      if ( !Pool2 )
      {
        IoFreeIrp((PIRP)v83);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v203 )
          IopDereferenceVpbAndFree(v203);
        v88->DeviceObject = 0LL;
        if ( !*(_BYTE *)(v12 + 137) )
        {
          ObfDereferenceObject(v88);
          return 3221225626LL;
        }
        if ( v88->FileObjectExtension )
        {
          IopDeleteFileObjectExtension((__int64)v88);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v88->FileName, SourceString);
    if ( *(_BYTE *)(v12 + 137) )
    {
      v193[0] = 0;
      AccessStatus = IopQueryInformation(v12, AttachedDevice, v83, v85 - 72, v193);
      if ( AccessStatus < 0 || v193[0] )
      {
        v162 = *(_DWORD *)(v83 + 48);
        *(_DWORD *)(v12 + 16) = v162;
        *(_QWORD *)(v12 + 24) = *(_QWORD *)(v83 + 56);
        if ( v162 == 260 )
        {
          v163 = *(void **)(v83 + 160);
          if ( v163 )
          {
            ExFreePoolWithTag(v163, 0);
            *(_QWORD *)(v83 + 160) = 0LL;
            *(_QWORD *)(v12 + 40) = 0LL;
          }
        }
        if ( v88->FileName.Length )
          ExFreePoolWithTag(v88->FileName.Buffer, 0);
        if ( v88->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v88);
        v161 = Object;
        goto LABEL_447;
      }
      if ( !RtlEqualUnicodeString(&v88->FileName, SourceString, 0) )
      {
        Buffer = v88->FileName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          RtlInitUnicodeString(&v88->FileName, 0LL);
        }
        v101 = SourceString->Length;
        if ( SourceString->Length )
        {
          if ( v101 >= 0x38u )
          {
            if ( v101 >= 0x78u )
            {
              if ( v101 < 0xF8u )
                v101 = 248;
            }
            else
            {
              v101 = 120;
            }
          }
          else
          {
            v101 = 56;
          }
          v88->FileName.MaximumLength = v101;
          v102 = ExAllocatePool2(256LL, v101, 1833856841LL);
          v88->FileName.Buffer = (wchar_t *)v102;
          if ( !v102 )
          {
            if ( v88->FileObjectExtension )
              IopDeleteFileObjectExtension((__int64)v88);
            IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
            if ( v203 )
              IopDereferenceVpbAndFree(v203);
            IoFreeIrp((PIRP)v83);
            return 3221225626LL;
          }
          RtlCopyUnicodeString(&v88->FileName, SourceString);
        }
      }
      GrantedAccess = v36;
      v103 = Object;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&FileObject,
                       (_DWORD)AttachedDevice,
                       (_DWORD)Object,
                       a5,
                       v189,
                       v12,
                       v211,
                       1,
                       GrantedAccess);
      if ( AccessStatus < 0 )
      {
        v160 = FileObject;
        if ( FileObject->FileName.Length )
          ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
        if ( v160->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v160);
        v161 = v103;
LABEL_447:
        IopDecrementDeviceObjectRef((ULONG_PTR)v161, 0, 0);
        if ( v203 )
          IopDereferenceVpbAndFree(v203);
        IoFreeIrp((PIRP)v83);
        return (unsigned int)AccessStatus;
      }
      v88 = FileObject;
      *(_QWORD *)(v85 - 24) = FileObject;
      *(_QWORD *)(v83 + 192) = v88;
    }
    if ( !*(_DWORD *)(v12 + 120) )
    {
      v104 = 0LL;
      if ( (*(_DWORD *)(v83 + 16) & 0x80) != 0 )
        v104 = *(struct _ECP_LIST **)(v83 + 112);
      v105 = -1073741811;
      if ( (*(_DWORD *)(v83 + 16) & 0x80) != 0 )
        v105 = 0;
      AccessStatus = v105;
      if ( v104 && IopSymlinkGetECP(v104, (PVOID *)&Size[1]) != -1073741275 )
      {
        v106 = *(__int16 **)&Size[1];
        if ( *(_QWORD *)(*(_QWORD *)&Size[1] + 8LL) )
        {
          v107 = *(_QWORD *)(*(_QWORD *)&Size[1] + 8LL);
          do
          {
            v106 = (__int16 *)v107;
            v107 = *(_QWORD *)(v107 + 8);
          }
          while ( v107 );
        }
        if ( !v106[2] )
        {
          updated = IopSymlinkUpdateECP((PIRP)v83, v106, AbsoluteObjectName->Length - SourceString->Length, v106[1]);
          AccessStatus = updated;
          if ( updated < 0 )
          {
            *(_DWORD *)(v83 + 48) = updated;
            *(_QWORD *)(v83 + 56) = 0LL;
            LOBYTE(v190) = v190 & 0xFB;
          }
        }
      }
    }
    p_Event = &v88->Event;
    KeInitializeEvent(&v88->Event, NotificationEvent, 0);
    v216 = (_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = v88;
    v110 = v190;
    if ( (v190 & 4) != 0 )
    {
      IopQueueThreadIrp(v83);
      if ( *(char *)(v83 + 71) >= 0 && (v111 = *(_BYTE **)(v83 + 200)) != 0LL && (*v111 & 2) != 0 )
      {
        v225 = 0LL;
        v225 = *(struct _LIST_ENTRY *)(*(_QWORD *)(v83 + 200) + 24LL);
        v113 = IoSetActivityIdThread(&v225);
        v114 = IofCallDriver(AttachedDevice, (PIRP)v83);
        IoSetActivityIdThread(v113);
      }
      else
      {
        v114 = IofCallDriver(AttachedDevice, (PIRP)v83);
      }
      AccessStatus = v114;
      v110 = v190;
    }
    else
    {
      v114 = AccessStatus;
    }
    if ( v114 == 259 )
    {
      v115 = v110 | 0x80;
      v116 = v110 & 0x7F;
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 )
        v116 = v115;
      v190 = v116;
      v117 = (unsigned __int8)v116 >> 7;
      AccessStatus = KeWaitForSingleObject(&v88->Event, Executive, 0, (unsigned __int8)v116 >> 7, 0LL);
      if ( AccessStatus == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          v88 = FileObject;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
            || !FileObject->Event.Header.SignalState && *(_BYTE *)(v83 + 68) )
          {
            break;
          }
          if ( KiIrqlFlags )
          {
            v119 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v119 <= 0xFu && CurrentIrql <= 0xFu && v119 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v122 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v49 = (v122 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v122;
              if ( v49 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              v88 = FileObject;
            }
          }
          __writecr8(CurrentIrql);
          AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, v117, 0LL);
          if ( AccessStatus != 257 )
            goto LABEL_321;
        }
        if ( KiIrqlFlags )
        {
          v123 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v123 <= 0xFu && CurrentIrql <= 0xFu && v123 >= 2u )
          {
            v124 = KeGetCurrentPrcb();
            v125 = v124->SchedulerAssist;
            v126 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v49 = (v126 & v125[5]) == 0;
            v125[5] &= v126;
            if ( v49 )
              KiRemoveSystemWorkPriorityKick((__int64)v124);
            v88 = FileObject;
          }
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(&v88->Event, (PIRP)v83);
      }
      else
      {
        v88 = FileObject;
      }
LABEL_321:
      AccessStatus = BugCheckParameter4[0];
    }
    if ( (*(_DWORD *)(v83 + 16) & 0x80u) != 0 )
    {
      v128 = *(struct _ECP_LIST **)(v83 + 112);
      ExtraCreateParameter = v128;
      v127 = 0;
    }
    else
    {
      v127 = -1073741811;
      v128 = ExtraCreateParameter;
    }
    AccessStatus = v127;
    v129 = *(_DWORD *)(v12 + 84) & 8;
    v130 = v129 != 0;
    if ( *(_DWORD *)(v83 + 48) != 260 )
      goto LABEL_358;
    P = *(PVOID *)(v83 + 160);
    if ( v128 && IopSymlinkGetECP(v128, (PVOID *)&Size[1]) != -1073741275 )
      goto LABEL_332;
    AccessStatus = IopSymlinkCreateECP(
                     (PIRP)v83,
                     (__int64)v88,
                     &AbsoluteObjectName->Length,
                     AbsoluteObjectName->Length - SourceString->Length,
                     &Size[1]);
    if ( AccessStatus < 0 )
    {
      *(_QWORD *)(v83 + 56) = 0LL;
      *(_DWORD *)(v83 + 48) = AccessStatus;
LABEL_332:
      v131 = ExtraCreateParameter;
      goto LABEL_333;
    }
    v131 = ExtraCreateParameter;
    if ( !ExtraCreateParameter )
    {
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v83, &ExtraCreateParameter);
      goto LABEL_332;
    }
LABEL_333:
    if ( *(_DWORD *)(v83 + 48) == 260 )
    {
      v132 = P;
      if ( v129 && v131 )
        v130 = IopCheckAndUpdateStopOnSymlinkEcp(v131, *(unsigned int *)(v83 + 56), P);
      IopSymlinkProcessReparse(v83, (__int64)v88, (__int64)v132, v130);
      v133 = *(_QWORD *)(v83 + 56);
      if ( v133 == 2684354563LL || v133 == 2684354572LL || v133 == 2684354585LL )
      {
        if ( (unsigned int)Feature_2723316028__private_IsEnabledDeviceUsage() && *(int *)(v83 + 48) < 0 )
          goto LABEL_356;
        v134 = *((unsigned __int16 *)v132 + 3);
        v135 = 0;
        if ( !(_WORD)v134 )
          v135 = 16;
        v136 = v190;
        LOBYTE(v136) = v135 | v190 & 0xEF;
        v137 = (char *)SourceString->Buffer - v134;
        v138 = SourceString->Length;
        v190 = v136;
        if ( (v136 & 0x10) == 0 && *(_WORD *)&v137[v138] != 58 )
          goto LABEL_356;
        v139 = *(_DWORD *)(v194 + 64);
        if ( (v139 & 0x41) != 0 || *(_BYTE *)(v85 - 72) )
          goto LABEL_356;
        if ( *v132 == -1610612733 )
          goto LABEL_354;
        if ( *v132 != -1610612724 )
          goto LABEL_356;
        if ( (int)v132[4] < 0 )
        {
LABEL_354:
          v140 = v139 | 1;
LABEL_355:
          *(_DWORD *)(v194 + 64) = v140;
        }
        else if ( (v132[4] & 0x40000000) != 0 )
        {
          v140 = v139 | 0x40;
          goto LABEL_355;
        }
LABEL_356:
        if ( !v130 )
        {
          ExFreePoolWithTag(v132, 0);
          P = 0LL;
        }
      }
    }
LABEL_358:
    v141 = v194;
    if ( *(_DWORD *)(v83 + 48) || *(_DWORD *)(v194 + 120) )
    {
      v144 = *(_QWORD *)DesiredAccess;
      goto LABEL_380;
    }
    v142 = 0LL;
    EcpContext = 0LL;
    if ( !ExtraCreateParameter )
      goto LABEL_368;
    IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
    v142 = EcpContext;
    if ( EcpContext )
    {
      if ( (*((_BYTE *)EcpContext + 2) & 1) == 0 )
        goto LABEL_363;
LABEL_368:
      if ( v142 )
        goto LABEL_376;
    }
    RelatedFileObject = (__int64)v88->RelatedFileObject;
    if ( !RelatedFileObject )
    {
LABEL_363:
      v143 = 0;
      goto LABEL_364;
    }
    FileObjectExtension = IopGetFileObjectExtension(RelatedFileObject, 5, 0LL);
    if ( !FileObjectExtension )
    {
      v143 = 0;
      goto LABEL_364;
    }
    v148 = AbsoluteObjectName->Length + 2;
    v149 = v148 + *(unsigned __int16 *)(FileObjectExtension + 16);
    if ( v149 >= 0xFFFF )
    {
      v143 = -1073741562;
LABEL_364:
      if ( v142 )
      {
        IopSymlinkFreeRelatedMountPointChain((__int64)v142);
        FsRtlFreeExtraCreateParameter(v142);
      }
      goto LABEL_366;
    }
    v143 = FsRtlAllocateExtraCreateParameterFromLookasideList(
             &IopSymlinkECPGuid,
             (unsigned __int16)(v148 + *(_WORD *)(FileObjectExtension + 16)) + 32,
             v147,
             (PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK)IopSymlinkCleanupECP,
             &IopSymlinkInfoLookasideList,
             &EcpContext);
    v142 = EcpContext;
    if ( v143 < 0 )
      goto LABEL_364;
    IopSymlinkInitializeSymlinkInfo(
      (__int64)EcpContext,
      v149 + 32,
      AbsoluteObjectName->Buffer,
      AbsoluteObjectName->Length,
      0,
      *(void **)(FileObjectExtension + 24),
      *(_WORD *)(FileObjectExtension + 16),
      *(_WORD *)(FileObjectExtension + 4),
      *(_WORD *)(FileObjectExtension + 2),
      0LL);
    *v142 = *(_WORD *)FileObjectExtension + v142[8] - *(_WORD *)(FileObjectExtension + 16);
LABEL_376:
    v143 = IopSymlinkSetFoExtension(v88, v142);
    if ( v143 < 0 )
      goto LABEL_364;
    IopSymlinkFreeRelatedMountPointChain((__int64)v142);
    EcpContext = 0LL;
LABEL_366:
    AccessStatus = v143;
    v144 = *(_QWORD *)DesiredAccess;
    if ( v143 < 0 )
    {
      IoCancelFileOpen(*(PDEVICE_OBJECT *)DesiredAccess, v88);
      *(_QWORD *)(v83 + 56) = 0LL;
      *(_DWORD *)(v83 + 48) = AccessStatus;
    }
    v141 = v194;
LABEL_380:
    if ( ExtraCreateParameter )
      *(_QWORD *)(v141 + 168) = ExtraCreateParameter;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v83 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v88->Event.Header.SignalState = 1;
    if ( (v190 & 4) != 0 )
    {
      *(_QWORD *)(v83 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v83);
    }
    if ( (*(_BYTE *)(v83 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v83 + 24), 0);
    IoFreeIrp((PIRP)v83);
    v150 = BugCheckParameter4[1];
    *(_QWORD *)(v141 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (v88->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v88);
        *v216 = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v141 + 16) = AccessStatus;
      }
      else
      {
        if ( v88->FileName.Length )
        {
          ExFreePoolWithTag(v88->FileName.Buffer, 0);
          v88->FileName.Length = 0;
        }
        v88->DeviceObject = 0LL;
        ObfDereferenceObject(v88);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v203 )
          IopDereferenceVpbAndFree(v203);
        *v216 = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v141 + 16) = AccessStatus;
      }
      return result;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v88);
      if ( (PDEVICE_OBJECT)v144 != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v88->Vpb;
        v174 = v203;
        if ( Vpb != v203 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v174 )
            IopDereferenceVpbAndFree(v174);
        }
      }
      if ( (v190 & 0x40) == 0 )
      {
        *v213 = v88;
        *v219 = -1096154543;
        ObfReferenceObject(v88);
        v175 = v88->RelatedFileObject;
        if ( (!v175 || (v175->Flags & 0x400000) != 0)
          && !v88->FileName.Length
          && (RelatedDeviceObject->DeviceType == 3
           || RelatedDeviceObject->DeviceType == 8
           || RelatedDeviceObject->DeviceType == 9
           || RelatedDeviceObject->DeviceType == 32) )
        {
          v88->Flags |= 0x400000u;
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(v141 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(v141 + 137) )
      {
        if ( *(_BYTE *)(v141 + 208) )
        {
          XxxInformation = IopQueryXxxInformation(
                             v88,
                             *(_DWORD *)(v141 + 200),
                             *(_DWORD *)(v141 + 204),
                             0,
                             *(struct _IRP **)(v141 + 112),
                             (_DWORD *)(v141 + 204),
                             1);
          goto LABEL_524;
        }
        v177 = 0;
        DriverObject = RelatedDeviceObject->DriverObject;
        FastIoDispatch = DriverObject->FastIoDispatch;
        if ( *(_BYTE *)(v141 + 139) )
        {
          if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
          {
            FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryNetworkOpenInfo;
            if ( FastIoQueryNetworkOpenInfo )
            {
              v185 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject)
                   ? (void *)VfFastIoSnapState()
                   : 0LL;
              LOBYTE(v171) = 1;
              v177 = FastIoQueryNetworkOpenInfo(
                       v88,
                       v171,
                       *(_QWORD *)(v194 + 104),
                       BugCheckParameter4,
                       RelatedDeviceObject);
              if ( v185 )
                VfFastIoCheckState(v185);
            }
            v141 = v194;
          }
          if ( !v177 )
          {
            v186 = IopQueryXxxInformation(v88, 34, 0x38u, 0, *(struct _IRP **)(v141 + 104), Size, 1);
            AccessStatus = v186;
            if ( v186 == -1073741811 || v186 == -1073741822 )
            {
              XxxInformation = IopGetNetworkOpenInformation(v88);
LABEL_524:
              AccessStatus = XxxInformation;
            }
          }
        }
        else
        {
          v180 = 0LL;
          *(_QWORD *)&Size[1] = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (PFILE_OBJECT *)FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          v213 = FastIoQueryBasicInfo;
          if ( FastIoQueryBasicInfo )
          {
            if ( (MmVerifierData & 0x10) != 0 )
            {
              if ( MmIsDriverVerifying(DriverObject) )
              {
                v182 = (void *)VfFastIoSnapState();
                goto LABEL_500;
              }
              v180 = 0LL;
            }
            v182 = 0LL;
LABEL_500:
            v222 = v182;
            LOBYTE(v180) = 1;
            v177 = ((__int64 (__fastcall *)(PFILE_OBJECT, __int64, _QWORD, ULONG_PTR *, PDEVICE_OBJECT))FastIoQueryBasicInfo)(
                     v88,
                     v180,
                     *(_QWORD *)(v194 + 96),
                     BugCheckParameter4,
                     RelatedDeviceObject);
            v207 = v177;
            if ( v182 )
              VfFastIoCheckState(v182);
            v141 = v194;
          }
          if ( v177 )
          {
            AccessStatus = BugCheckParameter4[0];
          }
          else
          {
            v183 = (struct _IRP *)ExAllocatePool2(64LL, 40LL, 538996553LL);
            *(_QWORD *)&Size[1] = v183;
            if ( v183 )
            {
              AccessStatus = IopQueryXxxInformation(v88, 4, 0x28u, 0, v183, Size, 1);
              if ( AccessStatus >= 0 )
                memmove(*(void **)(v141 + 96), v183, Size[0]);
              ExFreePoolWithTag(v183, 0);
            }
            else
            {
              AccessStatus = -1073741670;
            }
          }
        }
      }
      *v219 = -1096154543;
      IopCloseFile(0LL, v88, 1LL, 1LL);
      ObfDereferenceObject(v88);
      *v216 = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(v141 + 16) = AccessStatus;
      return result;
    }
    if ( (v150 & 0xFFFFFFFFFFFFFFFDuLL) == 0
      || (v151 = v150 - 2684354563u, v150 - 2684354563u <= 0x16) && (v152 = 4194817LL, _bittest64(&v152, v151)) && !v130 )
    {
      v153 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v88->FileName.Length )
      {
        v154 = ExAllocatePool2(256LL, v88->FileName.Length, 1665560393LL);
        if ( !v154 )
        {
          *(_DWORD *)(v141 + 16) = -1073741670;
          return 3221225626LL;
        }
        v155 = v153->Buffer;
        if ( v155 )
          ExFreePoolWithTag(v155, 0);
        v153->Buffer = (wchar_t *)v154;
        v153->MaximumLength = v88->FileName.Length;
      }
      RtlCopyUnicodeString(v153, &v88->FileName);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v156 = 4194817LL;
        if ( _bittest64(&v156, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(v141 + 40) = 0LL;
      }
    }
    if ( v88->FileName.Length )
    {
      ExFreePoolWithTag(v88->FileName.Buffer, 0);
      v88->FileName.Length = 0;
    }
    v88->DeviceObject = 0LL;
    ObfDereferenceObject(v88);
    *v216 = 0LL;
    v157 = Object;
    IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
    if ( v203 )
      IopDereferenceVpbAndFree(v203);
    v158 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v141 + 40) = 0LL;
      v164 = 4194817LL;
      if ( v158 - 2684354563u <= 0x16 && _bittest64(&v164, v158 - 2684354563u) )
      {
        v165 = *(_DWORD *)(v141 + 152) | 0x10;
        *(_DWORD *)(v141 + 152) = v165;
        v166 = *((unsigned int *)v157 + 18);
        if ( (_DWORD)v166 == 7 || (unsigned int)v166 <= 0x24 && (v167 = 0x1080020004LL, _bittest64(&v167, v166)) )
          v168 = v165 | 8;
        else
          v168 = v165 & 0xFFFFFFF7;
        *(_DWORD *)(v141 + 152) = v168;
      }
      if ( *(_BYTE *)(v141 + 136) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)v157, v144, (ULONG_PTR)AbsoluteObjectName, v158);
      if ( (*(_DWORD *)(v157[39] + 32LL) & 0x800) == 0 )
      {
        v169 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v169->Flags &= ~0x100u;
      }
      if ( v158 - 2684354563u <= 0x16 && _bittest64(&v164, v158 - 2684354563u) && v130 )
      {
        *(_QWORD *)(v141 + 24) = P;
        *(_DWORD *)(v141 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v158 == 2684354585 || v158 == 2 )
      {
        v170 = v211;
        *(_QWORD *)(v170 + 8) = PsGetParentSilo(*(_QWORD *)(v211 + 8));
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v212 > 0x20 )
      return 3221225473LL;
    *v213 = 0LL;
    FileObject = 0LL;
    v12 = v194;
    v11 = DeviceObject;
  }
  AccessStatus = IopCheckTopDeviceHint((unsigned int **)DesiredAccess, v12, (v190 & 8) != 0, SourceString);
  if ( AccessStatus >= 0 )
  {
    AttachedDevice = *(PDEVICE_OBJECT *)DesiredAccess;
    goto LABEL_193;
  }
  if ( v72 )
    IopDereferenceVpbAndFree(v72);
  IopDecrementDeviceObjectRef((ULONG_PTR)v54, 0, 0);
  return (unsigned int)AccessStatus;
}
