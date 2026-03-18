/*
 * XREFs of ?FreeResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C000461C
 * Callers:
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018ABF8 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C018AD20 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C01BA410 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGPROCESS::FreeResourceHandleSafe(DXGPROCESS *this, struct DXGRESOURCE *a2)
{
  char *v2; // rsi

  v2 = (char *)this + 248;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 248));
  HMGRTABLE::FreeHandle((DXGPROCESS *)((char *)this + 280), *((_DWORD *)a2 + 4));
  DxgkUnreferenceDxgResource(a2);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
