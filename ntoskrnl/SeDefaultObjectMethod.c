/*
 * XREFs of SeDefaultObjectMethod @ 0x1406961E0
 * Callers:
 *     <none>
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x140206AE0 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PsChargeSharedPoolQuota @ 0x140696154 (PsChargeSharedPoolQuota.c)
 *     ObLogSecurityDescriptor @ 0x1406965B0 (ObLogSecurityDescriptor.c)
 *     SeComputeQuotaInformationSize @ 0x1406968A0 (SeComputeQuotaInformationSize.c)
 *     ObDereferenceSecurityDescriptor @ 0x140696920 (ObDereferenceSecurityDescriptor.c)
 *     PsReturnSharedPoolQuota @ 0x140696A48 (PsReturnSharedPoolQuota.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140696AE0 (ObQuerySecurityDescriptorInfo.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeDefaultObjectMethod(
        __int64 a1,
        int a2,
        _DWORD *a3,
        void *a4,
        __int64 a5,
        __int64 *a6,
        int a7,
        __int64 a8)
{
  int v11; // edx
  int v12; // edx
  unsigned int v13; // ebx
  int v14; // ebp
  __int64 v16; // rdi
  unsigned int v17; // ebx
  _QWORD *v18; // rdi
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  bool i; // zf
  signed __int64 v22; // rtt
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v24; // ebx
  void *v25; // rbp
  int v26; // esi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rsi
  __int64 v32; // r13
  void *v33; // rcx
  struct _KTHREAD *v34; // r15
  volatile signed __int64 *v35; // rbp
  _QWORD **v36; // r14
  signed __int64 v37; // rax
  _QWORD *j; // rcx
  PVOID P; // [rsp+40h] [rbp-48h] BYREF
  __int64 v40; // [rsp+48h] [rbp-40h]
  __int64 v41; // [rsp+50h] [rbp-38h]
  unsigned int v42; // [rsp+98h] [rbp+10h] BYREF

  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    v24 = 0;
    v42 = 0;
    v40 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 - 32, 0LL);
    v25 = (void *)(*(_QWORD *)(a1 - 8) & 0xFFFFFFFFFFFFFFF0uLL);
    P = v25;
    if ( v25 )
    {
      v26 = RtlpSetSecurityObject(a1, *a3, (_DWORD)a4, (unsigned int)&P, 0, a7, a8, 0LL);
      if ( v26 >= 0 )
      {
        v26 = ObLogSecurityDescriptor(P);
        if ( v26 >= 0 )
        {
          v26 = SeComputeQuotaInformationSize(P, &v42);
          if ( v26 >= 0 )
          {
            if ( *(_QWORD *)(a1 - 16) == 1LL )
            {
LABEL_18:
              v26 = 0;
              if ( v40 )
                v27 = v40 | 0xF;
              else
                v27 = 0LL;
              v28 = _InterlockedExchange64((volatile __int64 *)(a1 - 8), v27) & 0xF;
              v40 = 0LL;
              v24 = v28 + 1;
              goto LABEL_21;
            }
            v29 = OBJECT_HEADER_TO_QUOTA_INFO(a1 - 48);
            v30 = v42;
            v31 = v29;
            v32 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, v42, 0LL);
            if ( v32 )
            {
              v33 = *(void **)(v31 + 16);
              if ( v33 )
                PsReturnSharedPoolQuota(v33);
              *(_DWORD *)(v31 + 8) = v30;
              *(_QWORD *)(v31 + 16) = v32;
              goto LABEL_18;
            }
            v26 = -1073741756;
          }
        }
LABEL_21:
        ExReleasePushLockEx((__int64 *)(a1 - 32), 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( v40 )
          ObDereferenceSecurityDescriptor(v40, 16LL);
        if ( v25 && v24 )
          ObDereferenceSecurityDescriptor(v25, v24);
        if ( P )
          ExFreePoolWithTag(P, 0);
        return (unsigned int)v26;
      }
    }
    else
    {
      v26 = -1073741609;
    }
    P = 0LL;
    goto LABEL_21;
  }
  v11 = a2 - 1;
  if ( !v11 )
    return ObQuerySecurityDescriptorInfo(a1, a3, a4, a5);
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = 0;
    if ( v12 != 1 )
      KeBugCheckEx(0x29u, 0LL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
    v41 = 0LL;
    if ( a4 )
    {
      v14 = ObLogSecurityDescriptor(a4);
      if ( v14 >= 0 )
      {
        ExFreePoolWithTag(a4, 0);
        *(_QWORD *)(a1 - 8) = 0LL;
      }
      return (unsigned int)v14;
    }
    else
    {
      *(_QWORD *)(a1 - 8) = 0LL;
    }
    return v13;
  }
  v16 = *a6;
  *a6 = 0LL;
  v17 = (v16 & 0xF) + 1;
  v18 = (_QWORD *)((v16 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
  _m_prefetchw(v18 + 1);
  v19 = v18[1];
  v20 = v19 - v17;
  for ( i = v19 == v17; v20 > 0; i = v19 == v17 )
  {
    v22 = v19;
    v19 = _InterlockedCompareExchange64(v18 + 1, v20, v19);
    if ( v22 == v19 )
      return 0LL;
    v20 = v19 - v17;
  }
  if ( !i )
    __fastfail(0xEu);
  v34 = KeGetCurrentThread();
  v35 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v18 + 4));
  --v34->KernelApcDisable;
  v36 = (_QWORD **)(v35 + 1);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v35, 0LL);
  v37 = _InterlockedExchangeAdd64(v18 + 1, -v17) - v17;
  if ( v37 > 0 )
  {
    if ( (_InterlockedExchangeAdd64(v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v35);
    KeAbPostRelease((ULONG_PTR)v35);
    KeLeaveCriticalRegionThread((__int64)v34);
    return 0LL;
  }
  if ( v37 )
    __fastfail(0xEu);
  for ( j = *v36; j != v18; j = (_QWORD *)*j )
    v36 = (_QWORD **)j;
  *v36 = (_QWORD *)*v18;
  if ( (_InterlockedExchangeAdd64(v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v35);
  KeAbPostRelease((ULONG_PTR)v35);
  KeLeaveCriticalRegionThread((__int64)v34);
  ExFreePoolWithTag(v18, 0x6353624Fu);
  return 0LL;
}
