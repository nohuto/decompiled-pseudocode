/*
 * XREFs of ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800ADF80
 * Callers:
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800AD77C (--1CIndirectTouchVisual@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800536B8 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800AD9F0 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800ADFB4 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::Stop(CIndirectTouchVisual *this)
{
  CTouchVisual *v2; // rcx

  CIndirectTouchVisual::StopAllTimelines(this);
  CTouchVisual::UnRegisterGlobalTimer(v2);
  CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0);
}
