/*
 * XREFs of ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18012E8F4
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x18012E9A8 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x180231638 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x18012F110 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(CInteractionTracker *this, __int64 a2)
{
  if ( !*((_DWORD *)this + 44) && (*((_BYTE *)this + 540) & 0x20) == 0 )
    CInteractionTracker::SetScale(this, a2, 0LL);
}
