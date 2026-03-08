/*
 * XREFs of NtUserEnableMouseInPointerForWindow @ 0x1C00E7D50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableMouseInPointerForWindow(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  int v15; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v4;
    HMLockObject(v4);
    if ( (a2 != 0) != a2 )
      goto LABEL_12;
    if ( a2 )
      goto LABEL_6;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v8;
    }
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x30) != 0x10 )
    {
LABEL_6:
      if ( *(_QWORD *)(v7 + 16) == gptiCurrent )
      {
        v11 = *(_DWORD *)(v7 + 320);
        if ( a2 == ((v11 >> 3) & 1) || (v11 & 0x10) == 0 )
        {
          v6 = 1LL;
          v12 = v11 | 8;
          if ( !a2 )
            v12 = *(_DWORD *)(v7 + 320) & 0xFFFFFFF7;
          v13 = v12 | 0x10;
          *(_DWORD *)(v7 + 320) = v13;
          *(_DWORD *)(gptiCurrent + 1272LL) |= 0x4000000u;
          goto LABEL_10;
        }
      }
      v15 = 5;
    }
    else
    {
LABEL_12:
      v15 = 87;
    }
    UserSetLastError(v15);
LABEL_10:
    ThreadUnlock1(v13, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
