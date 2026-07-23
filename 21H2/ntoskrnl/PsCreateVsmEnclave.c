/*
 * XREFs of PsCreateVsmEnclave @ 0x14090DA48
 * Callers:
 *     MiCreateVsmEnclave @ 0x1408D2D0C (MiCreateVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memset @ 0x140414300 (memset.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     VslCreateEnclave @ 0x14088F0B0 (VslCreateEnclave.c)
 *     PspVsmEnclaveHashAllocator @ 0x14090E8A0 (PspVsmEnclaveHashAllocator.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rax
  char *v21; // r14
  int Enclave; // edi
  unsigned int v24; // edi
  signed __int64 v25; // rax
  struct _KTHREAD *v26; // rax
  volatile signed __int64 *v27; // r12
  __int64 v28; // r13
  __int64 v29; // rsi
  char *v30; // r8
  char v31; // cl
  unsigned __int64 v32; // rcx
  __int64 v33; // r10
  __int64 v34; // r12
  _QWORD *v35; // r9
  __int64 v36; // rdx
  void *v37; // rcx
  int v38; // esi
  __int64 v39; // r8
  unsigned int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // [rsp+50h] [rbp-10h]
  __int64 v47; // [rsp+58h] [rbp-8h]

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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
    if ( !*(_QWORD *)(a1 + 2248) )
      return 3221225626LL;
    v10 = a2;
  }
  v20 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x88uLL, 0x65567350u);
  v21 = v20;
  if ( !v20 )
    return 3221225626LL;
  memset(v20, 0, 0x88uLL);
  Enclave = VslCreateEnclave((__int64)v21, a1, v10, a3, v8, a6, a7, a5, (_QWORD *)v21 + 3);
  if ( Enclave >= 0 )
  {
    v24 = 0;
    v21[76] = a5;
    *((_QWORD *)v21 + 14) = 0LL;
    *((_QWORD *)v21 + 2) = 1LL;
    *((_QWORD *)v21 + 13) = 0LL;
    *((_QWORD *)v21 + 6) = 0LL;
    *((_QWORD *)v21 + 4) = a3;
    KeInitializeEvent((PRKEVENT)(v21 + 80), NotificationEvent, 0);
    if ( !a5 )
    {
      if ( !*((_QWORD *)v21 + 1) )
      {
        do
        {
          v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2256), 1uLL);
          *((_QWORD *)v21 + 1) = v25 + 1;
        }
        while ( v25 == -1 );
      }
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      v27 = (volatile signed __int64 *)(a1 + 2264);
      ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
      v28 = *(_QWORD *)(a1 + 2248);
      if ( *(_DWORD *)v28 >= (unsigned int)(4 * (*(_DWORD *)(v28 + 4) >> 5)) )
      {
        v29 = (unsigned int)(2 * (*(_DWORD *)(v28 + 4) >> 5));
        if ( (unsigned int)v29 < 4 )
          v29 = 4LL;
        v30 = (char *)PspVsmEnclaveHashAllocator(8LL * (unsigned int)v29);
        if ( v30 )
        {
          if ( (((_DWORD)v29 - 1) & (unsigned int)v29) != 0 )
          {
            v31 = -1;
            do
            {
              ++v31;
              LODWORD(v29) = (unsigned int)v29 >> 1;
            }
            while ( (_DWORD)v29 );
            v29 = (unsigned int)(1 << v31);
          }
          if ( (unsigned int)v29 > 0x4000000 )
            v29 = 0x4000000LL;
          v32 = (unsigned int)v29;
          if ( v30 > &v30[8 * v29] )
            v32 = 0LL;
          if ( v32 )
          {
            memset64(v30, v28 | 1, v32);
            v24 = 0;
          }
          v33 = -1LL << (*(_BYTE *)(v28 + 4) & 0x1F);
          if ( (*(_DWORD *)(v28 + 4) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v34 = *(_QWORD *)(v28 + 8);
              while ( 1 )
              {
                v35 = *(_QWORD **)(v34 + 8LL * v24);
                if ( ((unsigned __int8)v35 & 1) != 0 )
                  break;
                *(_QWORD *)(v34 + 8LL * v24) = *v35;
                v46 = v33 & v35[1];
                v36 = (37
                     * (BYTE6(v46)
                      + 37
                      * (BYTE5(v46)
                       + 37
                       * (BYTE4(v46)
                        + 37
                        * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
                     + HIBYTE(v46)) & (unsigned int)(v29 - 1);
                *v35 = *(_QWORD *)&v30[8 * v36];
                *(_QWORD *)&v30[8 * v36] = v35;
              }
              ++v24;
            }
            while ( v24 < *(_DWORD *)(v28 + 4) >> 5 );
            v27 = (volatile signed __int64 *)(a1 + 2264);
          }
          v37 = *(void **)(v28 + 8);
          v38 = *(_DWORD *)(v28 + 4) & 0x1F | (32 * v29);
          *(_QWORD *)(v28 + 8) = v30;
          *(_DWORD *)(v28 + 4) = v38;
          if ( v37 )
            SC_ENV::Free(v37);
        }
      }
      v39 = *(_QWORD *)(a1 + 2248);
      v40 = *(_DWORD *)(v39 + 4);
      v47 = *((_QWORD *)v21 + 1) & (-1LL << (v40 & 0x1F));
      v41 = *(_QWORD *)(v39 + 8);
      v42 = (37
           * (BYTE6(v47)
            + 37
            * (BYTE5(v47)
             + 37
             * (BYTE4(v47)
              + 37 * (BYTE3(v47) + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v47 + 11623883)))))))
           + HIBYTE(v47)) & ((v40 >> 5) - 1);
      *(_QWORD *)v21 = *(_QWORD *)(v41 + 8 * v42);
      *(_QWORD *)(v41 + 8 * v42) = v21;
      ++*(_DWORD *)v39;
      if ( (_InterlockedExchangeAdd64(v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v27);
      KeAbPostRelease((ULONG_PTR)v27);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v43, v44, v45);
    }
    *a8 = v21;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v21, 0);
    return (unsigned int)Enclave;
  }
}
