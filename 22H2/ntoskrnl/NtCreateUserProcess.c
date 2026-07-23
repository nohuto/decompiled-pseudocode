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

NTSTATUS __cdecl NtCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  struct _KTHREAD *CurrentThread; // rax
  PS_PROTECTION *Process; // r13
  char PreviousMode; // r15
  ULONG v14; // r12d
  NTSTATUS result; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  ULONG v18; // eax
  NTSTATUS Info; // esi
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
  char Level; // r13
  int i; // eax
  PS_PROTECTION v33; // bl
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // bl
  PS_PROTECTION *v38; // r11
  int v39; // edx
  int v40; // r9d
  __int64 *v41; // r12
  char v42; // r11
  int v43; // ecx
  ULONG v44; // esi
  unsigned __int64 v45; // rax
  void *v46; // rsp
  int v47; // r9d
  __int64 v48; // rax
  char *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rcx
  char *v52; // rbx
  PS_PROTECTION *v53; // r13
  bool v54; // al
  unsigned int v55; // r8d
  unsigned int v56; // esi
  __int64 v57; // rax
  int inserted; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v60; // rax
  KPROCESSOR_MODE v61; // dl
  int Context; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 Context_4; // [rsp+84h] [rbp+4h] BYREF
  char Context_5; // [rsp+85h] [rbp+5h] BYREF
  __int16 Context_6; // [rsp+86h] [rbp+6h] BYREF
  __int16 Context_8; // [rsp+88h] [rbp+8h] BYREF
  char *Context_16; // [rsp+90h] [rbp+10h] BYREF
  char Context_24; // [rsp+98h] [rbp+18h]
  int Context_28; // [rsp+9Ch] [rbp+1Ch] BYREF
  int Context_32; // [rsp+A0h] [rbp+20h]
  ULONG Context_36; // [rsp+A4h] [rbp+24h] BYREF
  ACCESS_MASK Context_40; // [rsp+A8h] [rbp+28h]
  ACCESS_MASK Context_44; // [rsp+ACh] [rbp+2Ch]
  struct _KPROCESS *Context_48; // [rsp+B0h] [rbp+30h] BYREF
  PADAPTER_OBJECT Context_56; // [rsp+B8h] [rbp+38h] BYREF
  PS_PROTECTION *Context_64; // [rsp+C0h] [rbp+40h]
  struct _KTHREAD *Context_72; // [rsp+C8h] [rbp+48h]
  PVOID Context_80; // [rsp+D0h] [rbp+50h] BYREF
  __int64 Context_88; // [rsp+D8h] [rbp+58h] BYREF
  PADAPTER_OBJECT Context_96; // [rsp+E0h] [rbp+60h] BYREF
  POBJECT_ATTRIBUTES Context_104; // [rsp+E8h] [rbp+68h]
  PVOID Context_112; // [rsp+F0h] [rbp+70h] BYREF
  __int64 Context_120; // [rsp+F8h] [rbp+78h] BYREF
  PVOID Context_128; // [rsp+100h] [rbp+80h]
  PHANDLE Context_136; // [rsp+108h] [rbp+88h]
  PHANDLE Context_144; // [rsp+110h] [rbp+90h]
  __int64 Context_152; // [rsp+118h] [rbp+98h] BYREF
  OBJECT_ATTRIBUTES Context_160; // [rsp+120h] [rbp+A0h] BYREF
  PCONTEXT_EX Context_208[3]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 Context_232; // [rsp+168h] [rbp+E8h] BYREF
  struct _IO_STATUS_BLOCK Context_248; // [rsp+178h] [rbp+F8h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT Context_264; // [rsp+188h] [rbp+108h] BYREF
  __int64 Context_296; // [rsp+1A8h] [rbp+128h]
  __int128 Context_304; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 Context_320; // [rsp+1C0h] [rbp+140h]
  _BYTE Context_336[80]; // [rsp+1D0h] [rbp+150h] BYREF
  _OWORD Context_416[33]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE Context_944[400]; // [rsp+430h] [rbp+3B0h] BYREF
  __int64 v99[50]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v100[2]; // [rsp+750h] [rbp+6D0h] BYREF
  __int128 v101; // [rsp+760h] [rbp+6E0h]

  Context_40 = ThreadDesiredAccess;
  Context_44 = ProcessDesiredAccess;
  Context_136 = ThreadHandle;
  Context_144 = ProcessHandle;
  Context_104 = ProcessObjectAttributes;
  Context_208[1] = (PCONTEXT_EX)ThreadObjectAttributes;
  Context_128 = ProcessParameters;
  Context_88 = 0LL;
  Context_28 = 0;
  Context_248 = 0LL;
  Context_16 = 0LL;
  Context_96 = 0LL;
  memset(&Context_160, 0, sizeof(Context_160));
  Context_48 = 0LL;
  memset(Context_944, 0, sizeof(Context_944));
  Context_232 = 0LL;
  Context_6 = 0;
  Context_5 = 0;
  Context_8 = 0;
  *(_OWORD *)v100 = 0LL;
  v101 = 0LL;
  memset(v99, 0, sizeof(v99));
  Context_208[0] = 0LL;
  Context_36 = 0;
  Context_152 = 0LL;
  Context_304 = 0LL;
  Context_320 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Context_72 = CurrentThread;
  Process = (PS_PROTECTION *)CurrentThread->ApcState.Process;
  Context_64 = Process;
  Context_208[2] = (PCONTEXT_EX)Process;
  PreviousMode = CurrentThread->PreviousMode;
  Context_24 = PreviousMode;
  Context_80 = 0LL;
  Context_56 = 0LL;
  LOBYTE(CurrentThread) = 0;
  Context = (int)CurrentThread;
  memset(&Context_264, 0, sizeof(Context_264));
  Context_296 = 0LL;
  memset(Context_336, 0, 0x48uLL);
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFFFB6838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  Context_944[388] = PreviousMode;
  if ( PreviousMode )
  {
    v16 = (__int64)Context_144;
    if ( (unsigned __int64)Context_144 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v17 = (__int64)Context_136;
    if ( (unsigned __int64)Context_136 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v18 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v18 = ProcessObjectAttributes->Attributes & 0x11FF2;
    *(_DWORD *)&Context_944[384] = v18;
  }
  memset(Context_416, 0, 0x208uLL);
  if ( !AttributeList
    || (result = PspBuildCreateProcessContext(&AttributeList->TotalLength, PreviousMode, 0, (__int64)Context_416),
        result >= 0) )
  {
    if ( (ProcessFlags & 0x40) != 0 && (DWORD1(Context_416[0]) & 0x20000) != 0 && !LOBYTE(Context_416[24]) )
    {
      v14 = ProcessFlags & 0xFFFFFFBF;
      ProcessFlags &= ~0x40u;
      DWORD1(Context_416[0]) &= ~0x20000u;
    }
    if ( (v14 & 4) == 0 && (WORD2(Context_416[0]) & 0x800) != 0
      || (DWORD1(Context_416[0]) & 0x20000) != 0 && (v14 & 0x40) == 0 )
    {
      goto LABEL_167;
    }
    Info = PspCaptureCreateInfo(PreviousMode, (unsigned __int64)CreateInfo, (__int64)Context_416);
    if ( Info >= 0 )
    {
      v20 = 1;
      if ( (BYTE4(Context_416[0]) & 1) == 0 )
      {
        Context_48 = (struct _KPROCESS *)Process;
LABEL_33:
        *(_QWORD *)&Context_416[29] = PspEstimateNewProcessServerSilo(
                                        Process,
                                        *(_QWORD *)&Context_416[25],
                                        HIDWORD(Context_416[25]));
        if ( (BYTE9(Context_416[0]) & 0xC) != 4
          || Process == Context_64 && (*(_DWORD *)&Context_64[2172].Level & 0x1000) == 0 )
        {
          LOBYTE(v21) = PreviousMode;
          Info = PspReferenceTokenForNewProcess(Process, *(_QWORD *)&Context_416[9], v21, (char *)&Context_416[9] + 8);
          if ( Info < 0 )
          {
            *((_QWORD *)&Context_416[9] + 1) = 0LL;
            goto LABEL_168;
          }
          if ( !*(_QWORD *)&Context_416[9]
            || (int)SeQueryServerSiloToken(*((_QWORD *)&Context_416[9] + 1), &Context_152) < 0
            || (unsigned __int8)PspIsSiloInSilo(Context_152) )
          {
            if ( (BYTE4(Context_416[0]) & 0x20) != 0 )
            {
              v23 = (DWORD1(Context_416[0]) & 0x20000) != 0 ? LOBYTE(Context_416[24]) : 0;
              Context_4 = v23;
              if ( (NtGlobalFlag & 0x40000) != 0 )
              {
                Context_232 = *(_OWORD *)((char *)&Context_416[14] + 8);
                ZwSystemDebugControl(SysDbgKdPullRemoteFile, &Context_232, 0x10u, 0LL, 0, 0LL);
              }
              LOBYTE(v22) = v23;
              Info = SeQuerySigningPolicy(
                       *((_QWORD *)&Context_416[9] + 1),
                       (char *)&Context_416[14] + 8,
                       (v14 >> 6) & 1,
                       v22,
                       &Context_6,
                       &Context_5,
                       &Context_4);
              if ( Info < 0 )
                goto LABEL_168;
              Context_160.Length = 48;
              Context_160.RootDirectory = 0LL;
              v24 = 1600;
              if ( PreviousMode != 1 )
                v24 = 576;
              Context_160.Attributes = v24;
              Context_160.ObjectName = (PUNICODE_STRING)((char *)&Context_416[14] + 8);
              *(_OWORD *)&Context_160.SecurityDescriptor = 0LL;
              Info = 0;
              if ( qword_140D2D420 )
                Info = qword_140D2D420(*((_QWORD *)&Context_416[9] + 1));
              if ( Info < 0 )
                goto LABEL_168;
              Info = PspGetMemoryPartitionContext(
                       (_DWORD)Process,
                       v14,
                       Context_416[25],
                       HIDWORD(Context_416[25]),
                       (__int64)&Context_80);
              if ( Info < 0 )
                goto LABEL_168;
              Info = PspCreateUserProcessEcp(&Context_264, *((_QWORD *)&Context_416[9] + 1));
              if ( Info < 0 )
                goto LABEL_168;
              Info = IoCreateFileEx(
                       (PHANDLE)&Context_416[10] + 1,
                       LODWORD(Context_416[10]) | 0x100020,
                       &Context_160,
                       &Context_248,
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
                       &Context_264);
              if ( Info < 0 && LODWORD(Context_416[10]) )
                Info = IoCreateFileEx(
                         (PHANDLE)&Context_416[10] + 1,
                         0x100020u,
                         &Context_160,
                         &Context_248,
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
                         &Context_264);
              if ( Info < 0 )
              {
                *((_QWORD *)&Context_416[10] + 1) = 0LL;
                v25 = 1LL;
LABEL_57:
                PspUpdateCreateInfo(v25, Context_416, 0LL);
                goto LABEL_168;
              }
              Context_112 = 0LL;
              Info = ObReferenceObjectByHandle(
                       *((HANDLE *)&Context_416[10] + 1),
                       0x100020u,
                       (POBJECT_TYPE)IoFileObjectType,
                       0,
                       &Context_112,
                       0LL);
              *(_QWORD *)&Context_416[11] = Context_112;
              if ( Info < 0 )
              {
                *(_QWORD *)&Context_416[11] = 0LL;
                v26 = Context;
LABEL_171:
                if ( Context_80 )
                  ObfDereferenceObjectWithTag(Context_80, 0x624A7350u);
                PspDeleteCreateProcessContext(Context_416);
                if ( Context_264.ExtraCreateParameter )
                  FsRtlFreeExtraCreateParameterList(Context_264.ExtraCreateParameter);
                if ( v26 )
                  HalPutDmaAdapter(Context_56);
                return Info;
              }
              Context_160.ObjectName = 0LL;
              v27 = 1;
              if ( *((_QWORD *)&Context_416[24] + 1) )
                v27 = 5;
              Context_32 = v27;
              if ( *((_QWORD *)&Context_416[26] + 1) )
              {
                v28 = SeDuplicateTokenAndAddOriginClaim(
                        *((_QWORD *)&Context_416[9] + 1),
                        *((_QWORD *)&Context_416[26] + 1),
                        LODWORD(Context_416[27]),
                        &Context_56);
                v29 = (unsigned __int8)Context;
                if ( v28 >= 0 )
                  v29 = 1;
                Context = v29;
                HIBYTE(Context_8) = v29;
              }
              else
              {
                LOBYTE(v29) = Context;
              }
              v30 = Context_56;
              if ( !(_BYTE)v29 )
                v30 = (struct _DMA_ADAPTER *)*((_QWORD *)&Context_416[9] + 1);
              Context_56 = v30;
              Level = Context_6;
              for ( i = MmCreateSpecialImageSection(
                          (__int64 *)&Context_416[11] + 1,
                          (int)&Context_160,
                          (__int64)v30,
                          Context_6,
                          *((__int64 *)&Context_416[10] + 1),
                          v27);
                    ;
                    i = MmCreateSpecialImageSection(
                          (__int64 *)&Context_416[11] + 1,
                          (int)&Context_160,
                          (__int64)Context_56,
                          v37,
                          *((__int64 *)&Context_416[10] + 1),
                          Context_32) )
              {
                Info = i;
                if ( i < 0 )
                {
                  *((_QWORD *)&Context_416[11] + 1) = 0LL;
                  v25 = 2LL;
                  goto LABEL_57;
                }
                Context_120 = 0LL;
                Info = ObReferenceObjectByHandle(
                         *((HANDLE *)&Context_416[11] + 1),
                         8u,
                         MmSectionObjectType,
                         0,
                         (PVOID *)&Context_120,
                         0LL);
                *((_QWORD *)&Context_416[12] + 1) = Context_120;
                if ( Info < 0 )
                {
                  *((_QWORD *)&Context_416[12] + 1) = 0LL;
                  goto LABEL_168;
                }
                v33.Level = Context_4;
                Info = PspGetProcessProtectionRequirementsFromImage(Context_120);
                if ( Info < 0 )
                  goto LABEL_168;
                LOBYTE(v34) = HIBYTE(Context_6);
                if ( HIBYTE(Context_6) == v33.Level )
                  break;
                Info = SeQuerySigningPolicy(
                         *((_QWORD *)&Context_416[9] + 1),
                         (char *)&Context_416[14] + 8,
                         1LL,
                         v34,
                         &Context_8,
                         &Context_5,
                         &Context_4);
                if ( Info < 0 )
                  goto LABEL_168;
                v37 = Context_8;
                if ( (_BYTE)Context_8 == Level )
                {
                  v33.Level = Context_4;
                  break;
                }
                if ( (Level & 0x30) != 0 && (Context_8 & 0x30) != (Level & 0x30) )
                  goto LABEL_167;
                if ( !qword_140C1DB20 )
                  goto LABEL_167;
                LOBYTE(v35) = Level;
                LOBYTE(v36) = Context_8;
                if ( !(unsigned int)qword_140C1DB20(v36, v35) )
                  goto LABEL_167;
                ObCloseHandle(*((HANDLE *)&Context_416[11] + 1), 0);
                HalPutDmaAdapter(*((PADAPTER_OBJECT *)&Context_416[12] + 1));
                *((_QWORD *)&Context_416[11] + 1) = 0LL;
                *((_QWORD *)&Context_416[12] + 1) = 0LL;
                Level = v37;
                LOBYTE(Context_6) = v37;
              }
              Info = PspValidateCreateProcessProtection(Context_64, (__int64)Context_416, PreviousMode, v14, v33);
              if ( Info < 0 )
                goto LABEL_168;
              if ( (v14 & 0x40000) != 0
                || (v33.Level & 7) != 1 && PspCheckForInvalidAccessByProtection(PreviousMode, v38[2170], v33) )
              {
                BYTE8(Context_416[0]) |= 8u;
              }
              PspGetProcessParameterOverrides((__int64)Context_416, (__int64)Context_80);
              Info = PspCaptureProcessParameters(PreviousMode, (__int64)Context_128, (__int64)Context_416);
              if ( Info < 0 )
              {
                BYTE8(Context_416[0]) &= ~4u;
                goto LABEL_168;
              }
              v41 = v100;
              v42 = Context_5;
              goto LABEL_104;
            }
            if ( Process == Context_64
              && PreviousMode
              && !Context_128
              && (BYTE9(Context_416[0]) & 0xC) == 0
              && (SBYTE4(Context_416[0]) & 0x80u) == 0
              && (DWORD1(Context_416[0]) & 0x20000) == 0
              && (BYTE8(Context_416[0]) & 0x10) == 0 )
            {
              BYTE8(Context_416[0]) &= ~4u;
              v33.Level = Process[2170].Level;
              Context_4 = v33.Level;
              Context_5 = Process[2169].Level;
              Level = Process[2168].Level;
              LOBYTE(Context_6) = Level;
              if ( (v14 & 0x40) != 0 && (v33.Level & 7) == 0 )
              {
                Info = -1073741790;
                goto LABEL_168;
              }
              Info = PspValidateCreateProcessProtection(Context_64, (__int64)Context_416, PreviousMode, v14, v33);
              if ( Info < 0 )
                goto LABEL_168;
              v41 = 0LL;
LABEL_104:
              LOBYTE(v40) = v33;
              LOBYTE(v39) = PreviousMode;
              Info = PspAllocateProcess(
                       (_DWORD)Context_48,
                       v39,
                       (_DWORD)Context_104,
                       v40,
                       Level,
                       v42,
                       *((__int64 *)&Context_416[12] + 1),
                       *((__int64 *)&Context_416[9] + 1),
                       ProcessFlags,
                       0,
                       (__int64)Context_416,
                       *(_QWORD *)&Context_416[9] != 0LL,
                       (__int64)Context_80,
                       (__int64)&Context_88,
                       (__int64)&Context_16);
              if ( Info < 0 )
                goto LABEL_168;
              v43 = *((_DWORD *)Context_16 + 629) & 0x4000;
              Context_104 = v43 != 0 ? (POBJECT_ATTRIBUTES)0x800 : 0LL;
              v44 = (*((_QWORD *)&Context_416[12] + 1) != 0LL ? 1048587 : 1048603) | 0x100040;
              if ( !v43 )
                v44 = *((_QWORD *)&Context_416[12] + 1) != 0LL ? 1048587 : 1048603;
              RtlGetExtendedContextLength2(v44, &Context_36, v43 != 0 ? 0x800 : 0);
              v45 = Context_36 + 15LL;
              if ( v45 <= Context_36 )
                v45 = 0xFFFFFFFFFFFFFF0LL;
              v46 = alloca(v45 & 0xFFFFFFFFFFFFFFF0uLL);
              memset(&Context, 0, Context_36);
              RtlInitializeExtendedContext2((PCONTEXT)&Context, v44, Context_208, (ULONG64)Context_104);
              if ( *((_QWORD *)&Context_416[12] + 1) )
              {
                v48 = DWORD1(Context_416[14]);
                if ( !*((_QWORD *)Context_16 + 176) )
                  v48 = *((_QWORD *)Context_16 + 170);
                PspCreateUserContext((unsigned int)&Context, 1, PspUserThreadStart, Context_416[3], v48);
              }
              else
              {
                LOBYTE(v47) = 1;
                Info = PspGetContextThreadInternal((_DWORD)Context_72, (unsigned int)&Context, 0, v47, 1);
                if ( Info < 0 )
                {
                  v49 = Context_16;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Context_16 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)v49 + 135);
                  KeAbPostRelease((ULONG_PTR)(v49 + 1080));
                  KeLeaveCriticalRegionThread((__int64)Context_72);
                  PspRundownSingleProcess((__int64)Context_16, 0);
                  goto LABEL_168;
                }
                Context_120 = 297LL;
              }
              ObfReferenceObjectWithTag(Context_16, 0x72437350u);
              if ( v41 )
              {
                *(_BYTE *)v41 = 0;
                v50 = *(_QWORD *)&Context_416[4];
                if ( *(_QWORD *)&Context_416[4] < 0x40000uLL )
                  v50 = 0x40000LL;
                v41[3] = v50;
                v41[2] = *((_QWORD *)&Context_416[4] + 1);
                v41[1] = DWORD2(Context_416[3]);
              }
              Context_32 = 0;
              PspMapThreadCreationFlags(ThreadFlags, &Context_28);
              if ( (_DWORD)Context_88 )
              {
                Context_32 = 2;
                Context_28 |= 0x10u;
              }
              if ( HIDWORD(Context_88) )
                ProcessFlags |= 0x400u;
              *(_QWORD *)&Context_304 = Context_336;
              Context_28 |= 0x60u;
              Info = PspAllocateThread(
                       (ULONG_PTR)Context_16,
                       (__int64)&Context,
                       (__int64)&Context_304,
                       0LL,
                       0LL,
                       (__int64)&Context_28,
                       (__int64)&Context_96,
                       (__int64)v41,
                       (__int64)v99);
              if ( Info < 0 )
              {
                v52 = Context_16;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Context_16 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)v52 + 135);
                KeAbPostRelease((ULONG_PTR)(v52 + 1080));
                KeLeaveCriticalRegionThread((__int64)Context_72);
                PspRundownSingleProcess((__int64)Context_16, 0);
                v26 = Context;
                goto LABEL_166;
              }
              v53 = Context_64;
              LOBYTE(v51) = PreviousMode;
              v54 = PsTestProtectedProcessIncompatibility(v51, (__int64)Context_64, (__int64)Context_16);
              v55 = Context_44;
              if ( v54 )
              {
                if ( (Context_44 & 0x2000000) != 0 )
                {
                  v55 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v33.Level >> 4) + 4] & 0x1FFFFF | Context_44 & 0xFDFFFFFF;
                  if ( !*(_QWORD *)&Context_416[8] || v53 == *(PS_PROTECTION **)&Context_416[8] )
                    v55 |= 1u;
                }
                v56 = Context_40;
                if ( (Context_40 & 0x2000000) != 0 )
                {
                  v56 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v33.Level >> 4) + 8] & 0x1FFFFF | Context_40 & 0xFDFFFFFF;
                  if ( !*(_QWORD *)&Context_416[8] || v53 == *(PS_PROTECTION **)&Context_416[8] )
                    v56 |= 1u;
                }
              }
              else
              {
                v56 = Context_40;
              }
              if ( *(_QWORD *)&Context_416[13] )
                v57 = *(_QWORD *)&Context_416[13] + 112LL;
              else
                v57 = 0LL;
              inserted = PspInsertProcess(
                           Context_16,
                           Context_48,
                           v55,
                           ProcessFlags,
                           *((HANDLE *)&Context_416[8] + 1),
                           Context_32,
                           v57,
                           (__int64)Context_944);
              Info = PspInsertThread(
                       Context_96,
                       (ULONG_PTR)Context_16,
                       v56,
                       (__int64)v41,
                       (__int64)Context_416,
                       0LL,
                       (__int64)v99,
                       (__int64)Context_136,
                       *(__int64 *)&Context_416[1]);
              KeLeaveCriticalRegionThread((__int64)Context_72);
              if ( inserted < 0 )
              {
                PspRundownSingleProcess((__int64)Context_16, 0);
                Info = inserted;
                v26 = Context;
LABEL_165:
                HalPutDmaAdapter(Context_96);
LABEL_166:
                ObfDereferenceObjectWithTag(Context_16, 0x72437350u);
                goto LABEL_169;
              }
              if ( Info < 0 )
              {
                v26 = Context;
LABEL_163:
                if ( Info >= 0 )
                  goto LABEL_165;
LABEL_164:
                PsTerminateProcess(Context_16, (unsigned int)Info);
                goto LABEL_165;
              }
              ProcessServerSilo = PsGetProcessServerSilo((__int64)Context_16);
              if ( ProcessServerSilo != *(_QWORD *)&Context_416[29] )
              {
                Info = -1073741267;
                v26 = Context;
                goto LABEL_164;
              }
              Info = PspCreateObjectHandle(Context_16, Context_944, PsProcessType);
              if ( Info < 0 )
              {
                v26 = Context;
              }
              else
              {
                v60 = *(_OWORD **)&Context_416[2];
                if ( *(_QWORD *)&Context_416[2] )
                {
                  **(_OWORD **)&Context_416[2] = Context_416[3];
                  v60[1] = Context_416[4];
                  v60[2] = Context_416[5];
                  v60[3] = Context_416[6];
                }
                *Context_144 = *(HANDLE *)&Context_944[392];
                v26 = Context;
                Info = PspUpdateCreateInfo(6LL, Context_416, Context_16);
                if ( Info >= 0 )
                  goto LABEL_161;
                if ( (*(_WORD *)&Context_944[384] & 0x200) != 0
                  || (v61 = 1, (*(_DWORD *)&v53[2172].Level & 0x1000) != 0) )
                {
                  v61 = 0;
                }
                ObCloseHandle(*(HANDLE *)&Context_944[392], v61);
              }
              if ( (v99[48] & 0x200) != 0 || (*(_DWORD *)&v53[2172].Level & 0x1000) != 0 )
                v20 = 0;
              ObCloseHandle((HANDLE)v99[49], v20);
LABEL_161:
              SepDeleteAccessState((__int64)Context_944);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&Context_944[32]);
              goto LABEL_163;
            }
          }
        }
LABEL_167:
        Info = -1073741811;
        goto LABEL_168;
      }
      Info = ObpReferenceObjectByHandleWithTag(
               *((ULONG_PTR *)&Context_416[7] + 1),
               0x72437350u,
               (__int64)&Context_48,
               0LL,
               0LL);
      if ( Info >= 0 )
      {
        Process = (PS_PROTECTION *)Context_48;
        *(_QWORD *)&Context_416[8] = Context_48;
        goto LABEL_33;
      }
    }
LABEL_168:
    v26 = Context;
LABEL_169:
    if ( *(_QWORD *)&Context_416[11] )
      SeDeleteCodeIntegrityOriginClaimForFileObject();
    goto LABEL_171;
  }
  return result;
}
