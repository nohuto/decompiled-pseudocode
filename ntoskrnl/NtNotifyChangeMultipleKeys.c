/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x1406B40B0
 * Callers:
 *     NtNotifyChangeKey @ 0x1406B4D70 (NtNotifyChangeKey.c)
 * Callees:
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpAllocatePostBlock @ 0x1406B4968 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1406B4A70 (CmpNotifyChangeKey.c)
 *     CmpFreePostBlock @ 0x1406B5600 (CmpFreePostBlock.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     CmpLockTwoKcbsShared @ 0x1407ACF00 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1407ACF58 (CmpUnlockTwoKcbs.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmObReferenceObjectByName @ 0x140AF2458 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall NtNotifyChangeMultipleKeys(
        void *a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        void (__stdcall *a5)(POPLOCK Oplock),
        __int64 a6,
        NTSTATUS *Address,
        unsigned int a8,
        char a9,
        volatile void *a10,
        SIZE_T Length,
        char a12)
{
  void *v14; // r12
  int v15; // r9d
  int v16; // r8d
  char PreviousMode; // cl
  unsigned int v18; // r14d
  NTSTATUS v19; // esi
  _QWORD *v20; // rbx
  __int64 PostBlock; // rax
  __int64 v22; // r14
  unsigned int v23; // esi
  PVOID v24; // rsi
  unsigned int v25; // ecx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  int v28; // r12d
  unsigned __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r9
  _QWORD *v33; // rbx
  bool v34; // r13
  __int64 v35; // r12
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // bl
  _KPROCESS *Process; // rcx
  unsigned __int8 v44; // si
  struct _KTHREAD *CurrentThread; // rdx
  void (__stdcall *v46)(POPLOCK); // r8
  __int64 v47; // r12
  int v48; // r9d
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // rcx
  unsigned __int64 *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // r12
  unsigned __int64 *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // r9
  __int16 v63; // ax
  char v64; // al
  bool v65; // zf
  PVOID v66; // rcx
  PVOID v67; // rcx
  unsigned __int64 *v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r12
  unsigned __int64 *v71; // rsi
  __int64 v72; // rax
  __int64 v73; // r12
  __int64 v74; // r14
  __int64 v75; // r14
  __int64 v76; // r14
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  _QWORD *v83; // rax
  unsigned __int8 CurrentIrql; // r13
  __int64 v85; // rdx
  _QWORD *v86; // rcx
  unsigned __int8 v87; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v90; // edx
  __int64 v91; // r12
  NTSTATUS v92; // eax
  unsigned __int8 v93; // si
  _QWORD *v94; // r12
  PVOID *v95; // rax
  PVOID *v96; // rcx
  __int64 v97; // rdx
  _QWORD *v98; // rcx
  __int64 v99; // rax
  _QWORD *v100; // rcx
  __int64 v101; // rdx
  _QWORD *v102; // rcx
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // r9
  _DWORD *v105; // r8
  int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  NTSTATUS *v111; // rax
  unsigned __int8 v112; // r12
  _QWORD *v113; // rdx
  PVOID *v114; // rax
  PVOID *v115; // rcx
  char *v116; // rax
  __int64 v117; // rdx
  char **v118; // rcx
  __int64 v119; // rax
  _QWORD *v120; // rcx
  __int64 v121; // rdx
  _QWORD *v122; // rcx
  unsigned __int8 v123; // al
  struct _KPRCB *v124; // r9
  _DWORD *v125; // r8
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  PVOID *Object; // [rsp+20h] [rbp-218h]
  PVOID *Objecta; // [rsp+20h] [rbp-218h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-210h]
  POBJECT_HANDLE_INFORMATION HandleInformationa; // [rsp+28h] [rbp-210h]
  char v135; // [rsp+40h] [rbp-1F8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1F7h]
  bool v137; // [rsp+43h] [rbp-1F5h]
  unsigned __int8 v138; // [rsp+44h] [rbp-1F4h]
  PVOID v139; // [rsp+48h] [rbp-1F0h] BYREF
  unsigned int v140; // [rsp+50h] [rbp-1E8h]
  PVOID P; // [rsp+58h] [rbp-1E0h]
  PVOID v142; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v143; // [rsp+68h] [rbp-1D0h]
  unsigned int v144; // [rsp+70h] [rbp-1C8h]
  PVOID v145; // [rsp+78h] [rbp-1C0h]
  PVOID v146; // [rsp+80h] [rbp-1B8h] BYREF
  NTSTATUS *v147; // [rsp+88h] [rbp-1B0h]
  __int64 v148; // [rsp+90h] [rbp-1A8h]
  HANDLE Handle; // [rsp+98h] [rbp-1A0h]
  __int128 v150; // [rsp+A0h] [rbp-198h] BYREF
  int v151; // [rsp+B0h] [rbp-188h]
  _OWORD v152[19]; // [rsp+C0h] [rbp-178h] BYREF

  Handle = a4;
  v148 = a3;
  v144 = a2;
  v146 = a1;
  v147 = Address;
  v150 = 0LL;
  v139 = 0LL;
  v145 = 0LL;
  v14 = 0LL;
  P = 0LL;
  v140 = 1;
  memset(v152, 0, 0x128uLL);
  v138 = 0;
  v143 = 0LL;
  v151 = 0;
  CmpInitializeThreadInfo((__int64)&v150);
  v135 = CmpAcquireShutdownRundown();
  if ( !v135 )
  {
    v19 = -1073741431;
    goto LABEL_45;
  }
  v16 = 1;
  if ( a2 > 1 )
    goto LABEL_99;
  v137 = a2 == 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    if ( (a8 & 0x10000000) != 0 )
    {
      if ( a12 && !a5 && a4 )
      {
        v18 = 4;
        v140 = 4;
        goto LABEL_9;
      }
LABEL_99:
      CmpReleaseShutdownRundown();
      v19 = -1073741811;
      goto LABEL_45;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[1].Affinity.StaticBitmap[30] )
      goto LABEL_47;
    v63 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v63 == 332 || (v65 = v63 == 452, v64 = 0, v65) )
      v64 = 1;
    v44 = 1;
    if ( !v64 )
LABEL_47:
      v44 = 0;
    v138 = v44;
    ProbeForWrite(Address, 8 * (v44 ^ 1LL) + 8, 4u);
    ProbeForWrite(a10, (unsigned int)Length, 4u);
    if ( v44 )
    {
      *(_QWORD *)Address = 259LL;
    }
    else
    {
      *Address = 259;
      *((_QWORD *)Address + 1) = 0LL;
    }
    PreviousMode = AccessMode;
    if ( a12 )
    {
      v18 = 2;
      v140 = 2;
    }
    else
    {
      v18 = v140;
    }
LABEL_9:
    if ( a8 != (a8 & 0x1000000F) )
    {
      v19 = -1073741811;
      goto LABEL_44;
    }
    LOBYTE(v15) = PreviousMode;
    v19 = CmObReferenceObjectByHandle((_DWORD)v146, 16, v16, v15, (__int64)&v139, 0LL);
    if ( v19 < 0 )
    {
LABEL_44:
      CmpReleaseShutdownRundown();
      goto LABEL_45;
    }
    v20 = 0LL;
    v142 = 0LL;
    if ( a2 == 1 )
    {
      LODWORD(v152[6]) = -1;
      *((_QWORD *)&v152[9] + 1) = &v152[9];
      *(_QWORD *)&v152[9] = &v152[9];
      memset((char *)&v152[13] + 8, 0, 0x50uLL);
      v19 = CmObReferenceObjectByName(v148, 0, 16, v48, AccessMode, (__int64)v152, (__int64)&v142);
      CmpCleanupParseContext(v152, 0LL);
      if ( v19 < 0 )
        goto LABEL_42;
      v20 = v142;
      if ( *(_QWORD *)(*((_QWORD *)v139 + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)v142 + 1) + 32LL) )
      {
        ObfDereferenceObject(v142);
        v19 = -1073741811;
        goto LABEL_42;
      }
    }
    PostBlock = CmpAllocatePostBlock(v18, 0x10000LL, 0LL, 0LL);
    v22 = PostBlock;
    v148 = PostBlock;
    if ( !PostBlock )
    {
      if ( a2 == 1 )
        ObfDereferenceObject(v20);
      goto LABEL_108;
    }
    v23 = v140;
    if ( a2 == 1 )
    {
      v14 = (void *)CmpAllocatePostBlock(v140, 0LL, v20, PostBlock);
      P = v14;
      if ( !v14 )
      {
        ObfDereferenceObject(v20);
        CmpFreePostBlock((PVOID)v22);
LABEL_108:
        v19 = -1073741670;
        goto LABEL_42;
      }
    }
    if ( v23 == 1 )
    {
      v24 = 0LL;
    }
    else
    {
      if ( Handle )
      {
        v146 = 0LL;
        v19 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v146, 0LL);
        v145 = v146;
        if ( v19 < 0 )
        {
          if ( a2 != 1 )
          {
LABEL_112:
            v67 = (PVOID)v22;
LABEL_113:
            CmpFreePostBlock(v67);
            goto LABEL_42;
          }
          v66 = v14;
LABEL_111:
          CmpFreePostBlock(v66);
          goto LABEL_112;
        }
        v24 = v146;
        KeResetEvent((PRKEVENT)v146);
      }
      else
      {
        v24 = 0LL;
      }
      v25 = v140;
      v26 = *(_QWORD **)(v22 + 64);
      if ( v140 == 2 )
      {
        v26[13] = v147;
        *(_QWORD *)(*(_QWORD *)(v22 + 64) + 8LL) = v24;
        CurrentThread = KeGetCurrentThread();
        v46 = AlpcMessageDeleteProcedure;
        if ( a5 )
          v46 = a5;
        KeInitializeApc(
          *(_QWORD *)(v22 + 64) + 16LL,
          (__int64)CurrentThread,
          2,
          (__int64)CmpPostApc,
          (__int64)CmpPostApcRunDown,
          (__int64)v46,
          a5 != 0LL ? AccessMode : 0,
          a6);
        v20 = v142;
      }
      else
      {
        *v26 = v24;
        if ( v25 != 4 )
        {
          *(_QWORD *)(*(_QWORD *)(v22 + 64) + 8LL) = a5;
          *(_DWORD *)(*(_QWORD *)(v22 + 64) + 16LL) = a6;
        }
      }
    }
    CmpLockRegistry();
    v27 = *((_QWORD *)v139 + 1);
    if ( a2 == 1 )
      CmpLockTwoKcbsShared(v27, v20[1]);
    else
      CmpLockKcbShared(v27);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v139, 0LL)
      || a2 == 1 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(v20, 0LL) )
    {
      v49 = *((_QWORD *)v139 + 1);
      if ( a2 == 1 )
        CmpUnlockTwoKcbs(v49, v20[1]);
      else
        CmpUnlockKcb(v49);
      CmpUnlockRegistry(v51, v50, v52, v53, Object, HandleInformation);
      if ( v24 )
        ObfDereferenceObject(v24);
      if ( a2 == 1 )
        CmpFreePostBlock(v14);
      CmpFreePostBlock((PVOID)v22);
      v19 = -1073741444;
      goto LABEL_42;
    }
    v28 = 1;
    if ( a2 != 1
      || (Handle = v139, v54 = *(_QWORD *)(*((_QWORD *)v139 + 1) + 32LL), v55 = *(_QWORD *)(v20[1] + 32LL), v54 == v55) )
    {
      v29 = (unsigned __int64 *)(*(_QWORD *)(*((_QWORD *)v139 + 1) + 32LL) + 1680LL);
      v30 = KeAbPreAcquire((__int64)v29, 0LL);
      v31 = v30;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
        ExfAcquirePushLockExclusiveEx(v29, v30, (__int64)v29);
      if ( v31 )
        *(_BYTE *)(v31 + 18) = 1;
    }
    else
    {
      if ( v54 < v55 )
      {
        v68 = (unsigned __int64 *)(v54 + 1680);
        v69 = KeAbPreAcquire((__int64)v68, 0LL);
        v70 = v69;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v68, 0LL) )
          ExfAcquirePushLockExclusiveEx(v68, v69, (__int64)v68);
        if ( v70 )
          *(_BYTE *)(v70 + 18) = 1;
        v71 = (unsigned __int64 *)(*(_QWORD *)(v20[1] + 32LL) + 1680LL);
        v72 = KeAbPreAcquire((__int64)v71, 0LL);
        v73 = v72;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v71, 0LL) )
          ExfAcquirePushLockExclusiveEx(v71, v72, (__int64)v71);
        if ( v73 )
          *(_BYTE *)(v73 + 18) = 1;
        v28 = 2;
      }
      else
      {
        v56 = (unsigned __int64 *)(v55 + 1680);
        v57 = KeAbPreAcquire(v55 + 1680, 0LL);
        v58 = v57;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v56, 0LL) )
          ExfAcquirePushLockExclusiveEx(v56, v57, (__int64)v56);
        if ( v58 )
          *(_BYTE *)(v58 + 18) = 1;
        v59 = (unsigned __int64 *)(*(_QWORD *)(*((_QWORD *)Handle + 1) + 32LL) + 1680LL);
        v60 = KeAbPreAcquire((__int64)v59, 0LL);
        v61 = v60;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v59, 0LL) )
          ExfAcquirePushLockExclusiveEx(v59, v60, (__int64)v59);
        if ( v61 )
          *(_BYTE *)(v61 + 18) = 1;
        v28 = 3;
      }
      v143 = *(_QWORD *)(v20[1] + 32LL);
    }
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    LOBYTE(v32) = a9;
    v33 = v139;
    v19 = CmpNotifyChangeKey(v139, v22, a8, v32);
    if ( v19 < 0 )
    {
      ExReleaseFastMutexUnsafe(&CmpPostLock);
      if ( v28 == 1 )
      {
        v74 = *(_QWORD *)(v33[1] + 32LL);
      }
      else if ( v28 == 2 )
      {
        v75 = v143;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v143 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v75 + 1680));
        KeAbPostRelease(v75 + 1680);
        v74 = *(_QWORD *)(*((_QWORD *)v139 + 1) + 32LL);
      }
      else
      {
        v76 = *(_QWORD *)(*((_QWORD *)v139 + 1) + 32LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v76 + 1680));
        KeAbPostRelease(v76 + 1680);
        v74 = v143;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v74 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v74 + 1680));
      KeAbPostRelease(v74 + 1680);
      v77 = *((_QWORD *)v139 + 1);
      if ( a2 == 1 )
        CmpUnlockTwoKcbs(v77, *((_QWORD *)v142 + 1));
      else
        CmpUnlockKcb(v77);
      CmpUnlockRegistry(v79, v78, v80, v81, Object, HandleInformation);
      if ( v145 )
        ObfDereferenceObject(v145);
      if ( a2 != 1 )
        goto LABEL_42;
      v67 = P;
      goto LABEL_113;
    }
    v34 = a2 == 1;
    if ( v144 == 1 )
    {
      ObfReferenceObject(v142);
      if ( v19 )
      {
        LOBYTE(v62) = a9;
        v19 = CmpNotifyChangeKey(v142, P, a8, v62);
        if ( v19 < 0 )
        {
          v82 = *(_QWORD *)v22;
          v83 = *(_QWORD **)(v22 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 )
            goto LABEL_210;
          if ( *v83 != v22 )
            goto LABEL_210;
          *v83 = v82;
          *(_QWORD *)(v82 + 8) = v83;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          v85 = *(_QWORD *)(v22 + 16);
          v86 = *(_QWORD **)(v22 + 24);
          if ( *(_QWORD *)(v85 + 8) != v22 + 16 || *v86 != v22 + 16 )
            goto LABEL_210;
          *v86 = v85;
          *(_QWORD *)(v85 + 8) = v86;
          if ( KiIrqlFlags )
          {
            v87 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v87 <= 0xFu && CurrentIrql <= 0xFu && v87 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v90 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v65 = (v90 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v90;
              if ( v65 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(CurrentIrql);
          v34 = v137;
        }
      }
      else
      {
        CmpFreePostBlock(P);
        v34 = 0;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    if ( v28 != 1 )
    {
      if ( v28 != 2 )
      {
        v47 = *(_QWORD *)(*((_QWORD *)v139 + 1) + 32LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v47 + 1680));
        KeAbPostRelease(v47 + 1680);
        v35 = v143;
        goto LABEL_34;
      }
      v91 = v143;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v143 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v91 + 1680));
      KeAbPostRelease(v91 + 1680);
    }
    v35 = *(_QWORD *)(*((_QWORD *)v139 + 1) + 32LL);
LABEL_34:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v35 + 1680));
    KeAbPostRelease(v35 + 1680);
    v36 = *((_QWORD *)v139 + 1);
    if ( v144 == 1 )
      CmpUnlockTwoKcbs(v36, *((_QWORD *)v142 + 1));
    else
      CmpUnlockKcb(v36);
    CmpUnlockRegistry(v38, v37, v39, v40, Object, HandleInformation);
    if ( v142 )
      ObfDereferenceObject(v142);
    if ( v19 < 0 )
    {
      CmpFreePostBlock((PVOID)v22);
      if ( v145 )
        ObfDereferenceObject(v145);
      goto LABEL_42;
    }
    if ( v140 != 1 )
    {
LABEL_42:
      v41 = v135;
      goto LABEL_43;
    }
    CmpReleaseShutdownRundown();
    v135 = 0;
    v92 = KeWaitForSingleObject(*(PVOID *)(v22 + 64), Executive, AccessMode, 1u, 0LL);
    v19 = v92;
    if ( v92 != 257 && v92 != 192 )
    {
      CmpLockRegistry();
      ExAcquireFastMutexUnsafe(&CmpPostLock);
      v93 = KeGetCurrentIrql();
      __writecr8(1uLL);
      v94 = P;
      if ( v34 )
      {
        v95 = *(PVOID **)P;
        if ( *(_QWORD *)P )
        {
          v96 = (PVOID *)*((_QWORD *)P + 1);
          if ( v95[1] != P || *v96 != P )
            goto LABEL_210;
          *v96 = v95;
          v95[1] = v96;
        }
        v97 = v94[2];
        v98 = (_QWORD *)v94[3];
        if ( *(_QWORD **)(v97 + 8) != v94 + 2 || (_QWORD *)*v98 != v94 + 2 )
          goto LABEL_210;
        *v98 = v97;
        *(_QWORD *)(v97 + 8) = v98;
      }
      v99 = *(_QWORD *)v22;
      if ( *(_QWORD *)v22 )
      {
        v100 = *(_QWORD **)(v22 + 8);
        if ( *(_QWORD *)(v99 + 8) != v22 || *v100 != v22 )
          goto LABEL_210;
        *v100 = v99;
        *(_QWORD *)(v99 + 8) = v100;
      }
      v101 = *(_QWORD *)(v22 + 16);
      v102 = *(_QWORD **)(v22 + 24);
      if ( *(_QWORD *)(v101 + 8) == v22 + 16 && *v102 == v22 + 16 )
      {
        *v102 = v101;
        *(_QWORD *)(v101 + 8) = v102;
        if ( KiIrqlFlags )
        {
          v103 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v103 <= 0xFu && v93 <= 0xFu && v103 >= 2u )
          {
            v104 = KeGetCurrentPrcb();
            v105 = v104->SchedulerAssist;
            v106 = ~(unsigned __int16)(-1LL << (v93 + 1));
            v65 = (v106 & v105[5]) == 0;
            v105[5] &= v106;
            if ( v65 )
              KiRemoveSystemWorkPriorityKick((__int64)v104);
          }
        }
        __writecr8(v93);
        ExReleaseFastMutexUnsafe(&CmpPostLock);
        CmpUnlockRegistry(v108, v107, v109, v110, Objecta, HandleInformationa);
        v19 = *(_DWORD *)(*(_QWORD *)(v22 + 64) + 24LL);
        v111 = v147;
        *v147 = v19;
        if ( v138 )
          v111[1] = 0;
        else
          *((_QWORD *)v111 + 1) = 0LL;
        v41 = 0;
        if ( v34 )
          CmpFreePostBlock(v94);
        CmpFreePostBlock((PVOID)v22);
LABEL_43:
        ObfDereferenceObject(v139);
        if ( !v41 )
        {
LABEL_45:
          CmCleanupThreadInfo((__int64 *)&v150);
          return (unsigned int)v19;
        }
        goto LABEL_44;
      }
