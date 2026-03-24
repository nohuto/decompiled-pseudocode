/*
 * XREFs of PsCreateVsmEnclave @ 0x14090D938
 * Callers:
 *     MiCreateVsmEnclave @ 0x1408D2BFC (MiCreateVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     memset @ 0x140413800 (memset.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14069ABC0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     VslCreateEnclave @ 0x14088EFA0 (VslCreateEnclave.c)
 *     PspVsmEnclaveHashAllocator @ 0x14090E790 (PspVsmEnclaveHashAllocator.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsCreateVsmEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _MDL *a6,
        ULONG a7,
        _QWORD *a8)
{
  __int64 v8; // rdi
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // rsi
  char *PoolWithQuotaTag; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  char *v17; // rax
  char *v18; // r14
  int Enclave; // edi
  unsigned int v21; // edi
  signed __int64 v22; // rax
  struct _KTHREAD *v23; // rax
  volatile signed __int64 *v24; // r12
  __int64 v25; // r13
  __int64 v26; // rsi
  char *v27; // r8
  char v28; // cl
  unsigned __int64 v29; // rcx
  __int64 v30; // r10
  __int64 v31; // r12
  _QWORD *v32; // r9
  __int64 v33; // rdx
  void *v34; // rcx
  int v35; // esi
  __int64 v36; // r8
  unsigned int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // [rsp+50h] [rbp-10h]
  __int64 v41; // [rsp+58h] [rbp-8h]

  v8 = a4;
  v10 = a2;
  if ( !a5 && !*(_QWORD *)(a1 + 2248) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = (volatile signed __int64 *)(a1 + 2264);
    ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
    if ( !*(_QWORD *)(a1 + 2248) )
    {
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x20uLL, 0x48457350u);
      if ( PoolWithQuotaTag )
      {
        v15 = (unsigned __int64)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x48457350u);
        *(_QWORD *)(a1 + 2248) = v15;
        if ( v15 )
        {
          *(_DWORD *)v15 = 0;
          *(_QWORD *)(v15 + 8) = PoolWithQuotaTag;
          *(_DWORD *)(v15 + 4) = 128;
          v16 = v15 | 1;
          if ( (PoolWithQuotaTag + 32 >= PoolWithQuotaTag ? 4 : 0) != 0 )
            memset64(PoolWithQuotaTag, v16, PoolWithQuotaTag + 32 >= PoolWithQuotaTag ? 4 : 0);
        }
        else
        {
          ExFreePoolWithTag(PoolWithQuotaTag, 0);
        }
      }
      v8 = a4;
    }
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !*(_QWORD *)(a1 + 2248) )
      return 3221225626LL;
    v10 = a2;
  }
  v17 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x88uLL, 0x65567350u);
  v18 = v17;
  if ( !v17 )
    return 3221225626LL;
  memset(v17, 0, 0x88uLL);
  Enclave = VslCreateEnclave((__int64)v18, a1, v10, a3, v8, a6, a7, a5, (_QWORD *)v18 + 3);
  if ( Enclave >= 0 )
  {
    v21 = 0;
    v18[76] = a5;
    *((_QWORD *)v18 + 14) = 0LL;
    *((_QWORD *)v18 + 2) = 1LL;
    *((_QWORD *)v18 + 13) = 0LL;
    *((_QWORD *)v18 + 6) = 0LL;
    *((_QWORD *)v18 + 4) = a3;
    KeInitializeEvent((PRKEVENT)(v18 + 80), NotificationEvent, 0);
    if ( !a5 )
    {
      if ( !*((_QWORD *)v18 + 1) )
      {
        do
        {
          v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2256), 1uLL);
          *((_QWORD *)v18 + 1) = v22 + 1;
        }
        while ( v22 == -1 );
      }
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v24 = (volatile signed __int64 *)(a1 + 2264);
      ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
      v25 = *(_QWORD *)(a1 + 2248);
      if ( *(_DWORD *)v25 >= (unsigned int)(4 * (*(_DWORD *)(v25 + 4) >> 5)) )
      {
        v26 = (unsigned int)(2 * (*(_DWORD *)(v25 + 4) >> 5));
        if ( (unsigned int)v26 < 4 )
          v26 = 4LL;
        v27 = (char *)PspVsmEnclaveHashAllocator(8LL * (unsigned int)v26);
        if ( v27 )
        {
          if ( (((_DWORD)v26 - 1) & (unsigned int)v26) != 0 )
          {
            v28 = -1;
            do
            {
              ++v28;
              LODWORD(v26) = (unsigned int)v26 >> 1;
            }
            while ( (_DWORD)v26 );
            v26 = (unsigned int)(1 << v28);
          }
          if ( (unsigned int)v26 > 0x4000000 )
            v26 = 0x4000000LL;
          v29 = (unsigned int)v26;
          if ( v27 > &v27[8 * v26] )
            v29 = 0LL;
          if ( v29 )
          {
            memset64(v27, v25 | 1, v29);
            v21 = 0;
          }
          v30 = -1LL << (*(_BYTE *)(v25 + 4) & 0x1F);
          if ( (*(_DWORD *)(v25 + 4) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v31 = *(_QWORD *)(v25 + 8);
              while ( 1 )
              {
                v32 = *(_QWORD **)(v31 + 8LL * v21);
                if ( ((unsigned __int8)v32 & 1) != 0 )
                  break;
                *(_QWORD *)(v31 + 8LL * v21) = *v32;
                v40 = v30 & v32[1];
                v33 = (37
                     * (BYTE6(v40)
                      + 37
                      * (BYTE5(v40)
                       + 37
                       * (BYTE4(v40)
                        + 37
                        * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
                     + HIBYTE(v40)) & (unsigned int)(v26 - 1);
                *v32 = *(_QWORD *)&v27[8 * v33];
                *(_QWORD *)&v27[8 * v33] = v32;
              }
              ++v21;
            }
            while ( v21 < *(_DWORD *)(v25 + 4) >> 5 );
            v24 = (volatile signed __int64 *)(a1 + 2264);
          }
          v34 = *(void **)(v25 + 8);
          v35 = *(_DWORD *)(v25 + 4) & 0x1F | (32 * v26);
          *(_QWORD *)(v25 + 8) = v27;
          *(_DWORD *)(v25 + 4) = v35;
          if ( v34 )
            SC_ENV::Free(v34);
        }
      }
      v36 = *(_QWORD *)(a1 + 2248);
      v37 = *(_DWORD *)(v36 + 4);
      v41 = *((_QWORD *)v18 + 1) & (-1LL << (v37 & 0x1F));
      v38 = *(_QWORD *)(v36 + 8);
      v39 = (37
           * (BYTE6(v41)
            + 37
            * (BYTE5(v41)
             + 37
             * (BYTE4(v41)
              + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
           + HIBYTE(v41)) & ((v37 >> 5) - 1);
      *(_QWORD *)v18 = *(_QWORD *)(v38 + 8 * v39);
      *(_QWORD *)(v38 + 8 * v39) = v18;
      ++*(_DWORD *)v36;
      if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v24);
      KeAbPostRelease((ULONG_PTR)v24);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    *a8 = v18;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v18, 0);
    return (unsigned int)Enclave;
  }
}
