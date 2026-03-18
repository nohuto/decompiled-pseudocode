/*
 * XREFs of GetDpiSetting @ 0x1C00869D0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiSettingWithNoDefault @ 0x1C00865E0 (GetDpiSettingWithNoDefault.c)
 */

__int64 __fastcall GetDpiSetting(int a1, unsigned int *a2)
{
  *a2 = 96;
  return GetDpiSettingWithNoDefault(a1, a2);
}
