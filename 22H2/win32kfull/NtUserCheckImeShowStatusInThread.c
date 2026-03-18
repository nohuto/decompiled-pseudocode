/*
 * XREFs of NtUserCheckImeShowStatusInThread @ 0x1C00902E0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00903C0 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall NtUserCheckImeShowStatusInThread(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v5;
    HMLockObject(v5);
    v10 = gpsi;
    if ( (*gpsi & 4) != 0 && *(char *)(*(_QWORD *)(v5 + 40) + 20LL) >= 0 )
      xxxCheckImeShowStatus((struct tagWND *)v5, *(struct tagTHREADINFO **)(v5 + 16));
    ThreadUnlock1(v10, v8, v9);
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v2;
}
