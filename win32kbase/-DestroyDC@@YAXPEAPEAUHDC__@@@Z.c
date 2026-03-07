void __fastcall DestroyDC(HDC *a1)
{
  HDC v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetDCOwnerEx((__int64)v2, 0x80000002, 0, 0);
    GrepDeleteDC(*a1, 0x400000u);
    *a1 = 0LL;
  }
}
