/*
 * XREFs of NtUserGetCaretPos @ 0x1C01D1190
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  _BYTE *v5; // r8
  __int64 v7; // [rsp+60h] [rbp+18h]

  EnterSharedCrit(a1, a2, a3);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_BYTE *)MmUserProbeAddress;
  *v5 = *v5;
  v5[7] = v5[7];
  v7 = *((_QWORD *)PtiCurrentShared(v4) + 54);
  *a1 = *(_DWORD *)(v7 + 324);
  a1[1] = *(_DWORD *)(v7 + 328);
  UserSessionSwitchLeaveCrit(v7);
  return 1LL;
}
