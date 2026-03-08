/*
 * XREFs of MiMapRetpolineStubs @ 0x14063E2EC
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B3ACB4 (MiApplyBootLoadedDriversFixups.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiLockAndIncrementShareCount @ 0x14034824C (MiLockAndIncrementShareCount.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 */

unsigned __int64 __fastcall MiMapRetpolineStubs(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 SessionVm; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 ContainingPageTable; // rax
  int v13; // r13d
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  bool v16; // zf
  __int64 v18; // [rsp+60h] [rbp+8h]
  unsigned __int8 v19; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v6 = SessionVm;
  v7 = a1 + ((a2 + ((unsigned int)dword_140C694FC >> 12) + ((dword_140C694FC & 0xFFF) != 0)) << 12);
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = qword_140C654C8;
  v9 = 0LL;
  v19 = MiLockWorkingSetShared(SessionVm);
  if ( !dword_140C65500 )
    goto LABEL_22;
  do
  {
    v10 = *(_QWORD *)(v18 + 8 * v9 + 48);
    v11 = v8 + 8 * v9;
    if ( v4 )
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v6, v4);
    }
    v4 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v6, v4, 0);
LABEL_9:
    ContainingPageTable = MiGetContainingPageTable(v8 + 8 * v9);
    MiLockAndIncrementShareCount(ContainingPageTable);
    MiLockAndIncrementShareCount(v10);
    v13 = 0;
    v14 = MiMakeValidPte(v8 + 8 * v9, v10, 3) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
    if ( !MiPteInShadowRange(v8 + 8 * v9) )
      goto LABEL_17;
    if ( MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_17;
      v16 = (v14 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_17;
      v16 = (v14 & 1) == 0;
    }
    if ( !v16 )
      v14 |= 0x8000000000000000uLL;
LABEL_17:
    *(_QWORD *)v11 = v14;
    if ( v13 )
      MiWritePteShadow(v8 + 8 * v9, v14, v15);
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < dword_140C65500 );
  if ( v4 )
    MiUnlockPageTableInternal(v6, v4);
LABEL_22:
  MiUnlockWorkingSetShared(v6, v19);
  return v7;
}
