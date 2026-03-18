/*
 * XREFs of ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180274900
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180231494 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180132B0E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180275568 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__int64 __fastcall InteractionSourceManager::GetSourceCenterpointModifierForActiveManipulation(
        InteractionSourceManager *a1)
{
  bool HasActiveManipulation; // al
  InteractionSourceManager *v2; // rcx
  __int64 v3; // r9
  struct CManipulation *ActiveManipulation; // rax
  int v5; // r10d

  HasActiveManipulation = InteractionSourceManager::HasActiveManipulation(a1);
  v3 = 0LL;
  if ( HasActiveManipulation )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v2);
    if ( v5 )
    {
      if ( v5 == 1 )
        return *((_QWORD *)ActiveManipulation + 62);
    }
    else
    {
      return *((_QWORD *)ActiveManipulation + 61);
    }
  }
  return v3;
}
