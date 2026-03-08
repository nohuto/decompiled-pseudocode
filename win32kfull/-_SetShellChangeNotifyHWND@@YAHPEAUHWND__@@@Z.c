/*
 * XREFs of ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x1C00F3DCC
 * Callers:
 *     NtUserSetShellChangeNotifyHWND @ 0x1C00F3D90 (NtUserSetShellChangeNotifyHWND.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _SetShellChangeNotifyHWND(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax

  v3 = *((_QWORD *)PtiCurrentShared(a1) + 57);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 8);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 168);
      if ( v5 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
        v7 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        v8 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL);
        if ( *(_DWORD *)(v7 + 772) == *(_DWORD *)(v8 + 772) )
        {
          v9 = PsGetCurrentProcessWin32Process(v8);
          v10 = v9;
          if ( v9 )
            v10 = -(__int64)(*(_QWORD *)v9 != 0LL) & v9;
          if ( *(_DWORD *)(v10 + 776) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 776LL) )
          {
            result = 1LL;
            *(_QWORD *)(**(_QWORD **)(v3 + 8) + 56LL) = a1;
            return result;
          }
        }
        UserSetLastError(5);
      }
    }
  }
  return 0LL;
}
