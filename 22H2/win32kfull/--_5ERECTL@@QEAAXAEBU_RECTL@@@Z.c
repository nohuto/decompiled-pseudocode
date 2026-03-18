/*
 * XREFs of ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C001E740
 * Callers:
 *     GreSetBoundsRect @ 0x1C00094E4 (GreSetBoundsRect.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C001E5CC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     NtGdiPolyPatBlt @ 0x1C002C310 (NtGdiPolyPatBlt.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00AD910 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C01320C0 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C02C0950 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
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
