/*
 * XREFs of ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x1C012108C
 * Callers:
 *     NtUserSetShellChangeNotifyHWND @ 0x1C0121050 (NtUserSetShellChangeNotifyHWND.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall _SetShellChangeNotifyHWND(HWND a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 8);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 168);
      if ( v5 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
        v7 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL);
        v8 = *(unsigned int *)(v7 + 780);
        if ( *(_DWORD *)(CurrentProcessWin32Process + 780) == (_DWORD)v8 )
        {
          v9 = PsGetCurrentProcessWin32Process(v8);
          v7 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL);
          if ( *(_DWORD *)(v9 + 784) == *(_DWORD *)(v7 + 784) )
          {
            result = 1LL;
            *(_QWORD *)(**(_QWORD **)(v3 + 8) + 56LL) = a1;
            return result;
          }
        }
        UserSetLastError(5LL, v7);
      }
    }
  }
  return 0LL;
}
