/*
 * XREFs of RegisterPerUserKeyboardIndicators @ 0x1C011D258
 * Callers:
 *     PrepareForLogoff @ 0x1C011D19C (PrepareForLogoff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterPerUserKeyboardIndicators(__int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)L"0";
  LOWORD(v2) = (gafAsyncKeyState[36] & 2) + a0[0];
  return FastWriteProfileStringW(a1, 13LL, L"InitialKeyboardIndicators", &v2);
}
