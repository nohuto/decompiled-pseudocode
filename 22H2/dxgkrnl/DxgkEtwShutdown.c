/*
 * XREFs of DxgkEtwShutdown @ 0x1C004E80C
 * Callers:
 *     DxgkUnload @ 0x1C030A890 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1C004E830 (McGenEventUnregister_EtwUnregister.c)
 */

__int64 DxgkEtwShutdown()
{
  __int64 result; // rax

  result = McGenEventUnregister_EtwUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  return result;
}
