__int64 __fastcall CMouseProcessor::AnalyzeNewMousePosition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r8
  unsigned int v5; // ecx

  v2 = *(_DWORD **)(a2 + 8);
  if ( (v2[28] & 0x1000) != 0 )
    return 2LL;
  v5 = 0;
  if ( a1[860] == v2[13] && a1[861] == v2[14] )
  {
    if ( a1[862] != v2[15] || a1[863] != v2[16] )
      return 1;
  }
  else
  {
    return 2;
  }
  return v5;
}
