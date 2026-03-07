__int64 __fastcall HalpQueryChannelTopologyInformation(_QWORD *a1, unsigned int a2, int *a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = 8;
  if ( a2 < 8 )
  {
    v3 = 0;
    result = 3221225476LL;
  }
  else
  {
    *a1 = HalpChannelMemoryRanges;
    result = 0LL;
  }
  *a3 = v3;
  return result;
}
