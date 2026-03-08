/*
 * XREFs of CmpGetComponentNameAtIndex @ 0x140779900
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpValidateComponents @ 0x1407798BC (CmpValidateComponents.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetComponentNameAtIndex(__int64 a1, unsigned int a2)
{
  if ( a2 >= 8 )
    return *(_QWORD *)(a1 + 160) + 16 * (a2 - 8 + 6LL);
  else
    return a1 + 16 * (a2 + 2LL);
}
