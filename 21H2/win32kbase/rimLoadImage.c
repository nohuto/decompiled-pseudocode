/*
 * XREFs of rimLoadImage @ 0x1C0056CD4
 * Callers:
 *     RIMInitialize @ 0x1C0056920 (RIMInitialize.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00D6088 (wcsrchr.c)
 *     _strnicmp @ 0x1C00D6178 (_strnicmp.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

struct _SYSTEM_GDI_DRIVER_INFORMATION *rimLoadImage()
{
  NTSTATUS v0; // eax
  int v1; // edi
  wchar_t *v2; // rax
  const WCHAR *v3; // rax
  NTSTATUS v4; // eax
  PVOID v5; // rbx
  __int64 v6; // rdx
  __int64 Pool2; // rsi
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r14
  char *v11; // rbx
  __int64 AddressOfEntryPoint; // rcx
  __int64 v14; // rax
  char v15; // r14
  ULONG AnsiString; // [rsp+28h] [rbp-E0h] BYREF
  ULONG AnsiString_4; // [rsp+2Ch] [rbp-DCh] BYREF
  struct _STRING AnsiString_8; // [rsp+30h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING SourceString_8; // [rsp+50h] [rbp-B8h] BYREF
  PVOID BackTrace[20]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE SystemInformation[304]; // [rsp+108h] [rbp+0h] BYREF

  DestinationString_8 = 0LL;
  qword_1C0296AD0 = 0LL;
  gHidParseImageInfo.DriverName = 0LL;
  xmmword_1C0296AB0 = 0LL;
  xmmword_1C0296AC0 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\SystemRoot\\System32\\Drivers\\hidparse.sys");
  gHidParseImageInfo.DriverName = DestinationString_8;
  v0 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &gHidParseImageInfo, 0x38uLL);
  v1 = 0;
  if ( v0 >= 0 )
    return &gHidParseImageInfo;
  if ( v0 != -1073741554 )
    return 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  AnsiString = 0;
  AnsiString_8 = 0LL;
  SourceString_8 = 0LL;
  v2 = wcsrchr(L"\\SystemRoot\\System32\\Drivers\\hidparse.sys", 0x5Cu);
  v3 = v2 ? v2 + 1 : L"\\SystemRoot\\System32\\Drivers\\hidparse.sys";
  RtlInitUnicodeString(&SourceString_8, v3);
  if ( RtlUnicodeStringToAnsiString(&AnsiString_8, &SourceString_8, 1u) < 0 )
    return 0LL;
  v4 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &AnsiString);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741820 )
    goto LABEL_18;
  while ( 1 )
  {
    v5 = gpLeakTrackingAllocator;
    v6 = AnsiString;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x646C6452) != 0x646C6452
      || (v14 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_8:
      Pool2 = ExAllocatePool2(260LL, AnsiString);
LABEL_9:
      if ( !Pool2 )
        goto LABEL_18;
      goto LABEL_10;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1684825170 )
    {
      if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_8;
    }
    v15 = 0;
    if ( AnsiString < 0x1000uLL || (AnsiString & 0xFFF) != 0 )
    {
      v15 = 1;
      v6 = AnsiString + 16LL;
    }
    Pool2 = ExAllocatePool2(260LL, v6);
    if ( !Pool2 )
      goto LABEL_18;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v5,
                               Pool2,
                               BackTrace) )
        goto LABEL_37;
      Pool2 += 16LL;
      goto LABEL_9;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v5,
                             Pool2,
                             BackTrace) )
    {
LABEL_37:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_18;
    }
LABEL_10:
    v8 = ZwQuerySystemInformation(SystemModuleInformation, (PVOID)Pool2, AnsiString, &AnsiString);
    if ( v8 != -1073741820 )
      break;
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)Pool2);
  }
  if ( v8 >= 0 )
  {
    v9 = 0;
    if ( *(_DWORD *)Pool2 )
    {
      while ( 1 )
      {
        v10 = v9;
        if ( !strnicmp(
                (const char *)(Pool2 + 296LL * v9 + 48 + *(unsigned __int16 *)(296LL * v9 + Pool2 + 46)),
                AnsiString_8.Buffer,
                AnsiString_8.Length) )
          break;
        if ( ++v9 >= *(_DWORD *)Pool2 )
          goto LABEL_17;
      }
      AnsiString_4 = 0;
      v11 = *(char **)(296LL * v9 + Pool2 + 24);
      *((_QWORD *)&xmmword_1C0296AC0 + 1) = RtlImageDirectoryEntryToData(
                                              *(PVOID *)(296 * v10 + Pool2 + 24),
                                              1u,
                                              0,
                                              &AnsiString_4);
      AddressOfEntryPoint = RtlImageNtHeader(v11)->OptionalHeader.AddressOfEntryPoint;
      *((_QWORD *)&xmmword_1C0296AB0 + 1) = 0LL;
      *(_QWORD *)&xmmword_1C0296AC0 = &v11[AddressOfEntryPoint];
      v1 = 1;
      *(_QWORD *)&xmmword_1C0296AB0 = v11;
    }
  }
LABEL_17:
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (void *)Pool2);
LABEL_18:
  RtlFreeAnsiString(&AnsiString_8);
  if ( v1 == 1 )
    return &gHidParseImageInfo;
  return 0LL;
}
