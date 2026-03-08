/*
 * XREFs of IoCreateUnprotectedSymbolicLink @ 0x140944330
 * Callers:
 *     DifIoCreateUnprotectedSymbolicLinkWrapper @ 0x1405DC6A0 (DifIoCreateUnprotectedSymbolicLinkWrapper.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x140413BD0 (ZwCreateSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoCreateUnprotectedSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  NTSTATUS SymbolicLinkObject; // ebx
  HANDLE Handle; // [rsp+60h] [rbp+10h] BYREF

  Handle = 0LL;
  SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
  if ( SymbolicLinkObject >= 0 )
    ZwClose(Handle);
  return SymbolicLinkObject;
}
