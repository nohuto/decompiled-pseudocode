__int64 __fastcall AggregatedBy<VIDPN_MGR>::SetAggregator(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 && *(_QWORD *)(a1 + 8) )
    result = WdLogSingleEntry0(1LL);
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
