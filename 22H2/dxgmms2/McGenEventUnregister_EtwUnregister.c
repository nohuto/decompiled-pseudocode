/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1C002E398
 * Callers:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00E0FB0 (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventUnregister_EtwUnregister(REGHANDLE *a1)
{
  REGHANDLE v2; // rcx
  NTSTATUS result; // eax

  v2 = *a1;
  if ( !v2 )
    return 0;
  result = EtwUnregister(v2);
  *a1 = 0LL;
  return result;
}
