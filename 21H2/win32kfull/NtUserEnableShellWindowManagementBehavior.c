/*
 * XREFs of NtUserEnableShellWindowManagementBehavior @ 0x1C010DA80
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C010DB58 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ?Feature_VTFrame__private_IsEnabledPreCheck@@YAHXZ @ 0x1C015BF60 (-Feature_VTFrame__private_IsEnabledPreCheck@@YAHXZ.c)
 */

__int64 __fastcall NtUserEnableShellWindowManagementBehavior(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // zf

  EnterCrit(0LL, 0LL);
  v8 = 0LL;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v9 = 5LL;
LABEL_8:
    UserSetLastError(v9, v4);
    goto LABEL_13;
  }
  if ( (a2 & 0x48FFFE00) != 0 )
  {
    v9 = 87LL;
    goto LABEL_8;
  }
  v10 = a2 & a1 | v7 & ~a1;
  if ( v10 && !*(_QWORD *)(v6 + 320) )
  {
    *(_DWORD *)(v6 + 328) = 0;
    v9 = 5023LL;
    goto LABEL_8;
  }
  v11 = g_defaultFrameStyle == -1;
  *(_DWORD *)(v6 + 328) = v10;
  if ( v11 && ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x4000000, v4) )
  {
    Feature_VTFrame__private_IsEnabledPreCheck();
    g_defaultFrameStyle = 0;
  }
  v8 = 1LL;
LABEL_13:
  UserSessionSwitchLeaveCrit(v5);
  return v8;
}
