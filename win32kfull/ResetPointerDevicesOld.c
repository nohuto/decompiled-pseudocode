NTSTATUS __fastcall ResetPointerDevicesOld(__int64 a1)
{
  __int64 v1; // rax
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  v1 = SGDGetUserSessionState(a1);
  result = CHidInput::GetKernelHandleToRimObj(*(CHidInput **)(v1 + 16840), &Handle);
  if ( result >= 0 )
  {
    RIMResetPointerDevices(Handle, 2LL);
    return ZwClose(Handle);
  }
  return result;
}
