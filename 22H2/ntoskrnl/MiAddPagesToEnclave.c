/*
 * XREFs of MiAddPagesToEnclave @ 0x140549044
 * Callers:
 *     MiCommitEnclavePages @ 0x1405496C4 (MiCommitEnclavePages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiGetPteFromCopyList @ 0x1402402F0 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402404A8 (MiCreatePteCopyList.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePteCopyList @ 0x140323F44 (MiReleasePteCopyList.c)
 *     KeAddEnclavePage @ 0x140514E98 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x14054A904 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x14054A968 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x14054B22C (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x14054B360 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x14054B4DC (MiWriteEnclavePte.c)
 *     MiReturnReservedEnclavePages @ 0x1409B0EA0 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiAddPagesToEnclave(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rdi
  int v6; // eax
  __int64 result; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 *v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  int v17; // esi
  unsigned __int64 ValidPte; // rbx
  int v19; // edi
  __int64 v20; // r8
  bool v21; // zf
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rcx
  int v25; // r10d
  unsigned __int8 v26; // cl
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  int v29; // ecx
  char v30; // al
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rax
  ULONG_PTR v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // [rsp+30h] [rbp-A8h]
  char v45; // [rsp+34h] [rbp-A4h]
  int v46; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+3Ch] [rbp-9Ch]
  __int64 v48; // [rsp+40h] [rbp-98h]
  unsigned __int64 PteFromCopyList; // [rsp+48h] [rbp-90h]
  __int64 v50; // [rsp+50h] [rbp-88h]
  __int64 v51; // [rsp+58h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-78h]
  __int64 v53; // [rsp+68h] [rbp-70h] BYREF
  __int128 v54; // [rsp+70h] [rbp-68h]
  __int64 v55; // [rsp+80h] [rbp-58h]
  __int64 v56; // [rsp+88h] [rbp-50h]
  unsigned __int8 v57; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v58; // [rsp+E8h] [rbp+10h]

  v58 = a2;
  v54 = 0LL;
  v53 = 0LL;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 64);
  v46 = 0;
  if ( (v6 & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  v10 = 0LL;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v12 = *(_QWORD *)(qword_140C4E648 + 8LL * *((unsigned __int16 *)v11 + 87));
  v13 = *(_QWORD *)(a1 + 104);
  v55 = v12;
  if ( v13 >= a2 || (v10 = a2 - v13, result = MiReserveEnclavePages(a1, v12, a2 - v13), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    {
      v23 = 0LL;
      v51 = 0LL;
      v16 = 0LL;
      v22 = 0LL;
LABEL_21:
      v24 = 20LL;
      v50 = 0LL;
      if ( a2 <= 0x14 )
        v24 = a2;
      MiCreatePteCopyList(v24 + 1, v24 + 1, (__int64)&v53, a4);
      if ( !HIDWORD(v53) )
        goto LABEL_8;
      v25 = 4;
      v26 = (a5 >> 1) & 2 | 0x35;
      if ( (a5 & 2) == 0 )
        v26 = (a5 >> 1) & 2 | 0x31;
      v27 = v26;
      v28 = v26;
      v29 = *(_DWORD *)(a1 + 64) & 2;
      if ( !v29 )
        v25 = a5;
      v30 = v28 | 0x40;
      v47 = v25;
      if ( !v29 )
        v30 = v27;
      v45 = v30;
      v56 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
      v31 = v5 << 25;
      v32 = 0LL;
      v48 = v31 >> 16;
      v57 = MiLockWorkingSetShared((__int64)v11, v27, (a5 >> 1) & 2 | 0x31, (_DWORD *)a5);
      v33 = a3;
      v34 = a3;
      if ( a3 > a4 )
      {
LABEL_67:
        MiUnlockWorkingSetShared((__int64)v11, v57);
        v17 = 0;
        goto LABEL_68;
      }
      while ( 1 )
      {
        if ( (v34 & 0x78) == 0 && v34 != v33 )
        {
          if ( MiWorkingSetIsContended((__int64)v11) || KeShouldYieldProcessor() )
            goto LABEL_37;
          if ( !v32 )
            goto LABEL_43;
          if ( (unsigned int)MiPageTableLockIsContended((__int64)v11, v32) )
          {
LABEL_37:
            if ( v32 )
            {
              MiUnlockPageTableInternal((__int64)v11, v32);
              v32 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v11, v57);
            MiLockWorkingSetShared((__int64)v11, v35, v36, v37);
          }
        }
        if ( v32 )
        {
          if ( (v34 & 0xFFF) != 0 )
            goto LABEL_44;
          MiUnlockPageTableInternal((__int64)v11, v32);
        }
LABEL_43:
        v32 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v34, 0LL, (*(_DWORD *)(a1 + 48) >> 12) & 0x3F, v57, 0);
LABEL_44:
        if ( (MI_READ_PTE_LOCK_FREE(v34) & 1) != 0 )
          goto LABEL_58;
        v38 = v10 - 1;
        if ( v10 != v58 )
          v38 = v10;
        --v58;
        v10 = v38;
        BugCheckParameter2 = MiGetPageForEnclave(a1, v55);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v53, BugCheckParameter2, -1LL);
        v17 = KeAddEnclavePage(v56, v23, (__int64)((PteFromCopyList << 25) - v22) >> 16, v48, v45, &v46);
        v39 = ZeroPte;
        v44 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v44 = 1;
            if ( !HIBYTE(word_140C4E008) )
              goto LABEL_52;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_52:
            if ( (ZeroPte & 1) != 0 )
              v39 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        v41 = PteFromCopyList;
        *(_QWORD *)PteFromCopyList = v39;
        if ( v44 )
          MiWritePteShadow(v41, v39, v40);
        if ( v17 < 0 )
        {
          MiReturnEnclavePage(BugCheckParameter2);
          if ( v17 == -1073740657 )
            v17 = -1073741823;
          if ( v32 )
            MiUnlockPageTableInternal((__int64)v11, v32);
          MiUnlockWorkingSetShared((__int64)v11, v57);
LABEL_68:
          MiReleasePteCopyList((__int64)&v53);
          if ( v16 )
            MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v16, 1u);
          if ( v10 )
            MiReturnReservedEnclavePages(a1, v10);
          return (unsigned int)v17;
        }
        MiInitializeEnclavePfn(BugCheckParameter2, v34, v47);
        v42 = v47;
        LODWORD(v42) = v47 | 0x80000000;
        MiMakeValidPte(v34, BugCheckParameter2, v42, v43);
        MiWriteEnclavePte(v34, 0);
        v22 = v50;
LABEL_58:
        v48 += 4096LL;
        v34 += 8LL;
        if ( v34 > a4 )
        {
          if ( v32 )
            MiUnlockPageTableInternal((__int64)v11, v32);
          goto LABEL_67;
        }
        v23 = v51;
        v33 = a3;
      }
    }
    v14 = MiReservePtes((__int64)&qword_140C4EF40, 1u, a3, a4);
    v16 = v14;
    if ( !v14 )
    {
LABEL_8:
      v17 = -1073741670;
      goto LABEL_68;
    }
    ValidPte = MiMakeValidPte(v14, qword_140C4ED80, 536870913LL, v15);
    v19 = 0;
    if ( MiPteInShadowRange(v16) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v21 = (ValidPte & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v21 = (ValidPte & 1) == 0;
LABEL_15:
        if ( !v21 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v16 = ValidPte;
    if ( v19 )
      MiWritePteShadow(v16, ValidPte, v20);
    v5 = a3;
    v22 = 0LL;
    v23 = (__int64)(v16 << 25) >> 16;
    v51 = v23;
    goto LABEL_21;
  }
  return result;
}
