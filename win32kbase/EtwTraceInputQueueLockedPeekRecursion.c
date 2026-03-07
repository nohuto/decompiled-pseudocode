void __fastcall EtwTraceInputQueueLockedPeekRecursion(__int64 a1)
{
  char v1; // di
  PETHREAD *v2; // rcx
  char ThreadId; // bl
  int v4; // r9d
  int v5; // ecx
  int v6; // r8d

  v1 = a1;
  v2 = *(PETHREAD **)(a1 + 72);
  if ( v2 )
    ThreadId = (unsigned __int8)PsGetThreadId(*v2);
  else
    ThreadId = 0;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v4) = GetCallbackCount();
    McTemplateK0cpq_EtwWriteTransfer(v5, (unsigned int)&InputQueueLockedPeekRecursion, v6, v4, v1, ThreadId);
  }
}
