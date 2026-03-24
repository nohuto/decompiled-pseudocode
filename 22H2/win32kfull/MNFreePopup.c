/*
 * XREFs of MNFreePopup @ 0x1C02217B8
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C0221530 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C0221C40 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C02224D0 (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235708 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UnlockPopupMenu @ 0x1C0236A1C (UnlockPopupMenu.c)
 */

_QWORD *__fastcall MNFreePopup(void *const **a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v12; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  v2 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)**a1 + 2));
  v3 = v2;
  if ( v2 && **a1 != gpopupMenu )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    if ( *(_QWORD *)(v2 + 16) && *(void *const *)(v2 + 16) != **a1 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 249);
    *(void **)(v3 + 16) = **a1;
  }
  HMAssignmentUnlock((char *)**a1 + 24);
  HMAssignmentUnlock((char *)**a1 + 32);
  UnlockPopupMenu(a1, (char *)**a1 + 40);
  UnlockPopupMenu(a1, (char *)**a1 + 48);
  HMAssignmentUnlock((char *)**a1 + 8);
  HMAssignmentUnlock((char *)**a1 + 56);
  HMAssignmentUnlock((char *)**a1 + 16);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v6)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v12),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  if ( *a1 != (void *const *)gSmartObjNullRef && !--*((_DWORD *)*a1 + 2) )
  {
    if ( *((_BYTE *)*a1 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
  }
  result = *(_QWORD **)(v5 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v5 + 1472) = result;
  }
  return result;
}
