/*
 * XREFs of EtwpLoadMicroarchitecturalPmcs @ 0x14085EB08
 * Callers:
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E1528 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void EtwpLoadMicroarchitecturalPmcs()
{
  __int64 v0; // rax
  size_t v1; // rsi
  WCHAR *Pool2; // rbx
  int v3; // edi
  NTSTATUS v4; // eax
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD KeyInformation[136]; // [rsp+98h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  memset(KeyInformation, 0, 0x218uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  v0 = -1LL;
  do
    ++v0;
  while ( aRegistryMachin_27[v0] );
  v1 = (unsigned int)(2 * v0 + 514);
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, v1, 1350005829LL);
  if ( Pool2 )
  {
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v3 = -1;
      do
      {
        while ( 1 )
        {
          v4 = ZwEnumerateKey(DestinationString[0], ++v3, KeyBasicInformation, KeyInformation, 0x216u, ResultLength);
          if ( v4 < 0 )
            break;
          if ( KeyInformation[3] < 0x1FEu )
          {
            *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
            if ( RtlStringCbPrintfW(
                   Pool2,
                   v1,
                   L"%ws\\%ws",
                   L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
                   &KeyInformation[4]) >= 0 )
            {
              RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], Pool2);
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
              {
                EtwpLoadMicroarchitecturalProfileGroup(KeyHandle);
                ZwClose(KeyHandle);
              }
            }
          }
        }
      }
      while ( v4 == -1073741789 || v4 == -2147483643 );
      ZwClose(DestinationString[0]);
    }
    ExFreePoolWithTag(Pool2, 0x50777445u);
  }
}
