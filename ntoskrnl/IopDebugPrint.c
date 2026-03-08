/*
 * XREFs of IopDebugPrint @ 0x14055EC3C
 * Callers:
 *     PnpCollectOpenHandles @ 0x14096114C (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x1409611F0 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402BDDE0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(unsigned int a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, a1, a2, va, 1);
  return a1;
}
