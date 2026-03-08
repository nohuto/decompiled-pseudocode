/*
 * XREFs of MiRebaseDynamicRelocationRegions @ 0x140B38F54
 * Callers:
 *     MiInitializeSystemVa @ 0x140B60308 (MiInitializeSystemVa.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     KeFlushEntireTb @ 0x1403AD590 (KeFlushEntireTb.c)
 *     MiApplyDynamicRelocations @ 0x140B39134 (MiApplyDynamicRelocations.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140B3A7E0 (MiApplyRetpolineFixupsToKernelAndHal.c)
 */

__int64 __fastcall MiRebaseDynamicRelocationRegions(__int64 a1)
{
  __int64 v2; // r13
  unsigned __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  int v7; // edi
  __int64 *v8; // r14
  __int64 v9; // rbx
  int v10; // ebp
  BOOL v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  int v16; // ebp
  unsigned __int64 v17; // rbx
  unsigned __int64 i; // rbp
  unsigned __int64 v19; // rdx
  __int64 result; // rax
  bool v21; // zf
  bool v22; // zf
  __int64 v23; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0xFFFFF68000000000uLL;
  v4 = qword_140C6A158[0];
  v5 = qword_140C6A1F8;
  v23 = qword_140C6A158[0];
  if ( (MiFlags & 0x4000) == 0 && qword_140C6A1F8 == 0xFFFFF68000000000uLL )
    goto LABEL_18;
  v6 = ((unsigned __int64)qword_140C6A1F8 >> 39) & 0x1FF;
  v7 = 0;
  v8 = (__int64 *)(8 * v6 - 0x90482413000LL);
  if ( 8 * v6 != 3944 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
    v10 = 0;
    v11 = MiPteInShadowRange((unsigned __int64)v8);
    v14 = 0x8000000000000000uLL;
    if ( !v11 )
      goto LABEL_5;
    if ( MiPteHasShadow() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_5;
      v21 = (v9 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v21 = (v9 & 1) == 0;
    }
    if ( !v21 )
      v9 |= v14;
LABEL_5:
    *v8 = v9;
    if ( v10 )
      MiWritePteShadow((__int64)v8, v9, v12);
    if ( (MiFlags & 0x100000) != 0 )
      goto LABEL_11;
    v15 = ZeroPte;
    v16 = 0;
    if ( !MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL) )
    {
LABEL_9:
      MEMORY[0xFFFFF6FB7DBEDF68] = v15;
      if ( v16 )
        MiWritePteShadow(0xFFFFF6FB7DBEDF68uLL, v15, v12);
LABEL_11:
      LOBYTE(v14) = 1;
      KeFlushEntireTb(0LL, v14, v12, v13);
      goto LABEL_12;
    }
    if ( MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_9;
      v22 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v22 = (ZeroPte & 1) == 0;
    }
    if ( !v22 )
      v15 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_9;
  }
LABEL_12:
  v17 = v5;
  for ( i = 39LL; ; i -= 9LL )
  {
    MiApplyDynamicRelocations(*(_QWORD *)(v2 + 48), *(unsigned int *)(v2 + 64), v3, v17);
    if ( i >= 0xC )
      MiApplyDynamicRelocations(
        *(_QWORD *)(v2 + 48),
        *(unsigned int *)(v2 + 64),
        v3 + (1LL << i) - 1,
        v17 + (1LL << i) - 1);
    if ( (unsigned int)++v7 > 4 )
      break;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = v5 + ((v17 >> 9) & 0x7FFFFFFFF8LL);
  }
  v4 = v23;
LABEL_18:
  v19 = 0xFFFFDE0000000000uLL;
  if ( (MiFlags & 0x4000) != 0 || v4 != 0xFFFFDE0000000000uLL )
    MiApplyDynamicRelocations(*(_QWORD *)(v2 + 48), *(unsigned int *)(v2 + 64), 0xFFFFDE0000000000uLL, v4);
  result = MiApplyRetpolineFixupsToKernelAndHal(a1, v19);
  MmPteBase = v5;
  qword_140C02500 = v5;
  return result;
}
