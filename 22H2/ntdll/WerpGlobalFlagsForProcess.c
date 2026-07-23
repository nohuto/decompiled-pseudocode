/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x180061C54
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18005F410 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     WerpPathTail @ 0x180061E44 (WerpPathTail.c)
 *     RtlUnicodeStringToInteger @ 0x1800765D0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x18009D800 (NtQueryInformationProcess.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  __int64 v3; // rax
  const WCHAR *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  HANDLE v7; // rdi
  unsigned __int16 *v8; // rbx
  NTSTATUS v9; // eax
  void *v10; // rsi
  int v11; // ecx
  ULONG v12; // r14d
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v15; // eax
  ULONG Length; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Value[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Destination; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING Destination_8; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _QWORD ProcessInformation[68]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+2C8h] [rbp+1C0h] BYREF

  Destination = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  Value[0] = 0;
  Destination_8 = 0LL;
  if ( (NtQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = WerpPathTail(ProcessInformation[1]);
    v4 = (const WCHAR *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(v3 + 2 * v5) );
      v6 = 2 * v5 + 202;
      Destination_8.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      if ( Destination_8.Buffer )
      {
        Destination_8.MaximumLength = v6;
        if ( RtlAppendUnicodeToString(
               &Destination_8,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && RtlAppendUnicodeToString(&Destination_8, v4) >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination_8;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&Destination, 1u, &ObjectAttributes) >= 0 )
          {
            v7 = Destination;
            if ( RtlInitUnicodeStringEx(&DestinationString, L"GlobalFlag") >= 0 )
            {
              v8 = (unsigned __int16 *)KeyValueInformation;
              v9 = NtQueryValueKey(
                     v7,
                     &DestinationString,
                     KeyValuePartialInformation,
                     KeyValueInformation,
                     0x400u,
                     &Length);
              if ( v9 < 0 )
              {
                if ( v9 == -2147483643 )
                {
                  while ( 1 )
                  {
                    v12 = Length;
                    ProcessHeap = NtCurrentPeb()->ProcessHeap;
                    if ( !ProcessHeap )
                      break;
                    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, Length);
                    v10 = Heap;
                    if ( !Heap )
                      break;
                    v8 = (unsigned __int16 *)Heap;
                    v15 = NtQueryValueKey(v7, &DestinationString, KeyValuePartialInformation, Heap, v12, &Length);
                    if ( v15 >= 0 )
                      goto LABEL_17;
                    if ( v15 != -2147483643 )
                      goto LABEL_33;
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
                  }
                }
              }
              else
              {
                v10 = 0LL;
LABEL_17:
                v11 = *((_DWORD *)v8 + 1);
                if ( ((v11 - 3) & 0xFFFFFFFB) != 0 )
                {
                  if ( v11 == 4 )
                  {
                    if ( *((_DWORD *)v8 + 2) == 4 )
                    {
                      Length = 4;
                      Value[0] = *((_DWORD *)v8 + 3);
                    }
                  }
                  else if ( v11 == 1 && ((unsigned __int8)Value & 3) == 0 )
                  {
                    Length = 4;
                    DestinationString.Buffer = v8 + 6;
                    DestinationString.Length = v8[4];
                    DestinationString.MaximumLength = v8[4];
                    RtlUnicodeStringToInteger(&DestinationString, 0, Value);
                  }
                }
                else if ( v11 == 4 )
                {
                  Length = *((_DWORD *)v8 + 2);
                  if ( *((_DWORD *)v8 + 2) <= 4u )
                    memmove(Value, v8 + 6, *((unsigned int *)v8 + 2));
                }
LABEL_33:
                if ( v10 )
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
              }
            }
          }
        }
      }
    }
  }
  if ( Destination )
  {
    NtClose(Destination);
    Destination = 0LL;
  }
  if ( Destination_8.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination_8.Buffer);
  return Value[0];
}
