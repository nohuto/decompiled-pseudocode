/*
 * XREFs of ??_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006B000
 * Callers:
 *     ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x1C03C0D68 (-DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ.c)
 * Callees:
 *     ??1EDIDCACHE@DxgMonitor@@UEAA@XZ @ 0x1C03C0D40 (--1EDIDCACHE@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::EDIDCACHE *__fastcall DxgMonitor::EDIDCACHE::`scalar deleting destructor'(
        DxgMonitor::EDIDCACHE *P,
        char a2)
{
  DxgMonitor::EDIDCACHE::~EDIDCACHE(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
