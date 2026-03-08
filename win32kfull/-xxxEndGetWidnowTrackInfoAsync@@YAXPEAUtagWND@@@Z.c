/*
 * XREFs of ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C00EB7B0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C00EB814 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
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
