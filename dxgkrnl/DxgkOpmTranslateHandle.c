/*
 * XREFs of DxgkOpmTranslateHandle @ 0x1C02BE130
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C02B9644 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmTranslateHandle(DXGADAPTER ***this, _QWORD *a2, void **a3)
{
  DXGADAPTER **v6; // rdx

  if ( !this )
  {
    WdLogSingleEntry1(1LL, 1007LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter != NULL", 1007LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 1008LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phOpmMiniportHandle != NULL", 1008LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    WdLogSingleEntry1(1LL, 1009LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgAdapter->IsCoreResourceSharedOwner()",
      1009LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = this[365];
  if ( v6 )
  {
    if ( v6[49] != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1013LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDxgAdapter->GetDisplayCore()->IsOpmI2CMutexOwner()",
        1013LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return ADAPTER_DISPLAY::OpmTranslateHandle(this[365], a2, a3);
  }
  else
  {
    WdLogSingleEntry2(2LL, this, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Try to call DxgkOpmTranslateHandle on a render only adapter 0x%I64x (Status = 0x%I64x)!",
      (__int64)this,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}
