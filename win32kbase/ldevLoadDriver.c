struct _LDEV *__fastcall ldevLoadDriver(PCWSTR Source, unsigned int a2, int a3)
{
  int v3; // ebx
  int v4; // r14d
  __int64 v8; // rcx
  int v9; // r15d
  __int64 v10; // rdi
  struct _LDEV *Image; // rbx
  int v12; // eax
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const wchar_t *v17; // rbx
  unsigned int (__fastcall *v18)(__int64, _QWORD, PCWSTR *); // rax
  struct _ERESOURCE *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int (__fastcall *v22)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _ERESOURCE *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  PCWSTR v26; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-28h]
  PWSTR Buffer; // [rsp+40h] [rbp-20h]
  BOOL v29; // [rsp+48h] [rbp-18h]
  int v30; // [rsp+4Ch] [rbp-14h]
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-10h] BYREF
  int v32; // [rsp+90h] [rbp+30h] BYREF

  v3 = 0;
  v4 = a3;
  v32 = 0;
  WdLogSingleEntry1(4LL, Source);
  if ( !Source || !*Source )
    return 0LL;
  v9 = 0;
  Destination = 0LL;
  v10 = *(_QWORD *)(SGDGetSessionState(v8) + 24);
  if ( a2 != 1 )
    goto LABEL_7;
  if ( !wcsicmp(Source, L"WORKERDD") || !wcsicmp(Source, L"TSDDD") )
  {
    v3 = 1;
    goto LABEL_7;
  }
  if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() && (unsigned int)(v4 - 2) <= 1 )
  {
    v9 = 1;
    v4 = 3;
    if ( !*(_DWORD *)(v10 + 1224) )
      v4 = a3;
    if ( !(unsigned int)MakeSystemRelativePath(Source, &Destination) )
    {
      WdLogSingleEntry0(2LL);
      return 0LL;
    }
  }
LABEL_7:
  EngAcquireSemaphore(*(HSEMAPHORE *)(v10 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v10 + 8), 16LL);
  if ( v3 )
  {
    Image = ldevBindDisplayStub();
    v12 = 1;
  }
  else
  {
    v17 = L"CDD";
    v26 = Source;
    v27 = __PAIR64__(v4, a2);
    wcsicmp(Source, L"CDD");
    if ( !v9 )
      LODWORD(v17) = (_DWORD)Source;
    Image = (struct _LDEV *)ldevLoadImage((_DWORD)v17, 0, (unsigned int)&v32, 1, v9, (__int64)&v26);
    v12 = v32;
  }
  if ( !Image )
    goto LABEL_12;
  if ( v12 )
  {
    WdLogSingleEntry0(5LL);
LABEL_12:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v10 + 8));
    v13 = *(struct _ERESOURCE **)(v10 + 8);
    if ( v13 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v13);
      PsLeavePriorityRegion(v15, v14);
    }
    goto LABEL_14;
  }
  v26 = 0LL;
  Buffer = Destination.Buffer;
  v27 = 0LL;
  v29 = v4 == 3;
  v30 = 0;
  v18 = *(unsigned int (__fastcall **)(__int64, _QWORD, PCWSTR *))(*((_QWORD *)Image + 2) + 32LL);
  if ( !v18
    || !v18(196865LL, (unsigned int)(16 * (v9 + 1)), &v26)
    || (unsigned int)((_DWORD)v26 - 0x20000) > 0x10101
    || !(unsigned int)ldevFillTable(Image, &v26) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v10 + 8));
    v23 = *(struct _ERESOURCE **)(v10 + 8);
    if ( v23 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v23);
      PsLeavePriorityRegion(v25, v24);
    }
    goto LABEL_37;
  }
  *((_DWORD *)Image + 6) = a2;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v10 + 8));
  v19 = *(struct _ERESOURCE **)(v10 + 8);
  if ( v19 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v19);
    PsLeavePriorityRegion(v21, v20);
  }
  v22 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)Image + 112) + 616LL);
  if ( !v22 )
    goto LABEL_30;
  if ( !v22(*(_QWORD *)(v10 + 3040), *(_QWORD *)(v10 + 3032), *(_QWORD *)(v10 + 3024), *(_QWORD *)(v10 + 3048)) )
  {
LABEL_37:
    ldevUnloadImage(Image);
    Image = 0LL;
    WdLogSingleEntry0(5LL);
    goto LABEL_14;
  }
  *((_DWORD *)Image + 15) = 1;
LABEL_30:
  WdLogSingleEntry0(5LL);
LABEL_14:
  if ( v9 )
    FreeSystemRelativePath(&Destination);
  WdLogSingleEntry1(5LL, Image);
  return Image;
}
