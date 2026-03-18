/*
 * XREFs of ??0CCompositionMipmapSurfaceMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B370
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CCompositionMipmapSurfaceMarshaler *__fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::CCompositionMipmapSurfaceMarshaler(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 37LL);
  *(_QWORD *)this = &DirectComposition::CCompositionMipmapSurfaceMarshaler::`vftable';
  return this;
}
