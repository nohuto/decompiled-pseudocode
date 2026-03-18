/*
 * XREFs of NtUserEnableResizeLayoutSynchronization @ 0x1C00B02E0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserEnableResizeLayoutSynchronization(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
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
      if ( a2 )
        *(_BYTE *)(*(_QWORD *)(v10 + 40) + 25LL) |= 0x80u;
      else
        SetOrClrWF(0LL, v10, 2432LL, 0LL);
      ThreadUnlock1(v12, v11, v13);
      v9 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
