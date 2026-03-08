/*
 * XREFs of ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C01A5238
 * Callers:
 *     ?DXGGLOBAL_GetMaximumGlobalAdapterCount@@YAKPEAVDXGGLOBAL@@@Z @ 0x1C0008C50 (-DXGGLOBAL_GetMaximumGlobalAdapterCount@@YAKPEAVDXGGLOBAL@@@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C0009AF0 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1C000A020 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C01B57FC (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x1C01F0460 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C030CE70 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C030FEB4 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumGlobalAdapterCount(DXGGLOBAL *this)
{
  if ( !*((_DWORD *)this + 341) )
  {
    WdLogSingleEntry1(1LL, 2723LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2723LL, 0LL, 0LL, 0LL, 0LL);
  }
  return *((unsigned int *)this + 341);
}
