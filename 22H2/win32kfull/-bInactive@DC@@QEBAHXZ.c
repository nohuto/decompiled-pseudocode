/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C02C0988
 * Callers:
 *     NtGdiFillPath @ 0x1C02C0DE0 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02C0F70 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02C1080 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02C1330 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02C1490 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02C1640 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02C1810 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02C1980 (NtGdiWidenPath.c)
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
