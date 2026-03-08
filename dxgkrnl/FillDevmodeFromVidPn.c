/*
 * XREFs of FillDevmodeFromVidPn @ 0x1C016CAE8
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C016D3D0 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C016C838 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 */

__int64 __fastcall FillDevmodeFromVidPn(__int64 a1, int a2, void *a3)
{
  unsigned int v6; // edi
  __int64 v7; // r9
  const struct DMMVIDPNPRESENTPATH *v8; // rbx
  int v9; // eax
  __int64 v11; // rcx

  v6 = -1073741823;
  memset(a3, 0, 0xF4uLL);
  v7 = *(_QWORD *)(a1 + 120);
  v8 = 0LL;
  if ( v7 != a1 + 120 )
    v8 = (const struct DMMVIDPNPRESENTPATH *)(v7 - 8);
  while ( v8 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v8 + 11) + 24LL) == a2 )
    {
      v9 = VIDPN_MGR::PopulateGdiDisplayModeFromPath(v8, (struct _CDD_DEVMODE *)a3);
      v6 = v9;
      if ( v9 < 0 )
        WdLogSingleEntry2(3LL, v8, v9);
      return v6;
    }
    v11 = *((_QWORD *)v8 + 1);
    v8 = (const struct DMMVIDPNPRESENTPATH *)(v11 - 8);
    if ( v11 == a1 + 120 )
      v8 = 0LL;
  }
  return v6;
}
