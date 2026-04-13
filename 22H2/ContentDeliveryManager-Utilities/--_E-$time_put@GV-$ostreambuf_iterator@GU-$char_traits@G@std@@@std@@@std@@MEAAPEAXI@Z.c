/*
 * XREFs of ??_E?$time_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEAAPEAXI@Z @ 0x1800BE810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x1800CFC21 (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::time_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::`vector deleting destructor'(
        void **a1,
        char a2)
{
  *a1 = &std::time_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::`vftable';
  free(a1[2]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
