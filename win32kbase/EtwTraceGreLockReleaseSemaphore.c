__int64 __fastcall EtwTraceGreLockReleaseSemaphore(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rcx

  result = SGDGetSessionState(a1);
  v6 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v6 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(v6, (unsigned int)&LockRelease, v5, a2, a1);
  }
  return result;
}
