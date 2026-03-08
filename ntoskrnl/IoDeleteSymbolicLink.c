/*
 * XREFs of IoDeleteSymbolicLink @ 0x140871290
 * Callers:
 *     DifIoDeleteSymbolicLinkWrapper @ 0x1405DC9C0 (DifIoDeleteSymbolicLinkWrapper.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1404145F0 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1404149D0 (ZwOpenSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName)
{
  int TemporaryObject; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+10h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  LinkHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = SymbolicLinkName;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  TemporaryObject = ZwOpenSymbolicLinkObject(&LinkHandle, 0x10000u, &ObjectAttributes);
  if ( TemporaryObject >= 0 )
  {
    TemporaryObject = ZwMakeTemporaryObject(LinkHandle);
    if ( TemporaryObject >= 0 )
      ZwClose(LinkHandle);
  }
  return TemporaryObject;
}
