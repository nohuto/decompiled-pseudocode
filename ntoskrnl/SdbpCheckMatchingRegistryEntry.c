/*
 * XREFs of SdbpCheckMatchingRegistryEntry @ 0x140A4CCBC
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x140A4CB90 (SdbpCheckMatchingRegistry.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4CE9C (SdbpCheckMatchingRegistryValue.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryEntry(
        __int64 a1,
        wchar_t *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  unsigned int v10; // edi
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v15; // [rsp+98h] [rbp-68h] BYREF
  int v16; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest[264]; // [rsp+B0h] [rbp-50h] BYREF

  pszDest[0] = 0;
  KeyHandle = 0LL;
  v15 = 0LL;
  *a9 = 0;
  v16 = 0;
  v10 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\REGISTRY\\MACHINE\\%s", a1) < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_10;
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    goto LABEL_9;
  if ( (int)ZwQuerySystemInformation(1LL, (__int64)&v15) < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_10;
  }
  if ( (_WORD)v15 == 9 && ZwOpenKey(&KeyHandle, 0x20219u, &ObjectAttributes) >= 0 )
LABEL_9:
    v10 = SdbpCheckMatchingRegistryValue(KeyHandle, a2, a5, a6, Buf1, Size, (__int64)a9);
  else
    v10 = 1;
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v10;
}
