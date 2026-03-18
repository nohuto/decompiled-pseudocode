/*
 * XREFs of NtUserGetUnpredictedMessagePos @ 0x1C01D4140
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserGetUnpredictedMessagePos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  EnterSharedCrit(a1, a2, a3);
  v7 = PtiCurrentShared(v4, v3, v5, v6);
  v8 = *((unsigned __int16 *)v7 + 682);
  v9 = v8 | (*((unsigned __int16 *)v7 + 684) << 16);
  UserSessionSwitchLeaveCrit(v8, v10, v11, v12);
  return v9;
}
