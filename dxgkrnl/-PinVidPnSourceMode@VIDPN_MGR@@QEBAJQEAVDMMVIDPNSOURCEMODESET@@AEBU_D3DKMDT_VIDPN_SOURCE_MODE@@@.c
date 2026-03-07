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
