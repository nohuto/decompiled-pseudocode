/*
 * XREFs of _RegisterShellPTPListener @ 0x1C00B9BB8
 * Callers:
 *     NtUserRegisterShellPTPListener @ 0x1C00B9AE0 (NtUserRegisterShellPTPListener.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall RegisterShellPTPListener(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 && (v4 = *(_QWORD *)(v3 + 8)) != 0 )
  {
    v5 = (_QWORD *)(v4 + 232);
    if ( !a2 )
    {
      if ( *v5 == a1 )
        HMAssignmentUnlock(v5);
      return 1LL;
    }
    if ( !*v5 )
    {
      v7[0] = v5;
      v7[1] = a1;
      HMAssignmentLock(v7, 0LL);
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return 0LL;
}
