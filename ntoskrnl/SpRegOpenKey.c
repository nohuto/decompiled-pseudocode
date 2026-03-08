/*
 * XREFs of SpRegOpenKey @ 0x14085A004
 * Callers:
 *     SpRegOpenRedirectedKey @ 0x140859F40 (SpRegOpenRedirectedKey.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 */

__int64 __fastcall SpRegOpenKey(UNICODE_STRING *a1, HANDLE *a2)
{
  NTSTATUS v3; // eax
  HANDLE v4; // rcx
  unsigned int v5; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  v3 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v4 = KeyHandle;
  v5 = v3;
  if ( v3 >= 0 )
  {
    *a2 = KeyHandle;
    v4 = 0LL;
    KeyHandle = 0LL;
  }
  if ( v4 )
    ZwClose(v4);
  return v5;
}
