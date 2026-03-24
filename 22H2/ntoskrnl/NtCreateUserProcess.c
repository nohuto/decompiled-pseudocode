/*
 * XREFs of NtCreateUserProcess @ 0x14060A630
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength2 @ 0x14033F5D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14033FFD0 (RtlInitializeExtendedContext2.c)
 *     SepDeleteAccessState @ 0x140345670 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x1403FD200 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     SeDeleteCodeIntegrityOriginClaimForFileObject @ 0x1405D0004 (SeDeleteCodeIntegrityOriginClaimForFileObject.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140607508 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x14060753C (PspValidateCreateProcessProtection.c)
 *     PspGetProcessParameterOverrides @ 0x14060759C (PspGetProcessParameterOverrides.c)
 *     PspCaptureProcessParameters @ 0x140607600 (PspCaptureProcessParameters.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406079D8 (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140607A2C (PspCheckForInvalidAccessByProtection.c)
 *     PspInsertProcess @ 0x140607B70 (PspInsertProcess.c)
 *     MmCreateSpecialImageSection @ 0x140608BE4 (MmCreateSpecialImageSection.c)
 *     PspBuildCreateProcessContext @ 0x1406090A4 (PspBuildCreateProcessContext.c)
 *     PspCaptureCreateInfo @ 0x14060A560 (PspCaptureCreateInfo.c)
 *     IoCreateFileEx @ 0x14060B6D0 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060CD80 (FsRtlFreeExtraCreateParameterList.c)
 *     PspUpdateCreateInfo @ 0x14060CF84 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x14060D1E4 (PspCreateUserProcessEcp.c)
 *     PspGetMemoryPartitionContext @ 0x14060D3E0 (PspGetMemoryPartitionContext.c)
 *     SeQuerySigningPolicy @ 0x14060D450 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14060D724 (PspReferenceTokenForNewProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060D7A8 (PspEstimateNewProcessServerSilo.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     SeQueryServerSiloToken @ 0x140693660 (SeQueryServerSiloToken.c)
 *     PsTerminateProcess @ 0x14069F4E8 (PsTerminateProcess.c)
 *     PspIsSiloInSilo @ 0x1406A210C (PspIsSiloInSilo.c)
 *     PspGetContextThreadInternal @ 0x1406C0C14 (PspGetContextThreadInternal.c)
 *     PspCreateUserContext @ 0x1406C1520 (PspCreateUserContext.c)
 *     PspDeleteCreateProcessContext @ 0x1406C1854 (PspDeleteCreateProcessContext.c)
 *     PspMapThreadCreationFlags @ 0x1406C1D8C (PspMapThreadCreationFlags.c)
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x1406C3584 (PspCreateObjectHandle.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1409227FC (SeDuplicateTokenAndAddOriginClaim.c)
 */

