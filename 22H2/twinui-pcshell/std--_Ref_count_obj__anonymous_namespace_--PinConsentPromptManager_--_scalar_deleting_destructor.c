/*
 * XREFs of std::_Ref_count_obj__anonymous_namespace_::PinConsentPromptManager_::_scalar_deleting_destructor_ @ 0x180137080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 */

void *__fastcall std::_Ref_count_obj__anonymous_namespace_::PinConsentPromptManager_::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
