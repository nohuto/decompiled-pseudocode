/*
 * XREFs of ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C01BD748
 * Callers:
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C01BD6B0 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C01BEE08 (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 *     ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1C01C1020 (-GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?DX_MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C01BD804 (-DX_MD5Final@@YAXPEAUMD5_CTX@@@Z.c)
 *     ?DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C01BD918 (-DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z.c)
 */

__int64 __fastcall CcdCreateMd5Checksum(const unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx

  if ( !a1 || !a3 )
    return 3221225485LL;
  v6 = operator new[](0x68uLL, 0x63644356u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 8) = 1732584193;
    *(_DWORD *)(v6 + 12) = -271733879;
    *(_DWORD *)(v6 + 16) = -1732584194;
    *(_DWORD *)(v6 + 20) = 271733878;
    DX_MD5Update((struct MD5_CTX *)v6, a1, a2);
    DX_MD5Final((struct MD5_CTX *)v7);
    *(_OWORD *)a3 = *(_OWORD *)(v7 + 88);
    operator delete((void *)v7);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    return 3221225495LL;
  }
}
