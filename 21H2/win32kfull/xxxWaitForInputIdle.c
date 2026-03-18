/*
 * XREFs of xxxWaitForInputIdle @ 0x1C010E54C
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1C010E4F0 (NtUserWaitForInputIdle.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010E6C0 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     WaitOnPseudoEvent @ 0x1C010E8E8 (WaitOnPseudoEvent.c)
 */

unsigned int __fastcall xxxWaitForInputIdle(HANDLE a1, unsigned int a2, int a3)
{
  char ProcessExitProcessCalled; // al
  PVOID v6; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  __int64 i; // rax
  unsigned int v12; // edi
  __int64 j; // rax
  unsigned int result; // eax
  __int64 *v15; // rbx
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF

  Object = 0LL;
  v17 = 0LL;
  v16 = 0LL;
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
        v9 = ProcessWin32Process;
        if ( ProcessWin32Process )
        {
          v10 = *(_DWORD *)(ProcessWin32Process + 12);
          if ( (v10 & 0x21) == 0x20 )
          {
            *(_DWORD *)(v9 + 12) = v10 | 0x20000;
            for ( i = *(_QWORD *)(v9 + 320); i; i = *(_QWORD *)(i + 664) )
              *(_DWORD *)(i + 488) |= 0x4000u;
            PushW32ThreadLock(v9, &v16, (__int64)DereferenceW32Process);
            ObfReferenceObject(*(PVOID *)v9);
            _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
            ObfDereferenceObject(Object);
            v12 = WaitOnPseudoEvent(v9 + 16, a2);
            if ( v12 == 128 )
              v12 = xxxPollAndWaitForSingleObject(*(PVOID *)(v9 + 16), Object, a2);
            *(_DWORD *)(v9 + 12) &= ~0x20000u;
            for ( j = *(_QWORD *)(v9 + 320); j; j = *(_QWORD *)(j + 664) )
              *(_DWORD *)(j + 488) &= ~0x4000u;
            PopAndFreeW32ThreadLock((__int64)&v16);
            return v12;
          }
        }
        UserSetLastError(1471LL, v8);
        v6 = Object;
      }
      ObfDereferenceObject(v6);
    }
    return -1;
  }
  v15 = (__int64 *)gpwtiFirst;
  if ( !gpwtiFirst )
    return -1;
  do
  {
    if ( *((_DWORD *)v15 + 6) == (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent) && (HANDLE)v15[2] == a1 )
      break;
    v15 = (__int64 *)*v15;
  }
  while ( v15 );
  if ( !v15 )
    return -1;
  result = WaitOnPseudoEvent(v15 + 4, a2);
  if ( result == 128 )
    return xxxPollAndWaitForSingleObject((PVOID)v15[4], 0LL, a2);
  return result;
}
