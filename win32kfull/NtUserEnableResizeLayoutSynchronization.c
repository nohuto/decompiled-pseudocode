/*
 * XREFs of NtUserEnableResizeLayoutSynchronization @ 0x1C00E8EA0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserEnableResizeLayoutSynchronization(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (__int64 *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v12;
      *((_QWORD *)&v12 + 1) = v4;
      HMLockObject(v4);
      if ( a2 )
        *(_BYTE *)(v7[5] + 25) |= 0x80u;
      else
        SetOrClrWF(0, v7, 0x980u, 0);
      ThreadUnlock1(v9, v8, v10);
      v6 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
