/*
 * XREFs of ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C00BA8E8
 * Callers:
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C00BA884 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00A9418 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C00BA9AC (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall NotifyShell::TrackedWindowTrackingInfo(
        NotifyShell *this,
        struct tagWND *a2,
        const struct tagMINMAXINFO *const a3)
{
  __int64 v5; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v6[11]; // [rsp+28h] [rbp-11h] BYREF

  memset(&v6[1], 0, 0x50uLL);
  v5 = *((_QWORD *)a2 + 4);
  v6[0] = *((_QWORD *)a2 + 3);
  v6[1] = *(_QWORD *)this;
  LODWORD(v6[2]) = 1;
  ShellWindowManagement::TransformWindowTrackInfo(this, &v5, v6, 0LL);
  v6[4] = v5;
  v6[3] = v6[0];
  LOWORD(v6[5]) = *(_WORD *)(*((_QWORD *)this + 5) + 284LL);
  anonymous_namespace_::NotifyIAMWindowManagementEvent();
}
