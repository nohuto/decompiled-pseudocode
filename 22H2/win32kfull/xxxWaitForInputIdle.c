/*
 * XREFs of xxxWaitForInputIdle @ 0x1C0051524
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1C0051790 (NtUserWaitForInputIdle.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C004FEE0 (LockProcessByClientId.c)
 *     WaitOnPseudoEvent @ 0x1C00516A4 (WaitOnPseudoEvent.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00517F0 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall xxxWaitForInputIdle(HANDLE a1, unsigned int a2)
{
  char ProcessExitProcessCalled; // al
  PVOID v5; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rbx
  int *v8; // rdi
  int v9; // eax
  __int64 *v10; // rsi
  __int64 i; // rax
  PVOID *v12; // r14
  unsigned int v13; // ebx
  __int64 j; // rax
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  PVOID Object; // [rsp+60h] [rbp+20h] BYREF

  Object = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == a1
    && gptiCurrent == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 328LL)
    || (int)LockProcessByClientId(a1, (PEPROCESS *)&Object) < 0 )
  {
    return 0xFFFFFFFFLL;
  }
  ProcessExitProcessCalled = PsGetProcessExitProcessCalled(Object);
  v5 = Object;
  if ( ProcessExitProcessCalled )
  {
LABEL_20:
    ObfDereferenceObject(v5);
    return 0xFFFFFFFFLL;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  v7 = ProcessWin32Process;
  if ( !ProcessWin32Process
    || !*(_QWORD *)ProcessWin32Process
    || (v8 = (int *)(ProcessWin32Process + 12), v9 = *(_DWORD *)(ProcessWin32Process + 12), (v9 & 0x21) != 0x20) )
  {
    UserSetLastError(1471LL);
    v5 = Object;
    goto LABEL_20;
  }
  v10 = (__int64 *)(v7 + 320);
  *v8 = v9 | 0x20000;
  for ( i = *(_QWORD *)(v7 + 320); i; i = *(_QWORD *)(i + 664) )
    *(_DWORD *)(i + 488) |= 0x4000u;
  PushW32ThreadLock(v7, &v16, DereferenceW32Process);
  ObfReferenceObject(*(PVOID *)v7);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  ObfDereferenceObject(Object);
  v12 = (PVOID *)(v7 + 16);
  v13 = WaitOnPseudoEvent(v7 + 16, a2);
  if ( v13 == 128 )
    v13 = xxxPollAndWaitForSingleObject(*v12, Object, a2);
  *v8 &= ~0x20000u;
  for ( j = *v10; j; j = *(_QWORD *)(j + 664) )
    *(_DWORD *)(j + 488) &= ~0x4000u;
  PopAndFreeW32ThreadLock(&v16);
  return v13;
}
