/*
 * XREFs of rimIsPointerDevicePrimaryContactDown @ 0x1C01D8B68
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01D5A04 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsPointerDevicePrimaryContactDown(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 1016);
  v2 = 0;
  if ( v1 && ((*(_DWORD *)(v1 + 2684) & 4) != 0 || (*(_DWORD *)(v1 + 2444) & 4) != 0) )
    return 1;
  return v2;
}
