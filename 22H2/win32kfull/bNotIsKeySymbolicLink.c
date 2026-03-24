/*
 * XREFs of bNotIsKeySymbolicLink @ 0x1C00E6E44
 * Callers:
 *     bAddAllFlEntry @ 0x1C00E6908 (bAddAllFlEntry.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C00E6D18 (bReadUserSystemEUDCRegistry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C029825C (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     IsRegNameEqual @ 0x1C0297EA0 (IsRegNameEqual.c)
 */

_BOOL8 __fastcall bNotIsKeySymbolicLink(PCWSTR SourceString, PHANDLE KeyHandle, PHANDLE a3)
{
  _BOOL8 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *a3 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = 0;
  if ( ZwOpenKey(KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 832;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes) >= 0 && (int)IsRegNameEqual(*KeyHandle, *a3) >= 0 )
      return 1;
  }
  return result;
}
