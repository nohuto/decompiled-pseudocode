void __fastcall CMouseProcessor::HandleMouseForLegacyTouchpad(
        CMouseProcessor *this,
        struct _MOUSE_INPUT_DATA *a2,
        struct DEVICEINFO *a3)
{
  USHORT ButtonFlags; // cx

  if ( (*((_BYTE *)a3 + 880) & 1) != 0 )
  {
    if ( (a2->Buttons & 1) != 0 )
    {
      if ( (unsigned int)ApiSetEditionLegacyTouchPadMouseAllowTap(this) )
      {
        *((_DWORD *)a3 + 227) &= ~1u;
      }
      else
      {
        a2->ButtonFlags &= ~1u;
        *((_DWORD *)a3 + 227) |= 1u;
      }
    }
    ButtonFlags = a2->ButtonFlags;
    if ( (ButtonFlags & 2) != 0 && (*((_DWORD *)a3 + 227) & 1) != 0 )
    {
      a2->ButtonFlags = ButtonFlags & 0xFFFD;
      *((_DWORD *)a3 + 227) &= ~1u;
    }
  }
}
