/*
 * XREFs of NtUserIsResizeLayoutSynchronizationEnabled @ 0x1C01FDC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsResizeLayoutSynchronizationEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 v6; // bl
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( (((*(_WORD *)(v3 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v9 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v9;
      *((_QWORD *)&v9 + 1) = v2;
      HMLockObject(v2);
      v6 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 25LL);
      ThreadUnlock1(v7);
      v4 = v6 & 0x80;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
