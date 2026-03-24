/*
 * XREFs of rimIsPointerDevicePrimaryContactDown @ 0x1C017B9C4
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C0178C24 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsPointerDevicePrimaryContactDown(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0;
  if ( v1 && ((*(_DWORD *)(v1 + 2660) & 4) != 0 || (*(_DWORD *)(v1 + 2420) & 4) != 0) )
    return 1;
  return v2;
}
