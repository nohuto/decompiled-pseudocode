/*
 * XREFs of ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x1C0136200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall _SetShellChangeNotifyHWND(HWND a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
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
        v8 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL);
        v9 = *(unsigned int *)(v8 + 780);
        if ( *(_DWORD *)(CurrentProcessWin32Process + 780) == (_DWORD)v9 )
        {
          v10 = PsGetCurrentProcessWin32Process(v9);
          v8 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL);
          if ( *(_DWORD *)(v10 + 784) == *(_DWORD *)(v8 + 784) )
          {
            result = 1LL;
            *(_QWORD *)(**(_QWORD **)(v3 + 8) + 56LL) = a1;
            return result;
          }
        }
        UserSetLastError(5LL, v8, v7);
      }
    }
  }
  return 0LL;
}
