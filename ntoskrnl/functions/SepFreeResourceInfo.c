void __fastcall SepFreeResourceInfo(PVOID P)
{
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList();
    ExFreePoolWithTag(P, 0);
  }
}
