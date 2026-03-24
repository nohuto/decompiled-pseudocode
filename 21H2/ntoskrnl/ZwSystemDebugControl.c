/*
 * XREFs of ZwSystemDebugControl @ 0x1403FDB80
 * Callers:
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x140798B78 (PspLocateSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSystemDebugControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
