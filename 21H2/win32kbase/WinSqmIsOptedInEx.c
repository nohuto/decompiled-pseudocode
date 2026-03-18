/*
 * XREFs of WinSqmIsOptedInEx @ 0x1C005BE90
 * Callers:
 *     WinSqmIsOptedIn @ 0x1C0167D40 (WinSqmIsOptedIn.c)
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z @ 0x1C005BFE8 (-ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z.c)
 */

_BOOL8 __fastcall WinSqmIsOptedInEx(int a1)
{
  bool v2; // bl
  HANDLE v3; // rcx
  int v5; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+80h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  v2 = 0;
  v3 = 0LL;
  v8 = 0;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( a1 == 2 )
  {
LABEL_17:
    if ( (int)ReadUlongFromKey(v3, L"CEIPSampledIn", &v8) < 0 )
      goto LABEL_8;
    goto LABEL_18;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\SQMClient\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v5 = ReadUlongFromKey(KeyHandle, L"CEIPEnable", &v8);
    if ( v5 >= 0 )
    {
LABEL_18:
      v2 = v8 == 1;
      goto LABEL_8;
    }
    if ( v5 != -1073741772 )
      goto LABEL_8;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( (int)ReadUlongFromKey(Handle, L"CEIPEnable", &v8) >= 0 )
      v2 = v8 == 1;
    if ( (a1 & 3) != 0 && v2 )
    {
      v3 = Handle;
      goto LABEL_17;
    }
  }
LABEL_8:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v2;
}
