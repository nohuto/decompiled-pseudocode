/*
 * XREFs of ?Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z @ 0x18049AF80
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetAnimationType@CDropFeedbackItem@@AEAA?AW4DCompThumbnailAnimation@@XZ @ 0x18049B03C (-_GetAnimationType@CDropFeedbackItem@@AEAA-AW4DCompThumbnailAnimation@@XZ.c)
 */

__int64 __fastcall CDropFeedbackItem::Update(CDropFeedbackItem *this, struct IDCompBatchAnimationCallback *a2)
{
  unsigned int AnimationType; // eax
  __int64 v3; // r8
  __int64 v4; // r9

  AnimationType = CDropFeedbackItem::_GetAnimationType(this, a2, a2, this);
  return CDropFeedbackItem::_Update(v4, AnimationType, v3);
}
