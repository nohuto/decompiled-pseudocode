/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C01457E4
 * Callers:
 *     NtGdiFillPath @ 0x1C01435D0 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C01445D0 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C02AD030 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02AD120 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02AD3B0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AD510 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02AD6B0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02AD7F0 (NtGdiWidenPath.c)
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
