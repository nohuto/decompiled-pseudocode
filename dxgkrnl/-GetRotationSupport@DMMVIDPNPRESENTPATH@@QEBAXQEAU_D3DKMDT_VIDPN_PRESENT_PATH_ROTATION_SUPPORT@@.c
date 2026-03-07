void __fastcall DMMVIDPNPRESENTPATH::GetRotationSupport(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *const a2)
{
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *a2 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)((char *)this + 124);
}
