/*
 * XREFs of ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0023CA8
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0069938 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C017A800 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C0218C30 (-RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I.c)
 * Callees:
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0023CF8 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 */

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
