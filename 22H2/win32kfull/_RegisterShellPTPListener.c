/*
 * XREFs of _RegisterShellPTPListener @ 0x1C01328A8
 * Callers:
 *     NtUserRegisterShellPTPListener @ 0x1C01327E0 (NtUserRegisterShellPTPListener.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall RegisterShellPTPListener(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 8)) != 0 )
  {
    v6 = (__int64 *)(v5 + 232);
    v7 = *v6;
    if ( !(_DWORD)a2 )
    {
      if ( v7 == a1 )
        HMAssignmentUnlock(v6);
      return 1LL;
    }
    if ( !v7 )
    {
      v9[0] = v6;
      v9[1] = a1;
      HMAssignmentLock(v9);
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(87LL, a2, a3);
  }
  return 0LL;
}
