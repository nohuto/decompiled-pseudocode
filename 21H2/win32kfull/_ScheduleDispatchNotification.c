/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C00EB134
 * Callers:
 *     NtUserScheduleDispatchNotification @ 0x1C00EB080 (NtUserScheduleDispatchNotification.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall ScheduleDispatchNotification(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 CurrentProcessWin32Process; // rcx

  v1 = *((_QWORD *)a1 + 2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( *(_QWORD *)(v1 + 424) == CurrentProcessWin32Process )
  {
    if ( v1 == gptiCurrent
      || (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, *(_QWORD *)(v1 + 432) + 424LL) )
    {
      return (unsigned int)PostEventMessageEx(
                             (struct tagTHREADINFO *)v1,
                             *(struct tagQ **)(v1 + 432),
                             9u,
                             a1,
                             0x60u,
                             0LL,
                             0LL,
                             0LL) != 0
           ? 2
           : 0;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL, v3);
    return 0LL;
  }
}
