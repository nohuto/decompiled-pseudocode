/*
 * XREFs of NtUserEnableShellWindowManagementBehavior @ 0x1C0097750
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 */

__int64 __fastcall NtUserEnableShellWindowManagementBehavior(int a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // rbx
  int v8; // eax
  int v10; // ecx
  __int64 v11; // rcx

  EnterCrit(0LL, 0LL);
  v7 = 0LL;
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v10 = 5;
LABEL_9:
    UserSetLastError(v10);
    UserSessionSwitchLeaveCrit(v11);
    return 0LL;
  }
  if ( (a2 & 0xFFFFE00) != 0 )
  {
    v10 = 87;
    goto LABEL_9;
  }
  v8 = a2 & a1 | v6 & ~a1;
  if ( v8 && !*(_QWORD *)(v5 + 320) )
  {
    *(_DWORD *)(v5 + 328) = 0;
    UserSetLastError(5023);
  }
  else
  {
    *(_DWORD *)(v5 + 328) = v8;
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v7;
}
