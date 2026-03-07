__int64 __fastcall DerementRequestVSyncReasonDevice(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // rcx

  result = a1;
  if ( a1 < 4 )
  {
    v5 = 0LL;
    if ( *(_BYTE *)(a3 + 2212) )
    {
      if ( a4 == -3 )
      {
        if ( *(_DWORD *)(a3 + 40) )
        {
          do
          {
            v6 = result + 4 * v5;
            v5 = (unsigned int)(v5 + 1);
            --*(_DWORD *)(a2 + 4 * v6 + 1136);
          }
          while ( (unsigned int)v5 < *(_DWORD *)(a3 + 40) );
        }
      }
      else
      {
        --*(_DWORD *)(a2 + 4 * (a1 + 4LL * a4) + 1136);
      }
    }
    else
    {
      --*(_DWORD *)(a2 + 4LL * a1 + 1136);
    }
  }
  return result;
}
