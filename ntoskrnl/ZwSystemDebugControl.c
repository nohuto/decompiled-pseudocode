/*
 * XREFs of ZwSystemDebugControl @ 0x140415CB0
 * Callers:
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x14084AE64 (PspLocateSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSystemDebugControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
