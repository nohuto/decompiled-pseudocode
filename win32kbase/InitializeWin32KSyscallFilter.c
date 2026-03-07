__int64 InitializeWin32KSyscallFilter()
{
  int v0; // ebx
  void *v1; // rdi
  void *v2; // rdi
  void *v3; // rdi
  unsigned int v4; // ecx
  int v5; // eax
  bool v6; // zf
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // r15d
  unsigned int *v10; // rsi
  unsigned __int8 **v11; // r14
  unsigned __int8 *Pool2; // rax
  int v13; // r8d
  int Win32KFilterBitmap; // eax
  int v16; // [rsp+30h] [rbp-40h]
  int v17; // [rsp+30h] [rbp-40h]
  int v18; // [rsp+30h] [rbp-40h]
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch]

  ResultLength = 0;
  v0 = 0;
  v16 = gdwPolicyFlags;
  DestinationString = 0LL;
  while ( 1 )
  {
    v1 = (void *)OpenCacheKeyEx(0LL);
    if ( !v1 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditThrottleMode");
    if ( ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      gdwServiceFilterAuditThrottleMode = v22;
      v16 = 0;
    }
    else if ( !v16 )
    {
      gdwServiceFilterAuditThrottleMode = 1;
    }
    ZwClose(v1);
    if ( !v16 )
      goto LABEL_7;
  }
  gdwServiceFilterAuditThrottleMode = 1;
LABEL_7:
  DestinationString = 0LL;
  ResultLength = 0;
  v17 = gdwPolicyFlags;
  while ( 1 )
  {
    v2 = (void *)OpenCacheKeyEx(0LL);
    if ( !v2 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditCaptureWER");
    if ( ZwQueryValueKey(v2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      gdwServiceFilterAuditCaptureWER = v22;
      v17 = 0;
    }
    else if ( !v17 )
    {
      gdwServiceFilterAuditCaptureWER = 1;
    }
    ZwClose(v2);
    if ( !v17 )
      goto LABEL_13;
  }
  gdwServiceFilterAuditCaptureWER = 1;
LABEL_13:
  DestinationString = 0LL;
  ResultLength = 0;
  v18 = gdwPolicyFlags;
  while ( 1 )
  {
    v3 = (void *)OpenCacheKeyEx(0LL);
    if ( !v3 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditStackCacheSize");
    if ( ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      LODWORD(gstServiceFilterAuditStackCacheSize) = v22;
      v18 = 0;
    }
    else if ( !v18 )
    {
      LODWORD(gstServiceFilterAuditStackCacheSize) = 4096;
    }
    ZwClose(v3);
    if ( !v18 )
      goto LABEL_19;
  }
  LODWORD(gstServiceFilterAuditStackCacheSize) = 4096;
LABEL_19:
  if ( qword_1C02D60D8 )
    v4 = qword_1C02D60D8();
  else
    v4 = 0;
  gaWin32KSyscallList = 0LL;
  v5 = v4 >> 3;
  v6 = (v4 & 7) == 0;
  qword_1C02D1628 = 0LL;
  qword_1C02D1638 = 681LL;
  qword_1C02D1648 = 449LL;
  v7 = (v4 >> 3) + 1;
  qword_1C02D1658 = 1LL;
  if ( v6 )
    v7 = v5;
  qword_1C02D1668 = 571LL;
  qword_1C02D1630 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainer;
  v8 = v7;
  qword_1C02D1678 = 410LL;
  qword_1C02D1640 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerPlugin;
  qword_1C02D1650 = (__int64)&Win32KSyscallFilterList::FontDrvHost;
  qword_1C02D1660 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerMiniPlugin;
  qword_1C02D1670 = (__int64)&Win32KSyscallFilterList::Rs3RestrictedAppcontainer;
  qword_1C02D1680 = (__int64)&Win32KSyscallFilterList::Rs3HvsiRdpClient;
  dword_1C02D1688 = 512;
  dword_1C02D168C = 1;
  if ( gdwServiceFilterAuditCaptureWER )
  {
    if ( (v7 & 3) != 0 )
      v8 = v7 - (v7 & 3) + 4;
    gafServiceFilterAuditCache = (PVOID)ExAllocatePool2(64LL, v8, 1818653525LL);
    if ( !gafServiceFilterAuditCache
      || !gdwServiceFilterAuditThrottleMode
      && (gstServiceFilterAuditStackCacheSize = (gstServiceFilterAuditStackCacheSize + 3) & 0xFFFFFFFFFFFFFFFCuLL,
          (gafServiceFilterAuditStackCache = (PVOID)ExAllocatePool2(
                                                      64LL,
                                                      gstServiceFilterAuditStackCacheSize,
                                                      1818653525LL)) == 0LL) )
    {
LABEL_46:
      v0 = -1073741801;
LABEL_47:
      FreeWin32KSyscallFilter();
      return (unsigned int)v0;
    }
  }
  v9 = 0;
  v10 = (unsigned int *)&qword_1C02D1628;
  v11 = (unsigned __int8 **)&gaWin32KFilterBitmap;
  do
  {
    if ( *v10 )
    {
      Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, v8, 1818653525LL);
      *v11 = Pool2;
      if ( !Pool2 )
        goto LABEL_46;
      Win32KFilterBitmap = CreateWin32KFilterBitmap(*v10, *((const char **const *)v10 - 1), v13, v8, Pool2);
      v0 = Win32KFilterBitmap;
      if ( Win32KFilterBitmap == 127 )
      {
        v0 = 0;
      }
      else if ( Win32KFilterBitmap )
      {
        break;
      }
    }
    else
    {
      *v11 = 0LL;
    }
    ++v9;
    ++v11;
    v10 += 4;
  }
  while ( v9 < 7 );
  if ( v0 < 0 )
    goto LABEL_47;
  return (unsigned int)v0;
}
