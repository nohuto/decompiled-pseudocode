__int64 __fastcall ObDuplicateObject(
        ULONG_PTR a1,
        void *a2,
        ULONG_PTR a3,
        unsigned __int64 *a4,
        int a5,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  PEPROCESS v9; // rdi
  PACCESS_TOKEN ClientToken; // r15
  char v12; // r13
  int v13; // ebx
  int v14; // eax
  struct _EX_RUNDOWN_REF *v15; // rdi
  __int64 v16; // rsi
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v18; // rdi
  signed __int64 *v19; // rbx
  signed __int64 v20; // r8
  volatile signed __int64 *HandlePointer; // r13
  int v22; // r12d
  unsigned int v23; // edi
  signed __int64 BugCheckParameter4; // rax
  void *v25; // rax
  _KPROCESS *v26; // rcx
  unsigned int v27; // esi
  struct _EX_RUNDOWN_REF *v28; // rsi
  int *v29; // r13
  int v30; // edx
  unsigned int v31; // r14d
  int v32; // esi
  __int64 v33; // rcx
  _DWORD *v34; // rbx
  char v35; // r14
  int v36; // eax
  char v37; // bl
  struct _ACCESS_STATE *v38; // rdi
  int v39; // r12d
  HANDLE v40; // r14
  char PreviousMode; // bl
  struct _SECURITY_SUBJECT_CONTEXT *v42; // r14
  char v43; // bl
  ACCESS_MASK v44; // edx
  unsigned __int64 v45; // rbx
  struct _KTHREAD *v46; // rcx
  char v47; // al
  unsigned int Number; // edx
  unsigned int v49; // ecx
  unsigned int v50; // r12d
  unsigned int v51; // r14d
  int *v52; // rdi
  unsigned int v53; // r14d
  unsigned int v54; // eax
  char HandleTableEntrySlow; // r14
  int *v56; // rdi
  unsigned __int64 *v57; // rsi
  unsigned __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdi
  unsigned __int64 v63; // rdi
  int v64; // esi
  int v65; // r15d
  bool v66; // r12
  unsigned __int64 v67; // rbx
  PVOID v69; // rsi
  ULONG_PTR v70; // rdi
  unsigned int v71; // r12d
  volatile signed __int64 *p_SystemAffinityTokenListHead; // rsi
  __int64 *HandleExtraInfo; // rax
  ULONG_PTR v74; // rcx
  _DWORD *AuxData; // rax
  signed __int32 v76[8]; // [rsp+0h] [rbp-100h] BYREF
  bool v77; // [rsp+40h] [rbp-C0h]
  int v78; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h]
  int v80; // [rsp+50h] [rbp-B0h]
  int v81; // [rsp+54h] [rbp-ACh]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-A8h]
  __int64 v83; // [rsp+60h] [rbp-A0h] BYREF
  struct _ACCESS_STATE *v84; // [rsp+68h] [rbp-98h]
  ULONG_PTR v85; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  int v87; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v88; // [rsp+84h] [rbp-7Ch]
  int v89; // [rsp+88h] [rbp-78h]
  PEX_RUNDOWN_REF RunRef; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *v91; // [rsp+98h] [rbp-68h]
  unsigned __int64 v92; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v93; // [rsp+A8h] [rbp-58h]
  __int128 v94; // [rsp+B0h] [rbp-50h] BYREF
  int v95; // [rsp+C0h] [rbp-40h]
  char *v96; // [rsp+C8h] [rbp-38h]
  PEX_RUNDOWN_REF v97; // [rsp+D0h] [rbp-30h]
  __int64 v98; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v99; // [rsp+E0h] [rbp-20h]
  $115DCDF994C6370D29323EAB0E0C9502 v100; // [rsp+E8h] [rbp-18h] BYREF
  struct _ACCESS_STATE v101; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v102[224]; // [rsp+1C0h] [rbp+C0h] BYREF

  v85 = a3;
  v9 = (PEPROCESS)a3;
  Handle = a2;
  BugCheckParameter1 = a1;
  v99 = a4;
  memset(&v100, 0, sizeof(v100));
  memset(v102, 0, sizeof(v102));
  ClientToken = 0LL;
  v87 = 0;
  memset(&v101, 0, sizeof(v101));
  v78 = 0;
  v94 = 0LL;
  if ( (a6 & 0x200) != 0 && !a8 )
  {
    v9 = PsInitialSystemProcess;
    v85 = (ULONG_PTR)PsInitialSystemProcess;
  }
  if ( a4 )
    *a4 = 0LL;
  v12 = a7;
  v13 = a7 & 2;
  v81 = v13;
  if ( (a7 & 2) == 0 && (a5 & 0xCE00000) != 0 )
    return 3221225506LL;
  v14 = *(_DWORD *)(a1 + 992) & 1;
  if ( !v9 )
  {
    if ( !(_BYTE)v14 )
      goto LABEL_8;
    return 3221225506LL;
  }
  if ( ((_BYTE)v14 || (v9->SecureState.SecureHandle & 1) != 0)
    && ((_KPROCESS *)a1 != KeGetCurrentThread()->ApcState.Process || v9 != KeGetCurrentThread()->ApcState.Process) )
  {
    return 3221225506LL;
  }
