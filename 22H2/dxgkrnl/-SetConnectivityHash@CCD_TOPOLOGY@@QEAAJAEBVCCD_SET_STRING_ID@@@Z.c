/*
 * XREFs of ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C017D484
 * Callers:
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C017F7DC (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01E872C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C03BC348 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03C2254 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C017D78C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C017FD00 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::SetConnectivityHash(CCD_TOPOLOGY *this, const struct CCD_SET_STRING_ID *a2)
{
  struct D3DKMT_HASH *v2; // rbx
  struct _STRING *ConnectedSetStr; // rax

  v2 = (struct D3DKMT_HASH *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(a2);
    return CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v2);
  }
  else
  {
    WdLogSingleEntry3(1LL, this, 0LL, a2);
    return 3221225485LL;
  }
}
