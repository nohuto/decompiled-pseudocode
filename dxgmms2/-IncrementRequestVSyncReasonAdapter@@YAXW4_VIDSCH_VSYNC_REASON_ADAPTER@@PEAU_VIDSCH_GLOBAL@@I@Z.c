__int64 __fastcall IncrementRequestVSyncReasonAdapter(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // rcx

  v3 = a1;
  if ( a1 != 5 )
  {
    v4 = 0LL;
    if ( *(_BYTE *)(a2 + 2212) )
    {
      if ( a3 == -3 )
      {
        if ( *(_DWORD *)(a2 + 40) )
        {
          do
          {
            result = v3 + 4 * v4;
            v6 = result + (unsigned int)v4;
            v4 = (unsigned int)(v4 + 1);
            ++*(_DWORD *)(a2 + 4 * v6 + 1888);
          }
          while ( (unsigned int)v4 < *(_DWORD *)(a2 + 40) );
        }
      }
      else
      {
        result = a3;
        ++*(_DWORD *)(a2 + 4 * (a1 + 5LL * a3) + 1888);
      }
    }
    else
    {
      ++*(_DWORD *)(a2 + 4LL * a1 + 1888);
    }
  }
  return result;
}
