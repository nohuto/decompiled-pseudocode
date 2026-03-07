__int64 __fastcall EtwpRegisterKMProvider(
        int a1,
        _QWORD *a2,
        int a3,
        void (__fastcall *a4)(ULONG_PTR, __int64, __int64 *, __int64),
        __int64 a5,
        __int64 a6,
        __int128 **a7)
{
  bool v10; // zf
  __int64 v11; // rax
  unsigned int GuidEntry; // edi
  ULONG_PTR v13; // rsi
  struct _KTHREAD *v14; // rax
  ULONG_PTR v15; // rdi
  int v16; // edx
  ULONG_PTR v17; // rbx
  int v18; // edx
  int v19; // r8d
  __int128 *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  ULONG_PTR v25; // rax
  __int64 v26; // rax
  unsigned __int8 v28; // cl
  __int16 v29; // ax
  __int64 v30; // rdx
  int v31; // r8d
  void *Pool2; // r14
  unsigned int SchematizedFilterSize; // eax
  __int64 v34; // r8
  unsigned int v35; // r12d
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-51h] BYREF
  __int128 *v38; // [rsp+48h] [rbp-49h] BYREF
  ULONG_PTR v39; // [rsp+50h] [rbp-41h]
  __int128 v40; // [rsp+58h] [rbp-39h] BYREF
  __int128 v41; // [rsp+68h] [rbp-29h]
  __int64 v42; // [rsp+78h] [rbp-19h] BYREF
  int v43; // [rsp+80h] [rbp-11h]
  int v44; // [rsp+84h] [rbp-Dh]
  __int128 v45; // [rsp+88h] [rbp-9h] BYREF

  v42 = a5;
  BugCheckParameter2 = 0LL;
  *a7 = 0LL;
  v11 = *a2 - SecurityProviderGuid;
  v10 = *a2 == (_QWORD)SecurityProviderGuid;
  v38 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( v10 )
    v11 = a2[1] - *((_QWORD *)&SecurityProviderGuid + 1);
  if ( !v11 )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  GuidEntry = EtwpFindOrCreateGuidEntry(a1, (_DWORD)a2, 0, 0, (__int64)&BugCheckParameter2);
  if ( GuidEntry )
  {
    v17 = BugCheckParameter2;
  }
  else
  {
    v13 = BugCheckParameter2;
    if ( *(_QWORD *)(BugCheckParameter2 + 400) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v13 + 400) + 408LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(v13 + 400) + 416LL) = KeGetCurrentThread();
    }
    v14 = KeGetCurrentThread();
    v15 = BugCheckParameter2;
    v39 = BugCheckParameter2;
    --v14->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v15 + 408, 0LL);
    v16 = a3;
    v17 = BugCheckParameter2;
    *(_QWORD *)(v15 + 416) = KeGetCurrentThread();
    LODWORD(BugCheckParameter2) = EtwpAddKmRegEntry(v17, v16, (_DWORD)a4, a5, (__int64)&v38);
    GuidEntry = BugCheckParameter2;
    if ( (BugCheckParameter2 & 0x80000000) == 0LL )
    {
      v20 = v38;
      *((_QWORD *)v38 + 6) = a6;
      *a7 = v20;
      if ( *(_DWORD *)(v17 + 96) )
      {
        LOBYTE(v18) = (*((_BYTE *)v20 + 98) & 8) != 0;
        EtwpUpdateEnableMask(v17, v18, 0, 0, (__int64)v20 + 100);
      }
      v21 = *(_QWORD *)(v13 + 400);
      if ( v21 && *(_DWORD *)(v21 + 96) )
      {
        LOBYTE(v18) = (*((_BYTE *)v20 + 98) & 8) != 0;
        LOBYTE(v19) = 1;
        EtwpUpdateEnableMask(v21, v18, v19, 0, (__int64)v20 + 102);
      }
      EtwpComputeRegEntryEnableInfo(v20, &v40);
      EtwpTrackProviderRegistration(v20);
      if ( a4 )
      {
        if ( (*((_BYTE *)v20 + 98) & 8) != 0 )
        {
          if ( (*(_BYTE *)(v17 + 91) & 1) != 0 )
          {
            v28 = *(_BYTE *)(v17 + 90);
            v29 = *(_WORD *)(v17 + 88);
            v30 = *(unsigned int *)(v17 + 80);
            v31 = *(_DWORD *)(v17 + 84);
            v44 = 0;
            LOWORD(v42) = v29;
            WORD1(v42) = v28;
            HIDWORD(v42) = v30;
            LOBYTE(v30) = 1;
            v43 = v31;
            a4(v17 + 40, v30, &v42, a5);
          }
        }
        else if ( (_DWORD)v40 )
        {
          Pool2 = 0LL;
          v38 = 0LL;
          v45 = 0LL;
          LOBYTE(v22) = *((_BYTE *)v20 + 100);
          SchematizedFilterSize = EtwpGetSchematizedFilterSize(v17, v22);
          v35 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            Pool2 = (void *)ExAllocatePool2(256LL, SchematizedFilterSize, 1182233669LL);
            if ( Pool2 )
            {
              *(_QWORD *)&v45 = Pool2;
              *((_QWORD *)&v45 + 1) = v35 | 0x8000000000000000uLL;
              v38 = &v45;
              EtwpCopySchematizedFilters(Pool2);
            }
          }
          LOBYTE(v34) = BYTE4(v40);
          ((void (__fastcall *)(GUID *, __int64, __int64, _QWORD, _QWORD, __int128 *, __int64))a4)(
            &NullGuid,
            1LL,
            v34,
            v41,
            *((_QWORD *)&v41 + 1),
            v38,
            v42);
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v23, &ETW_EVENT_PROVIDER_REGISTER, v24, 1LL, 0LL, a2);
      GuidEntry = BugCheckParameter2;
    }
    v25 = v39;
    *(_QWORD *)(v39 + 416) = 0LL;
    ExReleasePushLockEx((__int64 *)(v25 + 408), 0LL);
    KeLeaveCriticalRegion();
    v26 = *(_QWORD *)(v13 + 400);
    if ( v26 )
    {
      *(_QWORD *)(v26 + 416) = 0LL;
      ExReleasePushLockEx((__int64 *)(*(_QWORD *)(v13 + 400) + 408LL), 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( v17 )
    EtwpUnreferenceGuidEntry(v17);
  return GuidEntry;
}
