__int64 __fastcall BgLibraryInitialize(__int64 a1, unsigned int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize(a1, a2);
  else
    return 3221225473LL;
}
