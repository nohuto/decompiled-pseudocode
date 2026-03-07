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
