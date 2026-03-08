/*
 * XREFs of MiDeleteSystemPagableVm @ 0x1402B04B0
 * Callers:
 *     MmFreePoolMemory @ 0x14020DD58 (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x14038BEB8 (MiDeleteBootRange.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A2DCE0 (MmReturnChargesToLockPagedPool.c)
 *     MiUnmapPatchTable @ 0x140A3953C (MiUnmapPatchTable.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiInitializeTbFlushStamps @ 0x14020E538 (MiInitializeTbFlushStamps.c)
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiWriteWsle @ 0x140228948 (MiWriteWsle.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiDecrementCombinedPteEx @ 0x14029DAF4 (MiDecrementCombinedPteEx.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402B0EB0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiImageProtoChargedCommit @ 0x1402B0EDC (MiImageProtoChargedCommit.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiReturnSystemCharges @ 0x1402D8C88 (MiReturnSystemCharges.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiAppendWsleCluster @ 0x14031D6E0 (MiAppendWsleCluster.c)
 *     MiTerminateWsleCluster @ 0x1403234E0 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140349598 (MI_WSLE_LOG_ACCESS.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     MiIsPfnSystemCharged @ 0x1403A0E6C (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiDriverPageIsDangling @ 0x14062A198 (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v6; // r12
  __int64 v9; // r14
  char v11; // r13
  int v12; // eax
  unsigned __int64 valid; // rdi
  char v14; // r8
  int v15; // r9d
  unsigned __int64 v16; // r15
  unsigned __int8 v17; // bl
  __int64 v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r13
  __int64 v21; // rdi
  int v22; // r12d
  unsigned __int64 v23; // r15
  __int64 v24; // rdi
  _KPROCESS *Process; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // zf
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  ULONG_PTR v39; // rcx
  __int64 v40; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  struct _LIST_ENTRY *v44; // rax
  char v45; // rdx^7
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int8 v53; // [rsp+30h] [rbp-D0h]
  int v55; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v56; // [rsp+48h] [rbp-B8h]
  int v57; // [rsp+58h] [rbp-A8h]
  int v58; // [rsp+5Ch] [rbp-A4h]
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  __int64 v60; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+78h] [rbp-88h] BYREF
  int v62; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v63; // [rsp+80h] [rbp-80h]
  __int128 v64; // [rsp+88h] [rbp-78h] BYREF
  __int128 v65; // [rsp+98h] [rbp-68h]
  _QWORD v66[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  _QWORD v70[3]; // [rsp+D8h] [rbp-28h] BYREF
  int v71; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v72; // [rsp+F4h] [rbp-Ch]
  __int16 v73; // [rsp+F6h] [rbp-Ah]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  __int64 v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  _BYTE v77[152]; // [rsp+110h] [rbp+10h] BYREF

  v6 = a6;
  v69 = a2;
  v9 = a1;
  v73 = 0;
  v67 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  memset(v77, 0, sizeof(v77));
  v11 = a5;
  v55 = 0;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 56) & 0x800) == 0 )
      goto LABEL_3;
  }
  else if ( (a5 & 0x20) == 0 )
  {
    goto LABEL_3;
  }
  v55 = 1;
LABEL_3:
  v56 = 0LL;
  v57 = 0;
  v12 = 10;
  v62 = a5 & 1;
  valid = 0LL;
  DWORD2(v65) = 10;
  if ( (a5 & 1) == 0 )
  {
    v12 = 14;
    DWORD2(v65) = 14;
  }
  if ( (a5 & 4) != 0 )
    DWORD2(v65) = v12 | 0x10;
  v14 = *(_BYTE *)(v9 + 184) & 7;
  v15 = 0;
  v68 = 0LL;
  v58 = 0;
  if ( (unsigned __int8)(v14 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 && dword_140C67C68 )
      v57 = 1;
    v15 = 2;
    v58 = 2;
  }
  v60 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v9 + 174));
  v74 = 20LL;
  v71 = v15;
  v72 = 0;
  v75 = 0LL;
  v76 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v66[2] = (unsigned int)a4;
    v66[0] = 0LL;
    v66[1] = (__int64)(a3 << 25) >> 16;
    if ( v14 == 4 )
    {
      v66[0] = 6LL;
    }
    else if ( v14 == 3 )
    {
      v66[0] = 4LL;
    }
    else
    {
      v66[0] = v66[0] & 0xFFF0000000000007uLL | (16LL
                                               * *(unsigned int *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25]
                                                                 + 8)) | 7;
    }
    v70[1] = 24LL;
    v70[0] = v66;
    EtwTraceKernelEvent((unsigned int)v70, 1, 536870913, 633, 289413892);
  }
  v16 = a3 + 8 * a4;
  v63 = v16;
  v53 = MiLockWorkingSetShared(v9);
  v17 = v53;
  while ( a3 < v16 )
  {
    if ( valid )
    {
      if ( (a3 & 0xFFF) != 0 )
        goto LABEL_13;
      MiFlushTbList(&v71);
      v6[1] += MiTerminateWsleCluster(&v64);
      MiUnlockPageTableInternal(v9, valid);
    }
    valid = MiLockLowestValidPageTable(v9, a3, &v67);
    v56 = valid;
    if ( valid != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v9, valid);
      valid = 0LL;
      v56 = 0LL;
      a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      continue;
    }
LABEL_13:
    v18 = *(_QWORD *)a3;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v42 = *((_QWORD *)&Flink->Flink + ((a3 >> 3) & 0x1FF));
        v43 = v18 | 0x20;
        if ( (v42 & 0x20) == 0 )
          v43 = *(_QWORD *)a3;
        v18 = v43;
        if ( (v42 & 0x42) != 0 )
          v18 = v43 | 0x42;
      }
    }
    v59 = v18;
    if ( !v18 )
      goto LABEL_31;
    if ( (v18 & 1) != 0 )
    {
      v19 = (__int64)((a3 << 25) - v68) >> 16;
      v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v59) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v21 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
      if ( (a5 & 8) != 0 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v20) )
        {
          v61 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v61);
            while ( *(__int64 *)(v20 + 24) < 0 );
          }
          *(_BYTE *)(v20 + 35) &= ~0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v9 = a1;
          if ( v21 == v60 )
            ++v6[1];
        }
        else
        {
          v9 = a1;
        }
        goto LABEL_30;
      }
      v22 = 0;
      v23 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v24 = *(_QWORD *)v23;
      if ( (unsigned int)MiPteInShadowRange(v23) )
      {
        if ( (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 && (v24 & 1) != 0 && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v44 = Process[1].ProcessListEntry.Flink;
            if ( v44 )
            {
              v45 = HIBYTE(v24);
              v46 = *((_QWORD *)&v44->Flink + ((v23 >> 3) & 0x1FF));
              if ( (v46 & 0x20) == 0 )
                v45 = HIBYTE(v24);
              HIBYTE(v24) = v45;
              if ( (v46 & 0x42) != 0 )
                HIBYTE(v24) = v45;
            }
          }
        }
      }
      if ( (HIBYTE(v24) & 0xF) != 9 )
      {
        v9 = a1;
        if ( v57 )
          MI_WSLE_LOG_ACCESS(a1, a3, v26, v27);
        if ( (HIBYTE(v24) & 0xF) == 8 )
          v22 = 1;
        if ( !(unsigned int)MiAppendWsleCluster(&v64, a1, a3) )
        {
          a6[1] += MiTerminateWsleCluster(&v64);
          MiAppendWsleCluster(&v64, a1, a3);
        }
        if ( *(__int64 *)(v20 + 40) < 0 )
        {
          v38 = *(_QWORD *)(v20 + 16);
          if ( (v38 & 0x400) == 0 || (v18 & 0x200) != 0 )
            goto LABEL_68;
          if ( qword_140C657C0 && (v38 & 0x10) == 0 )
            v38 &= ~qword_140C657C0;
          if ( (*(_DWORD *)(*(_QWORD *)(v38 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_68:
            ++a6[4];
        }
        else
        {
          ++a6[4];
        }
        v28 = v22 == 0;
        v6 = a6;
        if ( v28 )
        {
LABEL_29:
          v16 = v63;
LABEL_30:
          v11 = a5;
          goto LABEL_31;
        }
LABEL_60:
        ++*v6;
        if ( v58 == 2 )
          MiReturnSystemCharges(v60, 1LL, 1LL);
        goto LABEL_29;
      }
      MiWriteWsle((__int64)Process, v19);
      v6 = a6;
      MiDeleteValidSystemPage(a1, a3, a5 & 4 | 0x10u, a6);
      if ( v62 )
      {
LABEL_58:
        MiInsertTbFlushEntry(&v71, v19, 1LL);
        goto LABEL_59;
      }
      v59 = 0LL;
      MiInitializeTbFlushStamps(&v59);
      v47 = v59;
      if ( (unsigned int)MiPteInShadowRange(a3) )
      {
        if ( (unsigned int)MiPteHasShadow(v49, v48, v50) )
        {
          if ( !HIBYTE(word_140C6697C) && (v47 & 1) != 0 )
            v47 |= 0x8000000000000000uLL;
          *(_QWORD *)a3 = v47;
          MiWritePteShadow(a3, v47);
LABEL_137:
          v51 = v59;
          if ( qword_140C657C0 && (v59 & 0x10) == 0 )
            v51 = v59 & ~qword_140C657C0;
          if ( (v51 & 0xFFFFFFFF00000000uLL) == 0 )
            goto LABEL_58;
LABEL_59:
          v9 = a1;
          goto LABEL_60;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v47 & 1) != 0 )
        {
          v47 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a3 = v47;
      goto LABEL_137;
    }
    if ( (v18 & 0x400) != 0 )
    {
      if ( (a5 & 8) != 0 )
        goto LABEL_31;
      if ( (v18 & 2) != 0 )
      {
LABEL_51:
        ++v6[4];
      }
      else if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v18) )
      {
        ++v6[4];
        if ( qword_140C657C0 && (v18 & 0x10) == 0 )
          v18 &= ~qword_140C657C0;
        v40 = **(_QWORD **)((((v18 >> 16) - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        if ( (unsigned int)MiDecrementCombinedPteEx(v9, v18 >> 16, 0) == 3 && v40 == v60 )
          ++v6[1];
      }
      else
      {
        if ( v55 )
          goto LABEL_51;
        if ( qword_140C657C0 && (v18 & 0x10) == 0 )
          v18 &= ~qword_140C657C0;
        if ( (unsigned int)MiImageProtoChargedCommit(v69, v18 >> 16) )
          goto LABEL_51;
      }
      v34 = ZeroPte;
      if ( !(unsigned int)MiPteInShadowRange(a3) )
        goto LABEL_53;
      if ( !(unsigned int)MiPteHasShadow(v36, v35, v37) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v34 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_53:
        *(_QWORD *)a3 = v34;
        goto LABEL_31;
      }
      if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
        v34 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)a3 = v34;
      MiWritePteShadow(a3, v34);
      goto LABEL_31;
    }
    if ( (v18 & 0x800) != 0 )
    {
      v39 = MiLockTransitionLeafPageEx(a3);
      if ( !v39 )
        goto LABEL_34;
      if ( (a5 & 8) != 0 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v39) )
        {
          *(_BYTE *)(v52 + 35) &= ~0x20u;
          ++v6[1];
        }
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (a5 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v39) )
        {
          MiDriverPageIsDangling();
          *(_BYTE *)(v39 + 35) &= ~0x20u;
        }
        if ( (unsigned int)MiDeleteTransitionPte(a3, v39, 0x11u, 1) == 3 )
          ++v6[1];
        ++v6[4];
      }
    }
    else if ( (v18 & 0x3E0) != 0 && (v11 & 8) == 0 )
    {
      MiReleasePageFileSpace(v60, v18, 1LL);
      v30 = ZeroPte;
      if ( !(unsigned int)MiPteInShadowRange(a3) )
        goto LABEL_43;
      if ( (unsigned int)MiPteHasShadow(v32, v31, v33) )
      {
        if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
          v30 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a3 = v30;
        MiWritePteShadow(a3, v30);
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v30 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_43:
        *(_QWORD *)a3 = v30;
      }
      ++v6[4];
    }
LABEL_31:
    a3 += 8LL;
    if ( a3 == v16 || (a3 & 0x78) != 0 )
    {
      valid = v56;
    }
    else
    {
      valid = v56;
      if ( (unsigned int)MiWorkingSetIsContended(v9)
        || (unsigned int)MiPageTableLockIsContended(v9, v56)
        || KeShouldYieldProcessor() )
      {
        MiFlushTbList(&v71);
        v6[1] += MiTerminateWsleCluster(&v64);
        MiUnlockPageTableInternal(v9, v56);
        v17 = v53;
        MiUnlockWorkingSetShared(v9, v53);
        valid = 0LL;
        v56 = 0LL;
        MiLockWorkingSetShared(v9);
        continue;
      }
    }
LABEL_34:
    v17 = v53;
  }
  MiFlushTbList(&v71);
  if ( valid )
  {
    v6[1] += MiTerminateWsleCluster(&v64);
    MiUnlockPageTableInternal(v9, valid);
  }
  return MiUnlockWorkingSetShared(v9, v17);
}
