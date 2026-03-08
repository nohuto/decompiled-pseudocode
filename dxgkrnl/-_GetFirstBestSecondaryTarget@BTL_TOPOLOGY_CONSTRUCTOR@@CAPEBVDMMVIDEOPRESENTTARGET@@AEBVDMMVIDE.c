/*
 * XREFs of ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C03BDB9C
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03BBFE0 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A1F4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C03BDE40 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGETSET *this)
{
  __int64 v1; // rbx
  const struct DMMVIDEOPRESENTTARGET *v3; // rdi
  const struct DXGADAPTER *v4; // rbp
  const struct DMMVIDEOPRESENTTARGETSET *v5; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  v1 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v1 + 8) )
    WdLogSingleEntry0(1LL);
  v3 = 0LL;
  v4 = *(const struct DXGADAPTER **)(*(_QWORD *)(v1 + 8) + 16LL);
  v5 = (const struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
  if ( v5 != (const struct DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v5 - 8);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
    {
      if ( !*((_DWORD *)i + 23) && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v4, i, v3) )
        v3 = i;
    }
  }
  return v3;
}
