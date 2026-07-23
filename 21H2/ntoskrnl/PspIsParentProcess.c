/*
 * XREFs of PspIsParentProcess @ 0x140285248
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x140696CA0 (PspOneDirectionSecurityDomainCombine.c)
 *     PspThreadOpen @ 0x140696E50 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x140696F10 (PspProcessOpen.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsParentProcess(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a2 + 1344) == *(_QWORD *)(a1 + 1088) )
    return *(_QWORD *)(a2 + 2296) > *(_QWORD *)(a1 + 2296);
  return result;
}
