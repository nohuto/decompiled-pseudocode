/*
 * XREFs of ZwOpenMutant @ 0x14041CC40
 * Callers:
 *     BiGetCurrentBcdMutantHandle @ 0x140807C14 (BiGetCurrentBcdMutantHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
