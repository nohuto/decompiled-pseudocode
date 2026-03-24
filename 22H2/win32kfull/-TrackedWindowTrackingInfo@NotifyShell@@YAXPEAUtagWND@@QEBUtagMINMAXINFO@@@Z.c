/*
 * XREFs of ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C011C6B0
 * Callers:
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C011C64C (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C003E18C (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C011C764 (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall NotifyShell::TrackedWindowTrackingInfo(
        NotifyShell *this,
        struct tagWND *a2,
        const struct tagMINMAXINFO *const a3)
{
  int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+28h] [rbp-48h] BYREF
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  __int128 v8; // [rsp+40h] [rbp-30h]
  __int128 v9; // [rsp+50h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-10h]

  v10 = 0LL;
  v5 = *((_QWORD *)a2 + 4);
  LODWORD(v6) = *((_DWORD *)a2 + 6);
  v4 = *((_DWORD *)a2 + 7);
  v7 = 0LL;
  HIDWORD(v6) = v4;
  *(_QWORD *)&v7 = *(_QWORD *)this;
  v8 = 0LL;
  DWORD2(v7) = 1;
  v9 = 0LL;
  ShellWindowManagement::TransformWindowTrackInfo(this, &v5, &v6, 0LL);
  *((_QWORD *)&v8 + 1) = v5;
  *(_QWORD *)&v8 = v6;
  LOWORD(v9) = *(_WORD *)(*((_QWORD *)this + 5) + 284LL);
  anonymous_namespace_::NotifyIAMWindowManagementEvent((int)&v7);
}
