__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char v7; // r13
  __int64 v8; // r14
  BOOL v9; // r9d
  int GuidEntry; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rbx
  struct _KTHREAD *v13; // rax
  unsigned int SchematizedFilterSize; // eax
  ULONG_PTR v15; // r15
  int v16; // r8d
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned __int8 v20; // di
  unsigned __int16 *v21; // rbx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  unsigned __int8 v25; // r8
  unsigned __int8 v26; // bl
  __int64 v27; // rdi
  unsigned __int8 v28; // r8
  __int64 v29; // rbx
  unsigned int *v30; // r12
  int v31; // eax
  __int64 *v32; // rcx
  REGHANDLE v33; // rdi
  unsigned int *v35; // r15
  int v36; // r12d
  unsigned int *v37; // r14
  __int16 v38; // ax
  void (__fastcall *v39)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD); // rbx
  void *v40; // rdi
  unsigned int v41; // r14d
  __int128 *v42; // r12
  __int64 v43; // rax
  char v44; // r13
  unsigned __int16 *v45; // r15
  unsigned __int8 i; // r14
  __int64 v47; // rdi
  int v48; // r12d
  _KPROCESS *v49; // rcx
  __int64 v50; // rdx
  unsigned __int8 v51; // di
  __int64 v52; // r14
  unsigned int *v53; // rbx
  __int16 v54; // ax
  _KPROCESS *v55; // rcx
  __int64 v56; // rdx
  void *Pool2; // rax
  ULONGLONG v58; // rax
  __int64 v59; // rax
  _BYTE v60[8]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  unsigned int v63; // [rsp+58h] [rbp-A8h]
  __int128 *v64; // [rsp+60h] [rbp-A0h]
  unsigned int *v65; // [rsp+68h] [rbp-98h]
  ULONG_PTR v66; // [rsp+70h] [rbp-90h]
  __int128 v67; // [rsp+80h] [rbp-80h] BYREF
  __int128 v68; // [rsp+90h] [rbp-70h]
  __int128 v69; // [rsp+A0h] [rbp-60h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v70; // [rsp+B0h] [rbp-50h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v71; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]

  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL);
  v9 = (*(_BYTE *)(a1 + 98) & 2) != 0;
  *(_QWORD *)&v69 = a3;
  v65 = a5;
  BugCheckParameter2 = 0LL;
  v64 = 0LL;
  v62 = v8;
  GuidEntry = EtwpFindOrCreateGuidEntry(v8, a2, 2, v9, (__int64)&BugCheckParameter2);
  if ( !GuidEntry )
  {
    *a5 = 120;
    CurrentThread = KeGetCurrentThread();
    v12 = BugCheckParameter2;
    v66 = BugCheckParameter2;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v12 + 408, 0LL);
    *(_QWORD *)(v12 + 416) = KeGetCurrentThread();
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 408LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = KeGetCurrentThread();
    if ( *(_QWORD *)(a1 + 40) )
    {
      GuidEntry = 0;
      v15 = BugCheckParameter2;
    }
    else
    {
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
      v63 = SchematizedFilterSize;
      if ( SchematizedFilterSize )
        *a5 += SchematizedFilterSize + 16;
      if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > a4 )
      {
        v15 = BugCheckParameter2;
        GuidEntry = -1073741789;
      }
      else
      {
        v15 = BugCheckParameter2;
        EtwpReferenceGuidEntry(BugCheckParameter2);
        v17 = (_QWORD *)(v15 + 56);
        *(_QWORD *)(a1 + 40) = v15;
        v18 = *(_QWORD *)(v15 + 56);
        v19 = (_QWORD *)(a1 + 16);
        if ( *(_QWORD *)(v18 + 8) != v15 + 56 )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(a1 + 24) = v17;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = v19;
        if ( *(_DWORD *)(v15 + 96) || (v43 = *(_QWORD *)(v15 + 400)) != 0 && *(_DWORD *)(v43 + 96) )
        {
          v20 = 0;
          v21 = (unsigned __int16 *)(v15 + 134);
          do
          {
            if ( *(_DWORD *)(v21 - 3) )
            {
              v35 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v8, *v21, 0LL);
              if ( (unsigned __int8)EtwpIsGuidAllowed(v35, *(_QWORD *)(a1 + 32) + 40LL) )
              {
                ExAcquirePushLockSharedEx((ULONG_PTR)(v35 + 172), 0LL);
                if ( *((_QWORD *)v35 + 97) )
                  v36 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
                else
                  v36 = -1073741790;
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v35 + 86, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)v35 + 86);
                KeAbPostRelease((ULONG_PTR)(v35 + 172));
                if ( v36 < 0 )
                {
                  EtwpReleaseLoggerContext(v35, 0);
                }
                else
                {
                  v7 += 1 << v20;
                  ExReleaseRundownProtectionCacheAwareEx(
                    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v35 + 137) + 448LL) + 8LL * *v35),
                    1u);
                }
                v8 = v62;
              }
              else
              {
                EtwpReleaseLoggerContext(v35, 0);
              }
            }
            ++v20;
            v21 += 16;
          }
          while ( v20 < 8u );
          v60[0] = v7;
          LOBYTE(v16) = 2;
          EtwpApplyScopeFilters(a1, 0, v16, 0, (__int64)v60);
          v15 = BugCheckParameter2;
          *(_BYTE *)(a1 + 101) = v7 & v60[0];
          v24 = *(_QWORD *)(v15 + 400);
          if ( v24 )
          {
            v44 = 0;
            v45 = (unsigned __int16 *)(v24 + 134);
            for ( i = 0; i < 8u; ++i )
            {
              if ( *(_DWORD *)(v45 - 3) )
              {
                v47 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v45, 0LL);
                if ( (unsigned __int8)EtwpIsGuidAllowed(v47, *(_QWORD *)(a1 + 32) + 40LL) )
                {
                  ExAcquirePushLockSharedEx(v47 + 688, 0LL);
                  if ( *(_QWORD *)(v47 + 776) )
                    v48 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
                  else
                    v48 = -1073741790;
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 688), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v47 + 688));
                  KeAbPostRelease(v47 + 688);
                  if ( v48 >= 0 )
                    v44 += 1 << i;
                }
                EtwpReleaseLoggerContext((unsigned int *)v47, 0);
              }
              v45 += 16;
            }
            v60[0] = v44;
            LOBYTE(v23) = 1;
            LOBYTE(v22) = 2;
            EtwpApplyScopeFilters(a1, 0, v22, v23, (__int64)v60);
            v15 = BugCheckParameter2;
            v8 = v62;
            *(_BYTE *)(a1 + 103) = v44 & v60[0];
          }
          v25 = *(_BYTE *)(a1 + 101);
          if ( v25 )
          {
            v26 = 0;
            v27 = 0LL;
            do
            {
              if ( ((unsigned __int8)(1 << v26) & v25) != 0 )
              {
                v37 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                                        v8,
                                        *(unsigned __int16 *)(v27 + *(_QWORD *)(a1 + 40) + 134),
                                        0LL);
                v38 = *(_WORD *)(a1 + 98);
                if ( (v38 & 0x20) != 0 || (v37[204] & 0x2000000) != 0 )
                {
                  if ( (v38 & 1) != 0 )
                  {
                    EtwpProviderArrivalCallback(v37, 0LL, a1);
                  }
                  else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
                  {
                    v49 = *(_KPROCESS **)(a1 + 80);
                    memset(&v70, 0, sizeof(v70));
                    KiStackAttachProcess(v49, 0, (__int64)&v70);
                    LOBYTE(v50) = 1;
                    EtwpProviderArrivalCallback(v37, v50, a1);
                    KiUnstackDetachProcess(&v70);
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
                  }
                }
                ExReleaseRundownProtectionCacheAwareEx(
                  *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v37 + 137) + 448LL) + 8LL * *v37),
                  1u);
                v25 = *(_BYTE *)(a1 + 101);
              }
              v8 = v62;
              ++v26;
              v27 += 32LL;
            }
            while ( v26 < 8u );
          }
          else if ( !*(_BYTE *)(a1 + 103) )
          {
            GuidEntry = 0;
            *v65 = 0;
            goto LABEL_22;
          }
          v28 = *(_BYTE *)(a1 + 103);
          if ( v28 )
          {
            v51 = 0;
            v52 = 0LL;
            do
            {
              if ( ((unsigned __int8)(1 << v51) & v28) != 0 )
              {
                v53 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                                        EtwpHostSiloState,
                                        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v52 + 134),
                                        0LL);
                v54 = *(_WORD *)(a1 + 98);
                if ( (v54 & 0x20) != 0 || (v53[204] & 0x2000000) != 0 )
                {
                  if ( (v54 & 1) != 0 )
                  {
                    EtwpProviderArrivalCallback(v53, 0LL, a1);
                  }
                  else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
                  {
                    v55 = *(_KPROCESS **)(a1 + 80);
                    memset(&v71, 0, sizeof(v71));
                    KiStackAttachProcess(v55, 0, (__int64)&v71);
                    LOBYTE(v56) = 1;
                    EtwpProviderArrivalCallback(v53, v56, a1);
                    KiUnstackDetachProcess(&v71);
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
                  }
                }
                EtwpReleaseLoggerContext(v53, 0);
                v28 = *(_BYTE *)(a1 + 103);
              }
              ++v51;
              v52 += 32LL;
            }
            while ( v51 < 8u );
          }
          if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
          {
            v39 = *(void (__fastcall **)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD))(a1 + 88);
            if ( v39 )
            {
              v40 = 0LL;
              v69 = 0LL;
              v67 = 0LL;
              v68 = 0LL;
              EtwpComputeRegEntryEnableInfo(a1, (__int64)&v67);
              v41 = v63;
              if ( v63 )
              {
                Pool2 = (void *)ExAllocatePool2(256LL, v63, 1182233669LL);
                v40 = Pool2;
                if ( Pool2 )
                {
                  v42 = &v69;
                  *(_QWORD *)&v69 = Pool2;
                  *((_QWORD *)&v69 + 1) = v41 | 0x8000000000000000uLL;
                  EtwpCopySchematizedFilters(Pool2);
                }
                else
                {
                  v42 = v64;
                }
              }
              else
              {
                v42 = 0LL;
              }
              v39(&NullGuid, 1LL, BYTE4(v67), v68, *((_QWORD *)&v68 + 1), v42, *(_QWORD *)(a1 + 80));
              if ( v40 )
                ExFreePoolWithTag(v40, 0);
            }
          }
          else
          {
            v29 = v69;
            EtwpComputeRegEntryEnableInfo(a1, v69 + 72);
            v30 = v65;
            *v65 = 120;
            v31 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
            if ( v31 )
            {
              *v30 = v31 + 136;
              *(_DWORD *)(v29 + 132) = 0x80000000;
              *(_DWORD *)(v29 + 128) = v31;
              *(_QWORD *)(v29 + 120) = 136LL;
              EtwpCopySchematizedFilters((void *)(v29 + 136));
              *(_DWORD *)(v29 + 116) = 1;
            }
            else
            {
              *(_DWORD *)(v29 + 116) = 0;
            }
          }
        }
        else
        {
          *a5 = 0;
        }
        GuidEntry = 0;
      }
    }
LABEL_22:
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = 0LL;
    ExReleasePushLockEx((__int64 *)(*(_QWORD *)(a1 + 32) + 408LL), 0LL);
    KeLeaveCriticalRegion();
    v32 = (__int64 *)(v66 + 408);
    *(_QWORD *)(v66 + 416) = 0LL;
    ExReleasePushLockEx(v32, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_23;
  }
  v15 = BugCheckParameter2;
LABEL_23:
  if ( v15 )
    EtwpUnreferenceGuidEntry(v15);
  if ( GuidEntry >= 0 )
  {
    v33 = EtwpEventTracingProvRegHandle;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    {
      v58 = *(_QWORD *)(a1 + 32) + 40LL;
      *(_QWORD *)&UserData.Size = 16LL;
      UserData.Ptr = v58;
      v59 = *(_QWORD *)(a1 + 40);
      v74 = 16LL;
      v73 = v59 + 40;
      EtwWrite(v33, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &UserData);
    }
  }
  return (unsigned int)GuidEntry;
}
