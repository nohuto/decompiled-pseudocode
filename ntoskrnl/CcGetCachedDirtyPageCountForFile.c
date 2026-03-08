/*
 * XREFs of CcGetCachedDirtyPageCountForFile @ 0x140535570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetCachedDirtyPageCountForFile(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0xFFFFFFFFLL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      return *(unsigned int *)(v2 + 112);
  }
  return result;
}
