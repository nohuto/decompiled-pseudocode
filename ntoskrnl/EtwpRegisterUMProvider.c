__int64 __fastcall EtwpRegisterUMProvider(int a1, __int64 a2, unsigned int a3, char a4, _DWORD *a5)
{
  int v8; // edi
  bool v9; // zf
  __int64 v10; // rax
  int GuidEntry; // r14d
  ULONG_PTR v12; // r15
  struct _KTHREAD *v13; // rax
  ULONG_PTR v14; // rsi
  __int64 v15; // rdx
  _DWORD *v16; // r14
  ULONG_PTR v17; // rsi
  ULONG_PTR v18; // rcx
  int SchematizedFilterSize; // eax
  unsigned int v20; // ecx
  _BYTE *v21; // rdi
  char v22; // dl
  int v23; // r9d
  __int64 v24; // rcx
  unsigned __int8 v25; // r12
  __int64 v26; // rax
  _DWORD *v27; // r13
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rcx
  __int64 v32; // rax
  int v34; // edx
  struct _KTHREAD *CurrentThread; // rax
  char v36; // dl
  unsigned __int16 v37; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-28h] BYREF
  PVOID Object; // [rsp+40h] [rbp-20h] BYREF
  __int64 v40; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR v41; // [rsp+50h] [rbp-10h]
  __int64 v42; // [rsp+98h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  v40 = 0LL;
  v8 = *(_DWORD *)(a2 + 16);
  v37 = *(_WORD *)(a2 + 20);
  v10 = *(_QWORD *)a2 - SecurityProviderGuid;
  v9 = *(_QWORD *)a2 == (_QWORD)SecurityProviderGuid;
  Object = 0LL;
  LOBYTE(v42) = 0;
  if ( v9 )
    v10 = *(_QWORD *)(a2 + 8) - *((_QWORD *)&SecurityProviderGuid + 1);
  if ( !v10 )
    return 3221225506LL;
  GuidEntry = EtwpFindOrCreateGuidEntry(a1, a2, (unsigned int)(v8 - 2) > 1, 1, (__int64)&BugCheckParameter2);
  if ( !GuidEntry )
  {
    v12 = BugCheckParameter2;
    if ( *(_QWORD *)(BugCheckParameter2 + 400) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v12 + 400) + 408LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(v12 + 400) + 416LL) = KeGetCurrentThread();
    }
    v13 = KeGetCurrentThread();
    v14 = BugCheckParameter2;
    v41 = BugCheckParameter2;
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v14 + 408, 0LL);
    LOBYTE(v15) = -1;
    v16 = a5;
    *(_QWORD *)(v14 + 416) = KeGetCurrentThread();
    v17 = BugCheckParameter2;
    v18 = BugCheckParameter2;
    *v16 = 160;
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(v18, v15);
    v20 = 160;
    if ( SchematizedFilterSize )
    {
      v20 = SchematizedFilterSize + 176;
      *v16 = SchematizedFilterSize + 176;
    }
    if ( v20 > a3 )
    {
      GuidEntry = -1073741789;
    }
    else
    {
      GuidEntry = EtwpAddUmRegEntry(v17, v8, v37, *(_QWORD *)(a2 + 32), (__int64)&Object, (__int64)&v40);
      if ( GuidEntry >= 0 )
      {
        if ( a4 )
        {
          _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x100u);
          v17 = BugCheckParameter2;
        }
        v21 = Object;
        *(_QWORD *)(a2 + 24) = v40;
        if ( *(_DWORD *)(v17 + 96) )
          EtwpUpdateEnableMask(v17, (v21[98] & 8) != 0, 0, 1, v21 + 100);
        v22 = v21[98];
        LOBYTE(v37) = v21[100];
        EtwpApplyScopeFilters((_DWORD)v21, (v22 & 8) != 0, 0, 0, (__int64)&v37);
        v24 = *(_QWORD *)(v12 + 400);
        if ( v24 )
        {
          if ( *(_DWORD *)(v24 + 96) )
            EtwpUpdateEnableMask(v24, (v21[98] & 8) != 0, 1, 1, v21 + 102);
          LOBYTE(v23) = 1;
          v36 = v21[98];
          LOBYTE(v42) = v21[102];
          EtwpApplyScopeFilters((_DWORD)v21, (v36 & 8) != 0, 0, v23, (__int64)&v42);
        }
        if ( (v21[98] & 8) != 0 )
        {
          v21[100] = v37;
          v21[102] = v42;
        }
        else
        {
          v21[100] &= v37;
          v21[102] &= v42;
        }
        v25 = v21[100];
        if ( v25 || v21[102] )
        {
          EtwpComputeRegEntryEnableInfo((__int64)v21, a2 + 112);
          v34 = *(_BYTE *)(v17 + 91) & 1;
          BYTE3(v42) = 0;
          *(_DWORD *)(a2 + 152) = v34;
          LOWORD(v42) = *(_WORD *)(v17 + 88);
          BYTE2(v42) = *(_BYTE *)(v17 + 90);
          HIDWORD(v42) = *(_DWORD *)(v17 + 80);
          v26 = v42;
        }
        else
        {
          v26 = 0LL;
          *(_OWORD *)(a2 + 112) = 0LL;
          *(_OWORD *)(a2 + 128) = 0LL;
          *(_DWORD *)(a2 + 152) = 0;
        }
        v27 = a5;
        *(_QWORD *)(a2 + 144) = v26;
        *v27 = 160;
        v28 = EtwpGetSchematizedFilterSize(v17, v25);
        if ( v28 )
        {
          *v27 = v28 + 176;
          *(_DWORD *)(a2 + 172) = 0x80000000;
          *(_DWORD *)(a2 + 168) = v28;
          *(_QWORD *)(a2 + 160) = 136LL;
          EtwpCopySchematizedFilters((void *)(a2 + 176));
          v28 = 1;
        }
        *(_DWORD *)(a2 + 156) = v28;
        *(_DWORD *)(a2 + 44) = *v27;
        EtwpTrackProviderRegistration(v21);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
          EtwpEventWriteTemplateSessAndProv(v29, &ETW_EVENT_PROVIDER_REGISTER, v30, 1LL, 0LL, a2);
      }
    }
    v31 = (__int64 *)(v41 + 408);
    *(_QWORD *)(v41 + 416) = 0LL;
    ExReleasePushLockEx(v31, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v32 = *(_QWORD *)(v12 + 400);
    if ( v32 )
    {
      *(_QWORD *)(v32 + 416) = 0LL;
      ExReleasePushLockEx((__int64 *)(*(_QWORD *)(v12 + 400) + 408LL), 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  if ( BugCheckParameter2 )
    EtwpUnreferenceGuidEntry(BugCheckParameter2);
  return (unsigned int)GuidEntry;
}
