/*
 * XREFs of BvgaGetResourceAddress @ 0x14054CF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BvgaGetResourceAddress(unsigned int a1)
{
  if ( a1 > ResourceCount )
    return 0LL;
  else
    return ResourceList[a1 - 1];
}
