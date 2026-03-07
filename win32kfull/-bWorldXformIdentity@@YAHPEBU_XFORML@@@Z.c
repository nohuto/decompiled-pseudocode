_BOOL8 __fastcall bWorldXformIdentity(const struct _XFORML *a1)
{
  return a1->eM11 == 1.0 && a1->eM12 == 0.0 && a1->eM21 == 0.0 && a1->eM22 == 1.0 && a1->eDx == 0.0 && a1->eDy == 0.0;
}
