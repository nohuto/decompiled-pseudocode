KAFFINITY __fastcall ProcgrpQueryGroupAffinity(unsigned __int16 GroupNumber)
{
  if ( GroupNumber )
    return 0LL;
  else
    return KeQueryActiveProcessors();
}
