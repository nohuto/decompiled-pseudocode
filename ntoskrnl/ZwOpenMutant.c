/*
 * XREFs of ZwOpenMutant @ 0x1404148B0
 * Callers:
 *     BiGetCurrentBcdMutantHandle @ 0x14082ED70 (BiGetCurrentBcdMutantHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
