/*
 * XREFs of std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB5E0
 * Callers:
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB664 (std--_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 * Callees:
 *     std::_Pop_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB460 (std--_Pop_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 */

unsigned __int64 __fastcall std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int128 i; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 result; // rax

  v2 = a2;
  for ( i = (a2 - a1) * (__int128)0xE38E38E38E38E39LL; ; i = (v2 - a1) * (__int128)0xE38E38E38E38E39LL )
  {
    v5 = *((__int64 *)&i + 1) >> 2;
    result = v5 >> 63;
    if ( (__int64)((v5 >> 63) + v5) < 2 )
      break;
    std::_Pop_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(a1, v2);
    v2 -= 72LL;
  }
  return result;
}
