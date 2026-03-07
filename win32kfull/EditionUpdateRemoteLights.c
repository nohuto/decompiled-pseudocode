NTSTATUS __fastcall EditionUpdateRemoteLights(__int64 a1)
{
  NTSTATUS result; // eax
  void *InputBuffer; // rbx
  __int64 v3; // rcx
  struct _IO_STATUS_BLOCK *v4; // rax

  result = gfRemotingConsole;
  if ( gfRemotingConsole )
  {
    InputBuffer = (void *)(SGDGetUserSessionState(a1) + 12596);
    v4 = (struct _IO_STATUS_BLOCK *)SGDGetUserSessionState(v3);
    return ZwDeviceIoControlFile(
             ghConsoleShadowKeyboardChannel,
             0LL,
             0LL,
             0LL,
             v4 + 789,
             0xB0008u,
             InputBuffer,
             4u,
             0LL,
             0);
  }
  return result;
}
