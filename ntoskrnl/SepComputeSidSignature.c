/*
 * XREFs of SepComputeSidSignature @ 0x140739C10
 * Callers:
 *     SepRmReferenceFindCap @ 0x1405B7498 (SepRmReferenceFindCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepComputeSidSignature(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 4LL * ((unsigned int)*(unsigned __int8 *)(a1 + 1) - 1) + 8);
  result = v1 + 1;
  if ( (_DWORD)v1 )
    return *(unsigned int *)(a1 + 4LL * ((unsigned int)*(unsigned __int8 *)(a1 + 1) - 1) + 8);
  return result;
}
