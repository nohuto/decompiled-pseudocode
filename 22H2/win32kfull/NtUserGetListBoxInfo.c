/*
 * XREFs of NtUserGetListBoxInfo @ 0x1C01FA1F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetListBoxInfo @ 0x1C0248FB0 (xxxGetListBoxInfo.c)
 */

__int64 __fastcall NtUserGetListBoxInfo(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int ListBoxInfo; // ebx
  int v5; // edi
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  ListBoxInfo = 0;
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v8 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v8;
    *((_QWORD *)&v8 + 1) = v2;
    HMLockObject(v2);
    ListBoxInfo = xxxGetListBoxInfo(v5);
    ThreadUnlock1(v6);
  }
  UserSessionSwitchLeaveCrit(v3);
  return ListBoxInfo;
}
