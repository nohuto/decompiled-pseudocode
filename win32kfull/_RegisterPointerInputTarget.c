/*
 * XREFs of _RegisterPointerInputTarget @ 0x1C01C8158
 * Callers:
 *     NtUserRegisterPointerInputTarget @ 0x1C01DA7A0 (NtUserRegisterPointerInputTarget.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1C0020078 (UpdatePointerRedirIsAlive.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall RegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD v23[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 || (v8 = *(_QWORD *)(v4 + 8)) == 0 )
  {
    v12 = 87;
    goto LABEL_18;
  }
  UpdatePointerRedirIsAlive(v8);
  v9 = 216LL;
  if ( a3 != 2 )
    v9 = 224LL;
  v10 = (__int64 *)(v9 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
  v11 = *v10;
  if ( !a4 )
  {
    if ( v11 == a1 )
    {
      HMAssignmentUnlock(v10);
      v20 = SGDGetUserSessionState(v19);
      if ( a3 == 2 )
      {
        *(_DWORD *)(v20 + 528) = 0;
        *(_DWORD *)(SGDGetUserSessionState(v21) + 532) = 0;
      }
      else
      {
        *(_DWORD *)(v20 + 536) = 0;
        *(_DWORD *)(SGDGetUserSessionState(v21) + 540) = 0;
      }
    }
    return 1LL;
  }
  if ( !v11 )
  {
    v23[0] = v9 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
    v23[1] = a1;
    HMAssignmentLock(v23, 0LL);
    v14 = SGDGetUserSessionState(v13);
    if ( a3 == 2 )
    {
      *(_DWORD *)(v14 + 528) = 1;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
      v16 = *(_DWORD *)(v15 + 56);
      *(_DWORD *)(SGDGetUserSessionState(v15) + 532) = v16;
    }
    else
    {
      *(_DWORD *)(v14 + 536) = 1;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
      v18 = *(_DWORD *)(v17 + 56);
      *(_DWORD *)(SGDGetUserSessionState(v17) + 540) = v18;
    }
    return 1LL;
  }
  if ( v11 == a1 )
    return 1LL;
  v12 = 5;
LABEL_18:
  UserSetLastError(v12);
  return 0LL;
}
