__int64 __fastcall ContainedBy<DMMVIDPN>::SetContainer(__int64 a1, __int64 a2)
{
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      WdLogSingleEntry0(1LL);
    *(_QWORD *)(a1 + 8) = a2;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, *(_QWORD *)(a1 + 8));
    return 3221225485LL;
  }
}
