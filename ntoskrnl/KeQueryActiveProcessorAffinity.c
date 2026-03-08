/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x14056E1D0
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 1310721;
  memset((void *)(a1 + 8), 0, 0xA0uLL);
  KiCopyAffinityEx(a1, *(_WORD *)(a1 + 2), (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
