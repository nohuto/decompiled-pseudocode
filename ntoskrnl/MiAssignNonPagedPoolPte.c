/*
 * XREFs of MiAssignNonPagedPoolPte @ 0x140345570
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x14032F1F0 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiSetPfnOwnedAndActive @ 0x14034591C (MiSetPfnOwnedAndActive.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPte(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // r15
  __int64 v5; // rax
  unsigned __int16 v6; // bx
  __int64 v7; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 ContainingPageTable; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbx
  unsigned int v13; // esi
  int v14; // ecx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v18; // r8
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = MiSwizzleInvalidPte(128LL);
  v6 = *(_WORD *)(a1 + 78);
  v7 = v5;
  ValidPte = MiMakeValidPte((unsigned __int64)v4, 0LL, (v6 >> 3) & 0x1F | 0xA0000000);
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v4);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = ContainingPageTable;
  if ( (v6 & 0x100) != 0 )
  {
    v13 = 1;
    v12 = *(_QWORD *)(v10 + 8 * ((a2 - *(_QWORD *)a1) >> 12));
  }
  else
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)v10;
    v12 = 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
    if ( (*(_BYTE *)(v10 + 35) & 0x10) != 0 )
    {
      v13 = 0;
    }
    else
    {
      *(_QWORD *)(v10 + 40) &= ~0x8000000000000000uLL;
      *(_QWORD *)(v10 + 16) = v7;
      v13 = 1;
    }
    MiSetPfnPteFrame(v10, ContainingPageTable);
    MiSetPfnOwnedAndActive(v14, 0, (_DWORD)v4, 1, 1);
  }
  v15 = ValidPte ^ (ValidPte ^ (v12 << 12)) & 0xFFFFFFFFFF000LL;
  if ( !MiPteInShadowRange((unsigned __int64)v4) )
  {
LABEL_6:
    *v4 = v15;
    goto LABEL_7;
  }
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v15 & 1) != 0 )
      v15 |= 0x8000000000000000uLL;
    goto LABEL_6;
  }
  if ( !HIBYTE(word_140C6697C) && (v15 & 1) != 0 )
    v15 |= 0x8000000000000000uLL;
  *v4 = v15;
  MiWritePteShadow((__int64)v4, v15, v18);
LABEL_7:
  v16 = 48 * v11 - 0x220000000000LL;
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v13;
}
