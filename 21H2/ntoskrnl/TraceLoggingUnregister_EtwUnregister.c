/*
 * XREFs of TraceLoggingUnregister_EtwUnregister @ 0x140882890
 * Callers:
 *     VrpRegistryUnload @ 0x140882970 (VrpRegistryUnload.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwUnregister @ 0x140760390 (EtwUnregister.c)
 */

NTSTATUS __fastcall TraceLoggingUnregister_EtwUnregister(__int64 a1)
{
  REGHANDLE v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return EtwUnregister(v2);
}
