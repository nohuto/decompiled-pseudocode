/*
 * XREFs of ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x180132B58
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x1800514E4 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801329DA (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x180132A6A (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x180132AA4 (-EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180134BEE (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180231D44 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x180232564 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x1802766E0 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::NotifyExpressionProcessingComplete(CInteractionTracker *this)
{
  bool v1; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  CChainingHelper *ActiveChainingHelper; // rax

  v1 = 1;
  if ( (*((_BYTE *)this + 541) & 1) == 0 )
    v1 = *((_QWORD *)this + 80) == 0LL;
  if ( !*((_DWORD *)this + 44) )
  {
    if ( v1 )
      goto LABEL_8;
LABEL_7:
    if ( (*((_BYTE *)this + 541) & 8) == 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !v1 )
    goto LABEL_7;
  CInteractionTracker::CheckForIdle(this);
LABEL_8:
  CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin((__int64)this, 7);
  CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(this, 7LL);
  CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this, v3);
  CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(this, v4);
LABEL_9:
  *((_BYTE *)this + 541) &= ~8u;
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((CInteractionTracker *)((char *)this + 200));
  if ( ActiveChainingHelper )
    CChainingHelper::UpdateConfigurationIfDirty(ActiveChainingHelper);
  CInteractionTracker::SendPendingCallbacks(this);
}
