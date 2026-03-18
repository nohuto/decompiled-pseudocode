/*
 * XREFs of MiMapRetpolineStubs @ 0x14064074C
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B493C4 (MiApplyBootLoadedDriversFixups.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B13C (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiGetContainingPageTable @ 0x1402E1270 (MiGetContainingPageTable.c)
 *     MiLockAndIncrementShareCount @ 0x1402E3DA8 (MiLockAndIncrementShareCount.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiMapRetpolineStubs(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 SessionVm; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 ContainingPageTable; // rax
  int v14; // r13d
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  bool v17; // zf
  __int64 v19; // [rsp+60h] [rbp+8h]
  unsigned __int8 v20; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v6 = SessionVm;
  v7 = a1 + ((a2 + ((unsigned int)dword_140C6997C >> 12) + ((dword_140C6997C & 0xFFF) != 0)) << 12);
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = qword_140C65948;
  v9 = 0LL;
  v20 = MiLockWorkingSetShared(SessionVm);
  if ( !dword_140C65980 )
    goto LABEL_22;
  do
  {
    v11 = *(_QWORD *)(v19 + 8 * v9 + 48);
    v12 = v8 + 8 * v9;
    if ( v4 )
    {
      if ( (v12 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v6, v4);
    }
    v4 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v6, v4, 0, v10);
LABEL_9:
    ContainingPageTable = MiGetContainingPageTable(v8 + 8 * v9);
    MiLockAndIncrementShareCount(ContainingPageTable);
    MiLockAndIncrementShareCount(v11);
    v14 = 0;
    v15 = MiMakeValidPte(v8 + 8 * v9, v11, 3LL) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
    if ( !MiPteInShadowRange(v8 + 8 * v9) )
      goto LABEL_17;
    if ( MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C66DFC) )
        goto LABEL_17;
      v17 = (v15 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_17;
      v17 = (v15 & 1) == 0;
    }
    if ( !v17 )
      v15 |= 0x8000000000000000uLL;
LABEL_17:
    *(_QWORD *)v12 = v15;
    if ( v14 )
      MiWritePteShadow(v8 + 8 * v9, v15, v16);
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < dword_140C65980 );
  if ( v4 )
    MiUnlockPageTableInternal(v6, v4);
LABEL_22:
  MiUnlockWorkingSetShared(v6, v20);
  return v7;
}
