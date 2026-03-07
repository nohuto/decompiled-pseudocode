__int64 __fastcall BcdOpenStoreFromFile(unsigned __int16 *a1, __int64 *a2)
{
  if ( a1 )
    return BcdOpenStore(a1, 0, a2);
  else
    return 3221225711LL;
}
