/*
 * XREFs of ?CreateEntryFromLastEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@XZ @ 0x1C021816C
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C0217FEC (-CancelAutoPromotion@@YAXXZ.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_ENTRY *CreateEntryFromLastEntry(void)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // rax

  result = (struct tagMOUSE_PROMOTION_ENTRY *)Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( result )
  {
    *(_OWORD *)result = xmmword_1C0339B60;
    *((_OWORD *)result + 1) = xmmword_1C0339B70;
    *((_OWORD *)result + 2) = xmmword_1C0339B80;
  }
  return result;
}
