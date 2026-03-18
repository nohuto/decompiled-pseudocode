/*
 * XREFs of ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x1C004A6E8
 * Callers:
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x1C013AB64 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C004C7AC (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

bool __fastcall NotifyShell::ShellHotKey(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int128 v8; // [rsp+20h] [rbp-49h]
  __int64 v9; // [rsp+40h] [rbp-29h] BYREF
  int v10; // [rsp+48h] [rbp-21h]
  _BYTE v11[4]; // [rsp+4Ch] [rbp-1Dh] BYREF
  __int128 v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+60h] [rbp-9h]

  if ( a1 )
    v9 = *a1;
  else
    v9 = 0LL;
  v10 = 13;
  memset_0(v11, 0, 0x44uLL);
  *(_QWORD *)&v8 = a3;
  *((_QWORD *)&v8 + 1) = a2;
  v13 = a4;
  v12 = v8;
  return (unsigned int)anonymous_namespace_::NotifyIAMWindowManagementEvent(&v9, 0LL) != 0;
}
