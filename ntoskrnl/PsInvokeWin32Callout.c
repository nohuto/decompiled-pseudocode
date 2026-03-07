__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, unsigned int *a4)
{
  unsigned int *v4; // r11
  __int64 v5; // r10
  __int64 v7; // rbx
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 result; // rax
  int v10; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v13; // r9
  unsigned int *v14; // rcx
  unsigned int v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0;
  v4 = a4;
  v5 = a1;
  if ( !a3 )
    goto LABEL_2;
  v10 = a3 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 3221225485LL;
    v14 = 0LL;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    {
      SessionId = MmGetSessionId((__int64)Process);
      if ( *v13 == SessionId )
      {
LABEL_2:
        v7 = v5;
        Win32Callouts = MmSessionGetWin32Callouts();
        return ExCallCallBack(Win32Callouts, v7, a2);
      }
    }
    v14 = v4;
  }
  result = ExCallSessionCallBack(v14, v5, a2, (int *)&v15);
  if ( (int)result >= 0 )
    return v15;
  return result;
}
