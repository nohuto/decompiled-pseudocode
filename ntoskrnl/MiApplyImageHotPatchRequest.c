/*
 * XREFs of MiApplyImageHotPatchRequest @ 0x140A32920
 * Callers:
 *     NtManageHotPatch @ 0x140784740 (NtManageHotPatch.c)
 * Callees:
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiSetVadFlags @ 0x140330D00 (MiSetVadFlags.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x1403349EC (MiDereferenceControlAreaBySection.c)
 *     MiInsertVadEvent @ 0x14034C254 (MiInsertVadEvent.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiReferenceMappedControlArea @ 0x14062642C (MiReferenceMappedControlArea.c)
 *     MiUnmapImageInSystemSpace @ 0x1406A556C (MiUnmapImageInSystemSpace.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     MiApplyImageHotPatch @ 0x140A326C8 (MiApplyImageHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x140A334F8 (MiCaptureHotPatchInfo.c)
 *     MiDeleteHotPatchEntry @ 0x140A33A90 (MiDeleteHotPatchEntry.c)
 *     MiGetAllRegisteredPatches @ 0x140A342EC (MiGetAllRegisteredPatches.c)
 *     MiGetProcessHotPatchContext @ 0x140A345D0 (MiGetProcessHotPatchContext.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A3464C (MiGetVadForHotPatchInProgress.c)
 *     MiInitializeImageHotPatchContext @ 0x140A34BC4 (MiInitializeImageHotPatchContext.c)
 *     MiLogHotPatchOperation @ 0x140A35E3C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A36298 (MiLogHotPatchOperationStatus.c)
 *     MiOpenHotPatchFile @ 0x140A376D4 (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchVad @ 0x140A3827C (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A383A8 (MiProcessPatchImageCfg.c)
 *     MiReleaseHotPatchResources @ 0x140A39030 (MiReleaseHotPatchResources.c)
 *     RtlEnumerateHotPatchPatches @ 0x140A73774 (RtlEnumerateHotPatchPatches.c)
 *     RtlApplyHotPatch @ 0x140AAA600 (RtlApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiApplyImageHotPatchRequest(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // r14
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rbx
  struct _EX_RUNDOWN_REF *Process; // rdx
  int VadForHotPatchInProgress; // esi
  unsigned int v8; // eax
  PVOID v9; // r15
  __int64 v10; // rcx
  __int64 VadEvent; // rax
  __int64 v12; // r8
  _QWORD *Pool; // rax
  _QWORD *v14; // rsi
  PVOID v15; // rax
  signed __int64 v16; // rax
  __int64 v17; // rcx
  __int16 v18; // si
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  signed __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  char v27; // dl
  int v28; // r8d
  UNICODE_STRING *v29; // r15
  char v30; // r13
  int v31; // eax
  PVOID v32; // r15
  bool v33; // zf
  unsigned int v34; // ecx
  int v35; // r9d
  int v36; // ecx
  PVOID v37; // r15
  int v38; // eax
  __int64 v39; // r12
  volatile signed __int32 *v40; // r15
  __int64 v41; // rax
  unsigned int v42; // esi
  UNICODE_STRING v43; // xmm1
  __int64 *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rcx
  struct _EX_RUNDOWN_REF *v47; // r13
  PVOID v48; // r15
  PVOID v49; // r15
  PVOID v50; // rbx
  PVOID v51; // rdi
  UNICODE_STRING *v52; // rcx
  int v54; // [rsp+20h] [rbp-130h]
  char v55; // [rsp+28h] [rbp-128h]
  int v56; // [rsp+30h] [rbp-120h]
  int v57; // [rsp+38h] [rbp-118h]
  int v58; // [rsp+68h] [rbp-E8h]
  int v59; // [rsp+A8h] [rbp-A8h]
  __int64 v60; // [rsp+B0h] [rbp-A0h]
  __int64 v61; // [rsp+B8h] [rbp-98h]
  int v62; // [rsp+C0h] [rbp-90h]
  int v63; // [rsp+D8h] [rbp-78h] BYREF
  PVOID v64; // [rsp+E0h] [rbp-70h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-68h]
  PVOID v66; // [rsp+F0h] [rbp-60h] BYREF
  PVOID P; // [rsp+F8h] [rbp-58h] BYREF
  int v68; // [rsp+100h] [rbp-50h]
  unsigned int v69; // [rsp+104h] [rbp-4Ch]
  __int64 v70; // [rsp+108h] [rbp-48h] BYREF
  PVOID v71; // [rsp+110h] [rbp-40h] BYREF
  __int64 v72; // [rsp+118h] [rbp-38h] BYREF
  PVOID Object; // [rsp+120h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp-28h] BYREF
  __int64 v75; // [rsp+130h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v76; // [rsp+138h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp-10h] BYREF
  __int128 v78; // [rsp+150h] [rbp+0h] BYREF
  signed __int64 v79; // [rsp+160h] [rbp+10h]
  signed __int64 v80; // [rsp+168h] [rbp+18h]
  PEX_RUNDOWN_REF RunRef; // [rsp+170h] [rbp+20h]
  _QWORD v82[10]; // [rsp+180h] [rbp+30h] BYREF
  __int64 v83[18]; // [rsp+1D0h] [rbp+80h] BYREF
  int v84[52]; // [rsp+260h] [rbp+110h] BYREF
  __int64 ProcessHotPatchContext; // [rsp+340h] [rbp+1F0h]
  __int64 v87; // [rsp+340h] [rbp+1F0h]
  char v88; // [rsp+348h] [rbp+1F8h]
  UNICODE_STRING *v89; // [rsp+348h] [rbp+1F8h]
  __int64 v90; // [rsp+350h] [rbp+200h]
  __int16 v91; // [rsp+350h] [rbp+200h]
  int v92; // [rsp+358h] [rbp+208h] BYREF

  v1 = a1;
  memset(v84, 0, 0x90uLL);
  memset(v83, 0, sizeof(v83));
  v78 = 0LL;
  memset(v82, 0, sizeof(v82));
  v64 = 0LL;
  v66 = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v71 = 0LL;
  v70 = 0LL;
  LODWORD(v80) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LOBYTE(v4) = 0;
  MiInitializeImageHotPatchContext(v84, 0LL, 0LL);
  MiInitializeImageHotPatchContext(v83, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v65 = 0LL;
  v63 = 0;
  v92 = 0;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v76 = Process;
  if ( *(_DWORD *)v1 != 1 )
  {
    VadForHotPatchInProgress = -1073741811;
    goto LABEL_110;
  }
  if ( *(_QWORD *)(v1 + 8) != -1LL )
    goto LABEL_4;
  v8 = *(_DWORD *)(v1 + 4);
  v68 = 8;
  if ( v8 >= 8 || (v8 & 3) == 0 )
    goto LABEL_4;
  if ( (v8 & 4) != 0 )
  {
    if ( (v8 & 1) != 0 || *(_QWORD *)(v1 + 24) )
      goto LABEL_4;
    if ( (qword_140C69500 & 2) != 0 )
      goto LABEL_11;
  }
  else if ( !*(_QWORD *)(v1 + 24) )
  {
LABEL_4:
    VadForHotPatchInProgress = -1073741811;
    goto LABEL_110;
  }
  if ( !*(_QWORD *)(v1 + 16) )
    goto LABEL_4;
  RunRef = Process + 139;
  v4 = ExAcquireRundownProtection_0(Process + 139) & 1;
  if ( !v4 )
  {
    VadForHotPatchInProgress = -1073741558;
    goto LABEL_110;
  }
  VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(v1 + 16), 0LL, &v64, &v63);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_110;
  v9 = v64;
  if ( (*(_DWORD *)(v1 + 4) & 4) != 0 && !v63 )
  {
    VadForHotPatchInProgress = 1075380276;
    goto LABEL_35;
  }
  v90 = ***((_QWORD ***)v64 + 9);
  v10 = *(_QWORD *)(v90 + 56);
  LODWORD(v65) = *(_DWORD *)(v10 + 60);
  HIDWORD(v65) = *(_DWORD *)(v10 + 72);
  v88 = *(_BYTE *)(v90 + 15) >> 4;
  VadEvent = MiLocateVadEvent();
  if ( VadEvent )
  {
    v3 = *(_QWORD *)(VadEvent + 8);
  }
  else
  {
    Pool = MiAllocatePool(64, 0x48uLL, 0x6248694Du);
    v14 = Pool;
    if ( !Pool )
    {
LABEL_22:
      VadForHotPatchInProgress = -1073741670;
      goto LABEL_35;
    }
    *((_DWORD *)Pool + 16) = 512;
    v15 = MiAllocatePool(256, 0x48uLL, 0x4E455048u);
    v14[1] = v15;
    if ( !v15 )
    {
      ExFreePoolWithTag(v14, 0);
      goto LABEL_22;
    }
    MiInsertVadEvent((__int64)v64, v14, 1);
    v3 = v14[1];
    v12 = v90;
    v63 = 2;
    *(_QWORD *)(v3 + 32) = v65;
  }
  *(_DWORD *)(v3 + 68) |= 1u;
  v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), -1LL, -1LL);
  v17 = *(_QWORD *)(v12 + 56);
  v79 = v16;
  v18 = *(_WORD *)(v17 + 48);
  v91 = v18;
  if ( v18 != -31132 && v18 != 332 && v18 != -21916 )
  {
    VadForHotPatchInProgress = -1073741701;
    goto LABEL_35;
  }
  MiUnlockVad((__int64)CurrentThread, (__int64)v64);
  v72 = 0LL;
  v19 = *(_DWORD *)(v1 + 4);
  v69 = 0;
  if ( (v19 & 4) != 0 )
  {
LABEL_66:
    if ( v18 == 332
      && ((((*((unsigned int *)v64 + 7) | ((unsigned __int64)*((unsigned __int8 *)v64 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL
       || v66
       && (((*((unsigned int *)v66 + 7) | ((unsigned __int64)*((unsigned __int8 *)v66 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL) )
    {
      VadForHotPatchInProgress = -1073741799;
LABEL_109:
      v2 = 0LL;
      goto LABEL_110;
    }
    if ( (_DWORD)v79 == -1 || (_DWORD)v80 == -1 )
    {
      VadForHotPatchInProgress = -1073739516;
      goto LABEL_109;
    }
    ProcessHotPatchContext = MiGetProcessHotPatchContext(v76, 1LL);
    v36 = ProcessHotPatchContext;
    if ( !ProcessHotPatchContext )
    {
      VadForHotPatchInProgress = -1073741670;
      goto LABEL_109;
    }
    if ( v66 )
    {
      v2 = 0LL;
      VadForHotPatchInProgress = MiPrepareToHotPatchVad(
                                   ProcessHotPatchContext,
                                   (_DWORD)v66,
                                   (unsigned int)v83,
                                   v35,
                                   v54,
                                   v18,
                                   (__int64)P,
                                   0LL,
                                   *(_DWORD *)(v1 + 4) & 1);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_110;
      v36 = ProcessHotPatchContext;
      v18 = v91;
    }
    v37 = P;
    v2 = 0LL;
    VadForHotPatchInProgress = MiPrepareToHotPatchVad(
                                 v36,
                                 (_DWORD)v64,
                                 (unsigned int)v84,
                                 v35,
                                 v54,
                                 v18,
                                 (__int64)P,
                                 v3,
                                 1);
    if ( VadForHotPatchInProgress < 0 )
      goto LABEL_110;
    if ( (*(_DWORD *)(v1 + 4) & 1) != 0 )
    {
      DWORD2(v78) = 1;
      *(_QWORD *)&v78 = v83[1];
      RtlEnumerateHotPatchPatches(v37, v70, MiDisableXfgOnPatchedFunctions, &v78);
      VadForHotPatchInProgress = MiProcessPatchImageCfg(v66, v37, v70);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_110;
      LODWORD(v75) = 0;
      VadForHotPatchInProgress = RtlApplyHotPatch(
                                   v84[18],
                                   v84[2],
                                   0,
                                   0,
                                   0LL,
                                   v55,
                                   0LL,
                                   v57,
                                   v83[9],
                                   v83[1],
                                   v83[10],
                                   SHIDWORD(v83[4]),
                                   (__int64)&v75,
                                   v58,
                                   (__int64)v37,
                                   v70,
                                   2,
                                   v91,
                                   0LL,
                                   0LL,
                                   0LL,
                                   v59,
                                   v60,
                                   v61,
                                   v62);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_110;
      v92 = 3;
    }
    v38 = *(_DWORD *)(v1 + 4);
    if ( (v38 & 2) != 0 )
    {
      if ( (v38 & 4) == 0 )
      {
        DWORD2(v78) = 0;
        *(_QWORD *)&v78 = *(_QWORD *)&v84[2];
        RtlEnumerateHotPatchPatches(P, v70, MiDisableXfgOnPatchedFunctions, &v78);
      }
      v2 = 0LL;
      VadForHotPatchInProgress = MiApplyImageHotPatch((__int64)v84, (__int64)v83, v3, (__int64)P, v70);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_110;
    }
    v39 = ProcessHotPatchContext;
    --CurrentThread->SpecialApcDisable;
    v40 = (volatile signed __int32 *)(ProcessHotPatchContext + 16);
    v41 = KeAbPreAcquire(ProcessHotPatchContext + 16, 0LL);
    v87 = v41;
    if ( _interlockedbittestandset64(v40, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v39 + 16), v41, v39 + 16);
      v41 = v87;
    }
    if ( v41 )
      *(_BYTE *)(v41 + 18) = 1;
    v56 = VadForHotPatchInProgress;
    v42 = v69;
    MiLogHotPatchOperation(
      v3,
      *(_DWORD *)(v3 + 32),
      *(_DWORD *)(v3 + 36),
      v69,
      (__int64)&v72,
      (__int64)&DestinationString,
      v56,
      ((*(_DWORD *)(v1 + 4) >> 1) & 1) == 0);
    if ( (*(_DWORD *)(v1 + 4) & 2) != 0 )
    {
      v43 = *(UNICODE_STRING *)(v3 + 40);
      *(_QWORD *)(v3 + 56) = v72;
      *(_DWORD *)(v3 + 64) = v42;
      *(UNICODE_STRING *)(v3 + 40) = DestinationString;
      DestinationString = v43;
      if ( !*(_QWORD *)v3 )
      {
        v44 = *(__int64 **)(v39 + 8);
        if ( *v44 != v39 )
          goto LABEL_107;
        *(_QWORD *)v3 = v39;
        *(_QWORD *)(v3 + 8) = v44;
        *v44 = v3;
        *(_QWORD *)(v39 + 8) = v3;
      }
    }
    if ( (*(_DWORD *)(v1 + 4) & 4) == 0 )
      goto LABEL_100;
    v45 = *(_QWORD *)v3;
    if ( !*(_QWORD *)v3 )
      goto LABEL_100;
    if ( *(_QWORD *)(v45 + 8) == v3 )
    {
      v46 = *(_QWORD **)(v3 + 8);
      if ( *v46 == v3 )
      {
        *v46 = v45;
        *(_QWORD *)(v45 + 8) = v46;
        *(_QWORD *)v3 = 0LL;
LABEL_100:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v39 + 16));
        KeAbPostRelease(v39 + 16);
        v33 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v33
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        VadForHotPatchInProgress = 0;
        v2 = 0LL;
LABEL_106:
        v47 = RunRef;
        goto LABEL_111;
      }
    }
LABEL_107:
    __fastfail(3u);
  }
  VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(v1 + 24), 1LL, &v66, &v92);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_110;
  v9 = v66;
  v20 = ***((_QWORD ***)v66 + 9);
  v21 = *(_QWORD *)(v20 + 56);
  if ( v91 != *(_WORD *)(v21 + 48) )
  {
    VadForHotPatchInProgress = -1073741621;
LABEL_35:
    if ( v9 )
      MiUnlockVad((__int64)CurrentThread, (__int64)v9);
    if ( VadForHotPatchInProgress < 0 )
      goto LABEL_110;
    goto LABEL_106;
  }
  LODWORD(v72) = *(_DWORD *)(v21 + 60);
  HIDWORD(v72) = *(_DWORD *)(v21 + 72);
  v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 24), -1LL, -1LL);
  v23 = (__int64 *)*((_QWORD *)v9 + 9);
  v80 = v22;
  v2 = *v23;
  MiReferenceMappedControlArea(*v23);
  MiUnlockVad((__int64)CurrentThread, (__int64)v66);
  if ( qword_140C37600 )
  {
    LOBYTE(v24) = 8;
    LOBYTE(v25) = v88;
    v26 = qword_140C37600(v25, v24);
    v27 = 8;
    if ( v26 )
      v27 = v88;
    LOBYTE(v68) = v27;
  }
  VadForHotPatchInProgress = MiGetAllRegisteredPatches(v76, (unsigned int)v65, HIDWORD(v65), &v71);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_110;
  v29 = (UNICODE_STRING *)v71;
  VadForHotPatchInProgress = 0;
  v89 = (UNICODE_STRING *)v71;
  if ( !v71 )
    goto LABEL_56;
  v30 = v68;
  while ( 1 )
  {
    LOBYTE(v28) = v30;
    v31 = MiOpenHotPatchFile((int)v29 + 32, 0, v28, (unsigned int)&Handle, (__int64)&Object, (__int64)v82, 0LL);
    if ( v31 < 0 )
    {
      if ( VadForHotPatchInProgress >= 0 )
        VadForHotPatchInProgress = v31;
      goto LABEL_51;
    }
    v32 = Object;
    if ( MiSectionControlArea((__int64)Object) == v2 )
      break;
    MiUnmapImageInSystemSpace((__int64)v82);
    v82[0] = 0LL;
    ObfDereferenceObject(v32);
    Object = 0LL;
    ObCloseHandle(Handle, 0);
    Handle = 0LL;
    v29 = v89;
LABEL_51:
    v29 = *(UNICODE_STRING **)&v29->Length;
    v89 = v29;
    if ( !v29 )
      goto LABEL_54;
  }
  v29 = v89;
LABEL_54:
  v1 = a1;
  if ( !v29 )
  {
    if ( VadForHotPatchInProgress >= 0 )
LABEL_56:
      VadForHotPatchInProgress = -1073740588;
    goto LABEL_110;
  }
  MiDereferenceControlAreaBySection(v2, 1u);
  v2 = 0LL;
  DestinationString = v29[2];
  RtlInitUnicodeString(v29 + 2, 0LL);
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
    v33 = v92 == 0;
  else
    v33 = v92 == 3;
  if ( !v33 )
  {
    VadForHotPatchInProgress = -1073700861;
    goto LABEL_110;
  }
  VadForHotPatchInProgress = MiCaptureHotPatchInfo(
                               (unsigned int)v82,
                               v79,
                               *(_DWORD *)(v3 + 32),
                               *(_DWORD *)(v3 + 36),
                               v91,
                               (__int64)&P,
                               (__int64)&v70);
  if ( VadForHotPatchInProgress >= 0 )
  {
    v34 = *((_DWORD *)P + 2);
    v69 = v34;
    if ( (qword_140C69500 & 2) == 0 || *(_DWORD *)(v3 + 64) < v34 )
    {
      v18 = v91;
      goto LABEL_66;
    }
LABEL_11:
    VadForHotPatchInProgress = -1073740758;
  }
LABEL_110:
  MiLogHotPatchOperationStatus(v65, HIDWORD(v65), (unsigned int)&DestinationString, VadForHotPatchInProgress, 0);
  v47 = v76 + 139;
LABEL_111:
  v48 = v64;
  if ( v64 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v64);
    MiSetVadFlags((__int64)v48, 4LL, v63);
    if ( v3 )
    {
      *(_DWORD *)(v3 + 68) &= ~1u;
      v3 &= -(__int64)((*(_DWORD *)(v3 + 68) & 2) != 0);
    }
    MiUnlockAndDereferenceVad(v64);
  }
  v49 = v66;
  if ( v66 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v66);
    MiSetVadFlags((__int64)v49, 4LL, v92);
    MiUnlockAndDereferenceVad(v49);
  }
  if ( v3 )
    MiDeleteHotPatchEntry((PVOID)v3);
  MiReleaseHotPatchResources(v84);
  MiReleaseHotPatchResources(v83);
  if ( (v4 & 1) != 0 )
    ExReleaseRundownProtection_0(v47);
  if ( v82[0] )
    MiUnmapImageInSystemSpace((__int64)v82);
  if ( v2 )
    MiDereferenceControlAreaBySection(v2, 1u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v71 )
  {
    do
    {
      v50 = v71;
      v52 = (UNICODE_STRING *)((char *)v71 + 32);
      v71 = *(PVOID *)v71;
      v51 = v71;
      RtlFreeUnicodeString(v52);
      ExFreePoolWithTag(v50, 0);
    }
    while ( v51 );
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)VadForHotPatchInProgress;
}
