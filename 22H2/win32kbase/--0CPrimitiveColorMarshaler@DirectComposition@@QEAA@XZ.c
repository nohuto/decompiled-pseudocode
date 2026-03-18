/*
 * XREFs of ??0CPrimitiveColorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B6F8
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C0092E6C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CPrimitiveColorMarshaler *__fastcall DirectComposition::CPrimitiveColorMarshaler::CPrimitiveColorMarshaler(
        DirectComposition::CPrimitiveColorMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 128LL);
  *(_QWORD *)this = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
  return this;
}
