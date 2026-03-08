/*
 * XREFs of DxgkReleaseAdapterOpmI2CSync @ 0x1C02206C8
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0062DD0 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0064210 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0064390 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0168D80 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02204AE (-ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterOpmI2CSync(__int64 a1)
{
  struct _KTHREAD **v3; // rcx

  if ( a1 )
  {
    v3 = *(struct _KTHREAD ***)(a1 + 2920);
    if ( v3 )
    {
      ADAPTER_DISPLAY::ReleaseOpmI2CSync(v3);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, a1, -1073741637LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Call DxgkReleaseAdapterOpmI2CSync on render only DXGADAPTER 0x%I64x, returning 0x%I64x.",
        a1,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      return 3221225659LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
