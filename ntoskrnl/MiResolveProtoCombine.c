/*
 * XREFs of MiResolveProtoCombine @ 0x140345A28
 * Callers:
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiMakeTransitionPteValid @ 0x1402CD590 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r12
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  volatile signed __int64 *v9; // r15
  __int64 v10; // r13
  unsigned __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // ebx
  char v16; // al
  unsigned __int64 ValidPte; // rax
  char v19; // al
  unsigned __int64 TransitionPteValid; // rdi
  __int64 v21; // rax
  int v22; // r12d
  unsigned __int64 v23; // rbx
  __int64 v24; // r8
  bool v25; // zf
  unsigned __int64 v26[9]; // [rsp+40h] [rbp-48h] BYREF
  int v29; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a1;
  v5 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x220000000000LL;
  v7 = MiLockLeafPage(a3, 0LL);
  if ( !v7 )
    goto LABEL_24;
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v26[0] = v8;
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 0x400) == 0 && (v8 & 0x800) != 0 )
    {
      v10 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v7 + 34) & 0x20) == 0 )
      {
        if ( (MiUnlinkPageFromListEx(v7, 0LL) & 3) == 0 )
        {
          __incgsdword(0x2E98u);
          v9 = (volatile signed __int64 *)(v7 + 24);
          v19 = *(_BYTE *)(v7 + 34);
          *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
          ++*(_WORD *)(v7 + 32);
          *(_BYTE *)(v7 + 34) = v19 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          v26[0] = TransitionPteValid;
          v21 = *(_QWORD *)(v7 + 16);
          if ( (v21 & 0x400) == 0 && (v21 & 4) != 0 && (unsigned __int16)v21 >> 12 == *(_DWORD *)(v10 + 1188) )
            v5 = MiCaptureDirtyBitToPfn(v7);
          v22 = 0;
          v23 = TransitionPteValid;
          if ( !MiPteInShadowRange((unsigned __int64)a3) )
            goto LABEL_19;
          if ( MiPteHasShadow() )
          {
            v22 = 1;
            if ( !HIBYTE(word_140C6697C) )
            {
              v25 = (TransitionPteValid & 1) == 0;
              goto LABEL_33;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v25 = (TransitionPteValid & 1) == 0;
LABEL_33:
            if ( !v25 )
              v23 = TransitionPteValid | 0x8000000000000000uLL;
          }
LABEL_19:
          *a3 = v23;
          if ( v22 )
            MiWritePteShadow((__int64)a3, v23, v24);
          v3 = a1;
          goto LABEL_5;
        }
        MiDiscardTransitionPteEx(v7, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_24:
    MiUnlockProtoPoolPage(v6, 0x11u);
    return 0LL;
  }
  v9 = (volatile signed __int64 *)(v7 + 24);
  v10 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
LABEL_5:
  *v9 ^= (*v9 ^ (*v9 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v6, 0x11u);
  if ( v5 )
    MiReleasePageFileInfo(v10, v5, 1);
  v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v26) >> 12) & 0xFFFFFFFFFFLL;
  v12 = 48 * v11 - 0x220000000000LL;
  v13 = *(_QWORD *)(v12 + 16);
  v14 = 48 * MiGetContainingPageTable((unsigned __int64)v3) - 0x220000000000LL;
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v29);
    while ( *(__int64 *)(v14 + 24) < 0 );
  }
  *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = (unsigned __int8)v13 >> 5;
  v16 = *(_BYTE *)(v12 + 34) >> 6;
  if ( v16 != 1 )
  {
    if ( v16 )
    {
      if ( v16 == 2 )
        v15 |= 0x18u;
    }
    else
    {
      v15 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte((unsigned __int64)v3, v11, v15);
  if ( (unsigned int)MiAllocateWsle(a2, v3, (_QWORD *)(48 * v11 - 0x220000000000LL), 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v11 - 0x220000000000LL, 0);
  MiLockAndDecrementShareCount(v14, 0);
  return 0LL;
}
