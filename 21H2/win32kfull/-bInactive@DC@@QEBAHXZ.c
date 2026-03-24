/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C0145D94
 * Callers:
 *     NtGdiFillPath @ 0x1C0143B80 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C0144B80 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C02AD660 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02AD750 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02AD9E0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02ADB40 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02ADCE0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02ADE20 (NtGdiWidenPath.c)
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
