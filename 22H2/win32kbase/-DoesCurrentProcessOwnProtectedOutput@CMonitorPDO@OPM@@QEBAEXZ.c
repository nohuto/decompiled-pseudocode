/*
 * XREFs of ?DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@OPM@@QEBAEXZ @ 0x1C01514A0
 * Callers:
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C015BC88 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 * Callees:
 *     <none>
 */

bool __fastcall OPM::CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(HANDLE *this)
{
  return PsGetCurrentProcessId() == this[7];
}
