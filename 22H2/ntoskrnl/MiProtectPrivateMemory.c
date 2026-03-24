/*
 * XREFs of MiProtectPrivateMemory @ 0x14028E080
 * Callers:
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14025AB70 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiIncreaseUsedPtesCount @ 0x140289E54 (MiIncreaseUsedPtesCount.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiGetUsedPtesHandle @ 0x14028D0E0 (MiGetUsedPtesHandle.c)
 *     MiComputePageCommitment @ 0x14028D1E0 (MiComputePageCommitment.c)
 *     MiUpdatePfnProtection @ 0x14028E950 (MiUpdatePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x1402B1430 (MiGetPageProtection.c)
 *     MiSanitizePfnProtection @ 0x1402B4920 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x1402B4990 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     MiRotatedToFrameBuffer @ 0x140307C88 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x140315C64 (MiMakeProtoLeafValid.c)
 *     MiMakeVaRangeNoAccess @ 0x140321CF4 (MiMakeVaRangeNoAccess.c)
 *     MiSetProtectionOnTransitionPte @ 0x140363CE4 (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiFaultInPagedPool @ 0x14052D054 (MiFaultInPagedPool.c)
 *     MiMakeProtoPrivate @ 0x140547924 (MiMakeProtoPrivate.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x14063BF58 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v10; // r13
  ULONG_PTR v11; // r15
  unsigned int v12; // edx
  unsigned int v13; // edi
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  ULONG_PTR v24; // rsi
  __int64 v25; // rcx
  unsigned __int8 v26; // di
  __int64 v27; // r12
  int PageProtection; // eax
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // r9
  ULONG_PTR v34; // rbx
  int v35; // eax
  int v36; // r9d
  __int64 v37; // rcx
  _DWORD *v38; // r9
  ULONG_PTR v39; // r14
  unsigned __int64 Flink; // rdx
  __int64 v41; // rdx
  __int64 v42; // r8
  _DWORD *v43; // r9
  ULONG_PTR v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  struct _LIST_ENTRY *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdi
  int ProtoPrivate; // eax
  __int64 v55; // rdx
  unsigned int updated; // eax
  int v57; // eax
  __int64 UsedPtesHandle; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  ULONG_PTR v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v70; // [rsp+30h] [rbp-D0h]
  unsigned int v71; // [rsp+34h] [rbp-CCh]
  __int16 v74; // [rsp+44h] [rbp-BCh] BYREF
  int v75; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v76; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+58h] [rbp-A8h]
  __int64 v78; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+68h] [rbp-98h]
  __int64 v80; // [rsp+70h] [rbp-90h]
  __int64 v81; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  __int64 v83; // [rsp+88h] [rbp-78h]
  _QWORD v84[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v85; // [rsp+B0h] [rbp-50h]
  __int128 v86; // [rsp+C0h] [rbp-40h]
  __int128 v87; // [rsp+D0h] [rbp-30h]
  __int128 v88; // [rsp+E0h] [rbp-20h]
  __int128 v89; // [rsp+F0h] [rbp-10h]
  __int128 v90; // [rsp+100h] [rbp+0h]
  __int128 v91; // [rsp+110h] [rbp+10h]
  __int128 v92; // [rsp+120h] [rbp+20h]
  __int128 v93; // [rsp+130h] [rbp+30h]
  __int64 v94; // [rsp+140h] [rbp+40h]

  v83 = a8;
  v84[0] = 1LL;
  v94 = 0LL;
  v85 = 0LL;
  v84[1] = 20LL;
  v86 = 0LL;
  v84[2] = 0LL;
  v87 = 0LL;
  v84[3] = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v81 = 0LL;
  v92 = 0LL;
  v74 = 0;
  v93 = 0LL;
  v75 = 0;
  v78 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *(_DWORD *)(a1 + 48);
  v13 = 3;
  v14 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v79 = 1LL;
  v76 = v14;
  if ( (v12 & 0x500000) == 0x500000 )
  {
    v15 = (v12 >> 18) & 3;
    v16 = MiVadPageSizes[v15];
    v13 = MiVadPageIndices[v15];
    v17 = 16LL;
    v77 = v16;
    if ( v16 != 16 )
      v17 = 1LL;
    v79 = v17;
  }
  else
  {
    v77 = 1LL;
  }
  v18 = (v12 >> 12) & 0x3F;
  v71 = 0;
  v80 = (unsigned int)v18;
  v70 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v18, 0x140000000LL, (_DWORD *)1);
  if ( MiComputePageCommitment(a2, a3, a1, v70, 0, &v78) != ((__int64)(v14 - v11) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(v10, v70);
    return 3221225517LL;
  }
  v20 = v78;
  if ( v78 )
  {
    MiUnlockWorkingSetShared(v10, v70);
    result = MiChargeFullProcessCommitment(Process, v20);
    if ( (int)result < 0 )
      return result;
    v70 = MiLockWorkingSetShared(v10, v21, v22, v23);
  }
  v24 = v11;
  if ( v13 <= 1 )
  {
    v25 = 2 - v13;
    do
    {
      v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v25;
    }
    while ( v25 );
    v76 = v14;
  }
  v26 = v70;
  v27 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMakeSystemAddressValid(v24, 0);
  if ( MI_READ_PTE_LOCK_FREE(v24) )
  {
    while ( 1 )
    {
      PageProtection = MiGetPageProtection(a1, v24, (__int64)&v74);
      v30 = v81;
      if ( !v81 )
        break;
      MiUnlockPageTableInternal(v10, v27);
      MiUnlockWorkingSetShared(v10, v70);
      MiFaultInPagedPool(v30);
      MiLockWorkingSetShared(v10, v31, v32, v33);
      MiMakeSystemAddressValid(v24, 0);
      if ( !MI_READ_PTE_LOCK_FREE(v24) )
        goto LABEL_18;
    }
    v34 = a1;
    v36 = MmProtectToValue[PageProtection];
    v37 = 1LL;
    v35 = v75;
    v71 = 1;
  }
  else
  {
LABEL_18:
    v34 = a1;
    v35 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(a1);
    v37 = 0LL;
    v75 = v35;
  }
  v38 = (_DWORD *)(v35 | (unsigned int)v36);
  *a7 = (_DWORD)v38;
  v39 = v76;
  if ( v24 <= v76 )
  {
    Flink = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      if ( (v24 & 0xFFF) == 0 || (_DWORD)v37 == 1 )
      {
        v71 = 0;
        if ( v27 )
        {
          MiFlushTbList(v84);
          MiUnlockPageTableInternal(v10, v27);
        }
        if ( MiWorkingSetIsContended(v10) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v10, v26);
          MiLockWorkingSetShared(v10, v41, v42, v43);
        }
        v27 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v24, 0);
        Flink = 0xFFFFF6FB7DBED7F8uLL;
      }
      v44 = *(_QWORD *)v24;
      if ( v24 >= 0xFFFFF6FB7DBED000uLL
        && v24 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v37, 0xFFFFF6FB7DBED7F8uLL, v29, v38)
        && (v44 & 1) != 0
        && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v45 = *(_QWORD *)(Flink + 8 * ((v24 >> 3) & 0x1FF));
          Flink = v44 | 0x20;
          if ( (v45 & 0x20) == 0 )
            Flink = v44;
          v44 = Flink;
          if ( (v45 & 0x42) != 0 )
            v44 = Flink | 0x42;
        }
      }
      v76 = v44;
      if ( (v44 & 1) != 0 )
      {
        if ( (unsigned int)MiPteInShadowRange(&v76, Flink)
          && (unsigned int)MiPteHasShadow(v47, v46, v48, v49)
          && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
        {
          v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v50 )
          {
            v51 = *((_QWORD *)&v50->Flink + (((unsigned __int64)&v76 >> 3) & 0x1FF));
            v52 = v44 | 0x20;
            if ( (v51 & 0x20) == 0 )
              v52 = v44;
            v44 = v52;
            if ( (v51 & 0x42) != 0 )
              v44 = v52 | 0x42;
          }
        }
        v53 = (v44 >> 12) & 0xFFFFFFFFFLL;
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v24) == 1 )
        {
          v34 = a1;
          updated = a4;
        }
        else
        {
          if ( (unsigned int)MI_PFN_IS_PROTO(48 * v53 - 0x58000000000LL) )
          {
            MiFlushTbList(v84);
            v26 = v70;
            ProtoPrivate = MiMakeProtoPrivate(v10, v70, v24);
            if ( ProtoPrivate )
            {
              if ( ProtoPrivate == 1 )
              {
                --v78;
              }
              else
              {
                v27 = 0LL;
                v71 = 1;
                MiLockWorkingSetShared(v10, v55, v29, v38);
              }
            }
            v34 = a1;
            goto LABEL_57;
          }
          if ( (a5 & 0x101) != 0 )
          {
            v34 = a1;
            v26 = v70;
            if ( (unsigned int)MiMakeVaRangeNoAccess(a1, v24, v39, (unsigned int)v84, BugCheckParameter4, v83) )
            {
              v11 += 8 * v77;
              v24 += 8 * v79;
            }
            goto LABEL_57;
          }
          v34 = a1;
          updated = MiUpdatePfnProtection(a1, 48 * v53 - 0x58000000000LL, a4);
          a4 = updated;
        }
        MiRevertValidPte(v34, v24, updated, v53, (__int64)v84);
        v11 += 8 * v77;
        v24 += 8 * v79;
      }
      else
      {
        if ( (v44 & 0x400) != 0 )
        {
          MiFlushTbList(v84);
          v26 = v70;
          if ( (int)MiMakeProtoLeafValid(v24) < 0 )
          {
            v11 += 8LL;
            v24 += 8LL;
          }
          v37 = 1LL;
          v71 = 1;
          goto LABEL_58;
        }
        if ( (v44 & 0x800) == 0 )
        {
          if ( v77 != 1 )
            KeBugCheckEx(0x1Au, 0x44000uLL, v11, v44, 0LL);
          if ( v44 )
          {
            v61 = v44 >> 5;
          }
          else
          {
            UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v11 << 25) >> 16, Flink);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v59, v60);
            LODWORD(v61) = *(_DWORD *)(v34 + 48) >> 7;
          }
          a4 = MiSanitizePfnProtection(v34, v61 & 0x1F, a4);
          v63 = 32LL * (a4 & 0x1F);
          if ( v44 )
            v64 = v63 | v44 & 0xFFFFFFFFFFFFFC1FuLL;
          else
            v64 = MiSwizzleInvalidPte(v63);
          v76 = v64;
          v65 = v64;
          if ( (unsigned int)MiPteInShadowRange(v11, v62) )
          {
            if ( (unsigned int)MiPteHasShadow(v67, v66, v29, v38) )
            {
              v68 = v64;
              if ( !HIBYTE(word_140C4E008) && (v64 & 1) != 0 )
                v68 = v64 | 0x8000000000000000uLL;
              *(_QWORD *)v11 = v68;
              MiWritePteShadow(v11, v68);
              goto LABEL_101;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            {
              *(_QWORD *)v11 = v64;
LABEL_101:
              v34 = a1;
              v11 += 8LL;
              v26 = v70;
              v24 += 8LL;
              goto LABEL_57;
            }
            if ( (v64 & 1) != 0 )
              v65 = v64 | 0x8000000000000000uLL;
          }
          *(_QWORD *)v11 = v65;
          goto LABEL_101;
        }
        v57 = MiSetProtectionOnTransitionPte(v34, v24, a4, 1LL);
        if ( v77 != 1 )
        {
          v11 += 8 * v77;
          v26 = v70;
          v24 += 8 * v79;
          goto LABEL_57;
        }
        if ( !v57 )
        {
          v26 = v70;
          v11 += 8LL;
          v24 += 8LL;
          goto LABEL_57;
        }
      }
      v26 = v70;
LABEL_57:
      v37 = v71;
LABEL_58:
      Flink = 0xFFFFF6FB7DBED7F8uLL;
    }
    while ( v24 <= v39 );
  }
  MiFlushTbList(v84);
  if ( v27 )
    MiUnlockPageTableInternal(v10, v27);
  MiUnlockWorkingSetShared(v10, v26);
  if ( v78 )
    MiReturnFullProcessCommitment(Process);
  return 0LL;
}
