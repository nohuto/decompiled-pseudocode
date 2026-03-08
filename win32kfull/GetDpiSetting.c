/*
 * XREFs of GetDpiSetting @ 0x1C00B9960
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiSettingWithNoDefault @ 0x1C00B9980 (GetDpiSettingWithNoDefault.c)
 */

__int64 __fastcall GetDpiSetting(__int64 a1, _DWORD *a2)
{
  *a2 = 96;
  return GetDpiSettingWithNoDefault();
}
