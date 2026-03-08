/*
 * XREFs of ZwWriteVirtualMemory @ 0x140412A50
 * Callers:
 *     SepAdtCopyToLsaSharedMemory @ 0x1409CED84 (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWriteVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
