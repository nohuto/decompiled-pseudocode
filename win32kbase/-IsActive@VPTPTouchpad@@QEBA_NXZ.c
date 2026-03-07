char __fastcall VPTPTouchpad::IsActive(VPTPTouchpad *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 4) || *((VPTPTouchpad **)this + 2) != (VPTPTouchpad *)((char *)this + 16) )
    return 1;
  return v1;
}
