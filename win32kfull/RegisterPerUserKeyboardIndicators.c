__int64 __fastcall RegisterPerUserKeyboardIndicators(__int64 a1)
{
  __int64 v2; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_DWORD *)L"0";
  v2 = SGDGetUserSessionState(a1);
  LOWORD(v4) = (*(_BYTE *)(v2 + 14028) & 2) + v4;
  return FastWriteProfileStringW(a1, 13LL, L"InitialKeyboardIndicators", &v4);
}
