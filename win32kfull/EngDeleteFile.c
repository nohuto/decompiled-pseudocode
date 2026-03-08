/*
 * XREFs of EngDeleteFile @ 0x1C027BEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngDeleteFile(LPWSTR pwszFileName)
{
  struct _UNICODE_STRING v2; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v2 = 0LL;
  RtlInitUnicodeString(&v2, pwszFileName);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v2;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  return ZwDeleteFile(&ObjectAttributes) == 0;
}
