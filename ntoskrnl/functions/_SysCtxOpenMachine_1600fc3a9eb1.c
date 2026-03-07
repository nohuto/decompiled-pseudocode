__int64 __fastcall SysCtxOpenMachine(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        HANDLE SourceHandle,
        int a6,
        _QWORD *a7)
{
  int Version; // ebx
  _BYTE *Pool2; // rdi
  int v13; // r8d
  __int64 v14; // rcx
  const WCHAR *v15; // rdx
  __int64 v16; // rcx
  HANDLE v17; // rcx
  const WCHAR *v19; // rdx
  __int64 v20; // rcx
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v23; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v24; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v25; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v26; // [rsp+68h] [rbp-98h]
  _DWORD VersionInformation[72]; // [rsp+70h] [rbp-90h] BYREF

  Handle = 0LL;
  v23 = 0LL;
  Version = 0;
  v24 = 0LL;
  v25 = 0LL;
  TargetHandle = 0LL;
  *a7 = 0LL;
  v26 = a7;
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, 56LL, 1397771856LL);
  if ( !Pool2 )
  {
    Version = -1073741801;
    goto LABEL_29;
  }
  v13 = a6;
  if ( !a6 )
  {
    memset(&VersionInformation[1], 0, 0x118uLL);
    VersionInformation[0] = 284;
    Version = RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
    if ( Version < 0 )
      goto LABEL_29;
    v13 = BYTE2(VersionInformation[69]) | (unsigned __int16)(LOBYTE(VersionInformation[69]) << 8) | ((LOBYTE(VersionInformation[2]) | (unsigned __int16)(LOBYTE(VersionInformation[1]) << 8)) << 16);
  }
  *(_DWORD *)Pool2 = v13;
  if ( SourceHandle )
  {
    Version = ZwDuplicateObject(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                SourceHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &TargetHandle,
                0,
                0,
                2u);
    if ( Version < 0 )
    {
      TargetHandle = 0LL;
      goto LABEL_17;
    }
  }
  v14 = 2147483650LL;
  if ( a2 )
  {
    if ( a2 == -1 )
      goto LABEL_7;
    v15 = 0LL;
    v14 = a2;
  }
  else
  {
    v15 = L"SYSTEM";
  }
  Version = RegRtlOpenKeyTransacted((void *)v14, v15, 0, 0x2000000u, &Handle, (__int64)TargetHandle);
  if ( Version )
    goto LABEL_29;
LABEL_7:
  if ( Handle )
  {
    Version = SysCtxOpenControlSet(a1, Handle, TargetHandle, &v25);
    if ( Version )
      goto LABEL_29;
  }
  if ( !a3 )
  {
    v19 = L"SOFTWARE";
    v20 = 2147483650LL;
    goto LABEL_38;
  }
  if ( a3 != -1 )
  {
    v19 = 0LL;
    v20 = a3;
LABEL_38:
    Version = RegRtlOpenKeyTransacted((void *)v20, v19, 0, 0x2000000u, &v23, (__int64)TargetHandle);
    if ( Version )
      goto LABEL_29;
  }
  if ( a4 )
  {
    if ( a4 == -1 )
      goto LABEL_14;
    v16 = a4;
  }
  else
  {
    v16 = 2147483651LL;
  }
  Version = RegRtlOpenKeyTransacted((void *)v16, 0LL, 0, 0x2000000u, &v24, (__int64)TargetHandle);
  if ( !Version )
  {
LABEL_14:
    Pool2[16] = 1;
    v17 = 0LL;
    *((_QWORD *)Pool2 + 1) = TargetHandle;
    *((_QWORD *)Pool2 + 3) = Handle;
    *((_QWORD *)Pool2 + 4) = v23;
    *((_QWORD *)Pool2 + 6) = v25;
    *((_QWORD *)Pool2 + 5) = v24;
    Handle = 0LL;
    v23 = 0LL;
    v25 = 0LL;
    *v26 = Pool2;
    Pool2 = 0LL;
    v24 = 0LL;
    TargetHandle = 0LL;
    goto LABEL_15;
  }
LABEL_29:
  v17 = TargetHandle;
LABEL_15:
  if ( v17 )
    ZwClose(v17);
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  if ( v25 )
    ZwClose(v25);
  if ( v24 )
    ZwClose(v24);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Version;
}
