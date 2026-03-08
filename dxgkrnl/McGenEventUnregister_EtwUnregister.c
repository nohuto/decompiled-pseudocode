/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1C004D7D0
 * Callers:
 *     DxgkEtwShutdown @ 0x1C004D7AC (DxgkEtwShutdown.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C030CE70 (--1DXGGLOBAL@@EEAA@XZ.c)
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
