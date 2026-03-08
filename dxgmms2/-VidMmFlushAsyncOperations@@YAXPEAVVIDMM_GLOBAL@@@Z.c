/*
 * XREFs of ?VidMmFlushAsyncOperations@@YAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C002CB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmFlushAsyncOperations(struct VIDMM_GLOBAL *a1)
{
  KeWaitForSingleObject((char *)a1 + 44440, Executive, 0, 0, 0LL);
}
