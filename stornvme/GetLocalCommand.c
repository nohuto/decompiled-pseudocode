unsigned __int64 __fastcall GetLocalCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // edx
  unsigned __int64 v5; // r9

  v2 = 0LL;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
    return *(_QWORD *)(GetSrbExtension(a2) + 4232);
  if ( a2 == a1 + 952 )
    return a1 + 944;
  v4 = 0;
  while ( 1 )
  {
    v5 = (unsigned __int64)v4 << 7;
    if ( a2 == v5 + a1 + 1080 )
      break;
    if ( ++v4 >= 6 )
      return v2;
  }
  return v5 + a1 + 1072;
}
