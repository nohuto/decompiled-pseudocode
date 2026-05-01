/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_dec51abe3857ae1fe2422bd3bb2739bf___ @ 0x1800CE4E0
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803BE710 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

struct IUnknown ****__fastcall std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_dec51abe3857ae1fe2422bd3bb2739bf___(
        struct IUnknown ****a1,
        struct IUnknown ***a2,
        struct IUnknown ***a3,
        struct IUnknown *a4)
{
  struct IUnknown ***i; // rsi
  struct IUnknown ****result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    if ( (unsigned int)SHIsSameObject(**i, a4) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
