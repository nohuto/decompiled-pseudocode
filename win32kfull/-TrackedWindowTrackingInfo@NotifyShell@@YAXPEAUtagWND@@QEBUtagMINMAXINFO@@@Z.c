/*
 * XREFs of ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C00EB814
 * Callers:
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C00EB7B0 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C009B94C (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C00EB8DC (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall NotifyShell::TrackedWindowTrackingInfo(
        NotifyShell *this,
        struct tagWND *a2,
        const struct tagMINMAXINFO *const a3)
{
  __int64 v5; // [rsp+20h] [rbp-19h] BYREF
  __int64 v6; // [rsp+28h] [rbp-11h] BYREF
  __int64 v7; // [rsp+30h] [rbp-9h] BYREF
  int v8; // [rsp+38h] [rbp-1h]
  __int64 v9; // [rsp+40h] [rbp+7h]
  __int64 v10; // [rsp+48h] [rbp+Fh]
  __int16 v11; // [rsp+50h] [rbp+17h]

  memset_0(&v7, 0, 0x50uLL);
  v5 = *((_QWORD *)a2 + 4);
  v6 = *((_QWORD *)a2 + 3);
  v7 = *(_QWORD *)this;
  v8 = 1;
  ShellWindowManagement::TransformWindowTrackInfo(this, &v5, &v6, 0LL);
  v10 = v5;
  v9 = v6;
  v11 = *(_WORD *)(*((_QWORD *)this + 5) + 284LL);
  anonymous_namespace_::NotifyIAMWindowManagementEvent(&v7, 0);
}
