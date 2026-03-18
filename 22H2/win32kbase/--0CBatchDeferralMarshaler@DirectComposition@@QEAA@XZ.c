/*
 * XREFs of ??0CBatchDeferralMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B2A4
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CBatchDeferralMarshaler *__fastcall DirectComposition::CBatchDeferralMarshaler::CBatchDeferralMarshaler(
        DirectComposition::CBatchDeferralMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 12LL);
  *(_QWORD *)this = &DirectComposition::CBatchDeferralMarshaler::`vftable';
  return this;
}
