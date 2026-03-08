/*
 * XREFs of ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00BAA08
 * Callers:
 *     bInitStockFontsInternal @ 0x1C03B63A8 (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C03B6A80 (bInitOneStockFont.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03B6ADC (InitializeDefaultFamilyFonts.c)
 *     hfontInitDefaultGuiFont @ 0x1C03B6C5C (hfontInitDefaultGuiFont.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bQueryValueKey(PCWSTR SourceString, HANDLE KeyHandle, PVOID KeyValueInformation, ULONG Length)
{
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-20h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, SourceString);
  return ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, Length, &ResultLength) >= 0;
}
