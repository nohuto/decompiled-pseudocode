/*
 * XREFs of ??0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B85C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C0030544 (--0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CSpatialRemarshalerMarshaler *__fastcall DirectComposition::CSpatialRemarshalerMarshaler::CSpatialRemarshalerMarshaler(
        DirectComposition::CSpatialRemarshalerMarshaler *this)
{
  DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)this, 176LL);
  *(_QWORD *)this = &DirectComposition::CWindowNodeMarshaler::`vftable';
  return this;
}
