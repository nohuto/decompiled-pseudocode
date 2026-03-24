/*
 * XREFs of TraceLoggingUnregister_EtwUnregister @ 0x140882730
 * Callers:
 *     VrpRegistryUnload @ 0x140882810 (VrpRegistryUnload.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwUnregister @ 0x1407601D0 (EtwUnregister.c)
 */

NTSTATUS __fastcall TraceLoggingUnregister_EtwUnregister(__int64 a1)
{
  REGHANDLE v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return EtwUnregister(v2);
}
