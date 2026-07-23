/*
 * XREFs of VfUtilFillPluginRequestedData @ 0x1409C7660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VfUtilFillPluginRequestedData(__int64 a1)
{
  _DWORD *v1; // rax
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( a1 )
  {
    if ( !*(_DWORD *)a1 )
    {
      if ( ViTipControlLimitDenominator )
        *(_DWORD *)(a1 + 8) = ViTipControlLimitDenominator;
      if ( ViTipControlLimitNumerator )
        *(_DWORD *)(a1 + 4) = ViTipControlLimitNumerator;
      if ( ViTipControlSparseness )
        *(_DWORD *)(a1 + 12) = ViTipControlSparseness;
    }
    v1 = *(_DWORD **)(a1 + 16);
    if ( v1 && *v1 == 39 )
    {
      v2 = ViLwspPoolTags[0];
      LODWORD(v3) = 0;
      if ( ViLwspPoolTags[0] )
      {
        v4 = 0LL;
        do
        {
          v3 = (unsigned int)(v3 + 1);
          v1[v4 + 2] = v2;
          v4 = (unsigned int)v3;
          v2 = ViLwspPoolTags[v3];
        }
        while ( v2 );
      }
      v1[1] = v3;
    }
  }
}
