/*
 * XREFs of ??4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z @ 0x180047748
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@@Z @ 0x180114D88 (-Get@-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Int.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x180114E60 (-Get@-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEA.c)
 * Callees:
 *     ??4?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180111580 (--4-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CMarshaledInterface::operator=(__int64 a1)
{
  Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::operator=();
  return a1;
}
