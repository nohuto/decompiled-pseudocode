/*
 * XREFs of NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01F9560
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C003C118 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferencesByProcessId(int a1, _DWORD *a2, _DWORD *a3)
{
  void *v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v5 = (void *)a1;
  v6 = 0;
  Object = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = *(_DWORD *)(ProcessWin32Process + 920);
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = 0;
      v6 = 1;
    }
    else
    {
      UserSetLastError(5LL, v11, v12);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL, v7, v8);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
