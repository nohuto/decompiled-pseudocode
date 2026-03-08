/*
 * XREFs of ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C0149378
 * Callers:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C01493FE (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01F93F8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F9854 (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_CACHE *__fastcall FindCacheById(__int64 a1, unsigned int *a2)
{
  __int16 v3; // bx
  __int64 v4; // rax
  __int64 v5; // r8
  _WORD *i; // r9

  v3 = a1;
  v4 = SGDGetUserSessionState(a1);
  v5 = 0LL;
  for ( i = (_WORD *)(v4 + 16064); *i != v3; i += 12 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 5 )
      return 0LL;
  }
  *a2 = v5;
  return (struct tagMOUSE_PROMOTION_CACHE *)(v4 + 16056 + 8 * (v5 + 2 * v5 + 1));
}
