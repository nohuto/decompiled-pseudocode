/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x14075FBBC
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1407DF508 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201D54 (ExfAcquireReleasePushLockExclusive.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashDeleteEntries(__int64 a1, __int64 a2, signed __int64 *a3, unsigned int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v6; // r12
  unsigned int v9; // edi
  unsigned int v10; // esi
  void *v11; // r15
  struct _KTHREAD *v12; // rax
  char v13; // dl
  __int64 v14; // xmm0_8
  unsigned int v15; // ebp
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // r9d
  unsigned int v19; // esi
  char *v20; // r15
  char *v21; // rdx
  int v22; // r12d
  __int64 v23; // r8
  struct _KTHREAD *v24; // rax
  unsigned int v26; // ecx
  _QWORD *v27; // rax
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 i; // rax
  __int64 v31; // r9
  signed __int32 v32[8]; // [rsp+0h] [rbp-98h] BYREF
  int v33; // [rsp+20h] [rbp-78h]
  __int64 Pool2; // [rsp+28h] [rbp-70h]
  volatile signed __int64 *v35; // [rsp+30h] [rbp-68h]
  PVOID P; // [rsp+38h] [rbp-60h]
  void *Src[2]; // [rsp+40h] [rbp-58h]
  __int64 v38; // [rsp+50h] [rbp-48h]
  int v39; // [rsp+A0h] [rbp+8h]
  __int64 v40; // [rsp+A0h] [rbp+8h]
  char v41; // [rsp+A8h] [rbp+10h]
  char *v42; // [rsp+A8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v6 = (volatile signed __int64 *)(a1 + 128);
  v35 = (volatile signed __int64 *)(a1 + 128);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v9 = 0;
  v10 = *(_DWORD *)(a2 + 12) << *(_DWORD *)(a2 + 8);
  if ( v10 )
  {
    Pool2 = ExAllocatePool2(256LL, v10, 1212376656LL);
    v11 = (void *)Pool2;
    if ( Pool2 )
    {
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)a3, 0LL);
      v13 = -1;
      v14 = *(_QWORD *)(a2 + 16);
      *(_OWORD *)Src = *(_OWORD *)a2;
      v38 = v14;
      v41 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
      v15 = 1 << v41;
      v16 = -1;
      v17 = 1 << v41;
      if ( 1 << v41 )
      {
        do
        {
          ++v16;
          v17 >>= 1;
        }
        while ( v17 );
      }
      v18 = v16 + 1;
      if ( ((v15 - 1) & v15) == 0 )
        v18 = v16;
      v33 = v18;
      v19 = v10 >> v18;
      if ( ((v19 - 1) & v19) != 0 )
      {
        for ( ; v19; v19 >>= 1 )
          ++v13;
        v19 = 1 << v13;
      }
      v39 = 0;
      memset(v11, 0, (unsigned __int64)v19 << v18);
      v20 = (char *)Src[0];
      v21 = (char *)Src[0] + ((unsigned __int64)HIDWORD(Src[1]) << v41);
      P = Src[0];
      v42 = v21;
      if ( Src[0] < v21 )
      {
        v22 = 0;
        do
        {
          v23 = *(_QWORD *)v20;
          if ( *(_QWORD *)v20 )
          {
            if ( !a5 )
              goto LABEL_26;
            v26 = 0;
            if ( !a4 )
              goto LABEL_26;
            do
            {
              if ( *(_QWORD *)(a5 + 8LL * v26) == v23 )
                break;
              ++v26;
            }
            while ( v26 < a4 );
            if ( v26 >= a4 )
            {
LABEL_26:
              if ( v19 )
              {
                v28 = v19 - 1;
                v29 = 0LL;
                v40 = *(_QWORD *)v20;
                for ( i = 37
                        * (BYTE6(v40)
                         + 37
                         * (BYTE5(v40)
                          + 37
                          * (BYTE4(v40)
                           + 37
                           * (BYTE3(v40) + 37
                                         * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v23 + 11623883)))))))
                        + (unsigned int)HIBYTE(v40); ; i = v19 - 1 )
                {
                  v31 = i & v28;
                  v27 = (_QWORD *)(Pool2 + (v31 << v33));
                  if ( !*v27 || *v27 == v23 )
                    break;
                  if ( !v29 )
                  {
                    v29 = 2654435761LL * v23 + 1;
                    if ( ((-79 * (_BYTE)v23) & 1) != 0 )
                      v29 = 2654435761LL * v23;
                  }
                  v28 = v29 + v31;
                }
              }
              else
              {
                v27 = 0LL;
              }
              memmove(v27, v20, v15);
              v21 = v42;
              ++v22;
            }
          }
          v20 += v15;
        }
        while ( v20 < v21 );
        v39 = v22;
        v6 = v35;
      }
      *(_QWORD *)a2 = Pool2;
      *(_DWORD *)(a2 + 16) = v39;
      if ( _InterlockedCompareExchange64(a3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a3);
      KeAbPostRelease((ULONG_PTR)a3);
      KeLeaveCriticalRegion();
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      _InterlockedOr(v32, 0);
      if ( (*a3 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((ULONG_PTR)a3);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegion();
  return v9;
}
