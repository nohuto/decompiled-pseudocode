/*
 * XREFs of ViTagBuffer @ 0x140ACB1B4
 * Callers:
 *     ViAllocateMapRegistersFromFile @ 0x140AC8E8C (ViAllocateMapRegistersFromFile.c)
 *     ViInitializePadding @ 0x140ACA6E4 (ViInitializePadding.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViTagBuffer(__int64 a1, unsigned int a2, char a3)
{
  __int64 result; // rax

  if ( (a3 & 1) != 0 )
  {
    result = ViDmaVerifierTag;
    *(_QWORD *)(a1 - 8) = ViDmaVerifierTag;
  }
  if ( (a3 & 2) != 0 )
  {
    result = ViDmaVerifierTag;
    *(_QWORD *)(a2 + a1) = ViDmaVerifierTag;
  }
  return result;
}
