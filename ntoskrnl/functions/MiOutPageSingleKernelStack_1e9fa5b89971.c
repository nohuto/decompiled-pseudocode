__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  __int64 WorkingSetSwapSupport; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rbp
  char v19; // di
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rsi
  unsigned __int64 v26; // r13
  __int64 *v27; // rdi
  __int64 v28; // r15
  unsigned int v29; // r12d
  unsigned __int64 v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // r14
  int v33; // eax
  __int64 v34; // rcx
  int v35; // r8d
  __int64 v36; // rdx
  int v37; // eax
  unsigned __int64 v38; // rbx
  __int64 result; // rax
  __int64 v40; // rcx
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // r10d
  __int64 v45; // rdx
  int v46; // r9d
  unsigned __int8 v47; // r8
  int v48; // r11d
  int v49; // r11d
  __int64 v50; // [rsp+20h] [rbp-88h] BYREF
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-80h]
  __int64 v52; // [rsp+30h] [rbp-78h]
  unsigned __int64 v53; // [rsp+38h] [rbp-70h]
  unsigned __int64 v54; // [rsp+40h] [rbp-68h]
  __int64 v55; // [rsp+48h] [rbp-60h]
  __int64 v56; // [rsp+50h] [rbp-58h]
  unsigned __int8 v57; // [rsp+B0h] [rbp+8h]
  __int64 v58; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v59; // [rsp+C0h] [rbp+18h]
  __int64 v60; // [rsp+C8h] [rbp+20h] BYREF

  v59 = a3;
  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a2[2] - 8LL;
  v50 = v5;
  v56 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v60 = v56 << 25 >> 16;
  v7 = (_QWORD *)v56;
  v58 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v52 = (unsigned int)((__int64)(v5 - v56) >> 3) + 1;
  v55 = MiSwizzleInvalidPte(992LL);
  WorkingSetSwapSupport = 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  v13 = *(unsigned __int16 *)(v12 + 1838);
  v14 = v12 + 1664;
  v15 = *(_QWORD *)(qword_140C67048 + 8 * v13);
  if ( (_UNKNOWN *)v15 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_140C67048 + 8 * v13), a2);
    if ( !result )
      return result;
    v8 = v58;
    v10 = 0x7FFFFFFFF8LL;
    v9 = 0xFFFFF68000000000uLL;
  }
  v53 = v9 + (v10 & (v8 >> 9));
  v54 = (v10 & (v5 >> 9)) + v9;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v57 = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v53, 0);
  if ( v53 != v54 )
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v53 + 8, 0);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1176));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1176));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v40);
  }
  v16 = v50;
  do
  {
    v50 = MI_READ_PTE_LOCK_FREE(v7);
    v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v50) >> 12) & 0xFFFFFFFFFFLL;
    v18 = 48 * v17 - 0x220000000000LL;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v15, v7);
    v50 = MiSwizzleInvalidPte((v17 << 12) | 0xBE0);
    v19 = v50;
    v20 = 0;
    v21 = v50;
    if ( (unsigned int)MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow(v23, v22, v24) )
      {
        v20 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_9;
        v41 = (v19 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_9;
        v41 = (v19 & 1) == 0;
      }
      if ( !v41 )
        v21 |= 0x8000000000000000uLL;
    }
LABEL_9:
    *v7 = v21;
    if ( v20 )
      MiWritePteShadow(v7, v21);
    MiLockAndDecrementShareCount(v18, 0);
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v16 );
  v25 = v55;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1176));
  v26 = v58;
  v27 = (__int64 *)(v56 - 8);
  v28 = v60;
  v29 = v52;
  while ( 2 )
  {
    if ( (unsigned __int64)v27 >= v26 && (*(_BYTE *)v27 & 1) != 0 )
    {
      v50 = MI_READ_PTE_LOCK_FREE(v27);
      v30 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v50) >> 12) & 0xFFFFFFFFFFLL;
      v31 = 48 * v30 - 0x220000000000LL;
      v32 = 48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      LODWORD(v58) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v58);
        while ( *(__int64 *)(v31 + 24) < 0 );
      }
      v33 = MiPteInShadowRange(v27);
      if ( *(_WORD *)(v31 + 32) == 1 )
      {
        v35 = 0;
        v36 = v25;
        if ( !v33 )
          goto LABEL_21;
        if ( (unsigned int)MiPteHasShadow(v34, v25, 0LL) )
        {
          v35 = v49;
          if ( !HIBYTE(word_140C6697C) )
            goto LABEL_60;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_60:
          if ( ((unsigned __int8)v25 & (unsigned __int8)v49) != 0 )
            v36 |= 0x8000000000000000uLL;
        }
LABEL_21:
        *v27 = v36;
        if ( v35 )
          MiWritePteShadow(v27, v36);
        *(_QWORD *)(v31 + 24) |= 0x4000000000000000uLL;
        MiSetPfnIdentity(48 * v30 - 0x220000000000LL, 0LL);
LABEL_24:
        v37 = MiDecrementShareCount(v31);
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v37 != 3 )
        {
          LODWORD(v60) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v60);
            while ( *(__int64 *)(v32 + 24) < 0 );
          }
          MiDecrementShareCount(v32);
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        ++v29;
        v28 -= 4096LL;
        --v27;
        continue;
      }
      v42 = MiSwizzleInvalidPte((v30 << 12) | 0xBE0);
      v44 = 0;
      v50 = v42;
      v45 = v42;
      if ( v46 )
      {
        if ( (unsigned int)MiPteHasShadow(v43, v42, v42) )
        {
          v44 = v48;
          if ( HIBYTE(word_140C6697C) )
            goto LABEL_54;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_54;
        }
        if ( (v47 & (unsigned __int8)v48) != 0 )
          v45 |= 0x8000000000000000uLL;
      }
LABEL_54:
      *v27 = v45;
      if ( v44 )
        MiWritePteShadow(v27, v45);
      goto LABEL_24;
    }
    break;
  }
  v38 = v53;
  if ( v53 != v54 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v53 + 8);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v38);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v57);
  return MiInsertTbFlushEntry(v59, v28, v29);
}
