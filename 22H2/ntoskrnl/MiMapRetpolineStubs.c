/*
 * XREFs of MiMapRetpolineStubs @ 0x140543F7C
 * Callers:
 *     MiFinalizeImageRetpolineState @ 0x14075C478 (MiFinalizeImageRetpolineState.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x14023DDC0 (MiGetContainingPageTable.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiLockAndIncrementShareCount @ 0x140356E80 (MiLockAndIncrementShareCount.c)
 */

unsigned __int64 __fastcall MiMapRetpolineStubs(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 SessionVm; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  __int64 ContainingPageTable; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int64 v22; // r9
  int v23; // r13d
  unsigned __int64 v24; // rbx
  __int64 v25; // r8
  bool v26; // zf
  __int64 v28; // [rsp+60h] [rbp+8h]
  unsigned __int8 v29; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v9 = SessionVm;
  v10 = a1 + ((a2 + ((unsigned int)dword_140C4CCB0 >> 12) + ((dword_140C4CCB0 & 0xFFF) != 0)) << 12);
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = qword_140C4CC50;
  v12 = 0LL;
  v29 = MiLockWorkingSetShared(SessionVm, v6, v7, v8);
  if ( !dword_140C4CC88 )
    goto LABEL_22;
  do
  {
    v13 = *(_QWORD *)(v28 + 8 * v12 + 48);
    v14 = v11 + 8 * v12;
    if ( v4 )
    {
      if ( (v14 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v9, v4);
    }
    v4 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v9, v4, 0LL);
LABEL_9:
    ContainingPageTable = MiGetContainingPageTable(v11 + 8 * v12);
    MiLockAndIncrementShareCount(ContainingPageTable, v16, v17, v18);
    MiLockAndIncrementShareCount(v13, v19, v20, v21);
    v23 = 0;
    v24 = MiMakeValidPte(v11 + 8 * v12, v13, 3LL, v22) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
    if ( !MiPteInShadowRange(v11 + 8 * v12) )
      goto LABEL_17;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v23 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_17;
      v26 = (v24 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_17;
      v26 = (v24 & 1) == 0;
    }
    if ( !v26 )
      v24 |= 0x8000000000000000uLL;
LABEL_17:
    *(_QWORD *)v14 = v24;
    if ( v23 )
      MiWritePteShadow(v11 + 8 * v12, v24, v25);
    v12 = (unsigned int)(v12 + 1);
  }
  while ( (unsigned int)v12 < dword_140C4CC88 );
  if ( v4 )
    MiUnlockPageTableInternal(v9, v4);
LABEL_22:
  MiUnlockWorkingSetShared(v9, v29);
  return v10;
}