LABEL_210:
      __fastfail(3u);
    }
    CmpLockRegistry();
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    v112 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( v34 )
    {
      v113 = P;
      v114 = *(PVOID **)P;
      if ( *(_QWORD *)P )
      {
        v115 = (PVOID *)*((_QWORD *)P + 1);
        if ( v114[1] != P || *v115 != P )
          goto LABEL_210;
        *v115 = v114;
        v114[1] = v115;
      }
      v116 = (char *)(v113 + 2);
      v117 = v113[2];
      v118 = (char **)*((_QWORD *)v116 + 1);
      if ( *(char **)(v117 + 8) != v116 || *v118 != v116 )
        goto LABEL_210;
      *v118 = (char *)v117;
      *(_QWORD *)(v117 + 8) = v118;
    }
    v119 = *(_QWORD *)v22;
    if ( *(_QWORD *)v22 )
    {
      v120 = *(_QWORD **)(v22 + 8);
      if ( *(_QWORD *)(v119 + 8) != v22 || *v120 != v22 )
        goto LABEL_210;
      *v120 = v119;
      *(_QWORD *)(v119 + 8) = v120;
    }
    v121 = *(_QWORD *)(v22 + 16);
    v122 = *(_QWORD **)(v22 + 24);
    if ( *(_QWORD *)(v121 + 8) != v22 + 16 || *v122 != v22 + 16 )
      goto LABEL_210;
    *v122 = v121;
    *(_QWORD *)(v121 + 8) = v122;
    if ( KiIrqlFlags )
    {
      v123 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v123 <= 0xFu && v112 <= 0xFu && v123 >= 2u )
      {
        v124 = KeGetCurrentPrcb();
        v125 = v124->SchedulerAssist;
        v126 = ~(unsigned __int16)(-1LL << (v112 + 1));
        v65 = (v126 & v125[5]) == 0;
        v125[5] &= v126;
        if ( v65 )
          KiRemoveSystemWorkPriorityKick((__int64)v124);
      }
    }
    __writecr8(v112);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    CmpUnlockRegistry(v128, v127, v129, v130, Objecta, HandleInformationa);
    if ( !v34 )
      goto LABEL_112;
    v66 = P;
    goto LABEL_111;
  }
  if ( !a12 )
  {
    v18 = 1;
    goto LABEL_9;
  }
  v18 = 3;
  v140 = 3;
  if ( !a2 )
    goto LABEL_9;
  CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v150);
  return 3221225485LL;
}
