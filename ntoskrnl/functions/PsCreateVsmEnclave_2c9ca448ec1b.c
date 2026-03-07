__int64 __fastcall PsCreateVsmEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _MDL *a6,
        unsigned int a7,
        _QWORD *a8)
{
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // rsi
  char *Pool2; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // r14
  int Enclave; // edi
  signed __int64 v21; // rax
  struct _KTHREAD *v22; // rax
  __int64 v23; // r15
  int v24; // esi
  __int64 v25; // rsi
  char *v26; // r8
  char v27; // cl
  unsigned __int64 v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // r10
  __int64 v31; // r13
  _QWORD *v32; // r9
  __int64 v33; // rdx
  void *v34; // rcx
  int v35; // eax
  __int64 v36; // r8
  unsigned int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // [rsp+50h] [rbp-48h]
  __int64 v41; // [rsp+60h] [rbp-38h]

  v10 = a2;
  if ( !a5 && !*(_QWORD *)(a1 + 2248) )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = (volatile signed __int64 *)(a1 + 2264);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
    if ( !*(_QWORD *)(a1 + 2248) )
    {
      Pool2 = (char *)ExAllocatePool2(257LL, 32LL, 1212511056LL);
      if ( Pool2 )
      {
        v15 = ExAllocatePool2(257LL, 16LL, 1212511056LL);
        *(_QWORD *)(a1 + 2248) = v15;
        if ( v15 )
        {
          *(_DWORD *)v15 = 0;
          *(_QWORD *)(v15 + 8) = Pool2;
          *(_DWORD *)(v15 + 4) = 128;
          v16 = v15 | 1;
          if ( (Pool2 + 32 >= Pool2 ? 4 : 0) != 0 )
            memset64(Pool2, v16, Pool2 + 32 >= Pool2 ? 4 : 0);
        }
        else
        {
          ExFreePoolWithTag(Pool2, 0);
        }
      }
      v10 = a2;
    }
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !*(_QWORD *)(a1 + 2248) )
      return 3221225626LL;
  }
  v17 = ExAllocatePool2(65LL, 136LL, 1700164432LL);
  v18 = (char *)v17;
  if ( !v17 )
    return 3221225626LL;
  Enclave = VslCreateEnclave(v17, a1, v10, a3, a4, a6, a7, a5, (_QWORD *)(v17 + 24));
  if ( Enclave >= 0 )
  {
    v18[76] = a5;
    *((_QWORD *)v18 + 2) = 1LL;
    *((_QWORD *)v18 + 4) = a3;
    *((_QWORD *)v18 + 14) = 0LL;
    *((_QWORD *)v18 + 13) = 0LL;
    *((_QWORD *)v18 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)(v18 + 80), NotificationEvent, 0);
    if ( !a5 )
    {
      if ( !*((_QWORD *)v18 + 1) )
      {
        do
        {
          v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2256), 1uLL);
          *((_QWORD *)v18 + 1) = v21 + 1;
        }
        while ( v21 == -1 );
      }
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
      v23 = *(_QWORD *)(a1 + 2248);
      v24 = *(_DWORD *)(v23 + 4) >> 5;
      if ( *(_DWORD *)v23 >= (unsigned int)(4 * v24) )
      {
        v25 = (unsigned int)(2 * v24);
        if ( (unsigned int)v25 < 4 )
          v25 = 4LL;
        v26 = (char *)PspVsmEnclaveHashAllocator(8LL * (unsigned int)v25, 0LL);
        if ( v26 )
        {
          if ( (((_DWORD)v25 - 1) & (unsigned int)v25) != 0 )
          {
            v27 = -1;
            do
            {
              ++v27;
              LODWORD(v25) = (unsigned int)v25 >> 1;
            }
            while ( (_DWORD)v25 );
            v25 = (unsigned int)(1 << v27);
          }
          if ( (unsigned int)v25 > 0x4000000 )
            v25 = 0x4000000LL;
          v28 = (unsigned int)v25;
          if ( v26 > &v26[8 * v25] )
            v28 = 0LL;
          if ( v28 )
            memset64(v26, v23 | 1, v28);
          v29 = 0;
          v30 = -1LL << (*(_BYTE *)(v23 + 4) & 0x1F);
          if ( (*(_DWORD *)(v23 + 4) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v31 = *(_QWORD *)(v23 + 8);
              while ( 1 )
              {
                v32 = *(_QWORD **)(v31 + 8LL * v29);
                if ( ((unsigned __int8)v32 & 1) != 0 )
                  break;
                *(_QWORD *)(v31 + 8LL * v29) = *v32;
                v40 = v30 & v32[1];
                v33 = (37
                     * (BYTE6(v40)
                      + 37
                      * (BYTE5(v40)
                       + 37
                       * (BYTE4(v40)
                        + 37
                        * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
                     + HIBYTE(v40)) & (unsigned int)(v25 - 1);
                *v32 = *(_QWORD *)&v26[8 * v33];
                *(_QWORD *)&v26[8 * v33] = v32;
              }
              ++v29;
            }
            while ( v29 < *(_DWORD *)(v23 + 4) >> 5 );
          }
          v34 = *(void **)(v23 + 8);
          v35 = (32 * v25) | *(_DWORD *)(v23 + 4) & 0x1F;
          *(_QWORD *)(v23 + 8) = v26;
          *(_DWORD *)(v23 + 4) = v35;
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
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 2264));
      KeAbPostRelease(a1 + 2264);
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
