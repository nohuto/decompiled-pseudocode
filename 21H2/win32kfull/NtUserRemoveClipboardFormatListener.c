/*
 * XREFs of NtUserRemoveClipboardFormatListener @ 0x1C00CE410
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00CE4AC (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserRemoveClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx

  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v3 = *(_QWORD *)(v5 + 16);
    if ( *(_QWORD *)(v3 + 424) == CurrentProcessWin32Process )
    {
      if ( CheckClipboardAccess() )
      {
        if ( (*(_DWORD *)(v5 + 320) & 0x800000) != 0 )
        {
          _RemoveClipboardFormatListener((struct tagWND *)v5);
          v4 = 1LL;
        }
        else
        {
          UserSetLastError(87LL, v7);
        }
      }
    }
    else
    {
      v4 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