LABEL_8:
  v15 = (struct _EX_RUNDOWN_REF *)(a1 + 1112);
  RunRef = (PEX_RUNDOWN_REF)(a1 + 1112);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) )
    return 3221225738LL;
  v16 = *(_QWORD *)(a1 + 1392);
  if ( !v16 )
  {
    ExReleaseRundownProtection_0(v15);
    return 3221225738LL;
  }
  CurrentThread = KeGetCurrentThread();
  v18 = (unsigned __int64)Handle;
  Object = CurrentThread;
  if ( (int)Handle >= 0 )
    goto LABEL_15;
  if ( Handle != (HANDLE)-1LL )
  {
    if ( Handle == (HANDLE)-2LL )
    {
      p_SystemAffinityTokenListHead = (volatile signed __int64 *)&CurrentThread[-1].SystemAffinityTokenListHead;
      v22 = 0x1FFFFF;
      v83 = 0LL;
      v23 = 0;
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)p_SystemAffinityTokenListHead, 1, 1u, 0x6E48624Fu);
      ObpIncrPointerCount(p_SystemAffinityTokenListHead);
LABEL_29:
      v26 = (_KPROCESS *)BugCheckParameter1;
      goto LABEL_30;
    }
    if ( a8 )
    {
LABEL_134:
      ExReleaseRundownProtection_0(RunRef);
      return 3221225480LL;
    }
    v16 = ObpKernelHandleTable;
    v18 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
LABEL_15:
    --CurrentThread->KernelApcDisable;
    if ( (v18 & 0x3FC) != 0 )
    {
      v19 = (signed __int64 *)ExpLookupHandleTableEntry(v16, v18);
      if ( v19 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v19);
            v20 = *v19;
            if ( (*v19 & 1) != 0 )
              break;
            if ( !v20 )
            {
              CurrentThread = (struct _KTHREAD *)Object;
              goto LABEL_176;
            }
            ExpBlockOnLockedHandleEntry(v16, v19, v20);
          }
        }
        while ( v20 != _InterlockedCompareExchange64(v19, v20 - 1, v20) );
        HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(v19);
        v22 = v19[1] & 0x1FFFFFF;
        if ( *(_DWORD *)(v16 + 4) && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(v16, v18)) != 0LL )
          v83 = *HandleExtraInfo;
        else
          v83 = 0LL;
        v23 = ((__int64)*(unsigned int *)v19 >> 17) & 7 | 8;
        if ( (v19[1] & 0x2000000) == 0 )
          v23 = ((__int64)*(unsigned int *)v19 >> 17) & 7;
        BugCheckParameter4 = _InterlockedIncrement64(HandlePointer);
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(HandlePointer + 6), 0x10uLL, BugCheckParameter4);
        _InterlockedExchangeAdd64(v19, 1uLL);
        _InterlockedOr(v76, 0);
        if ( *(_QWORD *)(v16 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(v16 + 48), 0LL);
        KeLeaveCriticalRegionThread((__int64)Object);
        if ( ObpTraceFlags )
          ObpPushStackInfo((__int64)HandlePointer, 1, 1u, 0x6E48624Fu);
        v13 = v81;
        v25 = (void *)(HandlePointer + 6);
        v12 = a7;
        Object = v25;
        goto LABEL_29;
      }
    }
