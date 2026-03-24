/*
 * XREFs of NtUserEnableResizeLayoutSynchronization @ 0x1C0124DE0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserEnableResizeLayoutSynchronization(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( v5 && (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v5;
    HMLockObject(v5);
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(v7 + 40) + 25LL) |= 0x80u;
    else
      SetOrClrWF(0, v7, 0x980u, 0);
    ThreadUnlock1(v8);
  }
  else
  {
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
