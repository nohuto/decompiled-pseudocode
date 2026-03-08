/*
 * XREFs of MiDeleteBootRange @ 0x14038BEB8
 * Callers:
 *     MmFreeBootRegistry @ 0x140820DAC (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140B5C404 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiDeleteBootRange(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  volatile LONG *SharedVm; // rbx
  KIRQL v10; // al
  unsigned __int8 v11; // r14
  unsigned __int64 v12; // rbx
  volatile LONG *v13; // rbx
  KIRQL v14; // al
  unsigned __int8 v15; // si
  unsigned __int64 v16; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  signed __int64 v18; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v20; // zf
  signed __int32 v21; // eax
  __int64 v22; // rdi
  __int64 result; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  __int16 v27; // ax
  PVOID *v28; // r8
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  volatile LONG *v33; // rbx
  KIRQL v34; // al
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-90h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-90h]
  _OWORD v37[3]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v38; // [rsp+70h] [rbp-58h]
  unsigned __int64 v39; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v40; // [rsp+D8h] [rbp+10h]
  int v41; // [rsp+E0h] [rbp+18h]
  int v42; // [rsp+E8h] [rbp+20h] BYREF

  v41 = a3;
  v40 = a2;
  v39 = a1;
  v3 = a1;
  v4 = a2;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5;
  v7 = (((a1 + 8 * a2 - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v8 = (__int64)AnyMultiplexedVm;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)AnyMultiplexedVm);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v11 = v10;
  if ( v5 <= v7 )
  {
    do
    {
      v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v6) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v42 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v42);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      *(_QWORD *)(v12 + 24) ^= ((*(_QWORD *)(v12 + 24) + 1LL) ^ *(_QWORD *)(v12 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 += 8LL;
    }
    while ( v6 <= v7 );
    v4 = v40;
    v3 = v39;
    v8 = (__int64)AnyMultiplexedVm;
  }
  MiUnlockWorkingSetExclusive(v8, v11);
  MiDeleteSystemPagableVm(v8, 0LL, v3, v4, 1, v37);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v13 = (volatile LONG *)MiGetSharedVm(v8);
  v14 = ExAcquireSpinLockExclusive(v13);
  *((_DWORD *)v13 + 1) = 0;
  v15 = v14;
  LOBYTE(v41) = v14;
  if ( v5 <= v7 )
  {
    do
    {
      v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v5) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      LODWORD(v39) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v39);
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
      *(_QWORD *)(v16 + 24) ^= ((*(_QWORD *)(v16 + 24) - 1LL) ^ *(_QWORD *)(v16 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v24 = (__int64)(v5 << 25) >> 16;
        v25 = v24;
        v26 = v24 + 4096;
        if ( v24 >= v24 + 4096 )
        {
LABEL_21:
          if ( v25 == v26 )
          {
            v28 = (PVOID *)PsLoadedModuleList;
            v29 = (__int64)(v24 << 25) >> 16;
            while ( 1 )
            {
              v30 = (unsigned __int64)v28[6];
              v31 = (((unsigned int)dword_140C694FC + 4095LL) & 0xFFFFFFFFFFFFF000uLL)
                  + v30
                  + (unsigned int)(*((_DWORD *)v28 + 16) - 1);
              if ( v30 != PsNtosImageBase && v30 != PsHalImageBase )
                v31 += (unsigned __int64)(unsigned int)dword_140C654C4 << 12;
              v32 = ((v31 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
              if ( v5 >= ((v30 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL && v5 <= v32 )
                break;
              v28 = (PVOID *)*v28;
              if ( v28 == &PsLoadedModuleList )
              {
                if ( !v28 )
                  break;
                MiUnlockWorkingSetExclusive(v8, v41);
                MiReturnSystemVa(v29, v29 + 0x200000, 12, 0LL);
                v33 = (volatile LONG *)MiGetSharedVm(v8);
                v34 = ExAcquireSpinLockExclusive(v33);
                *((_DWORD *)v33 + 1) = 0;
                v15 = v34;
                LOBYTE(v41) = v34;
                goto LABEL_10;
              }
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v27 = MI_READ_PTE_LOCK_FREE(v25);
            if ( (v27 & 0xC01) != 0 )
              break;
            if ( (v27 & 0x3E0) == 0 || (v27 & 0x3E0) == 0x300LL )
            {
              v25 += 8LL;
              if ( v25 < v26 )
                continue;
            }
            goto LABEL_21;
          }
        }
        v15 = v41;
      }
LABEL_10:
      v5 += 8LL;
    }
    while ( v5 <= v7 );
    v4 = v40;
  }
  MiUnlockWorkingSetExclusive(v8, v15);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = v4;
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_33;
  if ( v4 + CachedResidentAvailable > 0x100 || v4 >= 0x80000 )
  {
LABEL_32:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v18 = v4 + (int)CachedResidentAvailable - 192;
    }
LABEL_33:
    if ( v18 )
      v18 = _InterlockedExchangeAdd64(&qword_140C6F440, v18);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v21 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            CachedResidentAvailable + v4,
            CachedResidentAvailable);
    v20 = (_DWORD)CachedResidentAvailable == v21;
    LODWORD(CachedResidentAvailable) = v21;
    if ( v20 )
      break;
    if ( v21 == -1 || v4 + v21 > 0x100 )
      goto LABEL_32;
  }
LABEL_16:
  v22 = v4 - *((_QWORD *)&v37[0] + 1);
  MiReturnCommit((__int64)&MiSystemPartition, v22, v18);
  result = qword_140C69628 - v22;
  qword_140C69628 -= v22;
  return result;
}
