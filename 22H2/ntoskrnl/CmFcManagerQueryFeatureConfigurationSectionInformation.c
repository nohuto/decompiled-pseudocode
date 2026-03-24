/*
 * XREFs of CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140684420
 * Callers:
 *     CmQueryFeatureConfigurationSections @ 0x1406842DC (CmQueryFeatureConfigurationSections.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     CmFcpCopySectionState @ 0x140684618 (CmFcpCopySectionState.c)
 */

__int64 __fastcall CmFcManagerQueryFeatureConfigurationSectionInformation(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r13
  _QWORD *v9; // rsi
  NTSTATUS v10; // r14d
  unsigned int v11; // ebx
  __int64 v12; // rbp
  PVOID *v13; // rsi
  unsigned int i; // edi
  __int128 *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r10
  HANDLE *v18; // rbx
  PADAPTER_OBJECT *v19; // rdi
  __int128 v21; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-90h]
  _QWORD v23[10]; // [rsp+60h] [rbp-88h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  memset(v23, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&RunOnce, 0LL);
  v8 = qword_140C48198;
  v9 = &unk_140C481A8;
  v10 = 0;
  v11 = 0;
  v12 = 3LL;
  do
  {
    if ( *a2 < *v9 )
      CmFcpCopySectionState(&v23[3 * v11], &CmFcSystemManager[3 * v11 + 5]);
    ++v11;
    ++a2;
    v9 += 3;
  }
  while ( v11 < 3 );
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&RunOnce, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&RunOnce);
  KeAbPostRelease((ULONG_PTR)&RunOnce);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v13 = (PVOID *)&v23[1];
  for ( i = 0; i < 3; ++i )
  {
    if ( *v13 )
    {
      v10 = ObOpenObjectByPointer(*v13, a4 == 0 ? 0x200 : 0, 0LL, 4u, MmSectionObjectType, a4, (PHANDLE)&v21 + i);
      if ( v10 < 0 )
        goto LABEL_12;
      v10 = 0;
    }
    v13 += 3;
  }
  memset(a3, 0, 0x50uLL);
  *a3 = v8;
  v15 = &v21;
  v16 = a3 + 3;
  v17 = 3LL;
  do
  {
    *(v16 - 2) = *(_QWORD *)((char *)v16 + (char *)v23 - (char *)a3 - 24);
    *v16 = *(_QWORD *)((char *)v16 + (char *)&v23[2] - (char *)a3 - 24);
    v16 += 3;
    *(v16 - 4) = *(_QWORD *)v15;
    *(_QWORD *)v15 = 0LL;
    v15 = (__int128 *)((char *)v15 + 8);
    --v17;
  }
  while ( v17 );
LABEL_12:
  v18 = (HANDLE *)&v21;
  v19 = (PADAPTER_OBJECT *)&v23[1];
  do
  {
    if ( *v19 )
      HalPutDmaAdapter(*v19);
    if ( *v18 )
      ObCloseHandle(*v18, a4);
    v19 += 3;
    ++v18;
    --v12;
  }
  while ( v12 );
  return (unsigned int)v10;
}
