/*
 * XREFs of NtUserEnableScrollBar @ 0x1C009E160
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableScrollBar @ 0x1C009E260 (xxxEnableScrollBar.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableScrollBar(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  ULONG_PTR v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v15;
      *((_QWORD *)&v15 + 1) = v4;
      HMLockObject(v4);
      if ( a2 > 3 || a2 == 2 && *(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) != 666 )
        UserSetLastError(87LL);
      else
        v9 = xxxEnableScrollBar(v10);
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
