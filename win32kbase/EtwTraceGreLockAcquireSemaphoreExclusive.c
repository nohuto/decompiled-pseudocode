__int64 __fastcall EtwTraceGreLockAcquireSemaphoreExclusive(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rcx

  result = SGDGetSessionState(a1);
  v9 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v9 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer(v9, v7, v8, a2, a3, a1);
  }
  return result;
}