LABEL_176:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_134;
  }
  v22 = 0x1FFFFF;
  v23 = 0;
  v83 = 0LL;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter1 - 48, 1, 1u, 0x6E48624Fu);
  ObpIncrPointerCount((volatile signed __int64 *)(BugCheckParameter1 - 48));
  v26 = (_KPROCESS *)BugCheckParameter1;
  Object = (PVOID)BugCheckParameter1;
LABEL_30:
  v27 = 0;
  if ( (v23 & 4) == 0 )
    LODWORD(v83) = 0;
  if ( !v85 )
  {
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess(v26, 0, (__int64)&v100);
      NtClose(Handle);
      KiUnstackDetachProcess(&v100);
    }
    else
    {
      v27 = -1073741811;
    }
    ExReleaseRundownProtection_0(RunRef);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v27;
  }
  v28 = (struct _EX_RUNDOWN_REF *)(v85 + 1112);
  v97 = (PEX_RUNDOWN_REF)(v85 + 1112);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v85 + 1112)) )
    goto LABEL_152;
  v29 = *(int **)(v85 + 1392);
  if ( !v29 )
  {
    ExReleaseRundownProtection_0(v28);
    v12 = a7;
LABEL_152:
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v100);
      NtClose(Handle);
      KiUnstackDetachProcess(&v100);
    }
    ExReleaseRundownProtection_0(RunRef);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return 3221225738LL;
  }
  v77 = v29 == (int *)ObpKernelHandleTable;
  if ( v13 )
    v30 = v22;
  else
    v30 = a5;
  if ( (a7 & 4) != 0 )
    v31 = v23;
  else
    v31 = v23 & 0xC | a6 & 0xFFFFFDFF;
  v32 = v31 | 8;
  if ( (a7 & 8) == 0 )
    v32 = v31;
  v96 = (char *)Object - 48;
  v33 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v96[24] ^ (unsigned __int64)BYTE1(v96)];
  v98 = v33;
  v34 = (_DWORD *)(v33 + 76);
  if ( (v30 & 0xF0000000) != 0 )
  {
    if ( v30 < 0 )
      v30 |= *v34;
    if ( (v30 & 0x40000000) != 0 )
      v30 |= *(_DWORD *)(v33 + 80);
    if ( (v30 & 0x20000000) != 0 )
      v30 |= *(_DWORD *)(v33 + 84);
    if ( (v30 & 0x10000000) != 0 )
      v30 |= *(_DWORD *)(v33 + 88);
    v30 &= 0xFFFFFFFu;
  }
  v35 = 0;
  v36 = *(_DWORD *)(v33 + 92) | 0x1000000;
  v84 = 0LL;
  v78 = v30 & v36;
  if ( (~v22 & v30 & v36) == 0 )
  {
    v37 = a8;
    v38 = 0LL;
LABEL_44:
    v39 = ObpIncrementHandleCountEx(2, (unsigned int)&v78, v85, (_DWORD)Object, v37, v32, 0LL);
    v80 = v39;
    goto LABEL_45;
  }
  if ( (v23 & 8) != 0
    || *(__int64 (__fastcall **)(__int64, int, _DWORD *, void *, __int64, __int64 *, int, __int64))(v33 + 152) != SeDefaultObjectMethod )
  {
    v39 = -1073741790;
    v38 = 0LL;
    v80 = -1073741790;
    goto LABEL_47;
  }
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v85 )
  {
    KiStackAttachProcess((_KPROCESS *)v85, 0, (__int64)&v100);
    v35 = 1;
  }
  SeCreateAccessState((int)&v101, (int)v102, v78, (__int64)v34);
  v37 = a8;
  v38 = &v101;
  v84 = &v101;
  v80 = ObpGrantAccess(2, (char *)Object, &v101, a8, v32, (ACCESS_MASK *)&v78);
  v39 = v80;
  if ( v80 >= 0 )
    goto LABEL_44;
