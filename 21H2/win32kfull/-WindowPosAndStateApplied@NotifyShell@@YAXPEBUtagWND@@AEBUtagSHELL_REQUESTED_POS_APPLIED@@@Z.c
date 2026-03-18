/*
 * XREFs of ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C0236EBC
 * Callers:
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1C0236640 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00A9418 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C0236BC0 (-ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLI.c)
 */

void __fastcall NotifyShell::WindowPosAndStateApplied(
        NotifyShell *this,
        const struct tagWND *a2,
        const struct tagSHELL_REQUESTED_POS_APPLIED *a3)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  _DWORD v8[17]; // [rsp+2Ch] [rbp-5Ch] BYREF

  memset(v8, 0, sizeof(v8));
  v5 = *(_OWORD *)a2;
  v6 = *((_OWORD *)a2 + 1);
  v8[15] = *((_DWORD *)a2 + 14);
  *(_OWORD *)&v8[1] = v5;
  v7 = *((_OWORD *)a2 + 2);
  *(_OWORD *)&v8[5] = v6;
  *(_QWORD *)&v6 = *((_QWORD *)a2 + 6);
  *(_OWORD *)&v8[9] = v7;
  *(_QWORD *)&v8[13] = v6;
  InputTraceLogging::Win32k::ShellWindowPosApplied(this, a2);
  anonymous_namespace_::NotifyIAMWindowManagementEvent();
}
