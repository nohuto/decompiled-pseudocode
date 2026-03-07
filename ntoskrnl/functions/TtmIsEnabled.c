char __fastcall TtmIsEnabled(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 1;
  if ( TtmpEnabled != 1 || PsIsCurrentThreadInServerSilo(a1, a2) )
    return 0;
  return v2;
}
