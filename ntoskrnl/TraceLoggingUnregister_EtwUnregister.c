/*
 * XREFs of TraceLoggingUnregister_EtwUnregister @ 0x14093E7C8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 */

NTSTATUS __fastcall TraceLoggingUnregister_EtwUnregister(__int64 a1)
{
  REGHANDLE v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return EtwUnregister(v2);
}
