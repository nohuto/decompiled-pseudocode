/*
 * XREFs of ?DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0015CBC
 * Callers:
 *     VidSchControlVSyncAdapter @ 0x1C0088620 (VidSchControlVSyncAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DerementRequestVSyncReasonAdapter(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = a1;
  if ( a1 < 4 )
  {
    v5 = 0LL;
    if ( *(_BYTE *)(a2 + 2132) )
    {
      if ( a3 == -3 )
      {
        if ( *(_DWORD *)(a2 + 40) )
        {
          do
          {
            v6 = result + 4 * v5;
            v5 = (unsigned int)(v5 + 1);
            --*(_DWORD *)(a2 + 4 * v6 + 1872);
          }
          while ( (unsigned int)v5 < *(_DWORD *)(a2 + 40) );
        }
      }
      else
      {
        --*(_DWORD *)(a2 + 4 * (a1 + 4LL * a3) + 1872);
      }
    }
    else
    {
      --*(_DWORD *)(a2 + 4LL * a1 + 1872);
    }
  }
  return result;
}
