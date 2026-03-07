__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::SetIsVail(
        CSynchronousSuperWetInk *a1,
        char a2)
{
  if ( a2 != *((_BYTE *)a1 + 168) )
  {
    *((_BYTE *)a1 + 168) = a2;
    CSynchronousSuperWetInk::OnPropertyChanged(a1);
  }
  return 0LL;
}
