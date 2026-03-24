/*
 * XREFs of MiResolveProtoCombine @ 0x14036A484
 * Callers:
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiAllocateWsle @ 0x140211C80 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiGetContainingPageTable @ 0x14023DDC0 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockAndDecrementShareCount @ 0x140263D30 (MiLockAndDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiIsPteInStore @ 0x1402E1DE0 (MiIsPteInStore.c)
 *     MiMakeTransitionPteValid @ 0x1403096E0 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388794 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 ContainingPageTable; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // r9
  char v23; // cl
  unsigned __int64 ValidPte; // rax
  __int64 v25; // r8
  char v27; // al
  unsigned __int64 TransitionPteValid; // rax
  int v29; // ecx
  unsigned __int64 v30; // rsi
  int v31; // r12d
  unsigned __int64 v32; // rbx
  __int64 v33; // r8
  bool v34; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-8h] BYREF
  int v42; // [rsp+A8h] [rbp+58h] BYREF

  v39 = 0LL;
  v3 = a1;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v5 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v8 = MiLockLeafPage(a3, 0, v6, v7);
  if ( !v8 )
    goto LABEL_29;
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v38 = v9;
  if ( (v9 & 1) == 0 )
  {
    if ( (v9 & 0x400) == 0 && (v9 & 0x800) != 0 )
    {
      v10 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
      if ( (*(_BYTE *)(v8 + 34) & 0x20) == 0 )
      {
        if ( (unsigned int)MiUnlinkPageFromList(v8, 0) )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
          v27 = *(_BYTE *)(v8 + 34);
          ++*(_WORD *)(v8 + 32);
          *(_BYTE *)(v8 + 34) = v27 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          v29 = *(_DWORD *)(v8 + 16);
          v30 = TransitionPteValid;
          v38 = TransitionPteValid;
          if ( (v29 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v10, *(_QWORD *)(v8 + 16)) )
            v39 = MiCaptureDirtyBitToPfn(v8);
          v31 = 0;
          v32 = v30;
          if ( !MiPteInShadowRange((unsigned __int64)a3) )
            goto LABEL_24;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v31 = 1;
            if ( !HIBYTE(word_140C4E008) )
            {
              v34 = (v30 & 1) == 0;
              goto LABEL_36;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v34 = (v30 & 1) == 0;
LABEL_36:
            if ( !v34 )
              v32 = v30 | 0x8000000000000000uLL;
          }
LABEL_24:
          *a3 = v32;
          if ( v31 )
            MiWritePteShadow((__int64)a3, v32, v33);
          v3 = a1;
          goto LABEL_5;
        }
        MiDiscardTransitionPteEx(v8, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_29:
    MiUnlockProtoPoolPage(v5, 0x11u);
    return 0LL;
  }
  v10 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
LABEL_5:
  *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v5, 0x11u);
  if ( v39 )
    MiReleasePageFileInfo(v10, v39, 1);
  v11 = v38;
  v12 = v38;
  if ( MiPteInShadowRange((unsigned __int64)&v38)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 |= 0x20uLL;
      v36 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v38 >> 3) & 0x1FF));
      if ( (v36 & 0x20) == 0 )
        v11 = v12;
      if ( (v36 & 0x42) != 0 )
        v11 |= 0x42uLL;
    }
    else
    {
      v11 = v38;
    }
  }
  v13 = (v11 >> 12) & 0xFFFFFFFFFLL;
  v14 = 48 * v13 - 0x58000000000LL;
  v39 = *(_QWORD *)(v14 + 16);
  ContainingPageTable = MiGetContainingPageTable(v3);
  v20 = v19 + 48 * ContainingPageTable;
  v42 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v42, v16, v17, v18);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v21 = (unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v39) >> 5;
  v23 = *(_BYTE *)(v14 + 34) >> 6;
  if ( v23 != 1 )
  {
    if ( v23 )
    {
      if ( v23 == 2 )
        v21 |= 0x18u;
    }
    else
    {
      v21 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(v3, v13, v21, v22);
  if ( (unsigned int)MiAllocateWsle(a2, v3, (_QWORD *)(48 * v13 - 0x58000000000LL), 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v13 - 0x58000000000LL, 0LL, v25);
  MiLockAndDecrementShareCount(v20, 0LL, v37);
  return 0LL;
}
