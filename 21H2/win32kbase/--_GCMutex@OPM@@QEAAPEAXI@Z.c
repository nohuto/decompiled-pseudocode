/*
 * XREFs of ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x1C013BFC4
 * Callers:
 *     ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00C00E0 (--0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x1C013BEE0 (--1CMonitorPDO@OPM@@UEAA@XZ.c)
 * Callees:
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x1C00B2AB0 (--1CMutex@OPM@@QEAA@XZ.c)
 */

void **__fastcall OPM::CMutex::`scalar deleting destructor'(void **P)
{
  OPM::CMutex::~CMutex(P);
  if ( P )
    ExFreePoolWithTag(P, 0x4D504F47u);
  return P;
}
