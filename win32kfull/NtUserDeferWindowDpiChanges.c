/*
 * XREFs of NtUserDeferWindowDpiChanges @ 0x1C0012910
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0041748 (_SetDeferredDpiStateForWindowAndChildren.c)
 */

__int64 __fastcall NtUserDeferWindowDpiChanges(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( (((*(_WORD *)(v3 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v11;
      *((_QWORD *)&v11 + 1) = v2;
      HMLockObject(v2);
      v8 = *(_QWORD *)(v5 + 40);
      if ( (*(_DWORD *)(v8 + 288) & 0xF) == 2 )
      {
        if ( *(_WORD *)(v8 + 286) )
        {
          v9 = (*(_DWORD *)(v5 + 320) >> 6) & 1;
          *(_DWORD *)(v5 + 320) |= 0x40u;
          v4 = v9;
        }
        else
        {
          v4 = SetDeferredDpiStateForWindowAndChildren((struct tagWND *)v5);
        }
      }
      else
      {
        UserSetLastError(87LL);
      }
      ThreadUnlock1(v9, v6, v7);
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
