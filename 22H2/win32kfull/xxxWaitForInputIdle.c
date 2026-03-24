/*
 * XREFs of xxxWaitForInputIdle @ 0x1C012C7C0
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1C012C760 (NtUserWaitForInputIdle.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C003C078 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C012C934 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     WaitOnPseudoEvent @ 0x1C012CB74 (WaitOnPseudoEvent.c)
 */

unsigned int __fastcall xxxWaitForInputIdle(HANDLE a1, unsigned int a2, int a3)
{
  char ProcessExitProcessCalled; // al
  PVOID v6; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // eax
  __int64 i; // rax
  unsigned int v13; // edi
  __int64 j; // rax
  unsigned int result; // eax
  __int64 *v16; // rbx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h]
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF

  Object = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( !a3 )
  {
    if ( (PsGetThreadProcessId((PETHREAD)*gptiCurrent) != a1
       || gptiCurrent != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 328LL))
      && (int)LockProcessByClientId(a1, (PEPROCESS *)&Object) >= 0 )
    {
      ProcessExitProcessCalled = PsGetProcessExitProcessCalled(Object);
      v6 = Object;
      if ( !ProcessExitProcessCalled )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Object);
        v10 = ProcessWin32Process;
        if ( ProcessWin32Process )
        {
          v11 = *(_DWORD *)(ProcessWin32Process + 12);
          if ( (v11 & 0x21) == 0x20 )
          {
            *(_DWORD *)(v10 + 12) = v11 | 0x20000;
            for ( i = *(_QWORD *)(v10 + 320); i; i = *(_QWORD *)(i + 664) )
              *(_DWORD *)(i + 488) |= 0x4000u;
            PushW32ThreadLock(v10, &v17, (__int64)DereferenceW32Process);
            ObfReferenceObject(*(PVOID *)v10);
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
            ObfDereferenceObject(Object);
            v13 = WaitOnPseudoEvent(v10 + 16, a2);
            if ( v13 == 128 )
              v13 = xxxPollAndWaitForSingleObject(*(PVOID *)(v10 + 16), Object, a2);
            *(_DWORD *)(v10 + 12) &= ~0x20000u;
            for ( j = *(_QWORD *)(v10 + 320); j; j = *(_QWORD *)(j + 664) )
              *(_DWORD *)(j + 488) &= ~0x4000u;
            PopAndFreeW32ThreadLock((__int64)&v17);
            return v13;
          }
        }
        UserSetLastError(1471LL, v8, v9);
        v6 = Object;
      }
      ObfDereferenceObject(v6);
    }
    return -1;
  }
  v16 = (__int64 *)gpwtiFirst;
  if ( !gpwtiFirst )
    return -1;
  do
  {
    if ( *((_DWORD *)v16 + 6) == (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent) && (HANDLE)v16[2] == a1 )
      break;
    v16 = (__int64 *)*v16;
  }
  while ( v16 );
  if ( !v16 )
    return -1;
  result = WaitOnPseudoEvent(v16 + 4, a2);
  if ( result == 128 )
    return xxxPollAndWaitForSingleObject((PVOID)v16[4], 0LL, a2);
  return result;
}
