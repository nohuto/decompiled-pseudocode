/*
 * XREFs of bNotIsKeySymbolicLink @ 0x1C00B7A98
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0x1C00B8E10 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C02A2A34 (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     IsRegNameEqual @ 0x1C02A186C (IsRegNameEqual.c)
 */

__int64 __fastcall bNotIsKeySymbolicLink(PCWSTR SourceString, PHANDLE KeyHandle, PHANDLE a3)
{
  unsigned int v3; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  v3 = 0;
  *KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *a3 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(KeyHandle, 0xF003Fu, &ObjectAttributes) < 0 )
    return 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 832;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes) < 0 )
    return 0LL;
  LOBYTE(v3) = (int)IsRegNameEqual(*KeyHandle, *a3) >= 0;
  return v3;
}
