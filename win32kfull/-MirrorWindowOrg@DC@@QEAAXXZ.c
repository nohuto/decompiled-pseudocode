/*
 * XREFs of ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C02D179C
 * Callers:
 *     NtGdiMirrorWindowOrg @ 0x1C02C66F0 (NtGdiMirrorWindowOrg.c)
 *     GreScaleWindowExtEx @ 0x1C02D22F4 (GreScaleWindowExtEx.c)
 *     GreSetWindowOrg @ 0x1C02D25C4 (GreSetWindowOrg.c)
 *     NtGdiScaleViewportExtEx @ 0x1C02D2910 (NtGdiScaleViewportExtEx.c)
 * Callees:
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C029D2F0 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 */

void __fastcall DC::MirrorWindowOrg(DC *this)
{
  _DWORD *v1; // r10
  int v2; // edx
  __int64 v3; // r10
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 122);
  if ( (v1[27] & 1) != 0 )
  {
    v2 = v1[83];
    if ( v2 )
    {
      v4 = v1[79] * (*((_DWORD *)this + 258) - *((_DWORD *)this + 260) + 1);
      if ( (int)SafeDivide<long,long,long>(v4, v2, &v4) >= 0 )
        *(_DWORD *)(v3 + 308) = v4 + *(_DWORD *)(v3 + 304);
    }
  }
  else
  {
    v1[77] = v1[76];
  }
}
