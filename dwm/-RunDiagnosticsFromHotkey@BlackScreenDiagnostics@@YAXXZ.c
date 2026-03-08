/*
 * XREFs of ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000D5D8
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400027D4 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z @ 0x140007010 (-OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D484 (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x14000D984 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

void __fastcall BlackScreenDiagnostics::RunDiagnosticsFromHotkey(BlackScreenDiagnostics *this)
{
  _BYTE v1[8]; // [rsp+20h] [rbp-28h] BYREF
  UUID Uuid; // [rsp+28h] [rbp-20h] BYREF

  Beep(0x1EEu, 0xC8u);
  Uuid = 0LL;
  UuidCreate(&Uuid);
  if ( *(_QWORD *)std::chrono::steady_clock::now(v1) - qword_140016D40 < 30000000000LL )
  {
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(0, 4u, (const unsigned __int16 *)&Uuid);
  }
  else
  {
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(0, 7u, (const unsigned __int16 *)&Uuid);
    qword_140016D40 = *(_QWORD *)std::chrono::steady_clock::now(v1);
  }
}
