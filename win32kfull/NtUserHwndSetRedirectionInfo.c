/*
 * XREFs of NtUserHwndSetRedirectionInfo @ 0x1C01D5DD0
 * Callers:
 *     <none>
 * Callees:
 *     GetStyleWindow @ 0x1C0039020 (GetStyleWindow.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GreSetHwndPresentFlags @ 0x1C026AA44 (GreSetHwndPresentFlags.c)
 */

__int64 __fastcall NtUserHwndSetRedirectionInfo(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  NTSTATUS v8; // edi
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 StyleWindow; // rax
  __int64 v13; // rbx
  ULONG v14; // eax

  v8 = -1073741811;
  v9 = 1;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    StyleWindow = GetStyleWindow(v10, 2568);
    if ( StyleWindow )
    {
      if ( (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x2FFF) != 0x29D )
      {
        if ( a2 == 2 )
        {
          if ( a3 )
          {
            if ( a4 >= 4 )
              v8 = GreSetHwndPresentFlags(*(HWND *)StyleWindow);
            else
              v8 = -1073741306;
          }
        }
        else
        {
          v8 = -1073741821;
        }
      }
    }
  }
  if ( v8 < 0 )
  {
    v9 = 0;
    v13 = 0LL;
  }
  else
  {
    v13 = 1LL;
  }
  if ( !v9 )
  {
    v14 = RtlNtStatusToDosError(v8);
    UserSetLastError(v14);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
