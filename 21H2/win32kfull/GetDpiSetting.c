/*
 * XREFs of GetDpiSetting @ 0x1C00C8D60
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiSettingWithNoDefault @ 0x1C00C8D80 (GetDpiSettingWithNoDefault.c)
 */

__int64 __fastcall GetDpiSetting(__int64 a1, _DWORD *a2)
{
  *a2 = 96;
  return GetDpiSettingWithNoDefault();
}
