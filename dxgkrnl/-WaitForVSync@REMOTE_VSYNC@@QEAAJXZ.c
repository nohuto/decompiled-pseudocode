NTSTATUS __fastcall REMOTE_VSYNC::WaitForVSync(BLTQUEUE **this)
{
  NTSTATUS result; // eax
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  result = REMOTE_VSYNC::EnsureEmulationRunning((REMOTE_VSYNC *)this);
  if ( result >= 0 )
  {
    BLTQUEUE::EnableVSyncEventSignaling(this[1]);
    Timeout.QuadPart = -5000000LL;
    return KeWaitForSingleObject(this + 2, UserRequest, 0, 0, &Timeout);
  }
  return result;
}
