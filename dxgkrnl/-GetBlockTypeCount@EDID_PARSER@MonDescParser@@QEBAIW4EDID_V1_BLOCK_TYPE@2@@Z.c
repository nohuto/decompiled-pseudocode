__int64 __fastcall MonDescParser::EDID_PARSER::GetBlockTypeCount(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r10
  unsigned int v4; // r8d

  v1 = 0;
  v2 = a1 + 8LL * *(_QWORD *)(a1 + 80);
  while ( a1 != v2 )
  {
    v4 = v1 + 1;
    if ( **(_BYTE **)a1 != 112 )
      v4 = v1;
    a1 += 8LL;
    v1 = v4;
  }
  return v1;
}
