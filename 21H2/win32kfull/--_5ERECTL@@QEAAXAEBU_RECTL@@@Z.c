/*
 * XREFs of ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C008E834
 * Callers:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     NtGdiPolyPatBlt @ 0x1C0043A80 (NtGdiPolyPatBlt.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C008B0D0 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     GreSetBoundsRect @ 0x1C008BB64 (GreSetBoundsRect.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C010B4E4 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0138B80 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ERECTL::operator|=(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  __int64 result; // rax

  if ( *a2 < *a1 )
    *a1 = *a2;
  v2 = a2[1];
  if ( v2 < a1[1] )
    a1[1] = v2;
  v3 = a2[2];
  if ( v3 > a1[2] )
    a1[2] = v3;
  result = (unsigned int)a2[3];
  if ( (int)result > a1[3] )
    a1[3] = result;
  return result;
}
