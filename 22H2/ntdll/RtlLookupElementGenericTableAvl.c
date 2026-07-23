/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x18005D100
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18005D12C (FindNodeOrParent.c)
 */

PVOID __cdecl RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(Table, Buffer, &v3) == 1 )
    return (PVOID)(v3 + 32);
  else
    return 0LL;
}
