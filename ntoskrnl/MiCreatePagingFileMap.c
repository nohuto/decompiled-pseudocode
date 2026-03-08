/*
 * XREFs of MiCreatePagingFileMap @ 0x1407F3500
 * Callers:
 *     MiCreateSection @ 0x1407D05D0 (MiCreateSection.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14020FD6C (MiFreeLargeZeroPages.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiReturnResident @ 0x1402A52C8 (MiReturnResident.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 *     MiAllocateLargeZeroPages @ 0x14034DCB0 (MiAllocateLargeZeroPages.c)
 *     MiInitializeLargePfnList @ 0x14035059C (MiInitializeLargePfnList.c)
 *     MiUpdateControlAreaCommitCount @ 0x140368568 (MiUpdateControlAreaCommitCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140368AE0 (MiUpdateSystemProtoPtesTree.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiUpdateLargePageSectionPfns @ 0x140626B50 (MiUpdateLargePageSectionPfns.c)
 *     MiDeleteSectionAwe @ 0x140647390 (MiDeleteSectionAwe.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     MiInitializePrototypePtes @ 0x1407F3F04 (MiInitializePrototypePtes.c)
 *     MmObtainChargesToLockPagedPool @ 0x14085CC30 (MmObtainChargesToLockPagedPool.c)
 *     MiLogSectionCreate @ 0x140A2C970 (MiLogSectionCreate.c)
 *     MmLockPreChargedPagedPool @ 0x140A2DC90 (MmLockPreChargedPagedPool.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A2DCE0 (MmReturnChargesToLockPagedPool.c)
 *     MiAllocateAweInfo @ 0x140A3D3BC (MiAllocateAweInfo.c)
 *     MiValidateUserPhysicalExternalFlags @ 0x140A3F608 (MiValidateUserPhysicalExternalFlags.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePagingFileMap(__int64 a1)
{
  int v2; // esi
  char v3; // di
  int v4; // r13d
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 *v8; // rax
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rcx
  char *Pool; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // r12
  __int16 v14; // dx
  int v15; // ecx
  int v16; // eax
  __int16 v17; // ax
  __int64 v18; // r11
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  char *v21; // r8
  char *v22; // r9
  unsigned __int64 v23; // rax
  __int16 v24; // dx
  __int16 v25; // dx
  PVOID v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // zf
  unsigned __int64 v31; // r12
  __int16 v32; // ax
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // r12
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // r8d
  __int64 v40; // r9
  int v41; // edx
  unsigned int v42; // ecx
  __int64 v43; // r8
  unsigned __int64 v44; // r14
  PVOID *v45; // rsi
  __int64 v46; // r8
  char *v47; // rsi
  char *v48; // rdi
  int v49; // eax
  __int64 v50; // r15
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdi
  char v56; // [rsp+30h] [rbp-D0h]
  char v57; // [rsp+31h] [rbp-CFh]
  PVOID P; // [rsp+38h] [rbp-C8h]
  char *Pa; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v60; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v61; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+50h] [rbp-B0h]
  _DWORD *v63; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+50h] [rbp-B0h]
  struct _KTHREAD *v65; // [rsp+58h] [rbp-A8h]
  __int64 v66; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v67; // [rsp+60h] [rbp-A0h]
  unsigned int v68; // [rsp+68h] [rbp-98h]
  __int64 v69; // [rsp+70h] [rbp-90h]
  char *v70; // [rsp+78h] [rbp-88h]
  __int64 v71; // [rsp+78h] [rbp-88h]
  unsigned __int64 v72; // [rsp+80h] [rbp-80h]
  __int64 v73; // [rsp+88h] [rbp-78h]
  char *v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+98h] [rbp-68h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-60h]
  _QWORD v77[10]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v78[12]; // [rsp+100h] [rbp+0h] BYREF

  memset(v78, 0, sizeof(v78));
  memset(v77, 0, sizeof(v77));
  v2 = *(_DWORD *)(a1 + 16);
  if ( (v2 & 0x1000000) != 0 )
    return 3221225504LL;
  MiInitializeLargePfnList(v78);
  v3 = *(_BYTE *)(a1 + 192);
  v57 = v3;
  if ( v3 )
  {
    if ( (int)MiValidateUserPhysicalExternalFlags((unsigned int)v2) < 0 )
      return 3221225485LL;
    if ( (*(_DWORD *)(a1 + 28) & 7) != 4 )
      return 3221225541LL;
    if ( (*(_DWORD *)(a1 + 32) & 7) != 4 )
      return 3221225485LL;
    v4 = v2 & 0x8000000;
  }
  else
  {
    if ( v2 >= 0 )
    {
      if ( (v2 & 0x20000) == 0 )
      {
        v4 = v2 & 0x8000000;
        goto LABEL_6;
      }
      return 3221225716LL;
    }
    v4 = v2 & 0x8000000;
    if ( (v2 & 0x8000000) == 0 )
      return 3221225716LL;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 72)) )
    return 3221225569LL;
LABEL_6:
  v5 = *(_QWORD *)(a1 + 152);
  if ( v3 )
  {
    if ( v5 )
      return 3221225714LL;
    v6 = 1LL;
  }
  else
  {
    if ( !v5 )
      return 3221225714LL;
    if ( v5 > (-(__int64)(v4 != 0) & 0xFFFFF001000uLL) - 4096 )
      return 3221225536LL;
    v6 = (v5 + 4095) >> 12;
  }
  CurrentThread = KeGetCurrentThread();
  v75 = 0LL;
  v69 = 0LL;
  v8 = *(__int64 **)(a1 + 176);
  v56 = 0;
  v65 = CurrentThread;
  if ( v8 )
  {
    v33 = *v8;
    v61 = (unsigned __int16 *)v33;
    v9 = (volatile signed __int64 *)v33;
    if ( (unsigned __int16 *)v33 != MiSystemPartition )
    {
      v61 = (unsigned __int16 *)v33;
      if ( (*(_DWORD *)(v33 + 4) & 0x80u) != 0 )
        return 3221225659LL;
    }
  }
  else
  {
    v9 = (volatile signed __int64 *)MiSystemPartition;
    v61 = MiSystemPartition;
  }
  if ( !v4 )
    goto LABEL_17;
  if ( (v2 & 0x80000) != 0 && (v6 & 0xF) != 0 || v2 < 0 && (v6 & 0x1FF) != 0 )
    return 3221225714LL;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)v9, v6, 0LL) )
    return 3221225773LL;
  if ( v2 < 0 )
  {
    if ( !(unsigned int)MiChargeResident((void *)v9, v6, 0LL) )
      goto LABEL_121;
    v34 = *(_DWORD *)(a1 + 172);
    v56 = 1;
    v35 = v34 ? v34 - 1 : *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 33364);
    v77[5] = -1LL;
    LODWORD(v77[4]) = v35;
    HIDWORD(v77[4]) = *(_DWORD *)(a1 + 32);
    v77[2] = v6;
    v77[3] = 512LL;
    v77[9] = v78;
    v36 = (_DWORD *)(qword_140C65718 + 4LL * v35 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v63 = &v36[(unsigned __int16)KeNumberNodes];
    v77[1] = v9;
    MiAllocateLargeZeroPages((unsigned int *)v77);
    v37 = v77[8];
    v38 = v77[2];
    v61 = (unsigned __int16 *)v9;
    if ( v77[8] != v77[2] )
    {
      v61 = (unsigned __int16 *)v9;
      do
      {
        if ( ++v36 == v63 )
          break;
        LODWORD(v77[4]) = *v36;
        MiAllocateLargeZeroPages((unsigned int *)v77);
        v37 = v77[8];
        v38 = v77[2];
      }
      while ( v77[8] != v77[2] );
      if ( v37 != v38 )
        goto LABEL_121;
    }
    v69 = v78[2];
  }
LABEL_17:
  P = 0LL;
  if ( (v2 & 0x88000000) == 0x8000000 )
  {
    v72 = v6;
    v10 = 1LL;
LABEL_19:
    v60 = v10;
    goto LABEL_20;
  }
  v31 = (unsigned __int64)(((v2 >> 31) & 0x100000u) + 0x100000) >> 3;
  v72 = v31;
  v10 = v6 / v31;
  v60 = v6 / v31;
  if ( v6 % v31 )
  {
    ++v10;
    goto LABEL_19;
  }
LABEL_20:
  Pool = (char *)MiAllocatePool(64, 88 * v10 + 128, 0x61436D4Du);
  if ( !Pool )
    goto LABEL_120;
  v12 = MiAllocatePool(256, 0x50uLL, 0x6765534Du);
  v13 = v12;
  if ( !v12 )
  {
LABEL_109:
    v44 = 0LL;
    if ( v60 )
      goto LABEL_110;
    goto LABEL_116;
  }
  v12[9] = 0LL;
  v14 = (*((_WORD *)Pool + 30) ^ *(_WORD *)v9) & 0x3FF;
  *(_QWORD *)Pool = v12;
  *((_WORD *)Pool + 30) ^= v14;
  *((_DWORD *)Pool + 24) = v60;
  *((_QWORD *)Pool + 2) = Pool + 8;
  *((_QWORD *)Pool + 1) = Pool + 8;
  v15 = *((_DWORD *)Pool + 14);
  *((_QWORD *)Pool + 14) = 1LL;
  *((_QWORD *)Pool + 3) = 1LL;
  *((_QWORD *)Pool + 6) = 1LL;
  if ( (v2 & 0x200000) != 0 )
  {
    v15 |= 0x40u;
    *((_DWORD *)Pool + 14) = v15;
  }
  if ( (v2 & 0x4000000) != 0 )
  {
    v15 |= 0x1000u;
    *((_DWORD *)Pool + 14) = v15;
  }
  if ( v4 )
  {
    v15 |= 0x2000u;
    *((_DWORD *)Pool + 14) = v15;
  }
  if ( (v2 & 0x80000) != 0 )
  {
    v15 |= 0x80000000;
    *((_DWORD *)Pool + 14) = v15;
  }
  v16 = *(_DWORD *)(a1 + 172);
  *((_QWORD *)Pool + 13) = 0LL;
  *((_DWORD *)Pool + 14) = v15 ^ (v15 ^ (v16 << 20)) & 0x7F00000;
  memset(v13, 0, 0x48uLL);
  if ( (v2 & 0x10000000) != 0 )
  {
    v32 = 0x8000;
  }
  else
  {
    if ( (v2 & 0x40000000) == 0 )
      goto LABEL_32;
    v32 = 0x4000;
  }
  *((_WORD *)v13 + 6) |= v32;
LABEL_32:
  *((_BYTE *)v13 + 14) ^= (*((_BYTE *)v13 + 14) ^ (2 * *(_BYTE *)(a1 + 32))) & 0x3E;
  *((_DWORD *)v13 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v13[3] = v6 << 12;
  v17 = (*((_WORD *)v13 + 6) ^ WORD2(v6)) & 0x3FF;
  *v13 = Pool;
  *((_WORD *)v13 + 6) ^= v17;
  *((_DWORD *)v13 + 2) = v6;
  if ( v57 )
  {
    v39 = *(_DWORD *)(a1 + 16);
    v40 = 1LL;
    if ( (v39 & 0x20000) != 0 )
    {
      v41 = 4;
    }
    else if ( v39 >= 0 )
    {
      v41 = (v39 & 0x80000) != 0;
    }
    else
    {
      v41 = 2;
    }
    v42 = v41 | 0x40;
    if ( (v39 & 0x10000) == 0 )
      v42 = v41;
    if ( (v39 & 0x10000000) != 0 )
    {
      v42 |= 0x20u;
    }
    else if ( (v39 & 0x40000000) != 0 )
    {
      v42 |= 0x10u;
    }
    v43 = v42 | 8;
    if ( (*(_DWORD *)(a1 + 196) & 1) == 0 )
      v43 = v42;
    LOBYTE(v40) = *(_BYTE *)(a1 + 72);
    if ( (int)MiAllocateAweInfo(Pool, 0LL, v43, v40, &v75) < 0 )
      goto LABEL_109;
  }
  v18 = 0LL;
  v19 = 0LL;
  v73 = 0LL;
  v20 = v6;
  v21 = Pool + 128;
  v22 = Pool + 128;
  v67 = v6;
  v74 = Pool + 128;
  v62 = 0LL;
  if ( !v60 )
  {
LABEL_41:
    *((_QWORD *)v22 + 2) = 0LL;
    v13[8] = P;
    if ( v4 )
    {
      --v65->SpecialApcDisable;
      v28 = KeAbPreAcquire((__int64)(v13 + 5), 0LL);
      v71 = v28;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v13 + 10, 0LL) )
      {
        ExfAcquirePushLockExclusiveEx(v13 + 5, v28, (__int64)(v13 + 5));
        v28 = v71;
      }
      if ( v28 )
        *(_BYTE *)(v28 + 18) = 1;
      MiUpdateControlAreaCommitCount((__int64)Pool, v6);
      if ( (_InterlockedExchangeAdd64(v13 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13 + 5);
      KeAbPostRelease((ULONG_PTR)(v13 + 5));
      v29 = v65->SpecialApcDisable++ == -1;
      if ( v29 && ($C71981A45BEB2B45F82C232A7085991E *)v65->ApcState.ApcListHead[0].Flink != &v65->152 )
        KiCheckForKernelApcDelivery();
      if ( v2 < 0 )
      {
        v64 = 0LL;
        *((_WORD *)v13 + 6) |= 0x1000u;
        *((_DWORD *)Pool + 23) |= 0x10000u;
        if ( v60 )
        {
          v47 = Pool + 176;
          do
          {
            v48 = (char *)*((_QWORD *)v47 - 5);
            Pa = v48;
            MmLockPreChargedPagedPool(v48, 8LL * *((unsigned int *)v47 - 1));
            v49 = *(_DWORD *)v47 & 0x3FFFFFFF | 0x40000000;
            *(_DWORD *)v47 = v49;
            if ( v69 )
            {
              --v69;
              *(_DWORD *)v47 = v49 & 0x3FFFFFFF | 0x80000000;
            }
            memset(v48, 0, 8LL * *((unsigned int *)v47 - 1));
            MiUpdateSystemProtoPtesTree((unsigned __int64 *)v47 + 1, 1);
            v50 = 0LL;
            v66 = 0LL;
            if ( *((_DWORD *)v47 - 1) )
            {
              do
              {
                v51 = 0LL;
                v52 = v78;
                while ( (_QWORD *)*v52 == v52 )
                {
                  v51 = (unsigned int)(v51 + 1);
                  v52 += 3;
                  if ( (unsigned int)v51 >= 4 )
                    goto LABEL_141;
                }
                v53 = &v78[3 * v51];
                v50 = *v53;
                if ( *(__int64 **)(*v53 + 8) != v53 || (v54 = *(_QWORD *)v50, *(_QWORD *)(*(_QWORD *)v50 + 8LL) != v50) )
                  __fastfail(3u);
                *v53 = v54;
                *(_QWORD *)(v54 + 8) = v53;
                --v78[3 * v51 + 2];
LABEL_141:
                v55 = MiLargePageSizes[(unsigned int)v51];
                MiUpdateLargePageSectionPfns(v50, (unsigned __int64)Pa, *(_DWORD *)(a1 + 32));
                v66 += v55;
                Pa += 8 * v55;
              }
              while ( v66 != *((_DWORD *)v47 - 1) );
            }
            v47 += 88;
            ++v64;
          }
          while ( v64 < v60 );
          v9 = (volatile signed __int64 *)v61;
        }
      }
      else
      {
        MiInitializePrototypePtes(*((_QWORD *)Pool + 17));
        MiUpdateSystemProtoPtesTree((unsigned __int64 *)Pool + 23, 1);
      }
    }
    *(_QWORD *)(a1 + 64) = Pool;
    _InterlockedAdd64(v9 + 178, 1uLL);
    *(_DWORD *)a1 |= 4u;
    *(_QWORD *)(a1 + 128) = _InterlockedCompareExchange64(v13 + 3, -1LL, -1LL);
    if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 )
      MiLogSectionCreate(Pool, 1LL);
    return 0LL;
  }
  while ( 1 )
  {
    v22 = v21;
    v23 = *((_QWORD *)v21 + 10) & 0xFFFFFFFFFFFFFFF9uLL;
    *(_QWORD *)v21 = Pool;
    v70 = v21;
    *((_QWORD *)v21 + 10) = v23 | 1;
    v24 = (*((_WORD *)v21 + 16) ^ (2 * *(_WORD *)(a1 + 32))) & 0x3E;
    *((_DWORD *)v21 + 9) = v18;
    v25 = *((_WORD *)v21 + 16) ^ v24;
    if ( v67 > v72 )
      v20 = v72;
    v67 -= v20;
    *((_DWORD *)v21 + 11) = v20;
    *((_WORD *)v21 + 16) = v25 & 0x3F | (WORD2(v18) << 6);
    v76 = 8 * v20;
    if ( v4 )
      break;
LABEL_40:
    v27 = *((unsigned int *)v21 + 11);
    v21 += 88;
    v18 += v27;
    ++v19;
    v73 = v18;
    v74 = v21;
    *((_QWORD *)v22 + 2) = v21;
    v62 = v19;
    if ( v19 >= v60 )
      goto LABEL_41;
    v20 = v67;
  }
  v26 = MiAllocatePool(274, 8 * v20, 0x74536D4Du);
  P = v26;
  if ( !v26 )
    goto LABEL_128;
  if ( v2 >= 0 )
  {
LABEL_39:
    v21 = v74;
    v22 = v70;
    v19 = v62;
    v18 = v73;
    *((_QWORD *)v74 + 1) = v26;
    goto LABEL_40;
  }
  if ( (unsigned int)MmObtainChargesToLockPagedPool(v26, v76) )
  {
    v26 = P;
    goto LABEL_39;
  }
  ExFreePoolWithTag(P, 0);
LABEL_128:
  v44 = 0LL;
LABEL_110:
  v68 = v2 & 0x88000000;
  v45 = (PVOID *)(Pool + 136);
  do
  {
    if ( !*v45 )
      break;
    if ( v68 == -2013265920 )
      MmReturnChargesToLockPagedPool(*v45, 8LL * *((unsigned int *)v45 + 9));
    ExFreePoolWithTag(*v45, 0);
    v45 += 11;
    ++v44;
  }
  while ( v44 < v60 );
  v9 = (volatile signed __int64 *)v61;
LABEL_116:
  if ( v75 )
    MiDeleteSectionAwe((__int64)Pool);
  ExFreePoolWithTag(Pool, 0);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
LABEL_120:
  if ( v4 )
  {
LABEL_121:
    MiFreeLargeZeroPages((int)v9, (__int64)v78, 0);
    if ( v56 )
      MiReturnResident((__int64)v9, v6);
    MiReturnCommit((__int64)v9, v6, v46);
  }
  return 3221225626LL;
}
