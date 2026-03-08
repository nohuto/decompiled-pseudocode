/*
 * XREFs of NtUserGetCursor @ 0x1C0147630
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserGetCursor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterSharedCrit(a1, a2, a3);
  v4 = 0LL;
  v5 = *((_QWORD *)PtiCurrentShared(v3) + 54);
  if ( *(_QWORD *)(v5 + 384) )
  {
    v5 = *((_QWORD *)PtiCurrentShared(v5) + 54);
    v4 = **(_QWORD **)(v5 + 384);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