__int64 __fastcall NtCreateUserProcess(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9,
        unsigned __int64 a10,
        unsigned __int64 *a11)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *Process; // r13
  char PreviousMode; // r15
  unsigned int v14; // r12d
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int Info; // esi
  KPROCESSOR_MODE v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int8 v23; // bl
  ULONG v24; // eax
  __int64 v25; // rcx
  char v26; // bl
  int v27; // ebx
  int v28; // eax
  int v29; // ecx
  struct _DMA_ADAPTER *v30; // r8
  char v31; // r13
  int i; // eax
  unsigned __int8 v33; // bl
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // bl
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r11
  int v41; // edx
  int v42; // r9d
  __int64 *v43; // r12
  char v44; // r11
  int v45; // ecx
  unsigned int v46; // esi
  unsigned __int64 v47; // rax
  void *v48; // rsp
  int v49; // r9d
  __int64 v50; // rax
  volatile signed __int64 *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  volatile signed __int64 *v54; // rbx
  __int64 v55; // r13
  bool v56; // al
  unsigned int v57; // r8d
  int v58; // esi
  __int64 v59; // rax
  int inserted; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v62; // rax
  KPROCESSOR_MODE v63; // dl
  int v64; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 v65; // [rsp+84h] [rbp+4h] BYREF
  char v66; // [rsp+85h] [rbp+5h] BYREF
  __int16 v67; // [rsp+86h] [rbp+6h] BYREF
  char v68; // [rsp+88h] [rbp+8h] BYREF
  char v69; // [rsp+89h] [rbp+9h]
  PVOID v70; // [rsp+90h] [rbp+10h] BYREF
  char v71; // [rsp+98h] [rbp+18h]
  char v72[8]; // [rsp+9Ch] [rbp+1Ch] BYREF
  unsigned int v73; // [rsp+A4h] [rbp+24h] BYREF
  int v74; // [rsp+A8h] [rbp+28h]
  unsigned int v75; // [rsp+ACh] [rbp+2Ch]
  __int64 v76; // [rsp+B0h] [rbp+30h] BYREF
  PADAPTER_OBJECT v77; // [rsp+B8h] [rbp+38h] BYREF
  _BYTE *v78; // [rsp+C0h] [rbp+40h]
  struct _KTHREAD *v79; // [rsp+C8h] [rbp+48h]
  PVOID v80; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v81; // [rsp+D8h] [rbp+58h] BYREF
  PADAPTER_OBJECT v82; // [rsp+E0h] [rbp+60h] BYREF
  unsigned __int64 v83; // [rsp+E8h] [rbp+68h]
  PVOID Object; // [rsp+F0h] [rbp+70h] BYREF
  PVOID v85; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v86; // [rsp+100h] [rbp+80h]
  __int64 v87; // [rsp+108h] [rbp+88h]
  _QWORD *v88; // [rsp+110h] [rbp+90h]
  __int64 v89; // [rsp+118h] [rbp+98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+A0h] BYREF
  _QWORD v91[3]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v92; // [rsp+168h] [rbp+E8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+178h] [rbp+F8h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+188h] [rbp+108h] BYREF
  __int64 v95; // [rsp+1A8h] [rbp+128h]
  __int64 v96[2]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v97; // [rsp+1C0h] [rbp+140h]
  _BYTE v98[80]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v99[66]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE v100[400]; // [rsp+430h] [rbp+3B0h] BYREF
  __int64 v101[50]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v102[2]; // [rsp+750h] [rbp+6D0h] BYREF
  __int128 v103; // [rsp+760h] [rbp+6E0h]

  v74 = a4;
  v75 = a3;
  v87 = a2;
  v88 = a1;
  v83 = a5;
  v91[1] = a6;
  v86 = a9;
  v81 = 0LL;
  *(_DWORD *)v72 = 0;
  IoStatusBlock = 0LL;
  v70 = 0LL;
  v82 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v76 = 0LL;
  memset(v100, 0, sizeof(v100));
  v92 = 0LL;
  v67 = 0;
  v66 = 0;
  v68 = 0;
  *(_OWORD *)v102 = 0LL;
  v103 = 0LL;
  memset(v101, 0, sizeof(v101));
  v91[0] = 0LL;
  v73 = 0;
  v89 = 0LL;
  *(_OWORD *)v96 = 0LL;
  v97 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v79 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v78 = Process;
  v91[2] = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v71 = PreviousMode;
  v80 = 0LL;
  v77 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v64 = (int)CurrentThread;
  v69 = 0;
  memset(&DriverContext, 0, sizeof(DriverContext));
  v95 = 0LL;
  memset(v98, 0, 0x48uLL);
  v14 = a7;
  if ( (a7 & 0xFFFB6838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v100[388] = PreviousMode;
  if ( PreviousMode )
  {
    v16 = (__int64)v88;
    if ( (unsigned __int64)v88 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v17 = v87;
    if ( (unsigned __int64)v87 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  if ( a5 )
  {
    if ( PreviousMode && (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v18 = *(_DWORD *)(a5 + 24) & 0x1DF2;
    else
      v18 = *(_DWORD *)(a5 + 24) & 0x11FF2;
    *(_DWORD *)&v100[384] = v18;
  }
  memset(v99, 0, 0x208uLL);
  if ( !a11 || (result = PspBuildCreateProcessContext(a11, PreviousMode, 0, (__int64)v99), (int)result >= 0) )
  {
    if ( (a7 & 0x40) != 0 && (v99[0] & 0x2000000000000LL) != 0 && !LOBYTE(v99[48]) )
    {
      v14 = a7 & 0xFFFFFFBF;
      a7 &= ~0x40u;
      HIDWORD(v99[0]) &= ~0x20000u;
    }
    if ( (v14 & 4) == 0 && (v99[0] & 0x80000000000LL) != 0 || (v99[0] & 0x2000000000000LL) != 0 && (v14 & 0x40) == 0 )
      goto LABEL_167;
    Info = PspCaptureCreateInfo(PreviousMode, a10, (__int64)v99);
    if ( Info >= 0 )
    {
      v20 = 1;
      if ( (v99[0] & 0x100000000LL) == 0 )
      {
        v76 = (__int64)Process;
LABEL_33:
        v99[58] = PspEstimateNewProcessServerSilo(Process, v99[50], HIDWORD(v99[51]));
        if ( (BYTE1(v99[1]) & 0xC) != 4 || Process == v78 && (*((_DWORD *)v78 + 543) & 0x1000) == 0 )
        {
          LOBYTE(v21) = PreviousMode;
          Info = PspReferenceTokenForNewProcess(Process, v99[18], v21, &v99[19]);
          if ( Info < 0 )
          {
            v99[19] = 0LL;
            goto LABEL_168;
          }
          if ( !v99[18] || (int)SeQueryServerSiloToken(v99[19], &v89) < 0 || (unsigned __int8)PspIsSiloInSilo(v89) )
          {
            if ( (v99[0] & 0x2000000000LL) != 0 )
            {
              v23 = (v99[0] & 0x2000000000000LL) != 0 ? LOBYTE(v99[48]) : 0;
              v65 = v23;
              if ( (NtGlobalFlag & 0x40000) != 0 )
              {
                v92 = *(_OWORD *)&v99[29];
                ZwSystemDebugControl(38LL, (__int64)&v92);
              }
              LOBYTE(v22) = v23;
              Info = SeQuerySigningPolicy(v99[19], &v99[29], (v14 >> 6) & 1, v22, &v67, &v66, &v65);
              if ( Info < 0 )
                goto LABEL_168;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              v24 = 1600;
              if ( PreviousMode != 1 )
                v24 = 576;
              ObjectAttributes.Attributes = v24;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&v99[29];
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              Info = 0;
              if ( qword_140D2D420 )
                Info = qword_140D2D420(v99[19]);
              if ( Info < 0 )
                goto LABEL_168;
              Info = PspGetMemoryPartitionContext((_DWORD)Process, v14, v99[50], HIDWORD(v99[51]), (__int64)&v80);
              if ( Info < 0 )
                goto LABEL_168;
              Info = PspCreateUserProcessEcp(&DriverContext, v99[19]);
              if ( Info < 0 )
                goto LABEL_168;
              Info = IoCreateFileEx(
                       (PHANDLE)&v99[21],
                       LODWORD(v99[20]) | 0x100020,
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
              if ( Info < 0 && LODWORD(v99[20]) )
                Info = IoCreateFileEx(
                         (PHANDLE)&v99[21],
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
                v99[21] = 0LL;
                v25 = 1LL;
LABEL_57:
                PspUpdateCreateInfo(v25, v99, 0LL);
                goto LABEL_168;
              }
              Object = 0LL;
              Info = ObReferenceObjectByHandle(
                       (HANDLE)v99[21],
                       0x100020u,
                       (POBJECT_TYPE)IoFileObjectType,
                       0,
                       &Object,
                       0LL);
              v99[22] = (__int64)Object;
              if ( Info < 0 )
              {
                v99[22] = 0LL;
                v26 = v64;
LABEL_171:
                if ( v80 )
                  ObfDereferenceObjectWithTag(v80, 0x624A7350u);
                PspDeleteCreateProcessContext(v99);
                if ( DriverContext.ExtraCreateParameter )
                  FsRtlFreeExtraCreateParameterList(DriverContext.ExtraCreateParameter);
                if ( v26 )
                  HalPutDmaAdapter(v77);
                return (unsigned int)Info;
              }
              ObjectAttributes.ObjectName = 0LL;
              v27 = 1;
              if ( v99[49] )
                v27 = 5;
              *(_DWORD *)&v72[4] = v27;
              if ( v99[53] )
              {
                v28 = SeDuplicateTokenAndAddOriginClaim(v99[19], v99[53], LODWORD(v99[54]), &v77);
                v29 = (unsigned __int8)v64;
                if ( v28 >= 0 )
                  v29 = 1;
                v64 = v29;
                v69 = v29;
              }
              else
              {
                LOBYTE(v29) = v64;
              }
              v30 = v77;
              if ( !(_BYTE)v29 )
                v30 = (struct _DMA_ADAPTER *)v99[19];
              v77 = v30;
              v31 = v67;
              for ( i = MmCreateSpecialImageSection(&v99[23], (int)&ObjectAttributes, (__int64)v30, v67, v99[21], v27);
                    ;
                    i = MmCreateSpecialImageSection(
                          &v99[23],
                          (int)&ObjectAttributes,
                          (__int64)v77,
                          v37,
                          v99[21],
                          v72[4]) )
              {
                Info = i;
                if ( i < 0 )
                {
                  v99[23] = 0LL;
                  v25 = 2LL;
                  goto LABEL_57;
                }
                v85 = 0LL;
                Info = ObReferenceObjectByHandle((HANDLE)v99[23], 8u, MmSectionObjectType, 0, &v85, 0LL);
                v99[25] = (__int64)v85;
                if ( Info < 0 )
                {
                  v99[25] = 0LL;
                  goto LABEL_168;
                }
                v33 = v65;
                Info = PspGetProcessProtectionRequirementsFromImage((__int64)v85);
                if ( Info < 0 )
                  goto LABEL_168;
                LOBYTE(v34) = HIBYTE(v67);
                if ( HIBYTE(v67) == v33 )
                  break;
                Info = SeQuerySigningPolicy(v99[19], &v99[29], 1LL, v34, &v68, &v66, &v65);
                if ( Info < 0 )
                  goto LABEL_168;
                v37 = v68;
                if ( v68 == v31 )
                {
                  v33 = v65;
                  break;
                }
                if ( (v31 & 0x30) != 0 && (v68 & 0x30) != (v31 & 0x30) )
                  goto LABEL_167;
                if ( !qword_140C1DB20 )
                  goto LABEL_167;
                LOBYTE(v35) = v31;
                LOBYTE(v36) = v68;
                if ( !(unsigned int)qword_140C1DB20(v36, v35) )
                  goto LABEL_167;
                ObCloseHandle((HANDLE)v99[23], 0);
                HalPutDmaAdapter((PADAPTER_OBJECT)v99[25]);
                v99[23] = 0LL;
                v99[25] = 0LL;
                v31 = v37;
                LOBYTE(v67) = v37;
              }
              Info = PspValidateCreateProcessProtection((__int64)v78, (__int64)v99, PreviousMode, v14, v33);
              if ( Info < 0 )
                goto LABEL_168;
              if ( (v14 & 0x40000) != 0
                || (v33 & 7) != 1
                && (LOBYTE(v39) = PreviousMode,
                    LOBYTE(v38) = *(_BYTE *)(v40 + 2170),
                    PspCheckForInvalidAccessByProtection(v39, v38, v33)) )
              {
                LOBYTE(v99[1]) |= 8u;
              }
              PspGetProcessParameterOverrides((__int64)v99, (__int64)v80);
              Info = PspCaptureProcessParameters(PreviousMode, v86, (__int64)v99);
              if ( Info < 0 )
              {
                LOBYTE(v99[1]) &= ~4u;
                goto LABEL_168;
              }
              v43 = v102;
              v44 = v66;
              goto LABEL_104;
            }
            if ( Process == v78
              && PreviousMode
              && !v86
              && (v99[1] & 0xC00) == 0
              && (v99[0] & 0x8000000000LL) == 0
              && (v99[0] & 0x2000000000000LL) == 0
              && (v99[1] & 0x10) == 0 )
            {
              LOBYTE(v99[1]) &= ~4u;
              v33 = Process[2170];
              v65 = v33;
              v66 = Process[2169];
              v31 = Process[2168];
              LOBYTE(v67) = v31;
              if ( (v14 & 0x40) != 0 && (v33 & 7) == 0 )
              {
                Info = -1073741790;
                goto LABEL_168;
              }
              Info = PspValidateCreateProcessProtection((__int64)v78, (__int64)v99, PreviousMode, v14, v33);
              if ( Info < 0 )
                goto LABEL_168;
              v43 = 0LL;
LABEL_104:
              LOBYTE(v42) = v33;
              LOBYTE(v41) = PreviousMode;
              Info = PspAllocateProcess(
                       v76,
                       v41,
                       v83,
                       v42,
                       v31,
                       v44,
                       v99[25],
                       v99[19],
                       a7,
                       0,
                       (__int64)v99,
                       v99[18] != 0,
                       (__int64)v80,
                       (__int64)&v81,
                       (__int64)&v70);
              if ( Info < 0 )
                goto LABEL_168;
              v45 = *((_DWORD *)v70 + 629) & 0x4000;
              v83 = v45 != 0 ? 0x800 : 0;
              v46 = (v99[25] != 0 ? 1048587 : 1048603) | 0x100040;
              if ( !v45 )
                v46 = v99[25] != 0 ? 1048587 : 1048603;
              RtlGetExtendedContextLength2(v46, &v73, v45 != 0 ? 0x800 : 0);
              v47 = v73 + 15LL;
              if ( v47 <= v73 )
                v47 = 0xFFFFFFFFFFFFFF0LL;
              v48 = alloca(v47 & 0xFFFFFFFFFFFFFFF0uLL);
              memset(&v64, 0, v73);
              RtlInitializeExtendedContext2((__int64)&v64, v46, v91, v83);
              if ( v99[25] )
              {
                v50 = HIDWORD(v99[28]);
                if ( !*((_QWORD *)v70 + 176) )
                  v50 = *((_QWORD *)v70 + 170);
                PspCreateUserContext((unsigned int)&v64, 1, PspUserThreadStart, v99[6], v50);
              }
              else
              {
                LOBYTE(v49) = 1;
                Info = PspGetContextThreadInternal((_DWORD)v79, (unsigned int)&v64, 0, v49, 1);
                if ( Info < 0 )
                {
                  v51 = (volatile signed __int64 *)v70;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(v51 + 135);
                  KeAbPostRelease((ULONG_PTR)(v51 + 135));
                  KeLeaveCriticalRegionThread((__int64)v79);
                  PspRundownSingleProcess((__int64)v70, 0);
                  goto LABEL_168;
                }
                v85 = (PVOID)297;
              }
              ObfReferenceObjectWithTag(v70, 0x72437350u);
              if ( v43 )
              {
                *(_BYTE *)v43 = 0;
                v52 = v99[8];
                if ( v99[8] < 0x40000uLL )
                  v52 = 0x40000LL;
                v43[3] = v52;
                v43[2] = v99[9];
                v43[1] = LODWORD(v99[7]);
              }
              *(_DWORD *)&v72[4] = 0;
              PspMapThreadCreationFlags(a8, v72);
              if ( (_DWORD)v81 )
              {
                *(_DWORD *)&v72[4] = 2;
                *(_DWORD *)v72 |= 0x10u;
              }
              if ( HIDWORD(v81) )
                a7 |= 0x400u;
              v96[0] = (__int64)v98;
              *(_DWORD *)v72 |= 0x60u;
              Info = PspAllocateThread(
                       (ULONG_PTR)v70,
                       (__int64)&v64,
                       (__int64)v96,
                       0LL,
                       0LL,
                       (__int64)v72,
                       (__int64)&v82,
                       (__int64)v43,
                       (__int64)v101);
              if ( Info < 0 )
              {
                v54 = (volatile signed __int64 *)v70;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v54 + 135);
                KeAbPostRelease((ULONG_PTR)(v54 + 135));
                KeLeaveCriticalRegionThread((__int64)v79);
                PspRundownSingleProcess((__int64)v70, 0);
                v26 = v64;
                goto LABEL_166;
              }
              v55 = (__int64)v78;
              LOBYTE(v53) = PreviousMode;
              v56 = PsTestProtectedProcessIncompatibility(v53, (__int64)v78, (__int64)v70);
              v57 = v75;
              if ( v56 )
              {
                if ( (v75 & 0x2000000) != 0 )
                {
                  v57 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v33 >> 4) + 4] & 0x1FFFFF | v75 & 0xFDFFFFFF;
                  if ( !v99[16] || v55 == v99[16] )
                    v57 |= 1u;
                }
                v58 = v74;
                if ( (v74 & 0x2000000) != 0 )
                {
                  v58 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v33 >> 4) + 8] & 0x1FFFFF | v74 & 0xFDFFFFFF;
                  if ( !v99[16] || v55 == v99[16] )
                    v58 |= 1u;
                }
              }
              else
              {
                v58 = v74;
              }
              if ( v99[26] )
                v59 = v99[26] + 112;
              else
                v59 = 0LL;
              inserted = PspInsertProcess(
                           (char *)v70,
                           (struct _KPROCESS *)v76,
                           v57,
                           a7,
                           (HANDLE)v99[17],
                           v72[4],
                           v59,
                           (__int64)v100);
              Info = PspInsertThread(
                       v82,
                       (ULONG_PTR)v70,
                       v58,
                       (__int64)v43,
                       (__int64)v99,
                       0LL,
                       (__int64)v101,
                       v87,
                       v99[2]);
              KeLeaveCriticalRegionThread((__int64)v79);
              if ( inserted < 0 )
              {
                PspRundownSingleProcess((__int64)v70, 0);
                Info = inserted;
                v26 = v64;
LABEL_165:
                HalPutDmaAdapter(v82);
LABEL_166:
                ObfDereferenceObjectWithTag(v70, 0x72437350u);
                goto LABEL_169;
              }
              if ( Info < 0 )
              {
                v26 = v64;
LABEL_163:
                if ( Info >= 0 )
                  goto LABEL_165;
LABEL_164:
                PsTerminateProcess(v70, (unsigned int)Info);
                goto LABEL_165;
              }
              ProcessServerSilo = PsGetProcessServerSilo((__int64)v70);
              if ( ProcessServerSilo != v99[58] )
              {
                Info = -1073741267;
                v26 = v64;
                goto LABEL_164;
              }
              Info = PspCreateObjectHandle(v70, v100, PsProcessType);
              if ( Info < 0 )
              {
                v26 = v64;
              }
              else
              {
                v62 = (_OWORD *)v99[4];
                if ( v99[4] )
                {
                  *(_OWORD *)v99[4] = *(_OWORD *)&v99[6];
                  v62[1] = *(_OWORD *)&v99[8];
                  v62[2] = *(_OWORD *)&v99[10];
                  v62[3] = *(_OWORD *)&v99[12];
                }
                *v88 = *(_QWORD *)&v100[392];
                v26 = v64;
                Info = PspUpdateCreateInfo(6LL, v99, v70);
                if ( Info >= 0 )
                  goto LABEL_161;
                if ( (*(_WORD *)&v100[384] & 0x200) != 0 || (v63 = 1, (*(_DWORD *)(v55 + 2172) & 0x1000) != 0) )
                  v63 = 0;
                ObCloseHandle(*(HANDLE *)&v100[392], v63);
              }
              if ( (v101[48] & 0x200) != 0 || (*(_DWORD *)(v55 + 2172) & 0x1000) != 0 )
                v20 = 0;
              ObCloseHandle((HANDLE)v101[49], v20);
LABEL_161:
              SepDeleteAccessState((__int64)v100);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v100[32]);
              goto LABEL_163;
            }
          }
        }
LABEL_167:
        Info = -1073741811;
        goto LABEL_168;
      }
      Info = ObpReferenceObjectByHandleWithTag(v99[15], 0x72437350u, (__int64)&v76, 0LL, 0LL);
      if ( Info >= 0 )
      {
        Process = (_BYTE *)v76;
        v99[16] = v76;
        goto LABEL_33;
      }
    }
LABEL_168:
    v26 = v64;
LABEL_169:
    if ( v99[22] )
      SeDeleteCodeIntegrityOriginClaimForFileObject();
    goto LABEL_171;
  }
  return result;
}
