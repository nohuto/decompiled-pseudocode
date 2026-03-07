__int64 __fastcall NtCreateUserProcess(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        ULONG_PTR a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rbx
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 result; // rax
  int Info; // esi
  KPROCESSOR_MODE v22; // r14
  __int64 v23; // r8
  int v24; // r8d
  __int64 v25; // r9
  unsigned __int8 v26; // bl
  __int64 v27; // rdx
  __int64 v28; // rcx
  char v29; // r15
  ULONG v30; // eax
  int v31; // r9d
  int v32; // ecx
  PVOID v33; // rax
  __int64 v34; // rdx
  unsigned __int8 v35; // bl
  int v36; // r8d
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r11
  __int64 v41; // rcx
  __int64 *v42; // r13
  char v43; // r11
  unsigned int v44; // esi
  PVOID v45; // r15
  int v46; // ecx
  unsigned __int64 v47; // rax
  void *v48; // rsp
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rsi
  int v54; // r12d
  __int64 v55; // rax
  int inserted; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v58; // rax
  __int64 v59; // rbx
  int v60; // eax
  int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  char v65; // bl
  volatile signed __int64 *v66; // rbx
  volatile signed __int64 *v67; // rbx
  KPROCESSOR_MODE v68; // dl
  char v69; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 v70; // [rsp+81h] [rbp+1h] BYREF
  char v71; // [rsp+82h] [rbp+2h] BYREF
  bool v72; // [rsp+83h] [rbp+3h]
  char v73; // [rsp+84h] [rbp+4h] BYREF
  char v74; // [rsp+85h] [rbp+5h] BYREF
  char v75; // [rsp+86h] [rbp+6h]
  __int64 v76; // [rsp+88h] [rbp+8h] BYREF
  PVOID v77; // [rsp+90h] [rbp+10h] BYREF
  KPROCESSOR_MODE v78; // [rsp+98h] [rbp+18h]
  int v79; // [rsp+9Ch] [rbp+1Ch]
  char v80[8]; // [rsp+A0h] [rbp+20h]
  __int64 v81; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v82; // [rsp+B0h] [rbp+30h]
  unsigned int v83; // [rsp+B8h] [rbp+38h] BYREF
  int v84; // [rsp+BCh] [rbp+3Ch]
  int v85; // [rsp+C0h] [rbp+40h]
  PVOID v86; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v87; // [rsp+D0h] [rbp+50h]
  struct _KTHREAD *v88; // [rsp+D8h] [rbp+58h]
  PVOID v89; // [rsp+E0h] [rbp+60h] BYREF
  PVOID v90; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v91; // [rsp+F0h] [rbp+70h] BYREF
  unsigned __int64 v92; // [rsp+F8h] [rbp+78h]
  PVOID v93; // [rsp+100h] [rbp+80h] BYREF
  __int64 v94; // [rsp+108h] [rbp+88h] BYREF
  __int64 v95; // [rsp+110h] [rbp+90h]
  _QWORD *v96; // [rsp+118h] [rbp+98h]
  PVOID Object; // [rsp+120h] [rbp+A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v99; // [rsp+158h] [rbp+D8h] BYREF
  ULONG_PTR v100; // [rsp+160h] [rbp+E0h]
  __int64 v101; // [rsp+168h] [rbp+E8h]
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v103; // [rsp+190h] [rbp+110h]
  __int128 v104; // [rsp+198h] [rbp+118h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v106[2]; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v107; // [rsp+1C8h] [rbp+148h]
  _BYTE v108[80]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v109[64]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE v110[400]; // [rsp+420h] [rbp+3A0h] BYREF
  _BYTE v111[400]; // [rsp+5B0h] [rbp+530h] BYREF
  __int64 v112[2]; // [rsp+740h] [rbp+6C0h] BYREF
  __int64 v113; // [rsp+750h] [rbp+6D0h]
  char v114; // [rsp+758h] [rbp+6D8h]

  v84 = a4;
  v85 = a3;
  v95 = a2;
  v96 = a1;
  v92 = a5;
  v100 = a6;
  v87 = a9;
  v91 = 0LL;
  *(_WORD *)((char *)v109 + 1) = 0;
  BYTE3(v109[0]) = 0;
  LODWORD(v76) = 0;
  *(_DWORD *)(&DriverContext.Size + 1) = 0;
  *(&DriverContext.Size + 3) = 0;
  IoStatusBlock = 0LL;
  v77 = 0LL;
  v90 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v81 = 0LL;
  memset(v110, 0, sizeof(v110));
  v104 = 0LL;
  v73 = 0;
  v69 = 0;
  v71 = 0;
  v74 = 0;
  *(_OWORD *)v112 = 0LL;
  v113 = 0LL;
  v114 = 0;
  memset(v111, 0, sizeof(v111));
  v99 = 0LL;
  v83 = 0;
  v94 = 0LL;
  *(_OWORD *)v106 = 0LL;
  v107 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v88 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v82 = Process;
  v101 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v78 = PreviousMode;
  v89 = 0LL;
  v86 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v79 = (int)CurrentThread;
  v75 = 0;
  v72 = 0;
  memset(&DriverContext, 0, sizeof(DriverContext));
  v103 = 0LL;
  memset(v108, 0, 0x48uLL);
  v14 = a7;
  if ( (a7 & 0xFFF97838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v110[388] = PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v96 < 0x7FFFFFFF0000LL )
      v15 = (__int64)v96;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v95 < 0x7FFFFFFF0000LL )
      v16 = v95;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  if ( a5 )
  {
    if ( PreviousMode && (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = *(_DWORD *)(a5 + 24) & 0x1DF2;
    else
      v17 = *(_DWORD *)(a5 + 24) & 0x11FF2;
    *(_DWORD *)&v110[384] = v17;
  }
  memset(v109, 0, 0x1F8uLL);
  if ( a11 )
  {
    LOBYTE(v18) = PreviousMode;
    result = PspBuildCreateProcessContext(a11, v18, 0LL, v109);
    if ( (int)result < 0 )
      return result;
    v72 = v109[46] != 0;
  }
  if ( (a7 & 0x40) != 0 && (v109[0] & 0x2000000000000LL) != 0 && !LOBYTE(v109[45]) )
  {
    v14 = a7 & 0xFFFFFFBF;
    a7 &= ~0x40u;
    HIDWORD(v109[0]) &= ~0x20000u;
  }
  if ( (v14 & 4) == 0 && (v109[0] & 0x80000000000LL) != 0 || (v109[0] & 0x2000000000000LL) != 0 && (v14 & 0x40) == 0 )
    goto LABEL_180;
  LOBYTE(v19) = PreviousMode;
  Info = PspCaptureCreateInfo(v19, a10, v109);
  if ( Info < 0 )
  {
LABEL_96:
    if ( v109[22] && qword_140C37690 )
      qword_140C37690();
    goto LABEL_99;
  }
  v22 = 1;
  if ( (v109[0] & 0x100000000LL) != 0 )
  {
    Info = ObpReferenceObjectByHandleWithTag(v109[15], 0x72437350u, (__int64)&v81, 0LL, 0LL);
    if ( Info < 0 )
      goto LABEL_96;
    Process = v81;
    v109[16] = v81;
  }
  else
  {
    v81 = Process;
  }
  v109[55] = PspEstimateNewProcessServerSilo(Process, v109[47], HIDWORD(v109[48]));
  if ( (BYTE1(v109[1]) & 0xC) == 4 && (Process != v82 || (*(_DWORD *)(v82 + 2172) & 0x1000) != 0) )
    goto LABEL_180;
  LOBYTE(v23) = PreviousMode;
  Info = PspReferenceTokenForNewProcess(Process, v109[18], v23, &v109[19]);
  if ( Info < 0 )
  {
    v109[19] = 0LL;
    goto LABEL_96;
  }
  if ( v109[18] && (int)SeQueryServerSiloToken(v109[19], &v94) >= 0 && !(unsigned __int8)PspIsSiloInSilo(v94) )
    goto LABEL_180;
  if ( (v109[0] & 0x2000000000LL) == 0 )
  {
    if ( Process == v82
      && PreviousMode
      && !v87
      && (v109[1] & 0xC00) == 0
      && (v109[0] & 0x8000000000LL) == 0
      && (v109[0] & 0x2000000000000LL) == 0
      && (v109[1] & 0x10) == 0 )
    {
      LOBYTE(v109[1]) &= ~4u;
      v35 = *(_BYTE *)(Process + 2170);
      v70 = v35;
      v71 = *(_BYTE *)(v81 + 2169);
      v29 = *(_BYTE *)(v81 + 2168);
      v69 = v29;
      if ( (v14 & 0x40) != 0 && (v35 & 7) == 0 )
      {
        Info = -1073741790;
        goto LABEL_96;
      }
      LOBYTE(v24) = PreviousMode;
      Info = PspValidateCreateProcessProtection(v82, (unsigned int)v109, v24, v14, v35);
      if ( Info < 0 )
        goto LABEL_96;
      v42 = 0LL;
LABEL_62:
      Info = PspAllocateProcess(
               v81,
               PreviousMode,
               (_QWORD *)v92,
               v35,
               v29,
               v43,
               (void *)v109[25],
               (void *)v109[19],
               a7,
               0,
               (__int64)v109,
               v109[18] != 0,
               v89,
               (__int64)&v91,
               &v77);
      if ( Info < 0 )
        goto LABEL_96;
      v44 = v109[25] != 0 ? 1048587 : 1048603;
      v45 = v77;
      v46 = *((_DWORD *)v77 + 629) & 0x4000;
      v92 = v46 != 0 ? 0x800 : 0;
      if ( v46 )
        v44 |= 0x100040u;
      RtlGetExtendedContextLength2(v44, &v83, v46 != 0 ? 0x800 : 0);
      v87 = 0LL;
      if ( v72 )
      {
        v42 = 0LL;
      }
      else
      {
        v47 = v83 + 15LL;
        if ( v47 <= v83 )
          v47 = 0xFFFFFFFFFFFFFF0LL;
        v48 = alloca(v47 & 0xFFFFFFFFFFFFFFF0uLL);
        v87 = (__int64)&v69;
        memset(&v69, 0, v83);
        RtlInitializeExtendedContext2((__int64)&v69, v44, &v99, v92);
        if ( v109[25] )
        {
          v50 = HIDWORD(v109[28]);
          if ( !*((_QWORD *)v77 + 176) )
            v50 = *((_QWORD *)v77 + 170);
          PspCreateUserContext((unsigned int)&v69, 1, qword_140D1F330, v109[6], v50);
        }
        else
        {
          LOBYTE(v49) = 1;
          Info = PspGetContextThreadInternal((_DWORD)v88, (unsigned int)&v69, 0, v49, 1);
          if ( Info < 0 )
          {
            v66 = (volatile signed __int64 *)v77;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v77 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v66 + 135);
            KeAbPostRelease((ULONG_PTR)(v66 + 135));
            KeLeaveCriticalRegionThread((__int64)v88);
            PspRundownSingleProcess((PRKPROCESS)v77, 0);
            goto LABEL_96;
          }
          v92 = 297LL;
        }
        v106[0] = (__int64)v108;
        v45 = v77;
      }
      ObfReferenceObjectWithTag(v45, 0x72437350u);
      if ( v42 )
      {
        *(_BYTE *)v42 = 0;
        v51 = v109[8];
        if ( v109[8] < 0x40000uLL )
          v51 = 0x40000LL;
        v42[3] = v51;
        v42[2] = v109[9];
        v42[1] = LODWORD(v109[7]);
      }
      *(_DWORD *)v80 = 0;
      PspMapThreadCreationFlags(a8, (int *)&v76);
      if ( (_DWORD)v91 )
      {
        *(_DWORD *)v80 = 2;
        LODWORD(v76) = v76 | 0x10;
      }
      if ( v72 )
        LODWORD(v76) = v76 | 0x400;
      LODWORD(v76) = v76 | 0x60;
      Info = PspAllocateThread(
               (PRKPROCESS)v77,
               v100,
               PreviousMode,
               (__int64)v109,
               v87,
               v106,
               0LL,
               0LL,
               (int *)&v76,
               &v90,
               v42,
               (size_t)v111);
      if ( Info < 0 )
      {
        v67 = (volatile signed __int64 *)v77;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v77 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v67 + 135);
        KeAbPostRelease((ULONG_PTR)(v67 + 135));
        KeLeaveCriticalRegionThread((__int64)v88);
        PspRundownSingleProcess((PRKPROCESS)v77, 0);
        goto LABEL_95;
      }
      v53 = v82;
      LOBYTE(v52) = PreviousMode;
      if ( PsTestProtectedProcessIncompatibility(v52, v82, (__int64)v77) )
      {
        v54 = v84;
        if ( (v84 & 0x2000000) != 0 )
        {
          v54 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v35 >> 4) + 8] & 0x1FFFFF | v84 & 0xFDFFFFFF;
          if ( !v109[16] || v53 == v109[16] )
            v54 |= 1u;
        }
      }
      else
      {
        v54 = v84;
      }
      if ( v109[26] )
        v55 = v109[26] + 112;
      else
        v55 = 0LL;
      inserted = PspInsertProcess(v77, (HANDLE)v109[17], v80[0], v55, (__int64)v110);
      Info = PspInsertThread(
               (ULONG_PTR)v90,
               (__int64)v77,
               (__int64)v108,
               &v76,
               v54,
               v42,
               (__int64)v109,
               0LL,
               (PACCESS_STATE)v111,
               (PVOID *)v95,
               (_OWORD *)v109[2]);
      KeLeaveCriticalRegionThread((__int64)v88);
      if ( inserted < 0 )
      {
        PspRundownSingleProcess((PRKPROCESS)v77, 0);
        Info = inserted;
        goto LABEL_94;
      }
      if ( Info < 0 )
      {
LABEL_171:
        PsTerminateProcess(v77, (unsigned int)Info);
        goto LABEL_94;
      }
      ProcessServerSilo = PsGetProcessServerSilo((__int64)v77);
      if ( ProcessServerSilo != v109[55] )
      {
        Info = -1073741267;
        goto LABEL_171;
      }
      Info = PspCreateObjectHandle(v77, (__int64)v110, (struct _OBJECT_TYPE *)PsProcessType);
      if ( Info >= 0 )
      {
        v58 = (_OWORD *)v109[4];
        if ( v109[4] )
        {
          *(_OWORD *)v109[4] = *(_OWORD *)&v109[6];
          v58[1] = *(_OWORD *)&v109[8];
          v58[2] = *(_OWORD *)&v109[10];
          v58[3] = *(_OWORD *)&v109[12];
        }
        *v96 = *(_QWORD *)&v110[392];
        v59 = v82;
        Info = PspUpdateCreateInfo(6LL, v109, v77);
        if ( Info >= 0 )
        {
LABEL_93:
          SepDeleteAccessState((__int64)v110);
          SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v110[32]);
          if ( Info >= 0 )
          {
LABEL_94:
            ObfDereferenceObject(v90);
LABEL_95:
            ObfDereferenceObjectWithTag(v77, 0x72437350u);
            goto LABEL_96;
          }
          goto LABEL_171;
        }
        if ( (*(_WORD *)&v110[384] & 0x200) != 0 || (v68 = 1, (*(_DWORD *)(v59 + 2172) & 0x1000) != 0) )
          v68 = 0;
        ObCloseHandle(*(HANDLE *)&v110[392], v68);
      }
      if ( (*(_WORD *)&v111[384] & 0x200) != 0 || (*(_DWORD *)(v82 + 2172) & 0x1000) != 0 )
        v22 = 0;
      ObCloseHandle(*(HANDLE *)&v111[392], v22);
      goto LABEL_93;
    }
