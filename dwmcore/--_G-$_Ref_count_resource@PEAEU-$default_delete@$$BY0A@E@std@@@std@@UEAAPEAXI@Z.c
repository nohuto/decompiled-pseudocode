/*
 * XREFs of ??_G?$_Ref_count_resource@PEAEU?$default_delete@$$BY0A@E@std@@@std@@UEAAPEAXI@Z @ 0x18024FE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
