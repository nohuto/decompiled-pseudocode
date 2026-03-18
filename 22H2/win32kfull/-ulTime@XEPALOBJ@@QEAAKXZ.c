/*
 * XREFs of ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00AC154
 * Callers:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FA390 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     GreRealizePalette @ 0x1C02D181C (GreRealizePalette.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C02D8818 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C02D890C (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02D895C (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C02D9100 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x1C02DC87C (-bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulTime(XEPALOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v2 == v1 )
    return *(unsigned int *)(v1 + 32);
  else
    return *(unsigned int *)(v2 + 32);
}
