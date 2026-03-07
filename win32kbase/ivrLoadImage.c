struct _SYSTEM_GDI_DRIVER_INFORMATION *ivrLoadImage()
{
  NTSTATUS v0; // eax
  __int64 v1; // rdi
  int v2; // r15d
  wchar_t *v3; // rax
  const WCHAR *v4; // rax
  NTSTATUS v5; // eax
  NSInstrumentation::CLeakTrackingAllocator *v6; // rbx
  unsigned __int64 v7; // rsi
  int v8; // eax
  __int64 Pool2; // rsi
  _QWORD *v10; // rax
  __int64 v11; // r10
  char v12; // r14
  NTSTATUS v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // r14
  char *v16; // rbx
  ULONG ReturnLength; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v19; // [rsp+30h] [rbp-D8h] BYREF
  ULONG Size[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 AnsiString; // [rsp+50h] [rbp-B8h] BYREF
  struct _STRING AnsiString_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING SourceString_8; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v27[2]; // [rsp+88h] [rbp-80h] BYREF
  PVOID BackTrace[20]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE SystemInformation[304]; // [rsp+138h] [rbp+30h] BYREF

  DestinationString_8 = 0LL;
  qword_1C02D8770 = 0LL;
  gwin32knsImageInfo.DriverName = 0LL;
  xmmword_1C02D8750 = 0LL;
  xmmword_1C02D8760 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\SystemRoot\\System32\\win32kns.sys");
  gwin32knsImageInfo.DriverName = DestinationString_8;
  v0 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &gwin32knsImageInfo, 0x38uLL);
  v1 = 0LL;
  if ( v0 >= 0 )
    return &gwin32knsImageInfo;
  if ( v0 != -1073741554 )
    return 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  ReturnLength = 0;
  v2 = 0;
  AnsiString_8 = 0LL;
  SourceString_8 = 0LL;
  v3 = wcsrchr(L"\\SystemRoot\\System32\\win32kns.sys", 0x5Cu);
  v4 = v3 ? v3 + 1 : L"\\SystemRoot\\System32\\win32kns.sys";
  RtlInitUnicodeString(&SourceString_8, v4);
  if ( RtlUnicodeStringToAnsiString(&AnsiString_8, &SourceString_8, 1u) < 0 )
    return 0LL;
  v5 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741820 )
    goto LABEL_42;
  while ( 1 )
  {
    v6 = gpLeakTrackingAllocator;
    v7 = ReturnLength;
    v19 = 1684825161;
    v22 = 260LL;
    v8 = *(_DWORD *)gpLeakTrackingAllocator;
    AnsiString = ReturnLength;
    if ( !v8 )
    {
      Pool2 = ExAllocatePool2(260LL, ReturnLength, 1684825161LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
LABEL_29:
      if ( !Pool2 )
        goto LABEL_42;
      goto LABEL_32;
    }
    if ( v8 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x646C6449u)
        || v7 + 16 < v7 )
      {
        goto LABEL_42;
      }
      v10 = (_QWORD *)ExAllocatePool2(v22 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v19);
      Pool2 = (__int64)v10;
      if ( !v10
        || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
            *v10 = 1684825161LL,
            Pool2 = (__int64)(v10 + 2),
            v10 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v6 + 1),
          0x646C6449uLL);
      }
      goto LABEL_29;
    }
    if ( v8 != 2 )
      goto LABEL_42;
    v21 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1684825161, &v21) )
    {
      v27[0] = &v22;
      v27[1] = &v19;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v6,
                (__int64)v27,
                &AnsiString);
      goto LABEL_29;
    }
    v12 = 0;
    if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
    {
      v7 += 16LL;
      v12 = 1;
      AnsiString = v7;
    }
    Pool2 = ExAllocatePool2(v11, v7, 1684825161LL);
    if ( !Pool2 )
      goto LABEL_42;
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v12 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v6,
              (const void *)Pool2,
              v21,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_41;
      Pool2 += 16LL;
      goto LABEL_29;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
            (__int64)v6,
            Pool2,
            v21,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_41:
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      goto LABEL_42;
    }
LABEL_32:
    v13 = ZwQuerySystemInformation(SystemModuleInformation, (PVOID)Pool2, ReturnLength, &ReturnLength);
    if ( v13 != -1073741820 )
      break;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  }
  if ( v13 >= 0 )
  {
    v14 = 0;
    if ( *(_DWORD *)Pool2 )
    {
      while ( 1 )
      {
        v15 = 296LL * v14;
        if ( !strnicmp(
                (const char *)(Pool2 + v15 + *(unsigned __int16 *)(v15 + Pool2 + 46) + 48LL),
                AnsiString_8.Buffer,
                AnsiString_8.Length) )
          break;
        if ( ++v14 >= *(_DWORD *)Pool2 )
          goto LABEL_40;
      }
      v16 = *(char **)(v15 + Pool2 + 24);
      Size[0] = 0;
      *((_QWORD *)&xmmword_1C02D8760 + 1) = RtlImageDirectoryEntryToData(v16, 1u, 0, Size);
      v2 = 1;
      *(_QWORD *)&xmmword_1C02D8760 = &v16[RtlImageNtHeader(v16)->OptionalHeader.AddressOfEntryPoint];
      xmmword_1C02D8750 = (unsigned __int64)v16;
    }
  }
LABEL_40:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
LABEL_42:
  RtlFreeAnsiString(&AnsiString_8);
  if ( v2 == 1 )
    return &gwin32knsImageInfo;
  return (struct _SYSTEM_GDI_DRIVER_INFORMATION *)v1;
}
