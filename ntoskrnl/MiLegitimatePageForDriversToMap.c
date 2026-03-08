/*
 * XREFs of MiLegitimatePageForDriversToMap @ 0x14029F8D0
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1403A1EB0 (MmMapLockedPagesWithReservedMapping.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9E0 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECE4 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14035094C (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

__int64 __fastcall MiLegitimatePageForDriversToMap(__int64 a1)
{
  __int64 v1; // rdx
  bool v2; // zf
  unsigned __int64 v4; // r8
  char v5; // dl
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 < 0 )
    return 0LL;
  if ( (v1 & 0x10000000000LL) != 0 )
  {
    v6 = 0;
    v7 = 0;
    if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(a1, &v6, &v7) == 3 )
      return 3221225496LL;
    v2 = v6 == 6;
  }
  else
  {
    v4 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    if ( v4 < 0xFFFFF68000000000uLL )
      return 0LL;
    if ( v4 > 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
    if ( (v1 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      return 0LL;
    v5 = *(_BYTE *)(a1 + 34);
    if ( (v5 & 0x20) != 0 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && *(_WORD *)(a1 + 32) )
      return 0LL;
    if ( (v5 & 8) != 0 )
      return 0LL;
    v2 = ((*(_QWORD *)a1 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) == 0xFFFF800000000030uLL;
  }
  if ( v2 )
    return 0LL;
  return 3221225496LL;
}
