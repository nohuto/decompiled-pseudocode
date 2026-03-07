char __fastcall IsProcessWin32kLockedOut(void *a1)
{
  char result; // al
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( GetProcessSyscallDisablePolicy(a1, &v2) < 0 )
    return 0;
  result = 1;
  if ( (v2 & 0x100000000LL) == 0 )
    return 0;
  return result;
}
