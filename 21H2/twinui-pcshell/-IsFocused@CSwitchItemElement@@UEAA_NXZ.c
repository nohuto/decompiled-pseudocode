/*
 * XREFs of ?IsFocused@CSwitchItemElement@@UEAA_NXZ @ 0x18008E250
 * Callers:
 *     ?IsFocused@CSwitchItemElement@@WOI@EAA_NXZ @ 0x18016F190 (-IsFocused@CSwitchItemElement@@WOI@EAA_NXZ.c)
 *     ?IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ @ 0x18016F810 (-IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSwitchItemElement::IsFocused(CSwitchItemElement *this)
{
  return *((_BYTE *)this + 176);
}