LABEL_45:
  if ( v35 )
    KiUnstackDetachProcess(&v100);
LABEL_47:
  if ( (a7 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v100);
    v40 = Handle;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((__int64)Handle, 0) )
      VfCheckUserHandle(v74);
    ObpCloseHandle((ULONG_PTR)v40);
    KiUnstackDetachProcess(&v100);
  }
  if ( v39 < 0 )
  {
    if ( v38 )
    {
      SepDeleteAccessState((__int64)v38);
      SeReleaseSubjectContext(&v38->SubjectSecurityContext);
    }
    ExReleaseRundownProtection_0(RunRef);
    ExReleaseRundownProtection_0(v97);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return (unsigned int)v39;
  }
  else
  {
    v42 = (struct _SECURITY_SUBJECT_CONTEXT *)v84;
    v43 = v32;
    v89 = v32;
    if ( v84 )
    {
      v89 = v32;
      if ( v84->GenerateOnClose )
      {
        AuxData = v84->AuxData;
        v43 = v32 | 4;
        v89 = v32 | 4;
        LODWORD(v83) = AuxData[7];
      }
    }
    *((_QWORD *)&v94 + 1) = &v94;
    *(_QWORD *)&v94 = &v94;
    if ( (*(_BYTE *)(v98 + 66) & 0x40) != 0 && *(_QWORD *)(v98 + 200) != v98 + 200 )
    {
      v69 = Object;
      v70 = v85;
      v87 = v78;
      v80 = ObpPreInterceptHandleDuplicate(
              (_DWORD)Object,
              v77,
              (unsigned int)&v87,
              BugCheckParameter1,
              v85,
              (__int64)&v94);
      v71 = v80;
      if ( v80 < 0 )
      {
        ObpDecrementHandleCount((PRKPROCESS)v70);
        if ( v42 )
        {
          SepDeleteAccessState((__int64)v42);
          SeReleaseSubjectContext(v42 + 1);
        }
        ExReleaseRundownProtection_0(RunRef);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v70 + 1112));
        ObfDereferenceObjectWithTag(v69, 0x6E48624Fu);
        return v71;
      }
      if ( !v77 )
        v78 = v87;
    }
    v44 = v78 & 0x1FFFFFF;
    v93 = v78 & 0x1FFFFFF;
    v92 = ((_QWORD)v96 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v43 & 7) << 17);
    if ( (v43 & 8) != 0 )
      v44 |= 0x2000000u;
    LODWORD(v93) = v44;
    v92 = ((_QWORD)v96 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v43 & 7) << 17) | 1;
    LODWORD(v45) = 0;
    v46 = KeGetCurrentThread();
    v91 = v46;
    --v46->KernelApcDisable;
    v47 = *((_BYTE *)v29 + 44);
    if ( (v47 & 4) == 0 )
    {
      if ( (v47 & 1) != 0 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v49 = ExpFreeListCount;
      v81 = ExpFreeListCount;
      v88 = Number;
LABEL_59:
      v50 = 0;
      v95 = *v29;
      v51 = Number;
      while ( 1 )
      {
        v52 = &v29[16 * v51 + 16];
        if ( *((_QWORD *)v52 + 1) )
        {
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&v29[16 * v51 + 16], 0LL);
          v57 = (unsigned __int64 *)*((_QWORD *)v52 + 1);
          if ( v57 )
          {
            v58 = v57[1];
            *((_QWORD *)v52 + 1) = v58;
            if ( !v58 )
              *((_QWORD *)v52 + 2) = 0LL;
            v59 = ++v52[6];
            if ( v59 > v52[7] )
              v52[7] = v59;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v29[16 * v51 + 16]);
          KeAbPostRelease((ULONG_PTR)&v29[16 * v51 + 16]);
          if ( v57 )
          {
            v60 = (__int64)((__int64)v57 - ((unsigned __int64)v57 & 0xFFFFFFFFFFFFF000uLL)) >> 4;
            v61 = *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFF000uLL) + 8);
            v45 = v61 + 4 * v60;
            if ( v83 && (unsigned int)ExpSetHandleExtraInfo(v29, v61 + 4 * v60, &v83) )
            {
              ExpFreeHandleTableEntry(v29, v45, v57);
              LODWORD(v45) = 0;
              goto LABEL_165;
            }
            v62 = (__int64)v91;
            if ( *((_QWORD *)v29 + 12) )
              ExpUpdateDebugInfo(v29, v91, v45, 1LL);
            v57[1] = v93;
            *v57 = v92;
            KeLeaveCriticalRegionThread(v62);
            v63 = v45;
            if ( v45 )
            {
              v42 = (struct _SECURITY_SUBJECT_CONTEXT *)v84;
              if ( v84 )
                SeAuditHandleCreation((__int64)v84);
              if ( (v89 & 4) != 0 )
              {
                if ( v42 )
                {
                  ClientToken = v42[1].ClientToken;
                  if ( !ClientToken )
                    ClientToken = v42[1].PrimaryToken;
                }
                if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, ClientToken) )
                  SeAuditHandleDuplication(Handle, v45, BugCheckParameter1, v85);
              }
              v64 = v80;
              v65 = (int)Object;
              goto LABEL_86;
            }
