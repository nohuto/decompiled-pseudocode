/*
 * XREFs of MiSanitizePage @ 0x140335A70
 * Callers:
 *     MiMapContiguousMemory @ 0x140335858 (MiMapContiguousMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748A84 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30D50 (MiMapViewOfPhysicalSection.c)
 *     MiRotateToFrameBuffer @ 0x140A31710 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A31A14 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSanitizePage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8

  v1 = a1;
  v2 = 1LL << ((unsigned __int8)dword_140C65BE0 - 12);
  if ( a1 >= v2 )
    return (v2 - 1) & a1;
  return v1;
}
