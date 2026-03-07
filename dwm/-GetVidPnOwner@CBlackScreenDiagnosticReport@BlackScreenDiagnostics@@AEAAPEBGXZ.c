const unsigned __int16 *__fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::GetVidPnOwner(
        BlackScreenDiagnostics::CBlackScreenDiagnosticReport *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(this);
  v2 = 0;
  BlackScreenDiagnostics::GetVidPnOwnership(&v2);
  switch ( v2 )
  {
    case 1:
      return L"DWM";
    case 2:
      return L"NotDWM";
    case 3:
      return L"None";
    case 4:
      return L"NoVidPnPresent";
    case 5:
      return L"QueryDisplayConfigFailure";
    case 6:
      return L"OpenAdaptorFailure";
    case 7:
      return L"CheckVidPnExclusiveOwnershipFailure";
  }
  return L"Unknown";
}
