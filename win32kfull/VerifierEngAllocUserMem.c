/*
 * XREFs of VerifierEngAllocUserMem @ 0x1C02A94E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A923C (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierEngAllocUserMem(SIZE_T cjMemSize, ULONG ulTag)
{
  if ( (unsigned int)VerifierRandomFailure(cjMemSize) )
    return 0LL;
  else
    return EngAllocUserMem(cjMemSize, ulTag);
}
