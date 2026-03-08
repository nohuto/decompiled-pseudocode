/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405BFCAC
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405BF8A0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ZwQueryVirtualMemory @ 0x140412770 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x140415E70 (ZwUnlockVirtualMemory.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1405BFFD4 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
        __int64 a1,
        _DWORD *a2,
        void **a3,
        unsigned int a4,
        int a5,
        _QWORD *a6)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  _DWORD *v9; // r15
  ULONG_PTR v10; // r12
  struct _KTHREAD *CurrentThread; // rax
  bool v12; // zf
  unsigned int v13; // r14d
  __int64 v14; // rdi
  unsigned int v15; // r14d
  PVOID *Pool2; // rax
  unsigned int v17; // r13d
  unsigned int v18; // r10d
  void **v19; // r9
  void *v20; // rcx
  PVOID *v21; // r8
  __int64 v22; // r11
  unsigned int v23; // r15d
  unsigned int v24; // r13d
  unsigned int v25; // r12d
  void *v26; // rcx
  _BYTE *v27; // rdx
  struct _KTHREAD *v28; // rax
  __int64 result; // rax
  int v30; // r8d
  int v31; // r9d
  int MemoryInformationLength; // [rsp+20h] [rbp-30h]
  char *v33; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h]
  __int64 v35; // [rsp+40h] [rbp-10h]
  ULONG_PTR v36; // [rsp+48h] [rbp-8h]
  int v37; // [rsp+90h] [rbp+40h]

  v37 = a1;
  v6 = a1;
  v7 = a4;
  v9 = a2;
  v33 = 0LL;
  v10 = a1 + 6024;
  v36 = a1 + 6024;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(v6 + 6024);
  CurrentThread = KeGetCurrentThread();
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v13 = *(_DWORD *)(v6 + 6208);
  v35 = v13;
  if ( a6 )
  {
    v15 = v13 >> 12;
    Pool2 = (PVOID *)ExAllocatePool2(64LL, 16 * v7 * v15, 1901555059LL);
    P = Pool2;
    if ( Pool2 )
    {
      v17 = 0;
      v18 = 0;
      if ( (_DWORD)v7 )
      {
        v19 = a3;
        do
        {
          v20 = *v19;
          ++v18;
          v33 = (char *)*v19;
          if ( v17 < v15 * v18 )
          {
            v21 = &Pool2[2 * v17];
            v22 = v15 * v18 - v17;
            v17 = v15 * v18;
            do
            {
              *v21 = v20;
              v21 += 2;
              v20 = v33 + 4096;
              v33 += 4096;
              --v22;
            }
            while ( v22 );
          }
          ++v19;
        }
        while ( v18 < (unsigned int)v7 );
        v10 = v36;
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *Pool2,
             (MEMORY_INFORMATION_CLASS)4,
             Pool2,
             16 * v7 * v15,
             0LL) >= 0 )
      {
        v23 = 0;
        v24 = 0;
        if ( (_DWORD)v7 )
        {
          v25 = v15;
          do
          {
            v26 = 0LL;
            v33 = 0LL;
            if ( v23 < v25 )
            {
              v27 = P;
              do
              {
                if ( (v27[16 * v23 + 8] & 1) != 0 )
                {
                  v12 = (*a6)-- == 1LL;
                  v26 = *a3;
                  v33 = (char *)*a3;
                  if ( v12 )
                    break;
                }
                ++v23;
              }
              while ( v23 < v25 );
              v7 = a4;
              if ( v26 )
                ZwUnlockVirtualMemory(-1LL, (__int64)&v33);
            }
            if ( !*a6 )
              break;
            ++v24;
            v25 += v15;
            ++a3;
          }
          while ( v24 < (unsigned int)v7 );
          v10 = v36;
        }
      }
      else
      {
        *a6 = 0LL;
      }
      ExFreePoolWithTag(P, 0);
      LODWORD(v6) = v37;
    }
    else
    {
      *a6 = 0LL;
    }
    v9 = a2;
  }
  else if ( (_DWORD)v7 )
  {
    v14 = v7;
    do
    {
      v33 = (char *)*a3;
      ZwUnlockVirtualMemory(-1LL, (__int64)&v33);
      ++a3;
      --v14;
    }
    while ( v14 );
    v10 = v6 + 6024;
  }
  v28 = KeGetCurrentThread();
  --v28->SpecialApcDisable;
  result = ExAcquirePushLockSharedEx(v10, 0LL);
  if ( (_DWORD)v7 )
  {
    do
    {
      result = SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *v9++, v30, v31, MemoryInformationLength, 2);
      --v7;
    }
    while ( v7 );
  }
  return result;
}
