_BOOL8 __fastcall IsPromotionQueue(const struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  return a1 == (const struct tagMOUSE_PROMOTION_QUEUE *)(SGDGetUserSessionState(a1) + 16184);
}
