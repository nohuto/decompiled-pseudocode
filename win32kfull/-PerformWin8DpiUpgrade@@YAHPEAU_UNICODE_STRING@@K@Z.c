/*
 * XREFs of ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C01BBF54
 * Callers:
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00B7B4C (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 * Callees:
 *     GetDpiSettingWithNoDefault @ 0x1C00B9980 (GetDpiSettingWithNoDefault.c)
 */

__int64 __fastcall PerformWin8DpiUpgrade(struct _UNICODE_STRING *a1, int a2)
{
  unsigned int v2; // ebx
  BOOL v6; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v6 = 0;
  if ( a2 )
  {
    v7 = 0;
    GetDpiSettingWithNoDefault(1, &v7);
    v6 = a2 != v7;
  }
  FastWriteProfileValue(a1, 4LL, L"Win8DpiScaling", 4LL, &v6, 4);
  LOBYTE(v2) = v6;
  return v2;
}
