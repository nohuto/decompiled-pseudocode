__int64 __fastcall MiCloneCaptureVadCommit(__int64 a1)
{
  _QWORD *Pool; // rax
  _QWORD *v3; // rdi
  int v5; // ebp
  unsigned __int64 *v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  volatile LONG *SharedVm; // rbx
  KIRQL v10; // al
  KIRQL v11; // r13
  __int64 NextPageTable; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  volatile LONG *v19; // rbx
  int v20; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp+18h]

  v20 = 0;
  Pool = MiAllocatePool(64, 0x90uLL, 0x6356694Du);
  v3 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = 0LL;
  *Pool = 0LL;
  v5 = 0;
  v6 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v7 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v21 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v8 = v21;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)v6);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v11 = v10;
  if ( v7 <= v8 )
  {
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v7, v8, 0LL, v11, 4, &v20);
      if ( !NextPageTable )
        goto LABEL_15;
      v13 = NextPageTable & 0xFFFFFFFFFFFFF000uLL;
      v14 = v3[1];
      v15 = (__int64)((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
      if ( !v14 )
        goto LABEL_13;
      v16 = v3[v14 + 1];
      v17 = v16 & 0x1FFFFF;
      if ( v17 + 1 < v17 || v17 == 0x1FFFFF || (v16 & 0xFFFFFFFFFFE00000uLL) + ((v17 + 1) << 21) != v15 )
        break;
      v3[v14 + 1] = v16 & 0xFFFFFFFFFFE00000uLL | (v16 + 1) & 0x1FFFFF;
LABEL_14:
      v8 = v21;
      v7 = v13 + 4096;
      if ( v7 > v21 )
        goto LABEL_15;
    }
    if ( v14 == 16 )
    {
      MiUnlockWorkingSetExclusive((__int64)v6, v11);
      v18 = MiAllocatePool(64, 0x90uLL, 0x6356694Du);
      if ( !v18 )
      {
        v5 = -1073741670;
        goto LABEL_16;
      }
      v18[1] = 0LL;
      *v18 = v3;
      v3 = v18;
      v19 = (volatile LONG *)MiGetSharedVm((__int64)v6);
      ExAcquireSpinLockExclusive(v19);
      *((_DWORD *)v19 + 1) = 0;
    }
LABEL_13:
    v3[v3[1]++ + 2] = v15;
    goto LABEL_14;
  }
LABEL_15:
  MiUnlockWorkingSetExclusive((__int64)v6, v11);
LABEL_16:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v5 < 0 )
    MiCloneDiscardVadCommit(a1);
  return (unsigned int)v5;
}
