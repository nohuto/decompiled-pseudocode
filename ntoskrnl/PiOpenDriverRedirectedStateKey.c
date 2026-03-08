/*
 * XREFs of PiOpenDriverRedirectedStateKey @ 0x140875B5C
 * Callers:
 *     PipHardwareConfigActivateService @ 0x140875A78 (PipHardwareConfigActivateService.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x1403C1A7C (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     IopAllocateUnicodeString @ 0x140683958 (IopAllocateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiGetStateRootPath @ 0x14086F420 (PiGetStateRootPath.c)
 */

__int64 __fastcall PiOpenDriverRedirectedStateKey(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  int StateRootPath; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  NTSTATUS v9; // eax
  HANDLE v10; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF

  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  UnicodeString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( a1 && *((_QWORD *)a1 + 1) && *a1 >= 2u && a3 )
  {
    StateRootPath = PiGetStateRootPath(L"DriverStatePath", 0LL, 0, &DestinationString);
    if ( StateRootPath >= 0 )
    {
      v7 = *a1 + 2;
      v8 = v7 + DestinationString.Length;
      if ( v8 < v7 )
      {
        StateRootPath = -1073741675;
      }
      else if ( v8 <= 0xFFFE )
      {
        StateRootPath = IopAllocateUnicodeString((__int64)&UnicodeString, v8);
        if ( StateRootPath >= 0 )
        {
          StateRootPath = RtlUnicodeStringPrintfEx(&UnicodeString, 0LL, 0x800u, L"%wZ\\%wZ", &DestinationString, a1);
          if ( StateRootPath >= 0 )
          {
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = &UnicodeString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v9 = ZwOpenKey(&Handle, 0x30006u, &ObjectAttributes);
            StateRootPath = v9;
            if ( v9 == -1073741772 )
            {
              StateRootPath = -1073741275;
            }
            else if ( v9 >= 0 )
            {
              v10 = Handle;
              Handle = 0LL;
              *a3 = v10;
            }
          }
        }
      }
      else
      {
        StateRootPath = -2147483643;
      }
    }
  }
  else
  {
    StateRootPath = -1073741811;
  }
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)StateRootPath;
}
