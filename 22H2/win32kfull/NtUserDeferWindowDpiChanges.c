/*
 * XREFs of NtUserDeferWindowDpiChanges @ 0x1C0013650
 * Callers:
 *     <none>
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00D2278 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserDeferWindowDpiChanges(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v3 = (*(_WORD *)(v4 + 42) & 0x2FFFu) - 669;
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v14;
      *((_QWORD *)&v14 + 1) = v2;
      HMLockObject(v2);
      v11 = *(_QWORD *)(v8 + 40);
      if ( (*(_DWORD *)(v11 + 288) & 0xF) == 2 )
      {
        if ( *(_WORD *)(v11 + 286) )
        {
          v12 = (*(_DWORD *)(v8 + 320) >> 6) & 1;
          *(_DWORD *)(v8 + 320) |= 0x40u;
          v7 = v12;
        }
        else
        {
          v7 = SetDeferredDpiStateForWindowAndChildren((struct tagWND *)v8);
        }
      }
      else
      {
        UserSetLastError(87LL);
      }
      ThreadUnlock1(v12, v9, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
