/*
 * XREFs of NtUserGetCaretPos @ 0x1C01D0140
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  _BYTE *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+60h] [rbp+18h]

  EnterSharedCrit(a1, a2, a3);
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[7] = v6[7];
  v11 = *((_QWORD *)PtiCurrentShared(v4, MmUserProbeAddress, (__int64)v6, v5) + 54);
  *a1 = *(_DWORD *)(v11 + 324);
  a1[1] = *(_DWORD *)(v11 + 328);
  UserSessionSwitchLeaveCrit(v11, v7, v8, v9);
  return 1LL;
}
