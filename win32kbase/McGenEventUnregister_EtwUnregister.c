/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1C00D4774
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !W32kControlGuid_Context )
    return 0;
  result = EtwUnregister(W32kControlGuid_Context);
  W32kControlGuid_Context = 0LL;
  return result;
}
