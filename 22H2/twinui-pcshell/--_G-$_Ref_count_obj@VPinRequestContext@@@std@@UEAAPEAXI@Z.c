/*
 * XREFs of ??_G?$_Ref_count_obj@VPinRequestContext@@@std@@UEAAPEAXI@Z @ 0x1801370B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 */

void *__fastcall std::_Ref_count_obj<PinRequestContext>::`scalar deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
