/*
 * XREFs of ViAvlCompareNodeUseSessionId @ 0x1402F2AD0
 * Callers:
 *     <none>
 * Callees:
 *     ViAvlCompareNode @ 0x1402F2B20 (ViAvlCompareNode.c)
 */

RTL_GENERIC_COMPARE_RESULTS __fastcall ViAvlCompareNodeUseSessionId(struct _RTL_AVL_TABLE *a1, _DWORD *a2, _DWORD *a3)
{
  RTL_GENERIC_COMPARE_RESULTS result; // eax
  unsigned int v6; // ecx

  result = ViAvlCompareNode(a1, a2, a3);
  if ( result == GenericEqual )
  {
    v6 = a2[4];
    if ( v6 < a3[4] )
    {
      return 0;
    }
    else if ( v6 > a3[4] )
    {
      return 1;
    }
  }
  return result;
}
