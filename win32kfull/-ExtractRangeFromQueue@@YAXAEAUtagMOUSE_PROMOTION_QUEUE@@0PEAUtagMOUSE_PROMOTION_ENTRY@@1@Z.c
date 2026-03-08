/*
 * XREFs of ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F8E5C
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01F8C08 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01F92EC (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExtractRangeFromQueue(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_QUEUE *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  struct tagMOUSE_PROMOTION_ENTRY *v4; // r11
  struct tagMOUSE_PROMOTION_ENTRY *v7; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v8; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v9; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    if ( !a4 )
      a4 = a1[1];
    v7 = a1[1];
    v8 = 0LL;
    if ( v4 != a3 )
    {
      v8 = v4;
      do
      {
        v9 = *(struct tagMOUSE_PROMOTION_ENTRY **)v8;
        if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v8 == a3 )
          break;
        v8 = *(struct tagMOUSE_PROMOTION_ENTRY **)v8;
      }
      while ( v9 );
    }
    *(_QWORD *)a2 = a3;
    *((_QWORD *)a2 + 1) = a4;
    if ( v4 == a3 )
    {
      if ( v7 == a4 )
      {
        *a1 = 0LL;
        a1[1] = 0LL;
      }
      else
      {
        *a1 = *(struct tagMOUSE_PROMOTION_ENTRY **)a4;
      }
    }
    else if ( v7 == a4 )
    {
      a1[1] = v8;
      *(_QWORD *)v8 = 0LL;
    }
    else
    {
      *(_QWORD *)v8 = *(_QWORD *)a4;
    }
    *(_QWORD *)a4 = 0LL;
  }
}
