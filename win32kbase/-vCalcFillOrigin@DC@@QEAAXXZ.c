/*
 * XREFs of ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0045BC0
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0048B20 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetDCOrg @ 0x1C005ACD0 (GreSetDCOrg.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vCalcFillOrigin(DC *this)
{
  int v2; // r8d
  int v3; // ecx
  int v4; // ecx

  v2 = *((_DWORD *)this + 10) & 1;
  if ( v2 )
    v3 = *((_DWORD *)this + 256);
  else
    v3 = *((_DWORD *)this + 254);
  *((_DWORD *)this + 298) = *((_DWORD *)this + 31) + v3;
  if ( v2 )
    v4 = *((_DWORD *)this + 257);
  else
    v4 = *((_DWORD *)this + 255);
  *((_DWORD *)this + 299) = *((_DWORD *)this + 32) + v4;
}
