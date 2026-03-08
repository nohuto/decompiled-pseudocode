/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1C0019624
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C00BDE54 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventRegister_EtwRegister()
{
  NTSTATUS result; // eax

  result = 0;
  if ( !DxgkControlGuid_Context )
    return EtwRegister(&DxgkControlGuid, McGenControlCallbackV2, &DxgkControlGuid_Context, &DxgkControlGuid_Context);
  return result;
}
