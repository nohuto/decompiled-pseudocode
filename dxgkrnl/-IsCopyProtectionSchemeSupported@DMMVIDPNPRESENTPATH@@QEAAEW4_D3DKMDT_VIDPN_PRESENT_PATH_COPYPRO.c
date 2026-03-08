/*
 * XREFs of ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0023CF8
 * Callers:
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0023CA8 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C017A800 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a2)
{
  int v2; // eax

  switch ( a2 )
  {
    case D3DKMDT_VPPMT_NOPROTECTION:
      LOBYTE(v2) = *((_BYTE *)this + 168);
      return v2 & 1;
    case D3DKMDT_VPPMT_MACROVISION_APSTRIGGER:
      v2 = *((_DWORD *)this + 42) >> 1;
      return v2 & 1;
    case D3DKMDT_VPPMT_MACROVISION_FULLSUPPORT:
      v2 = *((_DWORD *)this + 42) >> 2;
      return v2 & 1;
  }
  WdLogSingleEntry1(2LL, a2);
  return 0;
}
