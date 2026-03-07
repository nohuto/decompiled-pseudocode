NTSTATUS ExpWatchProductTypeWork()
{
  char v0; // di
  char v1; // bl
  HANDLE v2; // r14
  LARGE_INTEGER *p_Interval; // rsi
  char v4; // r15
  int v5; // eax
  int v6; // eax
  const wchar_t *v7; // rax
  int v8; // r8d
  int v9; // ecx
  const wchar_t *v10; // rax
  int v11; // r8d
  int v12; // ecx
  char v13; // r10
  const wchar_t *v14; // rax
  char *v15; // rdx
  int v16; // r8d
  int v17; // ecx
  char *v18; // rcx
  unsigned __int16 v19; // ax
  int v20; // eax
  struct _LIST_ENTRY *Blink; // rcx
  ULONG_PTR v22; // r8
  int v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // rsp
  int v27; // eax
  _DWORD *v28; // rbx
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  ULONG_PTR v35; // rbx
  NTSTATUS result; // eax
  __int64 v37; // rcx
  size_t BugCheckParameter4; // [rsp+20h] [rbp-30h]
  size_t BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  size_t Size; // [rsp+28h] [rbp-28h]
  size_t Sizea; // [rsp+28h] [rbp-28h]
  size_t Sizeb; // [rsp+28h] [rbp-28h]
  LARGE_INTEGER Interval; // [rsp+50h] [rbp+0h] BYREF
  __int64 v44; // [rsp+58h] [rbp+8h] BYREF
  UNICODE_STRING v45; // [rsp+60h] [rbp+10h] BYREF
  void *v46; // [rsp+70h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+30h] BYREF
  _QWORD v49[4]; // [rsp+90h] [rbp+40h] BYREF
  __int128 v50; // [rsp+B0h] [rbp+60h]
  _OWORD v51[2]; // [rsp+C0h] [rbp+70h] BYREF
  __int16 v52; // [rsp+E0h] [rbp+90h]

  v49[0] = 48LL;
  Handle = 0LL;
  LODWORD(v44) = 0;
  DestinationString = 0LL;
  v0 = 0;
  v1 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v2 = 0LL;
  p_Interval = 0LL;
  v49[3] = 576LL;
  v4 = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v49[1] = 0LL;
  v49[2] = &DestinationString;
  v50 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v5 = NtOpenKey(&v46, 131103LL, v49);
      if ( v5 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v5, 0LL, 0LL);
    v2 = ExpProductTypeKey;
    ExpProductTypeKey = v46;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&v45, L"ProductType");
      LODWORD(BugCheckParameter4) = 34;
      v6 = NtQueryValueKey(ExpProductTypeKey, &v45, 2u, (unsigned __int64)v51, BugCheckParameter4, (unsigned int *)&v44);
      if ( v6 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(BugCheckParameter4a) = 34;
          v6 = NtQueryValueKey(
                 ExpProductTypeKey,
                 &v45,
                 2u,
                 (unsigned __int64)v51,
                 BugCheckParameter4a,
                 (unsigned int *)&v44);
        }
        while ( v6 == -1073741670 );
      }
      if ( v6 >= 0 )
      {
        v7 = L"LanmanNT";
        do
        {
          v8 = *(const wchar_t *)((char *)v7 + (char *)v51 + 12 - (char *)L"LanmanNT");
          v9 = *v7 - v8;
          if ( v9 )
            break;
          ++v7;
        }
        while ( v8 );
        if ( !v9 )
          goto LABEL_52;
        v10 = L"ServerNT";
        do
        {
          v11 = *(const wchar_t *)((char *)v10 + (char *)v51 + 12 - (char *)L"ServerNT");
          v12 = *v10 - v11;
          if ( v12 )
            break;
          ++v10;
        }
        while ( v11 );
        v13 = 0;
        if ( !v12 )
LABEL_52:
          v13 = 1;
        v14 = L"WinNT";
        v15 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v16 = *(const wchar_t *)((char *)v14 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v17 = *v14 - v16;
          if ( v17 )
            break;
          ++v14;
        }
        while ( v16 );
        if ( v17 && v13 )
        {
          v37 = ExpProductTypeValueInfo;
          v4 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = v51[0];
          *(_OWORD *)(v37 + 16) = v51[1];
          *(_WORD *)(v37 + 32) = v52;
        }
        v18 = (char *)((char *)v51 + 12 - v15);
        while ( 1 )
        {
          v19 = *(_WORD *)v15;
          if ( *(_WORD *)v15 != *(_WORD *)&v18[(_QWORD)v15] )
            break;
          v15 += 2;
          if ( !v19 )
          {
            v20 = 0;
            goto LABEL_23;
          }
        }
        v20 = v19 < *(_WORD *)&v18[(_QWORD)v15] ? -1 : 1;
LABEL_23:
        v4 = v20 != 0 ? v4 : 0;
      }
      Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
      if ( !qword_140D534E8 || (v23 = qword_140D534E8(Blink), v22 = (unsigned int)v23, v23 < 0) )
        KeBugCheckEx(0x9Au, 0x11uLL, v22, 1uLL, 0LL);
      v24 = (unsigned int)CmSizeOfThreadInfo();
      v25 = v24 + 15;
      if ( v24 + 15 <= v24 )
        v25 = 0xFFFFFFFFFFFFFF0LL;
      v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0uLL);
      p_Interval = &Interval;
      CmInitializeThreadInfo((__int64)&Interval);
      CmpLockRegistryFreezeAware(1);
      v0 = 1;
      LODWORD(Size) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
      v27 = NtSetValueKey(
              (int)ExpProductTypeKey,
              (int)&v45,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              ExpProductTypeValueInfo + 12,
              Size);
      if ( v27 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(Sizea) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
          v27 = NtSetValueKey(
                  (int)ExpProductTypeKey,
                  (int)&v45,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  ExpProductTypeValueInfo + 12,
                  Sizea);
        }
        while ( v27 == -1073741670 );
      }
      if ( v27 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v27, 1uLL, 0LL);
      v28 = qword_140C709C8;
      RtlInitUnicodeString(&v45, L"ProductSuite");
      if ( v28 )
      {
        LODWORD(Sizea) = v28[2];
        v29 = NtSetValueKey((int)ExpProductTypeKey, (int)&v45, 0, v28[1], (__int64)(v28 + 3), Sizea);
        if ( v29 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(Sizeb) = *((_DWORD *)qword_140C709C8 + 2);
            v29 = NtSetValueKey(
                    (int)ExpProductTypeKey,
                    (int)&v45,
                    0,
                    *((_DWORD *)qword_140C709C8 + 1),
                    (__int64)qword_140C709C8 + 12,
                    Sizeb);
          }
          while ( v29 == -1073741670 );
        }
        if ( v29 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v29, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey((__int64)ExpProductTypeKey, &v45);
      }
    }
    while ( 1 )
    {
      v30 = NtNotifyChangeKey(
              ExpProductTypeKey,
              0LL,
              (void (__stdcall *)(POPLOCK))&ExpWatchProductTypeWorkItem,
              1LL,
              ExpProductTypeIoSb,
              0x10000005u,
              0,
              &ExpProductTypeChangeBuffer,
              4,
              1);
      v35 = v30;
      if ( v30 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v0 )
      CmpUnlockRegistry(v32, v31, v33, v34);
    if ( p_Interval )
      CmCleanupThreadInfo((__int64 *)p_Interval);
    if ( (v35 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v35, 4uLL, 0LL);
    v1 = v0;
    if ( !ExpSetupModeDetected
      && v4
      && (int)PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, ExpExpirationThread, 3221226090LL, 0LL, 0LL) >= 0 )
    {
      ZwClose(Handle);
    }
  }
  result = ExReleasePushLockEx((__int64 *)&ExpKeyManipLock, 0LL);
  if ( v2 )
  {
    if ( v1 )
      NtFlushKey(v2);
    return ObCloseHandle(v2, 0);
  }
  return result;
}
