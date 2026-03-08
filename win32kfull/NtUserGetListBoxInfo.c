/*
 * XREFs of NtUserGetListBoxInfo @ 0x1C01D3350
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetListBoxInfo @ 0x1C0233904 (xxxGetListBoxInfo.c)
 */

__int64 __fastcall NtUserGetListBoxInfo(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int ListBoxInfo; // ebx
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  ListBoxInfo = 0;
  v5 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v2;
    HMLockObject(v2);
    ListBoxInfo = xxxGetListBoxInfo(v5);
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return ListBoxInfo;
}
