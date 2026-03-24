/*
 * XREFs of ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C010FD48
 * Callers:
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C0013324 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00201A0 (EditionKeyEventLLHook.c)
 *     CheckCursorClipAccess @ 0x1C003DC40 (CheckCursorClipAccess.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C01037D0 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x1C010FD20 (EditionIsGpqForegroundAccessibleExplicit.c)
 *     EditionHandleAltTabCancel @ 0x1C0120700 (EditionHandleAltTabCancel.c)
 * Callees:
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C010FDB0 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleExplicit(int a1, const struct tagTHREADINFO *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v4 = 0;
  if ( !a1
    || !gpqForeground
    || a4
    || (unsigned int)IsForegroundShellFrameQueueAccessible(a2)
    || (unsigned __int8)CheckAccess(&v6, gpqForeground + 428LL) )
  {
    return 1;
  }
  return v4;
}
