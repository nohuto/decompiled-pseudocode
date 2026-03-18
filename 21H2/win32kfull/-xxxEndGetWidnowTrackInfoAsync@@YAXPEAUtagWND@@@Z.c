/*
 * XREFs of ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C00BA884
 * Callers:
 *     xxxProcessAsyncSendMessage @ 0x1C005C6C8 (xxxProcessAsyncSendMessage.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C00BA8E8 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall xxxEndGetWidnowTrackInfoAsync(struct tagWND *a1)
{
  const struct tagMINMAXINFO *v2; // r8
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  memset(v3, 0, sizeof(v3));
  xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v3, 0LL);
  NotifyShell::TrackedWindowTrackingInfo(a1, (struct tagWND *)v3, v2);
}
