void __fastcall DxLddmLogProcessPrimaryLockCount(ULONG a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  PWSTR Buffer; // rsi
  __int64 v10; // rbx
  char *ErrorLogEntry; // rax
  char *v12; // rdi
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _WORD Src[12]; // [rsp+50h] [rbp-20h] BYREF

  *(_QWORD *)&String.Length = 1441792LL;
  String.Buffer = Src;
  if ( RtlIntegerToUnicodeString(a1, 0xAu, &String) >= 0 )
  {
    v4 = -1LL;
    v5 = -1LL;
    do
      ++v5;
    while ( Src[v5] );
    v6 = 2 * v5 + 2;
    UnicodeString = 0LL;
    DestinationString = 0LL;
    CurrentProcess = PsGetCurrentProcess(Src, v1, v2, v3);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      do
        ++v4;
      while ( UnicodeString.Buffer[v4] );
      v10 = (unsigned int)(2 * v4 + 2);
      if ( (unsigned int)v10 + v6 + 40 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(
                                  gpWin32kDriverObject,
                                  (unsigned __int8)v10 + (unsigned __int8)v6 + 40);
        v12 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = 1073742069;
          *((_DWORD *)ErrorLogEntry + 1) = 2621442;
          memmove(ErrorLogEntry + 40, Buffer, (unsigned int)v10);
          memmove(&v12[v10 + 40], Src, v6);
          IoWriteErrorLogEntry(v12);
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
}
