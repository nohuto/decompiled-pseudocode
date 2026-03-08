/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C02C3208
 * Callers:
 *     NtGdiFillPath @ 0x1C02C3630 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02C37C0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02C38D0 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02C3B60 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02C3CB0 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02C3E50 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02C4020 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02C4190 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( !*((_QWORD *)this + 25) )
    return 0;
  v1 = *((_DWORD *)this + 62);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
