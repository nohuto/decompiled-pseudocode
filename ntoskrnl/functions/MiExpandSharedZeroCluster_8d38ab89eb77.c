__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // r14d
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  unsigned __int64 v11; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // edi
  unsigned __int64 v17; // rsi
  unsigned int v18; // r15d
  __int64 *v19; // rbx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v24; // [rsp+20h] [rbp-89h]
  unsigned __int64 v25; // [rsp+28h] [rbp-81h]
  unsigned __int64 v26; // [rsp+30h] [rbp-79h]
  __int128 v27; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v28[22]; // [rsp+50h] [rbp-59h] BYREF
  char v29; // [rsp+110h] [rbp+67h]
  unsigned __int64 v30; // [rsp+118h] [rbp+6Fh]
  __int64 v31; // [rsp+120h] [rbp+77h] BYREF
  __int64 v32; // [rsp+128h] [rbp+7Fh] BYREF

  memset(v28, 0, 0x68uLL);
  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 56);
  v27 = 0LL;
  v6 = *(_QWORD **)(v2 + 120);
  v32 = 0LL;
  v29 = 0;
  v25 = v4;
  if ( (__int64)v6 < 0 )
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  else
    v7 = -1LL;
  v8 = *(unsigned int *)(v2 + 48);
  if ( (v8 & 0x200000) == 0 && MiVadPageSizes[(v8 >> 19) & 3] == 16 )
  {
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v27 + 1) = 0x10000LL;
    *(_QWORD *)&v27 = v4;
    if ( v4 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    LOWORD(v28[0]) = 2;
    v28[1] = &v27;
    v5 = v28;
    v28[2] = 1LL;
    v28[3] = 0LL;
    v28[4] = 0LL;
    v29 = 1;
  }
  v26 = MiComputeZeroClusterMaximum(
          v5,
          &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
          v2);
  v9 = v4 >> 12;
  v24 = 0LL;
  v10 = 0LL;
  v30 = v4 >> 12;
  v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v26 )
    return 1LL;
  do
  {
    if ( (unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(a1 + 32)) )
      break;
    ProtoPteAddress = MiGetProtoPteAddress(v2, v9, 4LL, &v32);
    v13 = ProtoPteAddress;
    if ( !ProtoPteAddress )
      break;
    if ( !v32 )
      break;
    v14 = v24;
    if ( v24 )
    {
      if ( v32 != v24 )
        break;
    }
    if ( ((*(_QWORD *)(a1 + 24) ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v24 )
      v14 = v32;
    v24 = v14;
    if ( v30 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) > v7 )
      break;
    v15 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v31 = v15;
    if ( (v15 & 1) != 0 || !v15 || (v15 & 0x400) != 0 || (v15 & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset(&v31) )
      break;
    if ( !v3 )
      v10 = v13;
    ++v3;
    v9 = v30 + 1;
    v11 += 8LL;
    ++v30;
  }
  while ( v3 < v26 );
  if ( v3 <= 1 || v29 && v11 <= ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v16 = 0;
  v17 = v3;
  v18 = 0;
  v19 = (__int64 *)(v11 - 8LL * v3);
  do
  {
    v20 = *(_DWORD *)(a1 + 32);
    if ( v20 == 256 )
      v21 = (v10 << 16) | 0x400;
    else
      v21 = 32 * (v20 & 0x1F | 0xFFFFFFFFF8000020uLL);
    v31 = MiSwizzleInvalidPte(v21);
    v22 = v31;
    if ( !MI_READ_PTE_LOCK_FREE(v19) )
    {
      *v19 = v22;
      ++v16;
    }
    ++v18;
    ++v19;
    v10 += 8LL;
  }
  while ( v18 < v17 );
  if ( v16 )
    MiUpdatePageTableUseCount(v25, v16);
  return v17;
}
