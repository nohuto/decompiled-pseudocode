/*
 * XREFs of ?GetFrontBufferColorMap@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ @ 0x14000CD6C
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D134 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x14000CB84 (BlackScreenDiagnostics--GetDwmFrontBufferBitsColor.c)
 */

const unsigned __int16 *__fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::GetFrontBufferColorMap(
        BlackScreenDiagnostics::CBlackScreenDiagnosticReport *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v5 = HIDWORD(this);
  v4 = 0;
  BlackScreenDiagnostics::GetDwmFrontBufferBitsColor((__int64)this, a2, a3, &v4);
  switch ( v4 )
  {
    case 1:
      return L"BlackBits";
    case 2:
      return L"ColorBits";
    case 3:
      return L"CaptureBitsFailure";
    case 4:
      return L"FileMappingFailure";
    case 5:
      return L"CheckBlackFailure";
  }
  return L"Unknown";
}
