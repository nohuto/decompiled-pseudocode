/*
 * XREFs of IoCreateUnprotectedSymbolicLink @ 0x140947350
 * Callers:
 *     DifIoCreateUnprotectedSymbolicLinkWrapper @ 0x1405DEB50 (DifIoCreateUnprotectedSymbolicLinkWrapper.c)
 * Callees:
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041BF60 (ZwCreateSymbolicLinkObject.c)
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
