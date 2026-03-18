/*
 * XREFs of ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EBFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C01EC73C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C01EC7A0 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsConvOrNonConvProc(struct tagKE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13940) && !(unsigned int)NlsTestKeyStateToggle(0x15u) )
    NlsKbdSendIMEProc(0LL, 0LL);
  return 1LL;
}
