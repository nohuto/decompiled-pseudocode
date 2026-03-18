/*
 * XREFs of NtUserHwndSetRedirectionInfo @ 0x1C01D4DA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 *     GreSetHwndPresentFlags @ 0x1C02680D4 (GreSetHwndPresentFlags.c)
 */

__int64 __fastcall NtUserHwndSetRedirectionInfo(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  NTSTATUS v8; // edi
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 StyleWindow; // rax
  __int64 v16; // rbx
  ULONG v17; // eax

  v8 = -1073741811;
  v9 = 1;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    StyleWindow = GetStyleWindow(v10, 2568);
    v13 = StyleWindow;
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
    v16 = 0LL;
  }
  else
  {
    v16 = 1LL;
  }
  if ( !v9 )
  {
    v17 = RtlNtStatusToDosError(v8);
    UserSetLastError(v17);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v16;
}
