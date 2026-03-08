/*
 * XREFs of HalpMceInitializeErrorPacket @ 0x140A87D2C
 * Callers:
 *     HalpMceInitProcessor @ 0x140A87C98 (HalpMceInitProcessor.c)
 * Callees:
 *     HalpGetMcaPcrContext @ 0x14037CEF4 (HalpGetMcaPcrContext.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140A87D98 (HalpMceInitializeErrorPacketContents.c)
 */

volatile __int64 *__fastcall HalpMceInitializeErrorPacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  volatile __int64 *result; // rax
  __int64 v7; // rcx
  volatile __int64 *v8; // rbx
  __int64 v9; // rdi

  v4 = HalpMmAllocCtxAlloc(a1, 372LL);
  v5 = v4;
  if ( !v4 )
    KeBugCheckEx(0xACu, 0x174uLL, 0xDA00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x6CFuLL);
  HalpMceInitializeErrorPacketContents(v4);
  result = (volatile __int64 *)HalpGetMcaPcrContext(a2);
  v8 = result;
  v9 = _InterlockedExchange64(result, v5);
  if ( v9 )
    result = (volatile __int64 *)HalpMmAllocCtxFree(v7, v9);
  _InterlockedExchange64(v8 + 1, a1);
  return result;
}
