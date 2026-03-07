__int64 __fastcall NtGdiRemoveFontMemResourceEx(Gre::Base *a1)
{
  if ( a1 )
    return GreRemoveFontMemResourceEx(a1);
  else
    return 0LL;
}
