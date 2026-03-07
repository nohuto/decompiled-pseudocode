void __fastcall PiPnpRtlObjectEventWorker(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5)
{
  char *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int PWSTR; // esi
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rbx
  struct _KTHREAD *v15; // rax
  _DWORD *v16; // rcx
  __int128 *v17; // rax
  const wchar_t *v18; // r14
  unsigned int v19; // r8d
  __int128 v20; // xmm0
  int v21; // eax
  char *v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  const wchar_t *v27; // rdx
  _DWORD *Pool2; // rax
  _DWORD *v29; // rbx
  int v30; // eax
  ULONG_PTR v31; // rcx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rdx
  int v34; // ebx
  struct _KTHREAD *v35; // rax
  struct _KTHREAD *v36; // rax
  __int64 v37; // rdi
  char *v38; // rsi
  __int64 *v39; // rax
  __int64 v40; // rbx
  _QWORD *v41; // rbx
  _QWORD *v42; // rdx
  PVOID *v43; // r8
  _QWORD *v44; // rax
  struct _KTHREAD *v45; // rax
  PVOID *v46; // rdx
  _QWORD *v47; // rax
  __int64 ObjectManagerForPnpObjectType; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v50[4]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v51; // [rsp+3Ch] [rbp-34h]
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v53; // [rsp+48h] [rbp-28h]
  __int128 v54; // [rsp+58h] [rbp-18h]

  v5 = 0LL;
  Src = 0LL;
  P = 0LL;
  v50[0] = 0;
  v53 = 0LL;
  v54 = 0LL;
  if ( (int)a2 < 7 )
  {
    if ( a3 == 1 )
      goto LABEL_58;
    if ( (int)PiPnpRtlBeginOperation(&P) < 0 )
    {
      v5 = (char *)P;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
      v5 = (char *)P;
      PWSTR = PiPnpRtlObjectEventCreate(a1, a2, P, &Src);
      ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
      KeLeaveCriticalRegion();
      if ( PWSTR >= 0 )
      {
        if ( !Src )
          goto LABEL_19;
        v12 = a3 - 2;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = (unsigned int)(v13 - 1);
            if ( (_DWORD)v14 )
            {
              if ( (_DWORD)v14 == 1 )
                *((_DWORD *)Src + 1) |= 8u;
              goto LABEL_19;
            }
            PiDmObjectProcessPropertyChange(
              a2,
              a1,
              *((_QWORD *)Src + 1),
              *(_QWORD *)(a4 + 8),
              *(_QWORD *)(a4 + 16),
              v50);
            if ( !v50[0] )
            {
              v15 = KeGetCurrentThread();
              --v15->KernelApcDisable;
              ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
              v16 = Src;
              v5 = (char *)P;
              if ( *((_QWORD *)Src + 7) )
                goto LABEL_18;
              v17 = *(__int128 **)(a4 + 16);
              v18 = *(const wchar_t **)(a4 + 8);
              v20 = *v17;
              v51 = *((_DWORD *)v17 + 4);
              v19 = v51;
              *(_QWORD *)&v54 = __PAIR64__(a5, v51);
              v53 = v20;
              *((_QWORD *)&v54 + 1) = v18;
              if ( *((_DWORD *)Src + 19) )
              {
                do
                {
                  if ( v19 == v16[8 * v14 + 24] )
                  {
                    v25 = 8LL * (unsigned int)v14;
                    v26 = v53 - *(_QWORD *)&v16[v25 + 20];
                    if ( (_QWORD)v53 == *(_QWORD *)&v16[v25 + 20] )
                      v26 = *((_QWORD *)&v53 + 1) - *(_QWORD *)&v16[v25 + 22];
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
                    v19 = v51;
                  }
                  v14 = (unsigned int)(v14 + 1);
                }
                while ( (unsigned int)v14 < v16[19] );
              }
              if ( a5 == 1 )
              {
                v30 = v16[1];
                if ( (v30 & 4) == 0 )
                {
                  v16[1] = v30 | 4;
                  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
                  v16 = Src;
                }
              }
              v21 = v16[18];
              if ( v16[19] == v21 )
              {
                Pool2 = (_DWORD *)ExAllocatePool2(256LL, 32LL * (unsigned int)(2 * v21) + 80, 1097887312LL);
                v29 = Pool2;
                if ( !Pool2 )
                {
                  PWSTR = -1073741670;
                  goto LABEL_18;
                }
                memmove(Pool2, Src, 32LL * *((unsigned int *)Src + 19) + 80);
                v29[18] *= 2;
                *(_QWORD *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src) = v29;
                ExFreePoolWithTag(Src, 0x41706E50u);
                Src = v29;
              }
              PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a4 + 8));
              if ( PWSTR >= 0 )
              {
                v22 = (char *)Src;
                v23 = v54;
                v24 = 32LL * *((unsigned int *)Src + 19);
                *(_OWORD *)((char *)Src + v24 + 80) = v53;
                *(_OWORD *)&v22[v24 + 96] = v23;
                ++*((_DWORD *)Src + 19);
              }
LABEL_18:
              ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
              KeLeaveCriticalRegion();
              if ( PWSTR >= 0 )
                goto LABEL_19;
              goto LABEL_53;
            }
          }
          else
          {
            *((_DWORD *)Src + 1) |= 2u;
            v31 = *((_QWORD *)Src + 1);
            v32 = KeGetCurrentThread();
            --v32->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v31, 0LL);
            v33 = *((_QWORD *)Src + 1);
            v34 = *(_DWORD *)(v33 + 32);
            *(_DWORD *)(v33 + 32) = v34 & 0xFFFFFFFE;
            ExReleasePushLockEx(*((__int64 **)Src + 1), 0LL);
            KeLeaveCriticalRegion();
            if ( (v34 & 1) != 0 )
              PiDmRemoveCacheReferenceForObject(a2, a1);
            v35 = KeGetCurrentThread();
            --v35->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
            v36 = KeGetCurrentThread();
            --v36->KernelApcDisable;
            ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
            v37 = PiPnpRtlActiveOperations;
            v38 = (char *)P;
            while ( (__int64 *)v37 != &PiPnpRtlActiveOperations )
            {
              if ( (char *)v37 != v38 )
              {
                v39 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v37 + 24), &Src);
                if ( v39 )
                {
                  v40 = *v39;
                  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v37 + 24), v39);
                  v41 = (_QWORD *)(v40 + 56);
                  v42 = *(_QWORD **)(v37 + 136);
                  if ( *v42 != v37 + 128 )
                    goto LABEL_60;
                  *v41 = v37 + 128;
                  v41[1] = v42;
                  *v42 = v41;
                  *(_QWORD *)(v37 + 136) = v41;
                }
              }
              v37 = *(_QWORD *)v37;
            }
            ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
            KeLeaveCriticalRegion();
            PiPnpRtlObjectEventDispatch(Src);
            RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v38 + 24), &Src);
            v43 = (PVOID *)*((_QWORD *)v38 + 17);
            v44 = (char *)Src + 56;
            if ( *v43 != v38 + 128 )
              goto LABEL_60;
            *v44 = v38 + 128;
            v44[1] = v43;
            *v43 = v44;
            *((_QWORD *)v38 + 17) = v44;
            ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            Src = 0LL;
            v5 = (char *)P;
          }
        }
        else
        {
          *((_DWORD *)Src + 1) |= 1u;
        }
LABEL_19:
        if ( v5 )
          PiPnpRtlEndOperation(v5);
        return;
      }
    }
LABEL_53:
    if ( !Src )
      goto LABEL_58;
    v45 = KeGetCurrentThread();
    --v45->KernelApcDisable;
    ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
    v5 = (char *)P;
    if ( *((_QWORD *)Src + 7) )
    {
LABEL_57:
      ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
      KeLeaveCriticalRegion();
LABEL_58:
      ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(a2);
      if ( ObjectManagerForPnpObjectType )
        PiDqObjectManagerMakeInconsistent(ObjectManagerForPnpObjectType);
      goto LABEL_19;
    }
    RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
    v46 = (PVOID *)*((_QWORD *)v5 + 17);
    v47 = (char *)Src + 56;
    if ( *v46 == v5 + 128 )
    {
      *v47 = v5 + 128;
      v47[1] = v46;
      *v46 = v47;
      *((_QWORD *)v5 + 17) = v47;
      goto LABEL_57;
    }
LABEL_60:
    __fastfail(3u);
  }
}
