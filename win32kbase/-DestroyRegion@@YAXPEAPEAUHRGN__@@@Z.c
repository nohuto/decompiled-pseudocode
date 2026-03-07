void __fastcall DestroyRegion(HRGN *a1)
{
  struct HOBJ__ *v2; // rcx
  __int64 v3; // rdx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject((struct HOBJ__ *)*a1, v3);
    *a1 = 0LL;
  }
}
