/*
 * XREFs of NtUserEnableMouseInPointerForWindow @ 0x1C0120D60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
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
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v4;
    HMLockObject(v4);
    if ( (a2 != 0) == a2 && (a2 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 820) & 0x30) != 0x10) )
    {
      if ( *(_QWORD *)(v7 + 16) == gptiCurrent )
      {
        v11 = *(_DWORD *)(v7 + 324);
        if ( a2 == ((v11 >> 4) & 1) || (v11 & 0x20) == 0 )
        {
          if ( a2 )
            v12 = v11 | 0x10;
          else
            v12 = v11 & 0xFFFFFFEF;
          v13 = v12 | 0x20;
          v6 = 1LL;
          *(_DWORD *)(v7 + 324) = v13;
          *(_DWORD *)(gptiCurrent + 1232LL) |= 0x4000000u;
          goto LABEL_10;
        }
      }
      v15 = 5LL;
    }
    else
    {
      v15 = 87LL;
    }
    UserSetLastError(v15, v8, v10);
LABEL_10:
    ThreadUnlock1(v13);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
