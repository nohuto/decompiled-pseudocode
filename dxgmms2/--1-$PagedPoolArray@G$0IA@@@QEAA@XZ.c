void __fastcall PagedPoolArray<unsigned short,128>::~PagedPoolArray<unsigned short,128>(void **a1)
{
  if ( *a1 != a1 + 1 )
    operator delete(*a1);
}
