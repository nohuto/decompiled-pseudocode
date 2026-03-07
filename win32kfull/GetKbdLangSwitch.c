__int64 __fastcall GetKbdLangSwitch(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // rcx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  DWORD DefaultLocaleId; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  DefaultLocaleId = 0;
  FastGetProfileIntW(a1, 25LL, L"Hotkey", 1LL, &v4, 0);
  *(_DWORD *)(SGDGetUserSessionState(v1) + 13936) = 0;
  if ( v4 == 4 && ZwQueryDefaultLocale(0, &DefaultLocaleId) >= 0 )
  {
    v3 = (unsigned __int16)DefaultLocaleId;
    if ( (DefaultLocaleId & 0x3FF) == 0x1E )
    {
      LOWORD(v3) = DefaultLocaleId & 0x3FF;
      *(_DWORD *)(SGDGetUserSessionState(v3) + 13936) = 1;
    }
  }
  return 1LL;
}
