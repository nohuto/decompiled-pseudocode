/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1C00D4584
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventRegister_EtwRegister()
{
  NTSTATUS result; // eax

  result = 0;
  if ( !W32kControlGuid_Context )
    return EtwRegister(&W32kControlGuid, McGenControlCallbackV2, &W32kControlGuid_Context, &W32kControlGuid_Context);
  return result;
}
