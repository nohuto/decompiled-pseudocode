/*
 * XREFs of SetDeepDelayableVisRITTimer @ 0x1C0074EF0
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0074D40 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 */

__int64 __fastcall SetDeepDelayableVisRITTimer(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = 864000000;
  if ( (gdwRITdaemonLockState & 1) == 0 )
    v2 = a2;
  return InternalSetTimer(
           0,
           WPP_MAIN_CB.Dpc.DeferredContext,
           v2,
           (unsigned int)zzzAnimateCursor,
           (gdwRITdaemonLockState & 1) != 0 ? 0x36EE80 : 0,
           20);
}
