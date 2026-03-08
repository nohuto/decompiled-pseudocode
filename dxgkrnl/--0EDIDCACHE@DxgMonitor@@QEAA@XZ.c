/*
 * XREFs of ??0EDIDCACHE@DxgMonitor@@QEAA@XZ @ 0x1C01FBDAC
 * Callers:
 *     ?InitializeGlobalCache@EDIDCACHE@DxgMonitor@@SAJXZ @ 0x1C01FBD64 (-InitializeGlobalCache@EDIDCACHE@DxgMonitor@@SAJXZ.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@DxgMonitor@@UEAAXJJE@Z @ 0x1C021A4A0 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@DxgMonitor@@UEAAXJJE@Z.c)
 */

DxgMonitor::EDIDCACHE *__fastcall DxgMonitor::EDIDCACHE::EDIDCACHE(DxgMonitor::EDIDCACHE *this)
{
  *(_QWORD *)this = &DxgMonitor::EDIDCACHE::`vftable';
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_DWORD *)this + 162) = 0;
  *((_DWORD *)this + 163) = 51;
  *((_DWORD *)this + 164) = 1;
  *((_BYTE *)this + 672) = 0;
  memset((char *)this + 8, 0, 0x260uLL);
  *((_DWORD *)this + 166) = -1;
  *((_DWORD *)this + 167) = 1;
  DxgMonitor::EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, 0, 0, 0);
  return this;
}
