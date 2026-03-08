/*
 * XREFs of ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C004F320
 * Callers:
 *     imp_WdfDriverRetrieveVersionString @ 0x1C0037AB0 (imp_WdfDriverRetrieveVersionString.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C004B470 (imp_WdfRegistryQueryMultiString.c)
 * Callees:
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

int __fastcall FxString::Assign(FxString *this, const wchar_t *SourceString)
{
  _UNICODE_STRING string; // [rsp+20h] [rbp-18h] BYREF

  string = 0LL;
  RtlInitUnicodeString(&string, SourceString);
  return FxDuplicateUnicodeString(this->m_Globals, &string, &this->m_UnicodeString);
}
