/*
 * XREFs of ??0CRemoteRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00CC528
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CRemoteRenderTargetMarshaler *__fastcall DirectComposition::CRemoteRenderTargetMarshaler::CRemoteRenderTargetMarshaler(
        DirectComposition::CRemoteRenderTargetMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 144LL);
  *(_QWORD *)this = &DirectComposition::CRemoteRenderTargetMarshaler::`vftable';
  return this;
}
