/*
 * XREFs of NtUserCreateCaret @ 0x1C0113CE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateCaret @ 0x1C0113DC4 (xxxCreateCaret.c)
 */

__int64 __fastcall NtUserCreateCaret(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int Caret; // ebx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  Caret = 0;
  v11 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v8;
    HMLockObject(v8);
    Caret = xxxCreateCaret(v11, a2, a3, a4);
    ThreadUnlock1(v12);
  }
  UserSessionSwitchLeaveCrit(v9);
  return Caret;
}
