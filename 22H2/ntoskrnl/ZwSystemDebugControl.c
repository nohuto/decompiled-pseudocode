/*
 * XREFs of ZwSystemDebugControl @ 0x14041E040
 * Callers:
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x140801BE0 (PspLocateSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSystemDebugControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
