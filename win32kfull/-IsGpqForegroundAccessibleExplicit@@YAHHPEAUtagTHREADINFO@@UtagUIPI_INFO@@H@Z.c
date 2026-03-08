/*
 * XREFs of ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00DCF88
 * Callers:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C00174F8 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     CheckCursorClipAccess @ 0x1C0022250 (CheckCursorClipAccess.c)
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x1C00DCF60 (EditionIsGpqForegroundAccessibleExplicit.c)
 *     EditionKeyEventLLHook @ 0x1C00E83C0 (EditionKeyEventLLHook.c)
 *     EditionHandleAltTabCancel @ 0x1C00EC610 (EditionHandleAltTabCancel.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A9CBC (-zzzSetCursorPos@@YA_NHH@Z.c)
 * Callees:
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00DCFF0 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
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
    || (unsigned __int8)CheckAccess(&v6, gpqForeground + 432LL) )
  {
    return 1;
  }
  return v4;
}
