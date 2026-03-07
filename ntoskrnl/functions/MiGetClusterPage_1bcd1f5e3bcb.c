__int64 __fastcall MiGetClusterPage(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r11
  unsigned __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r11
  unsigned int v14; // edi
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // r14
  __int64 ProtoPteAddress; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  bool v24; // zf
  unsigned __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r12
  unsigned int v28; // eax
  __int64 LargePage; // rdi
  __int64 result; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdi
  ULONG_PTR v33; // r15
  unsigned int v34; // eax
  __int64 v35; // r8
  bool v36; // zf
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v42[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v43; // [rsp+78h] [rbp-88h]
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v45[30]; // [rsp+90h] [rbp-70h] BYREF

  v41 = a2;
  v40 = a3;
  v38 = a4;
  v43 = a6;
  v44 = 0LL;
  memset(v45, 0, 0x68uLL);
  v8 = 0LL;
  *a6 = 0;
  v9 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v37 = 0LL;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = *(unsigned int *)(a1 + 24) | v9;
  v39 = v10;
  v42[0] = a2 & 0xFFFFFFFFFFFF0000uLL;
  v42[1] = 0x10000LL;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) >> 12 < v11
    || ((a2 & 0xFFFFFFFFFFFF0000uLL) + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v12 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
  MiInitializePageColorBase((__int64)v10, v12, (__int64)&v44);
  v14 = HIDWORD(v44) >> byte_140C6570D;
  v24 = (*(_DWORD *)(a1 + 48) & 0x200000) == 0;
  LOWORD(v45[0]) = 2;
  v45[1] = v42;
  v45[2] = 1LL;
  v45[3] = 0LL;
  v45[4] = 0LL;
  if ( v24 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 0, &v37);
    v19 = *(_QWORD *)(v37 + 8);
    v20 = v19 + 8 * (*(unsigned int *)(v37 + 44) - (unsigned __int64)(*(_DWORD *)(v37 + 52) & 0x3FFFFFFF));
    if ( (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) > v19 )
      v19 = ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL;
    if ( v20 > (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v20 = (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096;
    v21 = 8 * (((a2 & 0xFFFFFFFFFFFFF000uLL) - v42[0]) >> 12);
    v16 = ProtoPteAddress - v21;
    if ( ProtoPteAddress - v21 < v19 || ProtoPteAddress - v21 + 128 > v20 )
      return 0LL;
    v17 = ((v42[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = *(_WORD *)(*(_QWORD *)v37 + 60LL) & 0x3FF;
  }
  else
  {
    v15 = *(unsigned __int16 *)(v13 + 174);
    v16 = ((v42[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = 0LL;
  }
  v22 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * v15) + 16LL);
  v37 = *(_QWORD *)(qword_140C67048 + 8 * v15);
  *(_BYTE *)(25408LL * v14 + v22 + 3251) = 1;
  do
  {
    v45[v8 + 14] = MI_READ_PTE_LOCK_FREE(v16 + 8 * v8);
    ++v8;
  }
  while ( v8 < 0x10 );
  v23 = 0LL;
  do
  {
    if ( a5 )
    {
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v45[v23 + 14]) )
        break;
      v24 = ((v25 >> 5) & 0x1F) == a5;
    }
    else
    {
      v24 = v45[v23 + 14] == 0LL;
    }
    if ( !v24 || v17 && (unsigned int)MiIsPteEvaluated(v17, a5) )
      break;
    if ( ++v23 == v40 )
      break;
  }
  while ( v23 < 0x10 );
  v26 = -1LL;
  if ( v23 == 16 )
  {
    v27 = (__int64)v39;
    if ( MiComputeZeroClusterMaximum((__int64)v45, (__int64)v39, a1) != 16 )
      return 0LL;
    v28 = MiProtectionToCacheAttribute(v38);
    LargePage = MiGetLargePage(v37, v42[0], 2, v14, v28, 4, 0LL);
    if ( LargePage )
    {
      MiConvertEntireLargePageToSmall(LargePage, 2, 2, 1, 0LL, 0LL, 0LL);
      return LargePage;
    }
  }
  else
  {
    v23 = 0LL;
    while ( 1 )
    {
      v40 = v45[v23 + 14];
      if ( (v40 & 1) != 0 )
        break;
      if ( ++v23 >= 0x10 )
        goto LABEL_33;
    }
    v31 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40);
    v26 = (v31 >> 12) & 0xFFFFFFFFFFLL;
    if ( (unsigned __int16)v31 >> 12 != v23 )
      return 0LL;
LABEL_33:
    v27 = (__int64)v39;
  }
  v32 = (v41 >> 9) & 0x7FFFFFFFF8LL;
  v41 = 1LL;
  v33 = ((__int64)(v32 - ((v42[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) & 0xF;
  v34 = MiProtectionToCacheAttribute(v38);
  result = MiGetPageChain(v37, v27, v35, v12, v34, 258, v33, &v41);
  if ( !result )
    return 0LL;
  if ( v23 == 16 )
    v36 = (((result + 0x220000000000LL) / 48) & 0xF) == v33;
  else
    v36 = v26 + ((__int64)(v32 - ((v42[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) - v23 == (result + 0x220000000000LL) / 48;
  if ( !v36 )
    *v43 = 1;
  return result;
}
