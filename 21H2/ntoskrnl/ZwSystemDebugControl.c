/*
 * XREFs of ZwSystemDebugControl @ 0x14041F080
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x14084565C (PspLocateSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSystemDebugControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
