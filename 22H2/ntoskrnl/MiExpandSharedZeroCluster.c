/*
 * XREFs of MiExpandSharedZeroCluster @ 0x140339F98
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14020FB10 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUpdatePageTableUseCount @ 0x140328C24 (MiUpdatePageTableUseCount.c)
 *     MiIsPteEvaluated @ 0x14033A25C (MiIsPteEvaluated.c)
 *     MiGetPagingFileOffset @ 0x14033A2B0 (MiGetPagingFileOffset.c)
 *     MiComputeZeroClusterMaximum @ 0x14033D4AC (MiComputeZeroClusterMaximum.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdi
  unsigned int v3; // r15d
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 ProtoPteAddress; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  int PagingFileOffset; // eax
  unsigned __int64 v16; // rdx
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  unsigned __int64 *v19; // rsi
  int v20; // ecx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  int v23; // r13d
  unsigned __int64 v24; // rbx
  __int64 v25; // r8
  bool v27; // zf
  __int64 v28; // [rsp+20h] [rbp-79h] BYREF
  __int64 v29; // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v30; // [rsp+30h] [rbp-69h]
  unsigned __int64 v31; // [rsp+38h] [rbp-61h]
  __int128 v32; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v33[20]; // [rsp+50h] [rbp-49h] BYREF
  char v35; // [rsp+108h] [rbp+6Fh]
  unsigned __int64 v36; // [rsp+110h] [rbp+77h]
  unsigned __int64 v37; // [rsp+118h] [rbp+7Fh]

  v1 = a1;
  memset(v33, 0, 0x60uLL);
  v2 = *(_QWORD *)(v1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = *(_QWORD **)(v1 + 56);
  v32 = 0LL;
  v6 = *(_QWORD **)(v2 + 120);
  v29 = 0LL;
  v35 = 0;
  v30 = v4;
  if ( (__int64)v6 < 0 )
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  else
    v7 = -1LL;
  v8 = *(unsigned int *)(v2 + 48);
  if ( (v8 & 0x100000) == 0 && MiVadPageSizes[(v8 >> 18) & 3] == 16 )
  {
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v32 + 1) = 0x10000LL;
    *(_QWORD *)&v32 = v4;
    if ( v4 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    LOWORD(v33[0]) = 2;
    v33[1] = &v32;
    v5 = v33;
    v33[2] = 1LL;
    v33[3] = 0LL;
    v33[4] = 0LL;
    v35 = 1;
  }
  v31 = MiComputeZeroClusterMaximum(v5, &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], v2);
  v9 = v4 >> 12;
  v36 = 0LL;
  v10 = 0LL;
  v37 = v4 >> 12;
  v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v31 )
    return 1LL;
  while ( !(unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(v1 + 32)) )
  {
    ProtoPteAddress = MiGetProtoPteAddress(v2, v9, 4, &v29);
    v13 = ProtoPteAddress;
    if ( !ProtoPteAddress || !v29 || v10 && v29 != v10 )
      break;
    if ( ((ProtoPteAddress ^ *(_QWORD *)(v1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v10 )
      v10 = v29;
    if ( v37 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) > v7 )
      break;
    v14 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v28 = v14;
    if ( (v14 & 1) != 0 || !v14 || (v14 & 0x400) != 0 || (v14 & 0x800) != 0 )
      break;
    PagingFileOffset = MiGetPagingFileOffset(&v28);
    v16 = v36;
    if ( !PagingFileOffset )
    {
      if ( !v3 )
        v16 = v13;
      ++v3;
      v36 = v16;
      v9 = v37 + 1;
      v11 += 8LL;
      ++v37;
      if ( v3 < v31 )
        continue;
    }
    goto LABEL_23;
  }
  v16 = v36;
LABEL_23:
  if ( v3 <= 1 || v35 == 1 && v11 <= ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v17 = 0;
  v18 = 0;
  v19 = (unsigned __int64 *)(v11 - 8LL * v3);
  do
  {
    v20 = *(_DWORD *)(v1 + 32);
    if ( v20 == 256 )
      v21 = (v16 << 16) | 0x400;
    else
      v21 = 32 * (v20 & 0x1F | 0xFFFFFFFFF8000020uLL);
    v28 = MiSwizzleInvalidPte(v21);
    v22 = v28;
    if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)v19) )
      goto LABEL_33;
    v23 = 0;
    v24 = v22;
    if ( MiPteInShadowRange((unsigned __int64)v19) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v23 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_30;
        v27 = (v22 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_30;
        v27 = (v22 & 1) == 0;
      }
      if ( !v27 )
        v24 = v22 | 0x8000000000000000uLL;
    }
LABEL_30:
    *v19 = v24;
    if ( v23 )
      MiWritePteShadow((__int64)v19, v24, v25);
    v1 = a1;
    ++v17;
LABEL_33:
    ++v18;
    v16 = v36 + 8;
    ++v19;
    v36 += 8LL;
  }
  while ( v18 < (unsigned __int64)v3 );
  if ( v17 )
    MiUpdatePageTableUseCount(v30, v17);
  return v3;
}
