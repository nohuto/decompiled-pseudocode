/*
 * XREFs of KiUncommitGroupSubNodeAssignments @ 0x14056E4D0
 * Callers:
 *     KiAllocateProcessorNumber @ 0x14037279C (KiAllocateProcessorNumber.c)
 *     KiFreeProcessorNumber @ 0x14056E36C (KiFreeProcessorNumber.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUncommitGroupSubNodeAssignments(__int16 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  __int64 result; // rax

  if ( KiSubNodeCount )
  {
    v1 = (unsigned __int16)KiSubNodeCount;
    v2 = KiSubNodeConfigBlock + 5;
    do
    {
      if ( (*(_BYTE *)v2 & 1) == 0 && *(_WORD *)(v2 + 1) == a1 )
        *(_BYTE *)v2 &= ~2u;
      v2 += 24LL;
      --v1;
    }
    while ( v1 );
  }
  result = 0xFFFFLL;
  --word_140C6A9EC;
  return result;
}
