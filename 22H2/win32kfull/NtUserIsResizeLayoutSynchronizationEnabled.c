/*
 * XREFs of NtUserIsResizeLayoutSynchronizationEnabled @ 0x1C01D5C90
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserIsResizeLayoutSynchronizationEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  struct tagTHREADINFO *v11; // rax
  unsigned __int8 v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v11 = PtiCurrentShared(v6, v5, v7, v8);
      *(_QWORD *)&v17 = *((_QWORD *)v11 + 52);
      *((_QWORD *)v11 + 52) = &v17;
      *((_QWORD *)&v17 + 1) = v10;
      HMLockObject(v10);
      v12 = *(_BYTE *)(*(_QWORD *)(v10 + 40) + 25LL);
      ThreadUnlock1(v14, v13, v15);
      v9 = v12 & 0x80;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
