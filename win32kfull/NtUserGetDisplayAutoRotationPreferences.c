/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C01D2120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // r8d
  _DWORD *v6; // rdx

  EnterSharedCrit(a1, a2, a3);
  v5 = *(_DWORD *)(*((_QWORD *)PtiCurrentShared(v4) + 53) + 904LL);
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (_DWORD *)MmUserProbeAddress;
  *v6 = *v6;
  *a1 = v5;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return 1LL;
}
