/*
 * XREFs of MiSanitizePage @ 0x14029B170
 * Callers:
 *     MiMapContiguousMemory @ 0x14029AF58 (MiMapContiguousMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9E0 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECE4 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSanitizePage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8

  v1 = a1;
  v2 = 1LL << ((unsigned __int8)dword_140C65760 - 12);
  if ( a1 >= v2 )
    return (v2 - 1) & a1;
  return v1;
}
