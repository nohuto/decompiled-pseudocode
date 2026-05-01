/*
 * XREFs of ?SetAppChromePolicy@ApplicationViewOperation@@UEAAJW4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x18008D470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetAppChromePolicy(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 124) = a2;
  return 0LL;
}