LABEL_180:
    Info = -1073741811;
    goto LABEL_96;
  }
  v26 = (v109[0] & 0x2000000000000LL) != 0 ? LOBYTE(v109[45]) : 0;
  v70 = v26;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    v104 = *(_OWORD *)&v109[29];
    ZwSystemDebugControl(38LL, (__int64)&v104);
  }
  LOBYTE(v25) = v26;
  Info = SeQuerySigningPolicy(v109[19], &v109[29], (v14 >> 6) & 1, v25, &v69, &v71, &v70);
  if ( Info < 0 )
    goto LABEL_96;
  if ( (v14 & 0x20000) != 0 )
  {
    if ( !qword_140C37600 || (LOBYTE(v27) = 8, v29 = v69, LOBYTE(v28) = v69, !(unsigned int)qword_140C37600(v28, v27)) )
    {
      v29 = 8;
      v69 = 8;
    }
  }
  else
  {
    v29 = v69;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  v30 = 1600;
  if ( PreviousMode != 1 )
    v30 = 576;
  ObjectAttributes.Attributes = v30;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v109[29];
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Info = 0;
  if ( qword_140D53430 )
    Info = qword_140D53430(v109[19]);
  if ( Info < 0 )
    goto LABEL_96;
  Info = PspGetMemoryPartitionContext(v81, v14, v109[47], HIDWORD(v109[48]), (__int64)&v89);
  if ( Info < 0 )
    goto LABEL_96;
  Info = PspCreateUserProcessEcp(&DriverContext, v109[19]);
  if ( Info < 0 )
    goto LABEL_96;
  Info = IoCreateFileEx(
           (PHANDLE)&v109[21],
           HIDWORD(v109[20]) | 0x100020,
           &ObjectAttributes,
           &IoStatusBlock,
           0LL,
           0x80u,
           5u,
           1u,
           0x60u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0,
           &DriverContext);
  if ( Info < 0 && HIDWORD(v109[20]) )
    Info = IoCreateFileEx(
             (PHANDLE)&v109[21],
             0x100020u,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             0x80u,
             5u,
             1u,
             0x60u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0,
             &DriverContext);
  if ( Info < 0 )
  {
    v109[21] = 0LL;
    v62 = 1LL;
LABEL_133:
    PspUpdateCreateInfo(v62, v109, 0LL);
    goto LABEL_96;
  }
  Object = 0LL;
  Info = ObReferenceObjectByHandle((HANDLE)v109[21], 0x100020u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v109[22] = (__int64)Object;
  if ( Info >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    v32 = 4 * v72 + 1;
    *(_DWORD *)v80 = v32;
    if ( v109[50] )
    {
      v60 = SeDuplicateTokenAndAddOriginClaim(v109[19], v109[50], LODWORD(v109[51]), &v86);
      v61 = (unsigned __int8)v79;
      if ( v60 >= 0 )
        v61 = 1;
      v79 = v61;
      v75 = v61;
      v32 = *(_DWORD *)v80;
    }
    v33 = v86;
    if ( !(_BYTE)v79 )
      v33 = (PVOID)v109[19];
    v86 = v33;
    while ( 1 )
    {
      LOBYTE(v31) = v29;
      Info = MmCreateSpecialImageSection(
               (unsigned int)&v109[23],
               (unsigned int)&ObjectAttributes,
               (_DWORD)v86,
               v31,
               v109[21],
               v32);
      if ( Info < 0 )
      {
        v109[23] = 0LL;
        v62 = 2LL;
        goto LABEL_133;
      }
      v93 = 0LL;
      Info = ObReferenceObjectByHandle((HANDLE)v109[23], 8u, MmSectionObjectType, 0, &v93, 0LL);
      v109[25] = (__int64)v93;
      if ( Info < 0 )
      {
        v109[25] = 0LL;
        goto LABEL_96;
      }
      v35 = v70;
      LOBYTE(v34) = v70;
      Info = PspGetProcessProtectionRequirementsFromImage(v93, v34, &v73);
      if ( Info < 0 )
        goto LABEL_96;
      LOBYTE(v37) = v73;
      if ( v73 == v35 )
        break;
      Info = SeQuerySigningPolicy(v109[19], &v109[29], 1LL, v37, &v74, &v71, &v70);
      if ( Info < 0 )
        goto LABEL_96;
      v65 = v74;
      if ( v74 == v29 )
      {
        v35 = v70;
        break;
      }
      if ( (v29 & 0x30) != 0 && (v74 & 0x30) != (v29 & 0x30) )
        goto LABEL_180;
      if ( !qword_140C37600 )
        goto LABEL_180;
      LOBYTE(v63) = v29;
      LOBYTE(v64) = v74;
      if ( !(unsigned int)qword_140C37600(v64, v63) )
        goto LABEL_180;
      ObCloseHandle((HANDLE)v109[23], 0);
      ObfDereferenceObject((PVOID)v109[25]);
      v109[23] = 0LL;
      v109[25] = 0LL;
      v29 = v65;
      v69 = v65;
      v32 = *(_DWORD *)v80;
    }
    LOBYTE(v36) = PreviousMode;
    Info = PspValidateCreateProcessProtection(v82, (unsigned int)v109, v36, v14, v35);
    if ( Info < 0 )
      goto LABEL_96;
    if ( (v14 & 0x40000) != 0
      || (v35 & 7) != 1
      && (LOBYTE(v39) = PreviousMode,
          LOBYTE(v38) = *(_BYTE *)(v40 + 2170),
          PspCheckForInvalidAccessByProtection(v39, v38, v35)) )
    {
      LOBYTE(v109[1]) |= 8u;
    }
    PspGetProcessParameterOverrides((__int64)v109, (__int64)v89);
    LOBYTE(v41) = PreviousMode;
    Info = PspCaptureProcessParameters(v41, v87, v109);
    if ( Info >= 0 )
    {
      v42 = v112;
      v43 = v71;
      goto LABEL_62;
    }
    LOBYTE(v109[1]) &= ~4u;
    goto LABEL_96;
  }
  v109[22] = 0LL;
LABEL_99:
  if ( v89 )
    ObfDereferenceObjectWithTag(v89, 0x624A7350u);
  PspDeleteCreateProcessContext(v109);
  if ( DriverContext.ExtraCreateParameter )
    FsRtlFreeExtraCreateParameterList(DriverContext.ExtraCreateParameter);
  if ( (_BYTE)v79 )
    ObfDereferenceObject(v86);
  return (unsigned int)Info;
}
