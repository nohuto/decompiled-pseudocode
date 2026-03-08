/*
 * XREFs of ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800ACAFC
 * Callers:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800ACAB8 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801B5778 (--0-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801DF3E8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  return *((_DWORD *)this + 46) == GetCurrentThreadId();
}
