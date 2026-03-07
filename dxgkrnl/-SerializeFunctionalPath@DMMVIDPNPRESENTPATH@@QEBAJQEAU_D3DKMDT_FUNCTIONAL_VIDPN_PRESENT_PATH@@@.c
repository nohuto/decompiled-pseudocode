__int64 __fastcall DMMVIDPNPRESENTPATH::SerializeFunctionalPath(
        DMMVIDPNTARGET **this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  DMMVIDPNSOURCEMODE *v4; // rcx
  DMMVIDPNTARGETMODE *v6; // rcx
  struct DMMVIDPNTARGETMODESET *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)this, a2);
  v7 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[11]);
  v4 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v7 + 18);
  if ( !v4 )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)this[11] + 6), this);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v7, 0LL);
    return 1075708679LL;
  }
  DMMVIDPNSOURCEMODE::Serialize(v4, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)&a2[1]);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v7, 0LL);
  v7 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v6 = (DMMVIDPNTARGETMODE *)*((_QWORD *)v7 + 18);
  if ( !v6 )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)this[12] + 6), this);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v7, 0LL);
    return 1075708679LL;
  }
  DMMVIDPNTARGETMODE::Serialize(
    v6,
    (struct _D3DKMDT_VIDPN_TARGET_MODE *const)&a2[1].VisibleFromActiveBROffset.cy,
    (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&a2[1].CopyProtection.OEMCopyProtection[44],
    (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&a2[1].CopyProtection.OEMCopyProtection[48]);
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v7, 0LL);
  *(_WORD *)&a2[1].CopyProtection.OEMCopyProtection[52] = *((_WORD *)this + 54);
  return 0LL;
}
