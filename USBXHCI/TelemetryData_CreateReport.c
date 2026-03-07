__int64 *__fastcall TelemetryData_CreateReport(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *Pool2; // rax
  __int64 *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  CONTEXT ContextRecord; // [rsp+40h] [rbp-4E8h] BYREF

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  Pool2 = (__int64 *)ExAllocatePool2(64LL, 1256LL, 1952531540LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x4E8uLL);
    v10 = ExAllocatePool2(64LL, 0x40000LL, 1952531540LL);
    *v9 = v10;
    if ( v10
      && RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v9 + 312, 0x20uLL, L"%ws", L"USBXHCI") >= 0
      && (RtlCaptureContext(&ContextRecord),
          (v11 = KeCapturePersistentThreadState(&ContextRecord, 0LL, 324LL, a3, a4, a5, a6, *v9)) != 0) )
    {
      *((_DWORD *)v9 + 2) = v11;
    }
    else
    {
      if ( *v9 )
        ExFreePoolWithTag((PVOID)*v9, 0x74614454u);
      ExFreePoolWithTag(v9, 0x74614454u);
      return 0LL;
    }
  }
  return v9;
}
