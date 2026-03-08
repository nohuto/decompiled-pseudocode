/*
 * XREFs of NtUserIsResizeLayoutSynchronizationEnabled @ 0x1C01D6CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserIsResizeLayoutSynchronizationEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  struct tagTHREADINFO *v8; // rax
  unsigned __int8 v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v8 = PtiCurrentShared(v5);
      *(_QWORD *)&v14 = *((_QWORD *)v8 + 52);
      *((_QWORD *)v8 + 52) = &v14;
      *((_QWORD *)&v14 + 1) = v7;
      HMLockObject(v7);
      v9 = *(_BYTE *)(*(_QWORD *)(v7 + 40) + 25LL);
      ThreadUnlock1(v11, v10, v12);
      v6 = v9 & 0x80;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
