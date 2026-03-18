/*
 * XREFs of ??0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B524
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C0092E6C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CHolographicInteropTextureMarshaler *__fastcall DirectComposition::CHolographicInteropTextureMarshaler::CHolographicInteropTextureMarshaler(
        DirectComposition::CHolographicInteropTextureMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 80LL);
  *((_DWORD *)this + 4) |= 0x20u;
  *(_QWORD *)this = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
  return this;
}
