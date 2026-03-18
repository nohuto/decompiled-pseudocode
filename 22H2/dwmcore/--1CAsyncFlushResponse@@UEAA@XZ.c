/*
 * XREFs of ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800AC684
 * Callers:
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800AC700 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z @ 0x1800AAEE8 (--$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z.c)
 */

void __fastcall CAsyncFlushResponse::~CAsyncFlushResponse(CAsyncFlushResponse *this)
{
  *(_QWORD *)this = &CAsyncFlushResponse::`vftable';
  ReleaseInterface<CChannelContext>((__int64 *)this + 5);
  *(_QWORD *)this = &CResponseItem::`vftable';
}
