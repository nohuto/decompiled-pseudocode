unsigned __int64 __fastcall Percentagex100(__int64 a1, unsigned __int64 a2)
{
  if ( a2 )
    return 10000 * a1 / a2;
  else
    return 0LL;
}
