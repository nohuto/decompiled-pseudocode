/*
 * XREFs of DxgkEtwShutdown @ 0x1C004D7AC
 * Callers:
 *     DxgkUnload @ 0x1C0305A60 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1C004D7D0 (McGenEventUnregister_EtwUnregister.c)
 */

__int64 DxgkEtwShutdown()
{
  __int64 result; // rax

  result = McGenEventUnregister_EtwUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  return result;
}
