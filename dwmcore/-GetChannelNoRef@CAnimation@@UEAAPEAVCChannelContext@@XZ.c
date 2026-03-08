/*
 * XREFs of ?GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ @ 0x180106680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CChannelContext *__fastcall CAnimation::GetChannelNoRef(CAnimation *this)
{
  return (struct CChannelContext *)*((_QWORD *)this - 2);
}
