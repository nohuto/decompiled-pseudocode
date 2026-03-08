/*
 * XREFs of ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0182988
 * Callers:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01829E4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C03B1DB8 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
        DMMVIDPNTOPOLOGY *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *a2)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v4; // eax
  int v5; // ecx
  int v6; // edx

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *a2 = D3DKMDT_VPPI_UNINITIALIZED;
  v4 = D3DKMDT_VPPI_PRIMARY;
  v5 = *((_DWORD *)this + 49);
  v6 = 1;
  if ( (v5 & 1) == 0 )
    goto LABEL_4;
  do
  {
    ++v4;
    v6 *= 2;
  }
  while ( (v5 & v6) != 0 );
  if ( v4 > 32 )
  {
    WdLogSingleEntry2(2LL, 32LL, this);
    return 3223192404LL;
  }
  else
  {
LABEL_4:
    *a2 = v4;
    return 0LL;
  }
}
