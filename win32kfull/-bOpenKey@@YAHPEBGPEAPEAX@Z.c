/*
 * XREFs of ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00BA544
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00BA144 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     bInitStockFontsInternal @ 0x1C03B63A8 (bInitStockFontsInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C03B6C5C (hfontInitDefaultGuiFont.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOpenKey(PCWSTR SourceString, PHANDLE KeyHandle)
{
  struct _UNICODE_STRING v4; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  v4 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  RtlInitUnicodeString(&v4, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v4;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, 0, &ObjectAttributes) >= 0;
}
