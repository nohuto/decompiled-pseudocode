/*
 * XREFs of ivrLoadImage @ 0x1C01F102C
 * Callers:
 *     InputInitialize @ 0x1C0052DC4 (InputInitialize.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00D6088 (wcsrchr.c)
 *     _strnicmp @ 0x1C00D6178 (_strnicmp.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

struct _SYSTEM_GDI_DRIVER_INFORMATION *ivrLoadImage()
{
  NTSTATUS v0; // eax
  int v1; // edi
  wchar_t *v2; // rax
  const WCHAR *v3; // rax
  NTSTATUS v4; // eax
  PVOID v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 Pool2; // rsi
  NTSTATUS v9; // eax
  char v10; // r14
  unsigned int v11; // ebx
  __int64 v12; // r14
  char *v13; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG AnsiString; // [rsp+28h] [rbp-E0h] BYREF
  ULONG AnsiString_4; // [rsp+2Ch] [rbp-DCh] BYREF
  struct _STRING AnsiString_8; // [rsp+30h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING SourceString_8; // [rsp+50h] [rbp-B8h] BYREF
  PVOID BackTrace[20]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE SystemInformation[304]; // [rsp+108h] [rbp+0h] BYREF

  DestinationString_8 = 0LL;
  qword_1C02A05B0 = 0LL;
  gwin32knsImageInfo.DriverName = 0LL;
  xmmword_1C02A0590 = 0LL;
  xmmword_1C02A05A0 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\SystemRoot\\System32\\win32kns.sys");
  gwin32knsImageInfo.DriverName = DestinationString_8;
  v0 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &gwin32knsImageInfo, 0x38uLL);
  v1 = 0;
  if ( v0 >= 0 )
    return &gwin32knsImageInfo;
  if ( v0 != -1073741554 )
    return 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  AnsiString = 0;
  AnsiString_8 = 0LL;
  SourceString_8 = 0LL;
  v2 = wcsrchr(L"\\SystemRoot\\System32\\win32kns.sys", 0x5Cu);
  v3 = v2 ? v2 + 1 : L"\\SystemRoot\\System32\\win32kns.sys";
  RtlInitUnicodeString(&SourceString_8, v3);
  if ( RtlUnicodeStringToAnsiString(&AnsiString_8, &SourceString_8, 1u) < 0 )
    return 0LL;
  v4 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &AnsiString);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741820 )
    goto LABEL_34;
  while ( 1 )
  {
    v5 = gpLeakTrackingAllocator;
    v6 = AnsiString;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x646C6449) != 0x646C6449
      || (v7 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_13:
      Pool2 = ExAllocatePool2(260LL, AnsiString);
LABEL_14:
      if ( !Pool2 )
        goto LABEL_34;
      goto LABEL_15;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1684825161 )
    {
      if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_13;
    }
    v10 = 0;
    if ( AnsiString < 0x1000uLL || (AnsiString & 0xFFF) != 0 )
    {
      v10 = 1;
      v6 = AnsiString + 16LL;
    }
    Pool2 = ExAllocatePool2(260LL, v6);
    if ( !Pool2 )
      goto LABEL_34;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v5,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_26;
      Pool2 += 16LL;
      goto LABEL_14;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
            (__int64)v5,
            Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_26:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_34;
    }
LABEL_15:
    v9 = ZwQuerySystemInformation(SystemModuleInformation, (PVOID)Pool2, AnsiString, &AnsiString);
    if ( v9 != -1073741820 )
      break;
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  }
  if ( v9 >= 0 )
  {
    v11 = 0;
    if ( *(_DWORD *)Pool2 )
    {
      while ( 1 )
      {
        v12 = v11;
        if ( !strnicmp(
                (const char *)(Pool2 + 296LL * v11 + 48 + *(unsigned __int16 *)(296LL * v11 + Pool2 + 46)),
                AnsiString_8.Buffer,
                AnsiString_8.Length) )
          break;
        if ( ++v11 >= *(_DWORD *)Pool2 )
          goto LABEL_33;
      }
      AnsiString_4 = 0;
      v13 = *(char **)(296LL * v11 + Pool2 + 24);
      *((_QWORD *)&xmmword_1C02A05A0 + 1) = RtlImageDirectoryEntryToData(
                                              *(PVOID *)(296 * v12 + Pool2 + 24),
                                              1u,
                                              0,
                                              &AnsiString_4);
      AddressOfEntryPoint = RtlImageNtHeader(v13)->OptionalHeader.AddressOfEntryPoint;
      *((_QWORD *)&xmmword_1C02A0590 + 1) = 0LL;
      *(_QWORD *)&xmmword_1C02A05A0 = &v13[AddressOfEntryPoint];
      v1 = 1;
      *(_QWORD *)&xmmword_1C02A0590 = v13;
    }
  }
LABEL_33:
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)Pool2);
LABEL_34:
  RtlFreeAnsiString(&AnsiString_8);
  if ( v1 != 1 )
    return 0LL;
  return &gwin32knsImageInfo;
}
