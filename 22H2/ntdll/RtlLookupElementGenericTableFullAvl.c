/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x18005D0C0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18005D12C (FindNodeOrParent.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v6; // eax

  v6 = (unsigned int)FindNodeOrParent(Table, Buffer, NodeOrParent);
  *SearchResult = v6;
  if ( v6 == TableFoundNode )
    return (char *)*NodeOrParent + 32;
  else
    return 0LL;
}
