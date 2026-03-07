struct tagMOUSE_PROMOTION_ENTRY *__fastcall CreateMousePromotionEntry(
        const struct tagPOINTER_INFO *a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // rax
  __int64 v7; // r11

  result = (struct tagMOUSE_PROMOTION_ENTRY *)Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( result )
  {
    PopulateMousePromotionEntry(result, a1, a2, a3);
    return (struct tagMOUSE_PROMOTION_ENTRY *)v7;
  }
  return result;
}
