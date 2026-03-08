/*
 * XREFs of xxxWaitForInputIdle @ 0x1C009604C
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1C0095F00 (NtUserWaitForInputIdle.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0095CF4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     WaitOnPseudoEvent @ 0x1C0095F60 (WaitOnPseudoEvent.c)
 *     LockProcessByClientId @ 0x1C0099860 (LockProcessByClientId.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxWaitForInputIdle(HANDLE a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  char ProcessExitProcessCalled; // al
  PVOID v7; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rbx
  int *v10; // rdi
  int v11; // eax
  __int64 *v12; // rsi
  __int64 i; // rax
  PVOID *v14; // r14
  unsigned int v15; // ebx
  __int64 j; // rax
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  PVOID Object; // [rsp+60h] [rbp+20h] BYREF

  Object = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == a1
    && gptiCurrent == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 328LL)
    || (int)LockProcessByClientId(a1, &Object, v4, v5) < 0 )
  {
    return 0xFFFFFFFFLL;
  }
  ProcessExitProcessCalled = PsGetProcessExitProcessCalled(Object);
  v7 = Object;
  if ( ProcessExitProcessCalled )
  {
LABEL_20:
    ObfDereferenceObject(v7);
    return 0xFFFFFFFFLL;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  v9 = ProcessWin32Process;
  if ( !ProcessWin32Process
    || !*(_QWORD *)ProcessWin32Process
    || (v10 = (int *)(ProcessWin32Process + 12), v11 = *(_DWORD *)(ProcessWin32Process + 12), (v11 & 0x21) != 0x20) )
  {
    UserSetLastError(1471);
    v7 = Object;
    goto LABEL_20;
  }
  v12 = (__int64 *)(v9 + 320);
  *v10 = v11 | 0x20000;
  for ( i = *(_QWORD *)(v9 + 320); i; i = *(_QWORD *)(i + 664) )
    *(_DWORD *)(i + 488) |= 0x4000u;
  PushW32ThreadLock(v9, &v18, DereferenceW32Process);
  ObfReferenceObject(*(PVOID *)v9);
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  ObfDereferenceObject(Object);
  v14 = (PVOID *)(v9 + 16);
  v15 = WaitOnPseudoEvent((PVOID *)(v9 + 16), a2);
  if ( v15 == 128 )
    v15 = xxxPollAndWaitForSingleObject(*v14, Object, a2);
  *v10 &= ~0x20000u;
  for ( j = *v12; j; j = *(_QWORD *)(j + 664) )
    *(_DWORD *)(j + 488) &= ~0x4000u;
  PopAndFreeW32ThreadLock(&v18);
  return v15;
}
