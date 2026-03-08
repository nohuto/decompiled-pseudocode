/*
 * XREFs of ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x1C012E290
 * Callers:
 *     EndPointerDeviceContacts @ 0x1C012E2F8 (EndPointerDeviceContacts.c)
 *     SuppressPointerDeviceContacts @ 0x1C012E424 (SuppressPointerDeviceContacts.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ResetPointerDevices(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  v1 = a1;
  v2 = SGDGetUserSessionState(a1);
  result = CHidInput::GetKernelHandleToRimObj(*(CHidInput **)(v2 + 16840), &Handle);
  if ( result >= 0 )
  {
    RIMResetPointerDevices(Handle, v1);
    return ZwClose(Handle);
  }
  return result;
}
