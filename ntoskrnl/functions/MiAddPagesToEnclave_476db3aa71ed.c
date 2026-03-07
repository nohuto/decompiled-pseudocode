__int64 __fastcall MiAddPagesToEnclave(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, ULONG_PTR a4, unsigned int a5)
{
  ULONG_PTR v5; // r14
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 *v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // r9d
  int v14; // r10d
  void *v15; // rcx
  char v16; // cl
  char v17; // al
  unsigned __int64 v18; // rdi
  __int64 v19; // r12
  unsigned __int8 v20; // r13
  ULONG_PTR v21; // rax
  unsigned __int64 v22; // rax
  __int64 PageForEnclave; // r13
  unsigned __int64 v24; // rbx
  int v25; // r12d
  char v26; // [rsp+30h] [rbp-78h]
  int v27; // [rsp+34h] [rbp-74h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+40h] [rbp-68h]
  __int64 v30; // [rsp+48h] [rbp-60h]
  __int64 v31; // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+58h] [rbp-50h]
  unsigned __int8 v33; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v34; // [rsp+B8h] [rbp+10h]

  v27 = 0;
  v5 = a3;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  v9 = 0LL;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = *(_QWORD *)(qword_140C67048 + 8LL * *((unsigned __int16 *)v10 + 87));
  v12 = *(_QWORD *)(a1 + 104);
  v30 = v11;
  if ( v12 >= a2 || (v9 = a2 - v12, result = MiReserveEnclavePages(a1, v11, a2 - v12), (int)result >= 0) )
  {
    v13 = *(_DWORD *)(a1 + 64) & 2;
    v14 = 4;
    v15 = 0LL;
    if ( !v13 )
      v15 = qword_140C69398;
    v31 = (__int64)v15;
    v16 = (a5 >> 1) & 2 | 0x35;
    if ( (a5 & 2) == 0 )
      v16 = (a5 >> 1) & 2 | 0x31;
    if ( !v13 )
      v14 = a5;
    v28 = v14;
    v17 = v16 | 0x40;
    if ( !v13 )
      v17 = v16;
    v26 = v17;
    v18 = 0LL;
    v32 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
    v19 = (__int64)(v5 << 25) >> 16;
    v29 = v19;
    v20 = MiLockWorkingSetShared((__int64)v10);
    v33 = v20;
    v21 = a3;
    if ( a3 > a4 )
    {
LABEL_42:
      v25 = 0;
      goto LABEL_43;
    }
    while ( (v5 & 0x78) == 0 && v5 != v21 )
    {
      if ( MiWorkingSetIsContended((__int64)v10) || KeShouldYieldProcessor() )
      {
        if ( v18 )
LABEL_23:
          MiUnlockPageTableInternal((__int64)v10, v18);
        MiUnlockWorkingSetShared((__int64)v10, v20);
        MiLockWorkingSetShared((__int64)v10);
        goto LABEL_28;
      }
      if ( v18 )
      {
        if ( (unsigned int)MiPageTableLockIsContended((__int64)v10, v18) )
          goto LABEL_23;
        goto LABEL_26;
      }
LABEL_28:
      v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v5, 0LL, (*(_DWORD *)(a1 + 48) >> 12) & 0x7F, v20, 0);
LABEL_29:
      if ( (MI_READ_PTE_LOCK_FREE(v5) & 1) == 0 )
      {
        v22 = v9 - 1;
        if ( v9 != v6 )
          v22 = v9;
        v34 = v6 - 1;
        v9 = v22;
        PageForEnclave = MiGetPageForEnclave(a1, v30);
        v24 = MiMapPageInHyperSpaceWorker(PageForEnclave, 0LL, 0x80000000);
        v25 = KeAddEnclavePage(v32, v31, v24, v19, v26, &v27);
        MiUnmapPageInHyperSpaceWorker(v24, 0x11u);
        if ( v25 < 0 )
        {
          MiReturnEnclavePage(PageForEnclave);
          if ( v25 == -1073740657 )
            v25 = -1073741823;
          if ( v18 )
            MiUnlockPageTableInternal((__int64)v10, v18);
LABEL_43:
          MiUnlockWorkingSetShared((__int64)v10, v33);
          if ( v9 )
            MiReturnReservedEnclavePages(a1, v9);
          return (unsigned int)v25;
        }
        MiInitializeEnclavePfn(PageForEnclave, v5, v28);
        MiMakeValidPte(v5, PageForEnclave, v28 | 0x80000000);
        MiWriteEnclavePte(v5, 0);
        v6 = v34;
        v19 = v29;
        v20 = v33;
      }
      v19 += 4096LL;
      v5 += 8LL;
      v29 = v19;
      if ( v5 > a4 )
      {
        if ( v18 )
          MiUnlockPageTableInternal((__int64)v10, v18);
        goto LABEL_42;
      }
      v21 = a3;
    }
    if ( !v18 )
      goto LABEL_28;
LABEL_26:
    if ( (v5 & 0xFFF) != 0 )
      goto LABEL_29;
    MiUnlockPageTableInternal((__int64)v10, v18);
    goto LABEL_28;
  }
  return result;
}
