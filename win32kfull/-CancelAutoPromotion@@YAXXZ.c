void __fastcall CancelAutoPromotion(__int64 a1)
{
  __int64 v1; // rax
  struct tagMOUSE_PROMOTION_QUEUE *v2; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *EntryFromLastEntry; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v5; // [rsp+40h] [rbp+8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = SGDGetUserSessionState(a1);
  v6 = 0LL;
  v5 = 0LL;
  v2 = (struct tagMOUSE_PROMOTION_QUEUE *)(v1 + 16184);
  if ( (unsigned int)FindMousePromotionInContactRange(
                       (const struct tagMOUSE_PROMOTION_QUEUE *)(v1 + 16184),
                       *(_DWORD *)(v1 + 16060),
                       &v6,
                       &v5) )
  {
    v4 = 0LL;
    ExtractRangeFromQueue(v2, (struct tagMOUSE_PROMOTION_QUEUE *)&v4, v6, v5);
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&v4);
  }
  else
  {
    EntryFromLastEntry = CreateEntryFromLastEntry();
    if ( EntryFromLastEntry )
    {
      *((_DWORD *)EntryFromLastEntry + 5) = 303104;
      QueueMousePromotionEntry(v2, EntryFromLastEntry);
    }
  }
  ClearAutoPromotion();
}
