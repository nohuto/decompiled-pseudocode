/*
 * XREFs of IopReplaceSeperatorWithPound @ 0x140680B88
 * Callers:
 *     PipFindDeviceOverrideEntry @ 0x14068092C (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140875E34 (PiDevCfgConfigureDeviceLocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopReplaceSeperatorWithPound(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int16 *v3; // r9
  __int16 *i; // r10
  __int16 v5; // r8

  if ( *(_WORD *)a2 > *(_WORD *)(a1 + 2) )
    return 3221225507LL;
  v2 = *(_WORD *)a2 >> 1;
  v3 = *(__int16 **)(a2 + 8);
  for ( i = *(__int16 **)(a1 + 8); v2; ++i )
  {
    --v2;
    v5 = *v3;
    if ( *v3 == 92 || v5 == 47 )
      v5 = 35;
    *i = v5;
    ++v3;
  }
  *(_WORD *)a1 = *(_WORD *)a2;
  return 0LL;
}
