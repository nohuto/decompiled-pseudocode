/*
 * XREFs of ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01F8F5C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00D1B90 (xxxCleanupThreadPointerInputInfo.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01F9678 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01F9E6C (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01F93F8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1C01F9718 (-ResetPendingPromotion@@YAXXZ.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F9854 (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 */

void __fastcall ForceCompletePendingPromotion(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int16 v2; // cx
  struct tagMOUSE_PROMOTION_ENTRY *v3; // r9
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v5; // [rsp+48h] [rbp+10h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v1 = SGDGetUserSessionState(a1);
  v2 = *(_WORD *)(v1 + 16280);
  v4 = ((*(_DWORD *)(v1 + 16296) != 0) + 1) | (*(_DWORD *)(v1 + 16300) != 0 ? 50397184 : 16842752);
  if ( !ValidatePointerPromotion(v2, *(_DWORD *)(v1 + 16284), &v4, &v6, &v5) )
    goto LABEL_5;
  v3 = v5;
  if ( v5 )
    *((_DWORD *)v5 + 11) |= 0x20u;
  if ( !PromotePointerInternal(*(_WORD *)(v1 + 16280), v4, v6, v3) )
LABEL_5:
    ResetPendingPromotion();
}
