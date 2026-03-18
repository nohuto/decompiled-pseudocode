/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C01D10D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rdx

  EnterSharedCrit(a1, a2, a3);
  v8 = *(unsigned int *)(*((_QWORD *)PtiCurrentShared(v5, v4, v6, v7) + 53) + 928LL);
  v10 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v10 = *v10;
  *a1 = v8;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress, v10, v8, v9);
  return 1LL;
}
