/*
 * XREFs of EtwpRegisterUMGuid @ 0x1405EBAF0
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 * Callees:
 *     SeAccessCheck @ 0x140206720 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     EtwpAddUmRegEntry @ 0x1405EAD90 (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405EB9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405EBEB8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405FD448 (EtwpUnreferenceGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x1406BBC60 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1406BBD78 (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1406BCDAC (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpApplyScopeFilters @ 0x1406BCEF8 (EtwpApplyScopeFilters.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     EtwpAddGuidEntry @ 0x140717450 (EtwpAddGuidEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140939DF0 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x140940AD4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, __int64 a2, unsigned int a3, char a4, _DWORD *a5)
{
  int v6; // r15d
  bool v9; // zf
  __int64 v10; // rax
  _QWORD *GuidEntryByGuid; // rsi
  void *v13; // rdi
  int v14; // r14d
  struct _KTHREAD *v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rdi
  int SchematizedFilterSize; // eax
  unsigned int v19; // ecx
  int v20; // r9d
  PADAPTER_OBJECT v21; // rdi
  char Size; // dl
  int v23; // r9d
  __int64 v24; // rcx
  char v25; // al
  unsigned __int8 v26; // r15
  __int64 v27; // rax
  _DWORD *v28; // r12
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  int v34; // edx
  struct _KTHREAD *CurrentThread; // rax
  char v36; // dl
  _BYTE v37[4]; // [rsp+50h] [rbp-11h] BYREF
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-Dh] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-9h] BYREF
  int v40; // [rsp+5Ch] [rbp-5h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-1h] BYREF
  __int64 v42; // [rsp+68h] [rbp+7h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v44; // [rsp+C8h] [rbp+67h] BYREF

  v6 = *(_DWORD *)(a2 + 16);
  v40 = *(_DWORD *)(a2 + 20);
  v10 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v9 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v42 = 0LL;
  DmaAdapter = 0LL;
  LOBYTE(v44) = 0;
  if ( v9 )
    v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v10 )
    return 3221225506LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, (unsigned int)(v6 - 2) > 1);
  if ( GuidEntryByGuid || (GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(a1, a2, (unsigned int)(v6 - 2) > 1)) != 0LL )
  {
    v13 = (void *)GuidEntryByGuid[9];
    AccessStatus = 0;
    GrantedAccess = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      v13,
      &SubjectContext,
      0,
      0x800u,
      0,
      0LL,
      (PGENERIC_MAPPING)&EtwpGenericMapping,
      1,
      &GrantedAccess,
      &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    v14 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      if ( GuidEntryByGuid[50] )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(GuidEntryByGuid[50] + 408LL, 0LL);
        *(_QWORD *)(GuidEntryByGuid[50] + 416LL) = KeGetCurrentThread();
      }
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      LOBYTE(v16) = -1;
      v17 = a5;
      GuidEntryByGuid[52] = KeGetCurrentThread();
      *v17 = 160;
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v16);
      v19 = 160;
      if ( SchematizedFilterSize )
      {
        v19 = SchematizedFilterSize + 176;
        *v17 = SchematizedFilterSize + 176;
      }
      if ( v19 > a3 )
      {
        v14 = -1073741789;
      }
      else
      {
        v14 = EtwpAddUmRegEntry((ULONG_PTR)GuidEntryByGuid, v6, v40, *(_QWORD *)(a2 + 32), &DmaAdapter, (__int64)&v42);
        if ( v14 >= 0 )
        {
          if ( a4 )
            _InterlockedOr16((volatile signed __int16 *)&DmaAdapter[6].Size, 0x100u);
          v21 = DmaAdapter;
          *(_QWORD *)(a2 + 24) = v42;
          if ( *((_DWORD *)GuidEntryByGuid + 24) )
          {
            LOBYTE(v20) = 1;
            EtwpUpdateEnableMask((_DWORD)GuidEntryByGuid, (v21[6].Size & 8) != 0, 0, v20, (__int64)(&v21[6].Size + 1));
          }
          Size = v21[6].Size;
          v37[0] = *((_BYTE *)&v21[6].Size + 2);
          EtwpApplyScopeFilters((_DWORD)v21, (Size & 8) != 0, 0, 0, (__int64)v37);
          v24 = GuidEntryByGuid[50];
          if ( v24 )
          {
            if ( *(_DWORD *)(v24 + 96) )
            {
              LOBYTE(v23) = 1;
              EtwpUpdateEnableMask(v24, (v21[6].Size & 8) != 0, 1, v23, (__int64)(&v21[6].Size + 2));
            }
            LOBYTE(v23) = 1;
            v36 = v21[6].Size;
            LOBYTE(v44) = *((_BYTE *)&v21[6].Size + 4);
            EtwpApplyScopeFilters((_DWORD)v21, (v36 & 8) != 0, 0, v23, (__int64)&v44);
          }
          if ( (v21[6].Size & 8) != 0 )
          {
            *((_BYTE *)&v21[6].Size + 2) = v37[0];
            v25 = v44;
            *((_BYTE *)&v21[6].Size + 4) = v44;
          }
          else
          {
            *((_BYTE *)&v21[6].Size + 2) &= v37[0];
            *((_BYTE *)&v21[6].Size + 4) &= v44;
            v25 = *((_BYTE *)&v21[6].Size + 4);
          }
          v26 = *((_BYTE *)&v21[6].Size + 2);
          if ( v26 || v25 )
          {
            EtwpComputeRegEntryEnableInfo(v21, a2 + 112);
            v34 = *((_BYTE *)GuidEntryByGuid + 91) & 1;
            BYTE3(v44) = 0;
            *(_DWORD *)(a2 + 152) = v34;
            LOWORD(v44) = *((_WORD *)GuidEntryByGuid + 44);
            BYTE2(v44) = *((_BYTE *)GuidEntryByGuid + 90);
            HIDWORD(v44) = *((_DWORD *)GuidEntryByGuid + 20);
            v27 = v44;
          }
          else
          {
            v27 = 0LL;
            *(_OWORD *)(a2 + 112) = 0LL;
            *(_OWORD *)(a2 + 128) = 0LL;
            *(_DWORD *)(a2 + 152) = 0;
          }
          v28 = a5;
          *(_QWORD *)(a2 + 144) = v27;
          *v28 = 160;
          v29 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v26);
          if ( v29 )
          {
            *v28 = v29 + 176;
            *(_DWORD *)(a2 + 168) = v29;
            *(_DWORD *)(a2 + 172) = 0x80000000;
            *(_QWORD *)(a2 + 160) = 136LL;
            EtwpCopySchematizedFilters((void *)(a2 + 176));
            v29 = 1;
          }
          *(_DWORD *)(a2 + 156) = v29;
          *(_DWORD *)(a2 + 44) = *v28;
          EtwpTrackProviderRegistration(v21);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            EtwpEventWriteTemplateSessAndProv(v30, &ETW_EVENT_PROVIDER_REGISTER, v31, 1LL, 0LL, a2);
        }
      }
      GuidEntryByGuid[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v32 = GuidEntryByGuid[50];
      if ( v32 )
      {
        *(_QWORD *)(v32 + 416) = 0LL;
        ExReleasePushLockEx(GuidEntryByGuid[50] + 408LL, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
    }
    EtwpUnreferenceGuidEntry((ULONG_PTR)GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
