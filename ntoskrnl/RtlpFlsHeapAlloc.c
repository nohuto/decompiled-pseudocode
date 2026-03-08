/*
 * XREFs of RtlpFlsHeapAlloc @ 0x14076B76C
 * Callers:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$03$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x1402E0E84 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$03$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1403A0434 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpFlsHeapAlloc(unsigned int a1)
{
  return ExAllocatePool2(256LL, a1, 1800621126LL);
}
