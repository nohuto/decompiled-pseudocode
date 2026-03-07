__int64 __fastcall DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( a2 == D3DKMDT_VPPMT_NOPROTECTION || (unsigned int)(a2 - 2) < 2 )
  {
    if ( DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(this, a2) )
    {
      *((_DWORD *)this + 43) = v2;
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(
        7LL,
        v2,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
      return 3223192326LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogSingleEntry3(
      3LL,
      v2,
      *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
      *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
    return 3223192399LL;
  }
}
