void __fastcall DestroyFont(HFONT *a1, __int64 a2)
{
  struct HOBJ__ *v3; // rcx

  v3 = (struct HOBJ__ *)*a1;
  if ( v3 )
  {
    GreDeleteObject(v3, a2);
    *a1 = 0LL;
  }
}
