/*
 * XREFs of PopReadSimulateProcessorClasses @ 0x140B6D8DC
 * Callers:
 *     PopDetectSimulatedHeteroProcessors @ 0x140B6D7C4 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     RtlUnicodeStringToInteger @ 0x140751D60 (RtlUnicodeStringToInteger.c)
 *     PopReadLegacySimulateProcessorClass @ 0x140B93394 (PopReadLegacySimulateProcessorClass.c)
 *     PopReadSimulateProcessorClass @ 0x140B934E4 (PopReadSimulateProcessorClass.c)
 */

char __fastcall PopReadSimulateProcessorClasses(unsigned int a1, __int64 a2)
{
  char LegacySimulateProcessorClass; // si
  char v5; // r14
  HANDLE v7; // rcx
  ULONG v8; // edi
  ULONG i; // edx
  ULONG Value; // [rsp+38h] [rbp-79h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-75h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-71h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-69h] BYREF
  UNICODE_STRING String; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES v16; // [rsp+70h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-11h] BYREF
  __int128 KeyInformation; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+E0h] [rbp+2Fh] BYREF

  Value = 0;
  ResultLength = 0;
  memset(&v16.Attributes + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  Handle = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v16.RootDirectory = 0LL;
  v19 = 0LL;
  LegacySimulateProcessorClass = 0;
  *(_QWORD *)&v16.Length = 48LL;
  v5 = 0;
  v15[1] = L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Kernel\\KGroups";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  ObjectAttributes.Attributes = 576;
  v16.Attributes = 576;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v16.ObjectName = &String;
  String = 0LL;
  v15[0] = 10748066LL;
  KeyInformation = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v7 = KeyHandle;
    v8 = 0;
    v16.RootDirectory = KeyHandle;
    for ( i = 0; ZwEnumerateKey(v7, i, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength) >= 0; i = v8 )
    {
      String.Buffer = (wchar_t *)&v19;
      String.Length = WORD6(KeyInformation);
      String.MaximumLength = 4;
      if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0
        && Value < 0x20
        && ZwOpenKey(&Handle, 0x20019u, &v16) >= 0 )
      {
        LegacySimulateProcessorClass = PopReadLegacySimulateProcessorClass(Value, Handle, a1, a2);
        if ( !LegacySimulateProcessorClass )
          LegacySimulateProcessorClass = PopReadSimulateProcessorClass(Value, Handle, a1, a2);
      }
      ++v8;
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      v7 = KeyHandle;
      v5 |= LegacySimulateProcessorClass;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
