struct DXGADAPTER *__fastcall VIDPN_MGR::GetContainingAdapter(VIDPN_MGR *this)
{
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  return *(struct DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL);
}
