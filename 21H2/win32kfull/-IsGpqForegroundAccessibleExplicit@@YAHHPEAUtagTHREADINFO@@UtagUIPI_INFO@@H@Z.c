/*
 * XREFs of ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00F5CE8
 * Callers:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C007FB78 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C009BDD0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     CheckCursorClipAccess @ 0x1C00A8870 (CheckCursorClipAccess.c)
 *     EditionKeyEventLLHook @ 0x1C00EA4C0 (EditionKeyEventLLHook.c)
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x1C00F5CC0 (EditionIsGpqForegroundAccessibleExplicit.c)
 *     EditionHandleAltTabCancel @ 0x1C010BC10 (EditionHandleAltTabCancel.c)
 * Callees:
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00F5D50 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
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
    || (unsigned __int8)CheckAccess(&v6, gpqForeground + 424LL) )
  {
    return 1;
  }
  return v4;
}
