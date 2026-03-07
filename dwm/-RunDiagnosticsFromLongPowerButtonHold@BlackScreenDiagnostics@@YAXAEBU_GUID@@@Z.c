void __fastcall BlackScreenDiagnostics::RunDiagnosticsFromLongPowerButtonHold(
        BlackScreenDiagnostics *this,
        const struct _GUID *a2)
{
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(1u, 1u, (const unsigned __int16 *)this);
}
