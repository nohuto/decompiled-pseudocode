__int64 __fastcall VhdInitialize(__int64 a1)
{
  const char *v2; // rcx
  int v3; // ebx
  char *v4; // rax
  _QWORD *v6; // rax
  _QWORD *i; // rcx
  int DiskParameters; // eax
  ULONG_PTR v9; // rdi
  char v10; // r12
  const wchar_t *v11; // r13
  int v12; // ecx
  __int64 v13; // r14
  __int64 v14; // rax
  ULONG_PTR v15; // rdi
  wchar_t *Pool2; // rax
  wchar_t *v17; // r15
  __int64 v18; // rsi
  unsigned int v19; // esi
  _DWORD *v20; // r12
  __int64 v21; // rcx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-A9h] BYREF
  __int128 v23; // [rsp+40h] [rbp-99h] BYREF
  __int128 v24; // [rsp+50h] [rbp-89h]
  _BYTE v25[208]; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v26; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v27; // [rsp+148h] [rbp+6Fh] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+150h] [rbp+77h] BYREF
  __int64 v29; // [rsp+158h] [rbp+7Fh] BYREF

  v23 = 0LL;
  v24 = 0LL;
  memset(v25, 0, 0x8CuLL);
  v2 = *(const char **)(a1 + 184);
  GuidString = 0LL;
  LOBYTE(v26) = 0;
  v3 = 0;
  pszSrc = 0LL;
  v29 = 0LL;
  v27 = 0;
  v4 = strstr(v2, "vdisk(");
  if ( !v4 || !strstr(v4 + 1, "partition(") )
    return (unsigned int)v3;
  v6 = *(_QWORD **)(a1 + 232);
  for ( i = (_QWORD *)*v6; ; i = (_QWORD *)*i )
  {
    if ( i == v6 )
      return (unsigned int)v3;
    if ( i[7] )
      break;
  }
  if ( !i )
    return (unsigned int)v3;
  DiskParameters = VhdiGetDiskParameters(i[7], v25, &v29, &v26, &pszSrc);
  v3 = DiskParameters;
  if ( DiskParameters < 0 )
  {
    v9 = 1LL;
    goto LABEL_37;
  }
  v10 = v26;
  v11 = pszSrc;
  if ( (_BYTE)v26 )
  {
    v12 = 110;
  }
  else
  {
    *(_QWORD *)&v24 = pszSrc;
    *(_QWORD *)&v23 = v25;
    *((_QWORD *)&v23 + 1) = v29;
    v9 = 2LL;
    *((_QWORD *)&v24 + 1) = &v27;
    v3 = PnpBootDeviceWait(
           a1,
           2,
           (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&VhdiInitializeBootDisk,
           (__int64)&v23);
    if ( v3 < 0 )
      goto LABEL_37;
    v12 = 74;
  }
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( v11[v14] );
  v15 = (unsigned int)(v12 + 2 * v14);
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, v15, 0x42646856u);
  v17 = Pool2;
  if ( !Pool2 )
    goto LABEL_24;
  if ( v10 )
  {
    if ( RtlStringFromGUID(&RamdiskBootDiskGuid, &GuidString) >= 0 )
    {
      v3 = RtlStringCbPrintfW(v17, 0x6EuLL, L"\\\\Device\\Ramdisk%wZ", &GuidString);
      RtlFreeUnicodeString(&GuidString);
      goto LABEL_27;
    }
LABEL_24:
    v9 = 3LL;
LABEL_36:
    v3 = -1073741801;
    goto LABEL_37;
  }
  v3 = RtlStringCbPrintfW(Pool2, 0x4AuLL, L"\\\\Device\\HarddiskVolume%lu", v27);
LABEL_27:
  if ( v3 < 0 )
  {
    v9 = 4LL;
    goto LABEL_37;
  }
  v18 = -1LL;
  do
    ++v18;
  while ( v17[v18] );
  RtlStringCbCatW(v17, v15, v11);
  v3 = VhdiMountVhdFile(v17, 0, 1, 0LL);
  if ( v3 < 0 )
  {
    v9 = 5LL;
LABEL_37:
    KeBugCheckEx(0x12Fu, v9, v3, 0LL, 0LL);
  }
  NtVhdBootFile = (__int64)v17;
  v19 = v18 - 1;
  do
    ++v13;
  while ( v11[v13] );
  v26 = 2 * (v13 + v19) + 14;
  v20 = (_DWORD *)ExAllocatePool2(64LL, v26, 0x42646856u);
  if ( !v20 )
  {
    v9 = 7LL;
    goto LABEL_36;
  }
  memmove(v20 + 2, v17 + 1, 2LL * v19);
  v21 = 2 * v19 + 10;
  v20[1] = v21;
  memmove((char *)v20 + v21, v11, 2LL * (unsigned int)(v13 + 1));
  LODWORD(dword_140C0CED4) = v26;
  off_140C073E0 = v20;
  *(_BYTE *)v20 = 1;
  return (unsigned int)v3;
}
