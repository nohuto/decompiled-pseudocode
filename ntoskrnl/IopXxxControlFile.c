/*
 * XREFs of IopXxxControlFile @ 0x1407C1720
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x14071E438 (PfpPrefetchEntireDirectory.c)
 *     PfpVolumePrefetchMetadata @ 0x1407667FC (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140766EA8 (PfpPrefetchDirectoryStream.c)
 *     NtFsControlFile @ 0x1407696A0 (NtFsControlFile.c)
 *     PfSnPrefetchFileMetadata @ 0x140789C64 (PfSnPrefetchFileMetadata.c)
 *     NtDeviceIoControlFile @ 0x1407C16B0 (NtDeviceIoControlFile.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoThreadToProcess @ 0x140248470 (IoThreadToProcess.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x140267920 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     IopSetFileObjectExtensionFlag @ 0x140294D78 (IopSetFileObjectExtensionFlag.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1402EEDD4 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1402F25B0 (IopDecrementCompletionContextUsageCount.c)
 *     MmIsDriverVerifying @ 0x140303C10 (MmIsDriverVerifying.c)
 *     IoGetAttachedDevice @ 0x14030EE00 (IoGetAttachedDevice.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     IoSetIoCompletionEx2 @ 0x140341170 (IoSetIoCompletionEx2.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopIsStandardFsctlIoControlCode @ 0x14055366C (IopIsStandardFsctlIoControlCode.c)
 *     MmUpdateMdlTracker @ 0x14061AE74 (MmUpdateMdlTracker.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406B5654 (IopWaitAndAcquireFileObjectLock.c)
 *     RtlIsSandboxedToken @ 0x140741410 (RtlIsSandboxedToken.c)
 *     AstAddBloomFilter @ 0x14075A680 (AstAddBloomFilter.c)
 *     AstTestBloomFilter @ 0x14075A710 (AstTestBloomFilter.c)
 *     PsIsProcessAppContainer @ 0x140781158 (PsIsProcessAppContainer.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExRaiseAccessViolation @ 0x1408713F0 (ExRaiseAccessViolation.c)
 *     IopCopyOffloadCapable @ 0x140873058 (IopCopyOffloadCapable.c)
 *     IopAllocateIrpCleanup @ 0x1409411D4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140941A08 (IopExceptionCleanupEx.c)
 *     IopValidateJunctionTarget @ 0x140943674 (IopValidateJunctionTarget.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409E897C (EtwpTimLogMitigationForProcess.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140AC8204 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140AC82DC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopXxxControlFile(
        HANDLE Handle,
        IRP *a2,
        LARGE_INTEGER a3,
        __int64 a4,
        struct _IO_STATUS_BLOCK *a5,
        unsigned int a6,
        char *a7,
        unsigned int a8,
        volatile void *Address,
        int a10,
        char a11)
{
  char *v12; // r8
  PVOID v13; // r9
  LOCK_OPERATION v14; // r13d
  int v15; // edi
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v17; // rcx
  ULONG v18; // eax
  int v19; // ebx
  struct _FILE_OBJECT *v20; // rsi
  _DWORD *v21; // rax
  unsigned int v22; // edi
  _KPROCESS *Process; // rcx
  __int16 v24; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  unsigned int v26; // ebx
  PDEVICE_OBJECT AttachedDevice; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(struct _FILE_OBJECT *, unsigned __int64, void *, _QWORD, PVOID, unsigned int, unsigned int, __int128 *, PDEVICE_OBJECT); // r14
  void *v33; // rdi
  char v34; // bl
  IRP *v35; // rax
  __int64 v36; // r9
  IRP *v37; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v39; // r8
  ULONG v40; // ecx
  ULONG v41; // edx
  int v42; // eax
  __int64 v43; // rcx
  struct _IRP *v44; // rax
  struct _MDL *Mdl; // rdi
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  char *v49; // rcx
  int v50; // eax
  char v51; // di
  struct _KTHREAD *CurrentThread; // rax
  volatile __int32 *v53; // rbx
  __int64 v54; // rax
  unsigned int v55; // ebx
  __int64 v56; // rbx
  struct _IO_STATUS_BLOCK *v57; // rcx
  int v58; // r9d
  HANDLE v59; // r14
  PVOID v60; // r14
  ULONG v61; // eax
  __int64 v62; // rcx
  struct _IRP *Pool2; // rax
  __int64 v64; // rcx
  int v65; // ecx
  __int64 v66; // rdx
  __int64 v67; // rsi
  char v68; // di
  char v69; // al
  char v70; // di
  __int64 *v71; // r8
  bool IsProcessAppContainer; // al
  struct _KPROCESS *v73; // rax
  int v74; // eax
  struct _IRP *MasterIrp; // rax
  int Object; // [rsp+20h] [rbp-1C8h]
  int HandleInformation; // [rsp+28h] [rbp-1C0h]
  char v78; // [rsp+50h] [rbp-198h]
  bool IsSandboxedToken; // [rsp+51h] [rbp-197h]
  unsigned int Size; // [rsp+54h] [rbp-194h]
  ULONG Size_4; // [rsp+58h] [rbp-190h]
  char v82; // [rsp+5Ch] [rbp-18Ch]
  unsigned int v83; // [rsp+60h] [rbp-188h] BYREF
  char v84; // [rsp+68h] [rbp-180h] BYREF
  char v85; // [rsp+69h] [rbp-17Fh] BYREF
  char v86; // [rsp+6Ah] [rbp-17Eh]
  SIZE_T Length; // [rsp+70h] [rbp-178h]
  PVOID v88; // [rsp+78h] [rbp-170h] BYREF
  int v89; // [rsp+80h] [rbp-168h]
  bool v90; // [rsp+84h] [rbp-164h]
  PVOID v91; // [rsp+88h] [rbp-160h]
  void *Src; // [rsp+90h] [rbp-158h]
  int v93; // [rsp+98h] [rbp-150h]
  unsigned int v94; // [rsp+9Ch] [rbp-14Ch]
  PVOID VirtualAddress; // [rsp+A0h] [rbp-148h]
  __int128 v96; // [rsp+A8h] [rbp-140h] BYREF
  struct _IO_STATUS_BLOCK *v97; // [rsp+B8h] [rbp-130h]
  PVOID P; // [rsp+C0h] [rbp-128h] BYREF
  PDEVICE_OBJECT v99; // [rsp+C8h] [rbp-120h]
  HANDLE Handlea; // [rsp+D0h] [rbp-118h]
  PIRP Irp; // [rsp+D8h] [rbp-110h]
  unsigned int v102; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v103; // [rsp+E8h] [rbp-100h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v104; // [rsp+F0h] [rbp-F8h] BYREF
  PVOID v105; // [rsp+F8h] [rbp-F0h] BYREF
  __int64 v106; // [rsp+100h] [rbp-E8h] BYREF
  PETHREAD Thread; // [rsp+108h] [rbp-E0h]
  __int64 v108; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v109; // [rsp+118h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp-C8h] BYREF
  struct _KTHREAD *v111; // [rsp+140h] [rbp-A8h]
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+150h] [rbp-98h] BYREF
  __int64 *v113; // [rsp+170h] [rbp-78h]
  __int64 v114; // [rsp+178h] [rbp-70h]
  __int64 *v115; // [rsp+180h] [rbp-68h]
  __int64 v116; // [rsp+188h] [rbp-60h]
  unsigned int *v117; // [rsp+190h] [rbp-58h]
  __int64 v118; // [rsp+198h] [rbp-50h]

  Handlea = a2;
  v86 = a11;
  Irp = a2;
  v97 = a5;
  v12 = a7;
  Src = a7;
  v83 = a8;
  v13 = (PVOID)Address;
  VirtualAddress = (PVOID)Address;
  LODWORD(Length) = a10;
  v14 = IoReadAccess;
  v91 = 0LL;
  v104 = 0LL;
  v96 = 0LL;
  v15 = a6 & 3;
  v89 = v15;
  v94 = v15;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  if ( IoFsctlProcessMitigationEnabled )
  {
    if ( !PreviousMode )
      goto LABEL_152;
    if ( !a11 && !IopIsStandardFsctlIoControlCode(a6) )
    {
      v67 = *(_QWORD *)(v66 + 184);
      v68 = *(_DWORD *)(v67 + 2928);
      v69 = v68 & 4;
      v70 = v68 & 2;
      if ( v70 || v69 )
      {
        if ( (*(_DWORD *)(v67 + 2928) & 4) != 0 )
        {
          v71 = MITIGATION_AUDIT_PROHIBIT_FSCTL_SYSTEM_CALLS;
          if ( v70 )
            v71 = MITIGATION_ENFORCE_PROHIBIT_FSCTL_SYSTEM_CALLS;
          EtwpTimLogMitigationForProcess(3LL, (unsigned int)(v70 != 0) + 1, v71, v67);
          _InterlockedAnd((volatile signed __int32 *)(v67 + 2928), 0xFFFFFFFB);
          v13 = VirtualAddress;
          v12 = (char *)Src;
        }
        if ( v70 )
          return 3221225506LL;
      }
      v15 = v89;
    }
  }
  if ( !PreviousMode )
  {
LABEL_152:
    Size = v83;
    Size_4 = Length;
    goto LABEL_19;
  }
  v17 = (__int64)v97;
  if ( (unsigned __int64)v97 >= 0x7FFFFFFF0000LL )
    v17 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v17 = *(_DWORD *)v17;
  if ( v15 )
  {
    v18 = Length;
LABEL_7:
    Size_4 = v18;
    goto LABEL_8;
  }
  if ( !v13 )
  {
    v18 = 0;
    LODWORD(Length) = 0;
    goto LABEL_7;
  }
  Size_4 = Length;
  ProbeForWrite(v13, (unsigned int)Length, 1u);
  v12 = (char *)Src;
LABEL_8:
  if ( v15 == 3 )
  {
    Size = v83;
  }
  else if ( v12 )
  {
    Size = v83;
    if ( v83 && ((unsigned __int64)&v12[v83] > 0x7FFFFFFF0000LL || &v12[v83] < v12) )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  else
  {
    Size = 0;
    v83 = 0;
  }
LABEL_19:
  v88 = 0LL;
  v19 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &v88, &v104);
  v20 = (struct _FILE_OBJECT *)v88;
  if ( v19 >= 0 && (v21 = (_DWORD *)*((_QWORD *)v88 + 26)) != 0LL && (*v21 & 4) != 0 )
  {
    IsProcessAppContainer = PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process);
    v20 = (struct _FILE_OBJECT *)v88;
    if ( IsProcessAppContainer )
    {
      ObfDereferenceObject(v88);
      v19 = -1073739504;
    }
    v22 = v83;
    Size = v83;
    Size_4 = Length;
  }
  else
  {
    v22 = Size;
  }
  if ( v19 < 0 )
    return (unsigned int)v19;
  if ( v20->CompletionContext && (a3.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v20);
    return 3221225485LL;
  }
  if ( PreviousMode
    && (unsigned __int16)a6 >> 14
    && (((unsigned __int16)a6 >> 14) & v104.GrantedAccess) != (unsigned __int16)a6 >> 14 )
  {
    ObfDereferenceObject(v20);
    return 3221225506LL;
  }
  if ( a6 == 606820 || a6 == 623208 )
  {
    v19 = IopCopyOffloadCapable(v20, a6);
    if ( v19 < 0 )
      goto LABEL_192;
  }
  else if ( a6 == 590892 )
  {
    v19 = IopSetFileObjectExtensionFlag((__int64)v20, 16, 1);
    if ( v19 < 0 )
    {
      ObfDereferenceObject(v20);
      return (unsigned int)v19;
    }
  }
  if ( Handlea )
  {
    v105 = 0LL;
    v19 = ObReferenceObjectByHandle(Handlea, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v105, 0LL);
    v91 = v105;
    if ( v19 >= 0 )
    {
      KeResetEvent((PRKEVENT)v105);
      goto LABEL_30;
    }
LABEL_192:
    ObfDereferenceObject(v20);
    return (unsigned int)v19;
  }
LABEL_30:
  P = 0LL;
  IsSandboxedToken = 0;
  v82 = 0;
  if ( PreviousMode && (a6 == 589988 && v22 >= 4 || a6 == 590860 && v22 >= 0x24) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v73 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v73, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, PreviousMode);
    v90 = IsSandboxedToken;
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v93 = 0;
      if ( a6 == 590860 )
        v74 = *((_DWORD *)Src + 8);
      else
        v74 = *(_DWORD *)Src;
      v93 = v74;
      if ( v74 == -1610612733 )
      {
        v82 = 1;
        v19 = IopValidateJunctionTarget(a6, Src, Size, Size_4, &P, &v83);
        Size = v83;
      }
      if ( v19 < 0 )
      {
        if ( v91 )
          ObfDereferenceObject(v91);
        goto LABEL_192;
      }
    }
  }
  if ( (v20->Flags & 2) != 0 )
  {
    v51 = (v20->Flags & 4) != 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v53 = (volatile __int32 *)v88;
    v54 = KeAbPreAcquire((__int64)v88 + 128, 0LL);
    v84 = 0;
    if ( _InterlockedExchange(v53 + 29, 1) )
    {
      v20 = (struct _FILE_OBJECT *)v88;
      v55 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)v88, PreviousMode, v51, v54, &v84);
    }
    else
    {
      if ( v54 )
        *(_BYTE *)(v54 + 18) = 1;
      v20 = (struct _FILE_OBJECT *)v88;
      ObfReferenceObject(v88);
      v55 = 0;
    }
    if ( v84 )
    {
      if ( v91 )
        ObfDereferenceObject(v91);
      if ( P )
        ExFreePoolWithTag(P, 0);
      ObfDereferenceObject(v20);
      return v55;
    }
    v78 = 1;
    Size = v83;
    v26 = Length;
    Size_4 = Length;
  }
  else
  {
    v78 = 0;
    if ( PreviousMode )
    {
      v111 = KeGetCurrentThread();
      Process = v111->ApcState.Process;
      if ( Process[1].Affinity.StaticBitmap[30] )
      {
        v24 = WORD2(Process[2].Affinity.StaticBitmap[20]);
        if ( v24 == 332 || v24 == 452 )
        {
          Status = (struct _IO_STATUS_BLOCK *)(unsigned int)v97->Status;
          Status->Status = Status->Status;
          v97 = Status;
          a3.QuadPart |= 1uLL;
        }
      }
      v20 = (struct _FILE_OBJECT *)v88;
      Size = v83;
      v26 = Length;
      Size_4 = Length;
    }
    else
    {
      v26 = Size_4;
    }
  }
  if ( (v20->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v20->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v20);
  v30 = (__int64)AttachedDevice;
  v99 = AttachedDevice;
  if ( a11 )
  {
    if ( AstIsActive )
    {
      if ( dword_140C038B8 )
      {
        if ( (BYTE2(AttachedDevice[-1].DeviceObjectExtension) & 2) != 0
          && !AstTestBloomFilter(v29, (__int64)AttachedDevice, a6) )
        {
          AstAddBloomFilter(v64, v30, a6);
          if ( (unsigned int)dword_140C038B8 > 5 )
          {
            if ( tlgKeywordOn((__int64)&dword_140C038B8, 0x200000000000LL) )
            {
              v108 = 0x80000000LL;
              v113 = &v108;
              v114 = 8LL;
              v109 = v30;
              v115 = &v109;
              v116 = 8LL;
              v102 = a6;
              v117 = &v102;
              v118 = 4LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C038B8,
                (unsigned __int8 *)byte_14002C375,
                0LL,
                0LL,
                5u,
                &v112);
            }
          }
        }
      }
    }
    if ( !IsSandboxedToken )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(v30 + 8) + 80LL);
      if ( v31 )
      {
        v32 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, unsigned __int64, void *, _QWORD, PVOID, unsigned int, unsigned int, __int128 *, PDEVICE_OBJECT))(v31 + 80);
        if ( v32 )
        {
          if ( PreviousMode && VirtualAddress )
          {
            if ( v89 == 1 )
            {
              if ( v26 )
              {
                v49 = (char *)VirtualAddress + v26;
                if ( (unsigned __int64)v49 > 0x7FFFFFFF0000LL || v49 < VirtualAddress )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
            }
            else if ( v89 == 2 && v26 )
            {
              v47 = (unsigned __int64)VirtualAddress;
              v48 = (unsigned __int64)VirtualAddress + v26 - 1;
              if ( (unsigned __int64)VirtualAddress > v48 || v48 >= 0x7FFFFFFF0000LL )
                ExRaiseAccessViolation();
              v28 = (v48 & 0xFFFFFFFFFFFFF000uLL) + 4096;
              do
              {
                *(_BYTE *)v47 = *(_BYTE *)v47;
                v47 = (v47 & 0xFFFFFFFFFFFFF000uLL) + 4096;
              }
              while ( v47 != v28 );
              v20 = (struct _FILE_OBJECT *)v88;
              Size = v83;
              v26 = Length;
              Size_4 = Length;
            }
          }
          if ( a6 == 589856 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
            v20 = (struct _FILE_OBJECT *)v88;
            Size = v83;
            v26 = Length;
            Size_4 = Length;
          }
          if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(v30 + 8)) )
            v33 = (void *)VfFastIoSnapState();
          else
            v33 = 0LL;
          LOBYTE(v28) = 1;
          v34 = v32(v20, v28, Src, Size, VirtualAddress, v26, a6, &v96, v99);
          if ( v33 )
            VfFastIoCheckState(v33);
          if ( v34 )
          {
            v56 = 0LL;
            v103 = 0LL;
            v106 = 0LL;
            v85 = 0;
            if ( (a3.LowPart & 1) != 0 )
            {
              v57 = v97;
              HIDWORD(v97->Pointer) = DWORD2(v96);
              v57->Status = v96;
            }
            else
            {
              *(_OWORD *)&v97->Status = v96;
            }
            v58 = v96;
            v59 = Handlea;
            if ( v20->CompletionContext
              && ((v20->Flags & 0x2000000) == 0 || (v96 & 0xC0000000) == 0x80000000)
              && (v96 & 0xC0000000) != 0xC0000000 )
            {
              IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v20, &v85, &v103, &v106);
              v58 = v96;
              v56 = v103;
            }
            if ( v59 )
            {
              if ( (v20->Flags & 0x8000000) == 0 || v56 && (v58 & 0xC0000000) == 0x80000000 )
              {
                v60 = v91;
                KeSetEvent((PRKEVENT)v91, 0, 0);
              }
              else
              {
                v60 = v91;
              }
              ObfDereferenceObject(v60);
              v58 = v96;
            }
            if ( v78 )
            {
              IopReleaseFileObjectLock((volatile __int32 *)&v20->Type);
              v58 = v96;
            }
            if ( v56 && a4 )
            {
              if ( (int)IoSetIoCompletionEx2(v56, v106, a4, v58, *((__int64 *)&v96 + 1), 1u, 0LL) < 0 )
              {
                v65 = -1073741670;
                LODWORD(v96) = -1073741670;
              }
              else
              {
                v65 = v96;
              }
              if ( (v65 & 0xC0000000) == 0x80000000 )
                LODWORD(v96) = 259;
            }
            if ( v85 )
              IopDecrementCompletionContextUsageCount((ULONG_PTR)v20);
            ObfDereferenceObject(v20);
            return (unsigned int)v96;
          }
          v30 = (__int64)v99;
        }
      }
    }
  }
  Handlea = &v20->Flags;
  if ( (v20->Flags & 0x4000000) == 0 )
    KeResetEvent(&v20->Event);
  v35 = (IRP *)IopAllocateIrpExReturn(v30, *(unsigned __int8 *)(v30 + 76), (unsigned __int8)v78 ^ 1u);
  v37 = v35;
  Irp = v35;
  if ( v35 )
  {
    v35->Tail.Overlay.OriginalFileObject = v20;
    v35->Tail.Overlay.Thread = Thread;
    v35->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v35->RequestorMode = PreviousMode;
    v35->PendingReturned = 0;
    v35->Cancel = 0;
    v35->CancelRoutine = 0LL;
    v35->UserEvent = (PKEVENT)v91;
    v35->UserIosb = v97;
    v35->Overlay.AllocationSize = a3;
    v35->Overlay.AsynchronousParameters.UserApcContext = (PVOID)a4;
    CurrentStackLocation = v35->Tail.Overlay.CurrentStackLocation;
    v39 = v86;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = (v86 != 0) + 13;
    CurrentStackLocation[-1].FileObject = v20;
    v40 = Size_4;
    CurrentStackLocation[-1].Parameters.Read.Length = Size_4;
    v41 = Size;
    CurrentStackLocation[-1].Parameters.Create.Options = Size;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
    v35->MdlAddress = 0LL;
    v35->AssociatedIrp.MasterIrp = 0LL;
    v42 = v89;
    if ( (*(_DWORD *)(v30 + 48) & 0x80000) != 0 )
    {
      v36 = 3LL;
      if ( !IsSandboxedToken )
        v42 = 3;
      v89 = v42;
    }
    if ( v42 == 2 )
      goto LABEL_62;
    if ( !v42 )
    {
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( Size || Size_4 )
      {
        if ( P )
        {
          v37->AssociatedIrp.MasterIrp = (struct _IRP *)P;
        }
        else
        {
          v61 = Size_4;
          if ( Size > Size_4 )
            v61 = Size;
          v62 = 105LL;
          if ( !v39 )
            v62 = 97LL;
          Pool2 = (struct _IRP *)ExAllocatePool2(v62, v61, 1112764233LL);
          v37->AssociatedIrp.MasterIrp = Pool2;
          if ( Src )
            memmove(Pool2, Src, Size);
          v41 = Size;
          v40 = Size_4;
        }
        v37->Flags = 48;
        v37->UserBuffer = VirtualAddress;
        if ( v40 )
          v37->Flags = 112;
      }
      else
      {
        v37->Flags = 0;
        v37->UserBuffer = 0LL;
      }
      if ( v41 < v40 )
        memset((char *)v37->AssociatedIrp.MasterIrp + v41, 0, v40 - v41);
      goto LABEL_73;
    }
    v50 = v42 - 1;
    if ( !v50 )
    {
LABEL_62:
      v37->Flags = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( Size && Src )
      {
        v43 = 107LL;
        if ( !v39 )
          v43 = 99LL;
        v44 = (struct _IRP *)ExAllocatePool2(v43, Size, 1112764233LL);
        v37->AssociatedIrp.MasterIrp = v44;
        memmove(v44, Src, Size);
        v37->Flags = 48;
        v40 = Size_4;
      }
      if ( v40 )
      {
        Mdl = IoAllocateMdl(VirtualAddress, v40, 0, 1u, v37);
        v37->MdlAddress = Mdl;
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        v94 = *(_DWORD *)&CurrentStackLocation[-1].MajorFunction;
        LOBYTE(v14) = v89 != 1;
        MmProbeAndLockPages(Mdl, PreviousMode, v14);
        if ( (MmTrackLockedPages & 1) != 0 )
          MmUpdateMdlTracker((unsigned __int64)Mdl, (__int64)v99->DriverObject->MajorFunction[v94], (__int64)v99);
      }
      v30 = (__int64)v99;
    }
    else if ( v50 == 2 )
    {
      v37->Flags = 0;
      v37->UserBuffer = VirtualAddress;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
    }
LABEL_73:
    CurrentStackLocation[-1].Flags |= v104.GrantedAccess & 1 | (unsigned __int8)(2 * (v104.GrantedAccess & 2));
    if ( !a11 )
      v37->Flags |= 0x800u;
    if ( a6 == 589856 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
      v20 = (struct _FILE_OBJECT *)v88;
    }
    if ( !IsSandboxedToken || v82 )
      goto LABEL_78;
    MasterIrp = v37->AssociatedIrp.MasterIrp;
    if ( a6 == 590860 )
      MasterIrp = (struct _IRP *)((char *)MasterIrp + 32);
    if ( *(_DWORD *)&MasterIrp->Type != -1610612733 )
    {
LABEL_78:
      LOBYTE(v36) = v86 == 0;
      LOBYTE(HandleInformation) = v78;
      LOBYTE(Object) = PreviousMode;
      return IopSynchronousServiceTail(v30, v37, v20, v36, Object, HandleInformation, 2);
    }
    IopExceptionCleanupEx(v20, v37, v91, 0LL, (*(_DWORD *)Handlea & 2) != 0);
    return 3221225485LL;
  }
  IopAllocateIrpCleanup(v20, v91);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 3221225626LL;
}
