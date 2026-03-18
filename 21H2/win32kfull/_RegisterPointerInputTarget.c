/*
 * XREFs of _RegisterPointerInputTarget @ 0x1C01ED194
 * Callers:
 *     NtUserRegisterPointerInputTarget @ 0x1C01FBA20 (NtUserRegisterPointerInputTarget.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1C005FD1C (UpdatePointerRedirIsAlive.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall RegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 || (v8 = *(_QWORD *)(v4 + 8)) == 0 )
  {
    v11 = 87LL;
    goto LABEL_14;
  }
  UpdatePointerRedirIsAlive(v8);
  a2 = 216LL;
  if ( a3 != 2 )
    a2 = 224LL;
  v9 = (__int64 *)(a2 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
  v10 = *v9;
  if ( !a4 )
  {
    if ( v10 == a1 )
      HMAssignmentUnlock(v9);
    return 1LL;
  }
  if ( !v10 )
  {
    v13[0] = a2 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
    v13[1] = a1;
    HMAssignmentLock(v13, 0LL);
    return 1LL;
  }
  if ( v10 == a1 )
    return 1LL;
  v11 = 5LL;
LABEL_14:
  UserSetLastError(v11, a2);
  return 0LL;
}
