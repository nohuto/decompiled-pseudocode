/*
 * XREFs of RtlpFlsHeapAlloc @ 0x140694554
 * Callers:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$03$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x14021BBE4 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$03$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1403D69E8 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpFlsHeapAlloc(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6B534C46u);
}
