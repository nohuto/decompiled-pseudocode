/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C03AAFC4
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C03ABC4C (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0067758 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00688BC (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01833DC (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a3)
{
  struct DMMVIDPNSOURCEMODESET *v4; // rbx
  unsigned int *NextMode; // rbx

  v4 = (struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 6);
  if ( v4 == (struct DMMVIDPNSOURCEMODESET *const)((char *)a2 + 48) )
    goto LABEL_5;
  NextMode = (unsigned int *)((char *)v4 - 8);
  if ( !NextMode )
    goto LABEL_5;
  while ( !DMMVIDPNSOURCEMODE::operator==((__int64)NextMode, (__int64)a3) )
  {
    NextMode = (unsigned int *)DMMVIDPNSOURCEMODESET::GetNextMode(a2, (const struct DMMVIDPNSOURCEMODE *const)NextMode);
    if ( !NextMode )
      goto LABEL_5;
  }
  if ( NextMode )
  {
    DMMVIDPNSOURCEMODESET::PinMode(a2, NextMode[6]);
    return 0LL;
  }
  else
  {
LABEL_5:
    WdLogSingleEntry2(7LL, this, a3);
    return 3223192394LL;
  }
}
