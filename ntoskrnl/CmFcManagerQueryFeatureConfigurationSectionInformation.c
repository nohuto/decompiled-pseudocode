/*
 * XREFs of CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140777B1C
 * Callers:
 *     CmQueryFeatureConfigurationSections @ 0x1407779D8 (CmQueryFeatureConfigurationSections.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmFcpCopySectionState @ 0x140777D7C (CmFcpCopySectionState.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 */

__int64 __fastcall CmFcManagerQueryFeatureConfigurationSectionInformation(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  __int64 v9; // r13
  _QWORD *v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rsi
  unsigned int v13; // ebx
  PVOID *v14; // r14
  NTSTATUS v15; // ebp
  __int64 *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rax
  HANDLE *v20; // rbx
  PVOID *v21; // rdi
  __int128 v23; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A0h]
  _QWORD v25[10]; // [rsp+60h] [rbp-98h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  memset(v25, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((__int64)&stru_140C13F08, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140C13F08, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140C13F08, 0, v8, (__int64)&stru_140C13F08);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v9 = qword_140C13F18;
  v10 = &unk_140C13F28;
  v11 = 0;
  v12 = 3LL;
  do
  {
    if ( *a2 < *v10 )
      CmFcpCopySectionState(&v25[3 * v11], &CmFcSystemManager[3 * v11 + 5]);
    ++v11;
    ++a2;
    v10 += 3;
  }
  while ( v11 < 3 );
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140C13F08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140C13F08);
  KeAbPostRelease((ULONG_PTR)&stru_140C13F08);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v13 = 0;
  v14 = (PVOID *)&v25[1];
  while ( 1 )
  {
    if ( *v14 )
    {
      v15 = ObOpenObjectByPointer(*v14, a4 == 0 ? 0x200 : 0, 0LL, 4u, MmSectionObjectType, a4, (PHANDLE)&v23 + v13);
      if ( v15 < 0 )
        break;
    }
    ++v13;
    v14 += 3;
    if ( v13 >= 3 )
    {
      memset(a3, 0, 0x50uLL);
      *a3 = v9;
      v16 = (__int64 *)&v23;
      v17 = a3 + 3;
      v18 = 3LL;
      do
      {
        *(v17 - 2) = *(_QWORD *)((char *)v17 + (char *)v25 - (char *)a3 - 24);
        *v17 = *(_QWORD *)((char *)v17 + (char *)&v25[2] - (char *)a3 - 24);
        v17 += 3;
        v19 = *v16;
        *v16++ = 0LL;
        *(v17 - 4) = v19;
        --v18;
      }
      while ( v18 );
      v15 = 0;
      break;
    }
  }
  v20 = (HANDLE *)&v23;
  v21 = (PVOID *)&v25[1];
  do
  {
    if ( *v21 )
      ObfDereferenceObject(*v21);
    if ( *v20 )
      ObCloseHandle(*v20, a4);
    v21 += 3;
    ++v20;
    --v12;
  }
  while ( v12 );
  return (unsigned int)v15;
}
