__int64 __fastcall IopCreateArcNamesCd(__int64 a1)
{
  WCHAR **v1; // rdi
  int v2; // r13d
  ULONG CdRomCount; // r14d
  int ConfigurationInformation; // eax
  PZZWSTR v6; // rbx
  const WCHAR *v7; // r12
  bool v8; // si
  WCHAR *v9; // rcx
  __int64 v10; // r10
  unsigned __int8 *v11; // rax
  __int64 v12; // r9
  WCHAR *v13; // r11
  int v14; // r8d
  int v15; // edx
  char *Pool2; // rdi
  int v18; // r15d
  int v19; // esi
  __int64 v20; // rax
  NTSTATUS DeviceObjectPointer; // esi
  struct _DEVICE_OBJECT *v22; // r15
  IRP *v23; // rax
  IRP *v24; // rax
  NTSTATUS Status; // eax
  unsigned __int64 v26; // rax
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  int v31; // ecx
  int Object; // [rsp+58h] [rbp-B0h]
  struct _KEVENT Object_8; // [rsp+60h] [rbp-A8h] BYREF
  PZZWSTR P[3]; // [rsp+78h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp-78h] BYREF
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp-70h] BYREF
  STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-58h] BYREF
  LARGE_INTEGER StartingOffset[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING SymbolicLinkName; // [rsp+E0h] [rbp-28h] BYREF
  STRING v42; // [rsp+F0h] [rbp-18h] BYREF
  LARGE_INTEGER v43; // [rsp+100h] [rbp-8h] BYREF
  int v44; // [rsp+108h] [rbp+0h]
  char pszDest[128]; // [rsp+118h] [rbp+10h] BYREF
  char SourceString[128]; // [rsp+198h] [rbp+90h] BYREF

  v1 = *(WCHAR ***)(a1 + 232);
  v40 = a1;
  v2 = 0;
  DestinationString = 0LL;
  DeviceObject = 0LL;
  FileObject = 0LL;
  v42 = 0LL;
  SymbolicLinkName = 0LL;
  IoStatusBlock = 0LL;
  memset(&Object_8, 0, sizeof(Object_8));
  memset(P, 0, sizeof(P));
  CdRomCount = IoGetConfigurationInformation()->CdRomCount;
  v43.QuadPart = 0LL;
  v44 = 0;
  *(GUID *)&StartingOffset[0].LowPart = GUID_DEVINTERFACE_CDROM;
  ConfigurationInformation = IopFetchConfigurationInformation(P, (GUID *)StartingOffset);
  v6 = P[0];
  v7 = P[0];
  v8 = ConfigurationInformation < 0;
  v9 = *v1;
  if ( *v1 == (WCHAR *)v1 )
    goto LABEL_9;
  v10 = *(_QWORD *)(a1 + 184);
  do
  {
    v11 = (unsigned __int8 *)*((_QWORD *)v9 + 3);
    v12 = v10 - (_QWORD)v11;
    P[0] = v9;
    v13 = v9;
    do
    {
      v14 = v11[v12];
      v15 = *v11 - v14;
      if ( v15 )
        break;
      ++v11;
    }
    while ( v14 );
    if ( !v15 )
      break;
    v9 = *(WCHAR **)v9;
    v13 = 0LL;
    P[0] = 0LL;
  }
  while ( v9 != (WCHAR *)v1 );
  if ( !v13 )
    goto LABEL_9;
  Pool2 = (char *)ExAllocatePool2(72LL, 0x800uLL, 0x20206F49u);
  if ( !Pool2 )
    goto LABEL_9;
  v18 = 0;
  Object = 0;
  if ( v8 )
    CdRomCount += 5;
  v19 = 0;
  if ( !CdRomCount )
    goto LABEL_49;
  while ( 1 )
  {
    if ( v7 && *v7 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&P[1], v7);
      v20 = -1LL;
      do
        ++v20;
      while ( v7[v20] );
      v7 += v20 + 1;
      DeviceObjectPointer = IoGetDeviceObjectPointer((PUNICODE_STRING)&P[1], 0x80u, &FileObject, &DeviceObject);
      if ( DeviceObjectPointer < 0 )
        goto LABEL_40;
      v22 = DeviceObject;
      v23 = IopBuildDeviceIoControlRequest(
              2953344,
              (__int64)DeviceObject,
              0LL,
              0,
              (__int64)&v43,
              0xCu,
              0,
              &Object_8,
              &IoStatusBlock);
      if ( !v23 )
        goto LABEL_52;
      LOWORD(Object_8.Header.Lock) = 0;
      Object_8.Header.WaitListHead.Blink = &Object_8.Header.WaitListHead;
      Object_8.Header.Size = 6;
      Object_8.Header.WaitListHead.Flink = &Object_8.Header.WaitListHead;
      Object_8.Header.SignalState = 0;
      DeviceObjectPointer = IofCallDriver(v22, v23);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( DeviceObjectPointer < 0
        || (RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", v43.HighPart),
            RtlInitAnsiString(&DestinationString, pszDest),
            DeviceObjectPointer = RtlAnsiStringToUnicodeString((PUNICODE_STRING)&P[1], &DestinationString, 1u),
            DeviceObjectPointer < 0) )
      {
LABEL_40:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        goto LABEL_43;
      }
      v19 = 0;
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", v18);
      Object = v18 + 1;
      RtlInitAnsiString(&DestinationString, pszDest);
      if ( RtlAnsiStringToUnicodeString((PUNICODE_STRING)&P[1], &DestinationString, 1u) < 0 )
      {
LABEL_52:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        DeviceObjectPointer = -1073741670;
LABEL_43:
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)DeviceObjectPointer;
      }
      if ( IoGetDeviceObjectPointer((PUNICODE_STRING)&P[1], 0x80u, &FileObject, &DeviceObject) < 0 )
        goto LABEL_48;
      v22 = DeviceObject;
    }
    StartingOffset[0].QuadPart = 0x8000LL;
    v24 = IoBuildSynchronousFsdRequest(3u, v22, Pool2, 0x800u, StartingOffset, &Object_8, &IoStatusBlock);
    if ( v24 )
    {
      LOWORD(Object_8.Header.Lock) = 0;
      Object_8.Header.SignalState = 0;
      Object_8.Header.WaitListHead.Blink = &Object_8.Header.WaitListHead;
      Object_8.Header.WaitListHead.Flink = &Object_8.Header.WaitListHead;
      Object_8.Header.Size = 6;
      Status = IofCallDriver(v22, v24);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v26 = 0LL;
        v27 = 0LL;
        do
        {
          v28 = _mm_loadu_si128((const __m128i *)&Pool2[4 * v26]);
          v26 += 4LL;
          v29 = _mm_add_epi32(v28, v27);
          v27 = v29;
        }
        while ( v26 < 0x200 );
        v30 = _mm_add_epi32(v29, _mm_srli_si128(v29, 8));
        v19 = _mm_cvtsi128_si32(_mm_add_epi32(v30, _mm_srli_si128(v30, 4)));
      }
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    v31 = v19 + *((_DWORD *)P[0] + 8);
    v19 = 0;
    if ( !v31 )
      break;
    RtlFreeUnicodeString((PUNICODE_STRING)&P[1]);
    if ( ++v2 >= CdRomCount )
      goto LABEL_49;
    v18 = Object;
  }
  RtlStringCchPrintfA(SourceString, 0x80uLL, "\\ArcName\\%s", *(const char **)(v40 + 184));
  RtlInitAnsiString(&v42, SourceString);
  DeviceObjectPointer = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &v42, 1u);
  if ( DeviceObjectPointer < 0 )
  {
    ExFreePoolWithTag(Pool2, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    RtlFreeUnicodeString((PUNICODE_STRING)&P[1]);
    return (unsigned int)DeviceObjectPointer;
  }
  IoCreateSymbolicLink(&SymbolicLinkName, (PUNICODE_STRING)&P[1]);
  RtlFreeUnicodeString(&SymbolicLinkName);
LABEL_48:
  RtlFreeUnicodeString((PUNICODE_STRING)&P[1]);
LABEL_49:
  ExFreePoolWithTag(Pool2, 0);
LABEL_9:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return 0LL;
}
