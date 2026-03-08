/*
 * XREFs of MiAllocateVirtualMemory @ 0x1407C5270
 * Callers:
 *     MiAllocateUserStack @ 0x14077B2C0 (MiAllocateUserStack.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1407C4A70 (MiAllocateVirtualMemoryCommon.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A42EFC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiResetVirtualMemory @ 0x1402CEC2C (MiResetVirtualMemory.c)
 *     MiFlushAcquire @ 0x1402D4788 (MiFlushAcquire.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x14031EE80 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiGetVadPageSize @ 0x14031F9B4 (MiGetVadPageSize.c)
 *     MiGetProcessPartition @ 0x14031F9D4 (MiGetProcessPartition.c)
 *     MiGetControlAreaPartition @ 0x14031F9F0 (MiGetControlAreaPartition.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiFlushRelease @ 0x140334AC0 (MiFlushRelease.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     MiAllowProtectionChange @ 0x140367C88 (MiAllowProtectionChange.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiCommitEnclavePages @ 0x140644C84 (MiCommitEnclavePages.c)
 *     MiCheckSecuredVad @ 0x1406A0F38 (MiCheckSecuredVad.c)
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 *     MiCommitPagefileBackedSection @ 0x14078D374 (MiCommitPagefileBackedSection.c)
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     MiCommitVadMetadataBits @ 0x1407D2944 (MiCommitVadMetadataBits.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     EtwTiLogAllocExecVm @ 0x1407F1018 (EtwTiLogAllocExecVm.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E41C8 (PerfInfoLogVirtualAlloc.c)
 *     MiLogMemResetInfo @ 0x140A2BB4C (MiLogMemResetInfo.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, LARGE_INTEGER a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // r13d
  struct _KPROCESS *v9; // rcx
  int v10; // edx
  bool v11; // zf
  int v12; // edx
  int v13; // eax
  __int16 v14; // cx
  int v15; // r10d
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  ULONG_PTR v21; // rsi
  unsigned __int64 v22; // r8
  int v23; // ecx
  BOOL v24; // eax
  unsigned __int64 v25; // r10
  __int64 v26; // rax
  int v27; // ecx
  int v28; // ecx
  int v29; // edx
  unsigned int v30; // r9d
  __int64 v31; // r8
  int v32; // r14d
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // r13
  unsigned __int64 v37; // r10
  __int64 v38; // rdx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  __int64 ProcessPartition; // rax
  LARGE_INTEGER v43; // r10
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 VadPageSize; // rax
  unsigned int v48; // edx
  int v49; // r8d
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // r8
  __int64 v54; // rcx
  unsigned __int64 v55; // r10
  unsigned int v56; // r9d
  __int16 *v57; // rax
  int v58; // r8d
  int v59; // r9d
  int v60; // [rsp+20h] [rbp-E0h]
  int v61; // [rsp+28h] [rbp-D8h]
  __int64 v62; // [rsp+28h] [rbp-D8h]
  int v63; // [rsp+30h] [rbp-D0h]
  int v64; // [rsp+30h] [rbp-D0h]
  char v65; // [rsp+38h] [rbp-C8h]
  __int16 v66; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+68h] [rbp-98h] BYREF
  int v68; // [rsp+70h] [rbp-90h] BYREF
  unsigned int ProtectionMask; // [rsp+74h] [rbp-8Ch]
  int v70; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER v71; // [rsp+80h] [rbp-80h] BYREF
  int v72; // [rsp+88h] [rbp-78h] BYREF
  int v73; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v74; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *v75; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v77[3]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v78[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v79; // [rsp+D0h] [rbp-30h]
  __int64 v80; // [rsp+E0h] [rbp-20h]
  __int64 v81; // [rsp+E8h] [rbp-18h]
  __int64 v82; // [rsp+F0h] [rbp-10h]
  int v83; // [rsp+F8h] [rbp-8h]
  int v84; // [rsp+FCh] [rbp-4h]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF

  v71 = a2;
  v72 = 0;
  v73 = 0;
  v70 = 0;
  v66 = 0;
  *a3 = 0LL;
  v67 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( a2.QuadPart >= 2uLL )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2.QuadPart + 4LL) & 0x80u) != 0
      && ((*(_BYTE *)(a1 + 112) & 0x10) == 0 || (*(_DWORD *)(a1 + 40) & 0x20400000) != 0x20000000) )
    {
      return 3221225485LL;
    }
    ProcessPartition = MiGetProcessPartition(*(_QWORD *)(a1 + 88));
    if ( v44 == ProcessPartition )
      v43.QuadPart = 0LL;
    v71 = v43;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = 2;
  v7 = *(_DWORD *)(a1 + 44);
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v6 = 0;
  v75 = CurrentThread;
  ProtectionMask = MiMakeProtectionMask(v7);
  v8 = ProtectionMask;
  if ( ProtectionMask != -1 )
  {
    v9 = *(struct _KPROCESS **)(a1 + 88);
    if ( *(struct _KPROCESS **)(a1 + 96) != v9 )
    {
      KeStackAttachProcess(v9, &ApcState);
      v6 |= 1u;
    }
    v10 = 0;
    if ( (*(_DWORD *)(a1 + 60) & 8) == 0 )
      goto LABEL_11;
    if ( (unsigned int)PdcCreateWatchdogAroundClientCall() )
      v10 |= 4u;
    if ( (v10 & 1) == 0 )
LABEL_11:
      *(_DWORD *)(a1 + 120) &= ~2u;
    if ( (v10 & 4) == 0 && (*(_DWORD *)(a1 + 120) & 8) != 0 )
    {
      v32 = -1073741811;
      goto LABEL_80;
    }
    *(_DWORD *)(a1 + 120) |= v10;
    v11 = (*(_DWORD *)(a1 + 64) & 0x4000000) == 0;
    v68 = 0;
    if ( !v11 && v6 < 2 )
      goto LABEL_87;
    v12 = *(_DWORD *)(a1 + 40);
    if ( (v12 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 2240LL) )
    {
      v32 = -1073741811;
      goto LABEL_80;
    }
    v13 = *(_DWORD *)(a1 + 112) & 0x1A;
    if ( v13 )
    {
      if ( (v13 & 2) != 0 )
      {
        v45 = 0xFFFFLL;
      }
      else if ( (v13 & 8) != 0 )
      {
        v45 = 0x1FFFFFLL;
      }
      else
      {
        v45 = -1LL;
        if ( (v13 & 0x10) != 0 )
          v45 = 0x3FFFFFFFLL;
      }
      if ( ((*(_QWORD *)(a1 + 8) + 1LL) & v45) != 0 || (v45 & *(_QWORD *)a1) != 0 )
      {
LABEL_87:
        v32 = -1073741811;
        goto LABEL_80;
      }
      if ( (v12 & 0x20400000) == 0x400000 )
      {
LABEL_18:
        if ( v6 >= 0x10 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 57)) )
        {
          v32 = -1073741727;
          goto LABEL_80;
        }
        v14 = *(_WORD *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
        v16 = *(_DWORD *)(a1 + 40);
        v66 = v14;
        if ( (v16 & 0x2000) != 0 )
        {
          v32 = MiReserveUserMemory(a1, v15, v8, (unsigned int)&v67, (__int64)&v66);
          if ( v32 >= 0 )
            goto LABEL_38;
        }
        else if ( (v16 & 0x40000000) != 0 )
        {
          v32 = -1073741811;
        }
        else
        {
          if ( !*(_QWORD *)(a1 + 72) )
          {
            v17 = *(_QWORD *)a1;
            v18 = *(_QWORD *)(a1 + 8);
            v76 = *(_QWORD *)a1 >> 12;
            v67 = v17;
            v74 = v18;
            v19 = v18 >> 12;
            v20 = MiObtainReferencedVadEx(v17, 0, &v68);
            v21 = v20;
            if ( !v20 )
            {
              v32 = v68;
              if ( v68 == -1073741664 )
                v32 = -1073741800;
              goto LABEL_80;
            }
            if ( v19 > (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
            {
              v32 = -1073741800;
              goto LABEL_70;
            }
            if ( (*(_DWORD *)(v20 + 48) & 0x2200000) != 0x2200000 && *(_DWORD *)(a1 + 48) )
            {
              v32 = -1073741800;
              goto LABEL_70;
            }
            v22 = v67;
            *a3 = v67;
            v23 = *(_DWORD *)(v20 + 48);
            if ( (v23 & 0x6200000) == 0x4200000 )
            {
              v46 = v23 & 0x70;
              if ( (_BYTE)v46 == 48 )
              {
                v41 = MiCommitEnclavePages(v46, v20, v22, v18, *(_DWORD *)(a1 + 40), v8);
LABEL_67:
                v32 = v41;
                if ( v41 < 0 )
                  goto LABEL_70;
                MiUnlockAndDereferenceVad((PVOID)v21);
LABEL_38:
                if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
                {
                  v56 = *(_DWORD *)(a1 + 40);
                  if ( (v56 & 0x3000) != 0 )
                  {
                    v57 = (__int16 *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
                    if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
                      v59 = 0x2000;
                    PerfInfoLogVirtualAlloc(v67, *(_QWORD *)(a1 + 24), v58, v59, *v57, v66);
                  }
                  else if ( (v56 & 0x1080000) != 0 )
                  {
                    MiLogMemResetInfo(v67, *(_QWORD *)(a1 + 24), v56);
                  }
                }
                if ( (v6 & 1) != 0 )
                  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
                if ( (v8 & 2) != 0 )
                  EtwTiLogAllocExecVm(
                    *(_QWORD *)(a1 + 88),
                    *(unsigned __int8 *)(a1 + 57),
                    v67,
                    *(_QWORD *)(a1 + 32),
                    *(_DWORD *)(a1 + 40),
                    *(_DWORD *)(a1 + 44));
                *a3 = v67;
                return (unsigned int)v32;
              }
              if ( (*(_DWORD *)(a1 + 64) & 0x10000000) == 0 )
              {
                v32 = -1073741664;
                goto LABEL_70;
              }
            }
            v24 = MiVadSupportsPrivateCommit(v20);
            v25 = v67;
            if ( !v24 )
            {
              if ( (*(_DWORD *)(v21 + 48) & 0xA00000) != 0xA00000 )
              {
                v32 = -1073741800;
                goto LABEL_70;
              }
              VadPageSize = MiGetVadPageSize(v21);
              if ( (((VadPageSize << 12) - 1) & (v25 | (v18 + 1))) != 0 )
              {
                v32 = -1073741811;
                goto LABEL_70;
              }
            }
            v26 = *(unsigned int *)(v21 + 52);
            LODWORD(v26) = v26 & 0x7FFFFFFF;
            if ( (v26 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 34) << 31)) >= 0x7FFFFFFFDLL )
            {
              v32 = -1073741800;
              goto LABEL_70;
            }
            if ( (*(_DWORD *)(v21 + 48) & 0x70) != 0x40 )
            {
LABEL_30:
              v27 = *(_DWORD *)(a1 + 40);
              if ( (v27 & 0x1080000) == 0 )
              {
                if ( (v8 & 2) != 0 )
                {
                  v32 = MiAllowProtectionChange(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v21, v8, v25, v18);
                  if ( v32 < 0 )
                    goto LABEL_70;
                  if ( (*(_DWORD *)(v21 + 48) & 0x100) != 0 )
                  {
                    v35 = *(_DWORD *)(a1 + 120);
                    if ( (v35 & 2) == 0 )
                    {
                      v35 &= ~1u;
                      *(_DWORD *)(a1 + 120) = v35;
                    }
                    if ( (v35 & 8) == 0 )
                      *(_DWORD *)(a1 + 120) = v35 & 0xFFFFFFFB;
                  }
                  if ( *(_DWORD *)(a1 + 120) )
                  {
                    if ( (*(_DWORD *)(v21 + 48) & 8) != 0 )
                    {
                      v32 = MiCheckSecuredVad(v21, v67, *(_QWORD *)(a1 + 24), v8, *(_BYTE *)(a1 + 57));
                      if ( v32 < 0 )
                        goto LABEL_70;
                      v6 |= 4u;
                    }
                    v34 = *(unsigned int *)(a1 + 120);
                    v77[0] = v67;
                    v77[1] = v74;
                    v32 = MiCommitVadMetadataBits(v21, v77, v34);
                    if ( v32 < 0 )
                      goto LABEL_70;
                    v6 |= 0x20u;
                  }
                  v25 = v67;
                }
                v28 = *(_DWORD *)(v21 + 48);
                v29 = *(_DWORD *)(a1 + 44);
                if ( (v28 & 0x200000) != 0 )
                {
                  if ( (v29 & 0x88) == 0 && ((v28 & 0x70) != 0x40 || (v29 & 0xFFFFF9F9) == 0) )
                  {
                    if ( (v28 & 8) == 0 )
                    {
LABEL_36:
                      v30 = *(_DWORD *)(a1 + 44);
                      v31 = *(_QWORD *)(a1 + 24);
                      v65 = *(_BYTE *)(a1 + 56);
                      v64 = *(_DWORD *)(a1 + 52);
                      v62 = *(_QWORD *)(a1 + 112);
                      v60 = *(_DWORD *)(a1 + 48);
                      v70 = 0;
                      v32 = MiCommitExistingVad(
                              v21,
                              v25,
                              v31,
                              v30,
                              v60,
                              v62,
                              v64,
                              v65,
                              (volatile signed __int64 **)v71.QuadPart,
                              &v70,
                              &v66);
                      if ( v32 >= 0 )
                      {
                        MiUnlockAndDereferenceVad((PVOID)v21);
                        if ( v70 )
                        {
                          v38 = *(_QWORD *)(a1 + 88);
                          v75 = (struct _KTHREAD *)v67;
                          v76 = *(_QWORD *)(a1 + 24);
                          v39 = *(_DWORD *)(a1 + 44);
                          v40 = v39 | 0x40000000;
                          v68 = 0;
                          if ( v6 < 0x20 )
                            v40 = v39;
                          MmProtectVirtualMemory(
                            *(_QWORD *)(a1 + 96),
                            v38,
                            (unsigned int)&v75,
                            (unsigned int)&v76,
                            v40,
                            (__int64)&v68);
                        }
                        goto LABEL_38;
                      }
                      goto LABEL_70;
                    }
                    if ( !MiLocateVadEvent() )
                    {
                      v32 = MiCheckSecuredVad(v54, v55, *(_QWORD *)(a1 + 24), v8, *(_BYTE *)(a1 + 57));
                      if ( v32 < 0 )
                        goto LABEL_70;
                      v25 = v67;
                      goto LABEL_36;
                    }
                  }
LABEL_123:
                  v32 = -1073741755;
                  goto LABEL_70;
                }
                if ( (v29 & 0x600) != 0 )
                  goto LABEL_123;
                if ( (v28 & 8) == 0
                  || (v6 & 4) != 0
                  || (v32 = MiCheckSecuredVad(v21, v25, *(_QWORD *)(a1 + 24), v8, *(_BYTE *)(a1 + 57)), v32 >= 0) )
                {
                  v36 = **(_QWORD **)(v21 + 72);
                  v66 = *(_WORD *)MiGetControlAreaPartition(v36);
                  if ( *(_QWORD *)(v36 + 64) )
                  {
                    if ( *(__int64 *)(v21 + 120) < 0 )
                    {
                      v71.QuadPart = ((unsigned __int64)(*(_DWORD *)(v21 + 64) & 0xFFFFFF) << 16)
                                   - ((*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12)
                                   + v74
                                   + 1;
                      if ( (unsigned int)MiFlushAcquire(v36, 0LL, 0LL) )
                      {
                        v50 = 0LL;
                        if ( (*(_DWORD *)(v21 + 48) & 0x200000) == 0 && *(_QWORD *)(v21 + 128) )
                        {
                          v50 = *(_QWORD *)(v21 + 128);
                          ObfReferenceObject((PVOID)v50);
                        }
                        MiUnlockVad((__int64)v75, v21);
                        v78[0] = 0LL;
                        v79 = 0LL;
                        v78[1] = 0LL;
                        v80 = 0LL;
                        v82 = 0LL;
                        if ( v50 )
                        {
                          if ( (*(_DWORD *)(v36 + 56) & 0x20) != 0 )
                            v81 = v50 | 1;
                          else
                            v81 = v50 | 2;
                        }
                        else
                        {
                          v81 = v36;
                        }
                        v83 = *(_DWORD *)(v36 + 56);
                        v84 = 4;
                        v32 = MmExtendSection((__int64)v78, &v71, 0);
                        if ( v50 )
                          ObfDereferenceObject((PVOID)v50);
                        MiLockVad((__int64)v75, v21);
                        MiFlushRelease(v36, 0LL, 0LL);
                        if ( v32 >= 0
                          && !(unsigned int)MiVadDeleted(v21)
                          && v76 >= v53
                          && v76 <= v51
                          && v19 <= v51
                          && v19 >= v53
                          && ((*(_DWORD *)(v21 + 48) & 8) == 0
                           || (int)MiCheckSecuredVad(
                                     v52,
                                     v67,
                                     *(_QWORD *)(a1 + 24),
                                     ProtectionMask,
                                     *(_BYTE *)(a1 + 57)) >= 0)
                          && *(__int64 *)(v21 + 120) < 0 )
                        {
                          v32 = MiSetProtectionOnSection(
                                  *(_QWORD *)(a1 + 88),
                                  v21,
                                  v67,
                                  v74,
                                  *(_DWORD *)(a1 + 44),
                                  0,
                                  &v73,
                                  (__int64)&v72);
                        }
                      }
                      else
                      {
                        v32 = -1073741670;
                      }
                    }
                    else
                    {
                      v32 = -1073741791;
                    }
                    goto LABEL_70;
                  }
                  v32 = MiCommitPagefileBackedSection(
                          *(_QWORD *)(a1 + 88),
                          v21,
                          v37,
                          v74,
                          *(_DWORD *)(a1 + 44),
                          v61,
                          v63,
                          &v73,
                          (__int64)&v72);
                  if ( v32 >= 0 )
                  {
                    MiUnlockAndDereferenceVad((PVOID)v21);
                    LOBYTE(v8) = ProtectionMask;
                    goto LABEL_38;
                  }
                }
LABEL_70:
                MiUnlockAndDereferenceVad((PVOID)v21);
                goto LABEL_80;
              }
              v41 = MiResetVirtualMemory(*(_QWORD *)(a1 + 96), v25, v18, v21, v27, *(_BYTE *)(a1 + 57));
              goto LABEL_67;
            }
            v48 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
            *(_DWORD *)(a1 + 44) = v48;
            v49 = *(_DWORD *)(v21 + 48) & 0xC00;
            if ( (*(_DWORD *)(v21 + 48) & 0x380) != 0 && v49 == 3072 )
            {
              v48 |= 0x400u;
            }
            else
            {
              if ( v49 != 1024 )
                goto LABEL_122;
              v48 |= 0x200u;
            }
            *(_DWORD *)(a1 + 44) = v48;
LABEL_122:
            ProtectionMask = MiMakeProtectionMask(v48);
            v8 = ProtectionMask;
            if ( ProtectionMask == -1 )
              goto LABEL_123;
            goto LABEL_30;
          }
          v32 = -1073741811;
        }
LABEL_80:
        if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0
          && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0
          && v32 == -1073740748 )
        {
          MiLogMemResetInfo(v67, *(_QWORD *)(a1 + 24), 0LL);
        }
        if ( (v6 & 1) != 0 )
          KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
        return (unsigned int)v32;
      }
    }
    else if ( (v12 & 0x20400000) != 0x20000000 )
    {
      goto LABEL_18;
    }
    v6 |= 0x10u;
    goto LABEL_18;
  }
  return 3221225541LL;
}
