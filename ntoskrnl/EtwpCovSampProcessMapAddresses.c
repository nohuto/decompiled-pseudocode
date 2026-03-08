/*
 * XREFs of EtwpCovSampProcessMapAddresses @ 0x1408A5072
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408A3ADC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampContextAddAddresses @ 0x1408A4096 (EtwpCovSampContextAddAddresses.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     EtwpCovSampProcessUpperBoundModule @ 0x1408A532E (EtwpCovSampProcessUpperBoundModule.c)
 */

__int64 __fastcall EtwpCovSampProcessMapAddresses(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  volatile signed __int64 *v8; // r15
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // r8d
  unsigned __int64 v14; // r9
  unsigned __int64 *v15; // r13
  unsigned __int64 *v16; // r15
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  _QWORD *v20; // rcx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rax
  int v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+30h] [rbp-48h]
  unsigned int v29; // [rsp+80h] [rbp+8h]

  v7 = a7;
  v8 = (volatile signed __int64 *)(a1 + 8);
  v9 = a2;
  *a7 = 0;
  v27 = MEMORY[0xFFFFF78000000320];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( v9 != *(_QWORD *)a1 || !a6 )
    goto LABEL_22;
  v13 = 0;
  v14 = 0LL;
  v26 = 0;
  v15 = 0LL;
  v29 = 0;
  v28 = 0LL;
  if ( !a4 )
    goto LABEL_21;
  v16 = a3;
  while ( 1 )
  {
    v17 = *v16;
    if ( v15 )
    {
      if ( v17 < v14 || v17 >= *v15 )
      {
        v15 = 0LL;
      }
      else
      {
        v18 = v15[1];
        if ( v18 )
          goto LABEL_14;
      }
    }
    v19 = EtwpCovSampProcessUpperBoundModule(a1, *v16);
    v13 = v29;
    if ( v19 >= *(_DWORD *)(a1 + 32) )
    {
      v14 = v28;
      goto LABEL_19;
    }
    v20 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v19);
    v18 = v20[1];
    v14 = *v20 - *(_QWORD *)(v18 + 40);
    v28 = v14;
    if ( v17 >= v14 )
      break;
LABEL_19:
    ++v16;
    if ( ++v26 >= a4 )
      goto LABEL_20;
  }
  v15 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 16LL * v19);
LABEL_14:
  v21 = *(_DWORD *)(v18 + 132) == 0;
  *(_DWORD *)(v18 + 136) = v27;
  if ( v21 )
    _InterlockedExchange((volatile __int32 *)(v18 + 132), 1);
  v22 = v13++;
  v29 = v13;
  *(_DWORD *)(a5 + 8 * v22) = *(_DWORD *)(v18 + 124);
  *(_DWORD *)(a5 + 8 * v22 + 4) = v17 - v14;
  if ( v13 < a6 )
    goto LABEL_19;
LABEL_20:
  v9 = a2;
  v8 = (volatile signed __int64 *)(a1 + 8);
  v7 = a7;
LABEL_21:
  *v7 = v13;
LABEL_22:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KeLeaveCriticalRegion();
  }
  if ( a1 == v9 + 1248 )
  {
    v23 = 1140LL;
    v24 = (volatile signed __int32 *)(v9 + 1136);
  }
  else
  {
    v23 = 1132LL;
    v24 = (volatile signed __int32 *)(v9 + 1128);
  }
  _InterlockedExchangeAdd(v24, a4);
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + v23), *v7);
}