LABEL_166:
            v42 = (struct _SECURITY_SUBJECT_CONTEXT *)v84;
            goto LABEL_167;
          }
          v49 = v81;
        }
        v53 = v51 + 1;
        ++v50;
        v54 = 0;
        if ( v53 != v49 )
          v54 = v53;
        v51 = v54;
        if ( v50 >= v49 )
        {
          HandleTableEntrySlow = 1;
          v56 = &v29[16 * v88 + 16];
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v29 + 14), 0LL);
          if ( v95 == *v29 )
            HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v29, v56);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v29 + 7);
          KeAbPostRelease((ULONG_PTR)(v29 + 14));
          if ( HandleTableEntrySlow )
          {
            v49 = v81;
            Number = v88;
            goto LABEL_59;
          }
LABEL_165:
          KeLeaveCriticalRegionThread((__int64)v91);
          v63 = 0LL;
          goto LABEL_166;
        }
      }
    }
    KeLeaveCriticalRegionThread((__int64)v46);
    v63 = 0LL;
LABEL_167:
    ObpDecrementHandleCount((PRKPROCESS)v85);
    v65 = (int)Object;
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    v64 = -1073741670;
LABEL_86:
    v66 = v77;
    v67 = v45 | 0xFFFFFFFF80000000uLL;
    if ( !v77 )
      v67 = v63;
    if ( v99 )
      *v99 = v67;
    if ( v42 )
    {
      SepDeleteAccessState((__int64)v42);
      SeReleaseSubjectContext(v42 + 1);
    }
    ExReleaseRundownProtection_0(RunRef);
    ExReleaseRundownProtection_0(v97);
    if ( (__int128 *)v94 != &v94 )
      ObpPostInterceptHandleDuplicate(v65, v66, v64, v78, (__int64)&v94);
    if ( (xmmword_140D1EAD0 & 0x40) != 0 && v64 >= 0 )
      EtwTraceDuplicateHandle(
        (_DWORD)Handle,
        v67,
        v65,
        *(_DWORD *)(BugCheckParameter1 + 1088),
        *(_DWORD *)(v85 + 1088),
        v98);
    return (unsigned int)v64;
  }
}
