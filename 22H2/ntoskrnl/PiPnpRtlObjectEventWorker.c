/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x1407464B0
 * Callers:
 *     PiDqIrpPropertySet @ 0x14072653C (PiDqIrpPropertySet.c)
 *     PiPnpRtlObjectEventCallback @ 0x140746480 (PiPnpRtlObjectEventCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     RtlLookupElementGenericTableAvl @ 0x14032D970 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14032DA20 (RtlDeleteElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D19D0 (_wcsicmp.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1406ACC70 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlEndOperation @ 0x1406ACCB8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406AD460 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1406AE094 (PiPnpRtlObjectEventCreate.c)
 *     PnpAllocatePWSTR @ 0x1406B0F08 (PnpAllocatePWSTR.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140744D98 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407468F4 (PiDmObjectProcessPropertyChange.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x140765EC4 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1408A48E0 (PiDqObjectManagerMakeInconsistent.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PiPnpRtlObjectEventWorker(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  struct _KTHREAD *v9; // rax
  int PWSTR; // r15d
  void *v11; // rdx
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rbx
  struct _KTHREAD *v15; // rax
  _DWORD *v16; // rcx
  __int128 *v17; // rax
  const wchar_t *v18; // rdi
  __int128 v19; // xmm0
  unsigned int v20; // r13d
  int v21; // eax
  char *v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  const wchar_t *v27; // rdx
  _DWORD *PoolWithTag; // rax
  _DWORD *v29; // rbx
  _RTL_AVL_TABLE *v30; // rcx
  ULONG_PTR v31; // rcx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rcx
  int v34; // ebx
  unsigned int *v35; // r8
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rax
  __int64 *i; // rdi
  char *v39; // rbx
  char *v40; // rbx
  char *v41; // rax
  char **v42; // rcx
  int v43; // eax
  __int64 *v44; // rax
  __int64 v45; // rbx
  _QWORD *v46; // rbx
  void **v47; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v49; // rbx
  char *v50; // rbx
  char *v51; // rax
  char **v52; // rcx
  __int64 ObjectManagerForPnpObjectType; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v55[8]; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v57; // [rsp+48h] [rbp-28h]
  __int128 v58; // [rsp+58h] [rbp-18h] BYREF

  if ( a2 < 7 )
  {
    P = 0LL;
    Src = 0LL;
    v55[0] = 0;
    if ( a3 == 1 )
      goto LABEL_59;
    if ( (int)PiPnpRtlBeginOperation(&P) < 0
      || (v9 = KeGetCurrentThread(),
          --v9->KernelApcDisable,
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u),
          PWSTR = PiPnpRtlObjectEventCreate(a1, a2, (__int64)P, (char **)&Src),
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock),
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread()),
          PWSTR < 0) )
    {
      v11 = Src;
LABEL_54:
      if ( !v11 )
        goto LABEL_59;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
      if ( *((_QWORD *)Src + 7) )
      {
LABEL_58:
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_59:
        ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType((unsigned int)a2);
        if ( ObjectManagerForPnpObjectType )
          PiDqObjectManagerMakeInconsistent(ObjectManagerForPnpObjectType);
        goto LABEL_21;
      }
      v49 = (char *)P;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
      v50 = v49 + 128;
      v51 = (char *)Src + 56;
      v52 = (char **)*((_QWORD *)v50 + 1);
      if ( *v52 == v50 )
      {
        *(_QWORD *)v51 = v50;
        *((_QWORD *)v51 + 1) = v52;
        *v52 = v51;
        *((_QWORD *)v50 + 1) = v51;
        goto LABEL_58;
      }
LABEL_61:
      __fastfail(3u);
    }
    v11 = Src;
    if ( Src )
    {
      v12 = a3 - 2;
      if ( !v12 )
      {
        *((_DWORD *)Src + 1) |= 1u;
        goto LABEL_19;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        *((_DWORD *)Src + 1) |= 2u;
        v31 = *((_QWORD *)Src + 1);
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v31, 0LL);
        v33 = *((_QWORD *)Src + 1);
        v34 = *(_DWORD *)(v33 + 32);
        *(_DWORD *)(v33 + 32) = v34 & 0xFFFFFFFE;
        ExReleasePushLockEx(*((_QWORD *)Src + 1), 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( (v34 & 1) != 0 )
          PiDmRemoveCacheReferenceForObject(a2, a1, v35);
        v36 = KeGetCurrentThread();
        --v36->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
        for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; i = (__int64 *)*i )
        {
          if ( i != P )
          {
            v44 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), &Src);
            if ( v44 )
            {
              v45 = *v44;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), v44);
              v46 = (_QWORD *)(v45 + 56);
              v47 = (void **)i[17];
              if ( *v47 != i + 16 )
                goto LABEL_61;
              *v46 = i + 16;
              v46[1] = v47;
              *v47 = v46;
              i[17] = (__int64)v46;
            }
          }
        }
        ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PiPnpRtlObjectEventDispatch((__int64)Src);
        v39 = (char *)P;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
        v40 = v39 + 128;
        v41 = (char *)Src + 56;
        v42 = (char **)*((_QWORD *)v40 + 1);
        if ( *v42 != v40 )
          goto LABEL_61;
        *((_QWORD *)Src + 8) = v42;
        *(_QWORD *)v41 = v40;
        *v42 = v41;
        *((_QWORD *)v40 + 1) = v41;
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v11 = 0LL;
        Src = 0LL;
        goto LABEL_20;
      }
      v14 = (unsigned int)(v13 - 1);
      if ( !(_DWORD)v14 )
      {
        PiDmObjectProcessPropertyChange(
          a2,
          a1,
          *((_QWORD *)Src + 1),
          *(_QWORD *)(a4 + 8),
          *(_QWORD *)(a4 + 16),
          (__int64)v55);
        if ( v55[0] )
        {
LABEL_19:
          v11 = Src;
          goto LABEL_20;
        }
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        v16 = Src;
        if ( !*((_QWORD *)Src + 7) )
        {
          v17 = *(__int128 **)(a4 + 16);
          v18 = *(const wchar_t **)(a4 + 8);
          v19 = *v17;
          v20 = *((_DWORD *)v17 + 4);
          *(_QWORD *)&v58 = __PAIR64__(a5, v20);
          v57 = v19;
          *((_QWORD *)&v58 + 1) = v18;
          if ( *((_DWORD *)Src + 19) )
          {
            do
            {
              if ( v20 == v16[8 * v14 + 24] )
              {
                v25 = 8LL * (unsigned int)v14;
                v26 = v57 - *(_QWORD *)&v16[v25 + 20];
                if ( (_QWORD)v57 == *(_QWORD *)&v16[v25 + 20] )
                  v26 = *((_QWORD *)&v57 + 1) - *(_QWORD *)&v16[v25 + 22];
                if ( !v26 && a5 == v16[v25 + 25] )
                {
                  v27 = *(const wchar_t **)&v16[v25 + 26];
                  if ( v18 == v27 )
                    goto LABEL_18;
                  if ( v18 && v27 )
                  {
                    if ( !wcsicmp(v18, v27) )
                      goto LABEL_18;
                    v16 = Src;
                  }
                }
              }
              v14 = (unsigned int)(v14 + 1);
            }
            while ( (unsigned int)v14 < v16[19] );
          }
          if ( a5 == 1 )
          {
            v43 = v16[1];
            if ( (v43 & 4) == 0 )
            {
              v16[1] = v43 | 4;
              SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
              v16 = Src;
            }
          }
          v21 = v16[18];
          if ( v16[19] != v21 )
            goto LABEL_16;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (unsigned int)(2 * v21) + 80, 0x41706E50u);
          v29 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src, 32LL * *((unsigned int *)Src + 19) + 80);
            v30 = (_RTL_AVL_TABLE *)((char *)P + 24);
            v29[18] *= 2;
            *(_QWORD *)RtlLookupElementGenericTableAvl(v30, &Src) = v29;
            ExFreePoolWithTag(Src, 0x41706E50u);
            Src = v29;
LABEL_16:
            PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a4 + 8), 0x7FFFFFFFuLL, 0x41706E50u, (PVOID *)&v58 + 1);
            if ( PWSTR >= 0 )
            {
              v22 = (char *)Src;
              v23 = v58;
              v24 = 32LL * *((unsigned int *)Src + 19);
              *(_OWORD *)((char *)Src + v24 + 80) = v57;
              *(_OWORD *)&v22[v24 + 96] = v23;
              ++*((_DWORD *)Src + 19);
            }
            goto LABEL_18;
          }
          PWSTR = -1073741670;
        }
LABEL_18:
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        goto LABEL_19;
      }
      if ( (_DWORD)v14 == 1 )
      {
        *((_DWORD *)Src + 1) |= 8u;
        goto LABEL_19;
      }
    }
LABEL_20:
    if ( PWSTR >= 0 )
    {
LABEL_21:
      if ( P )
        PiPnpRtlEndOperation((PVOID **)P);
      return;
    }
    goto LABEL_54;
  }
}
