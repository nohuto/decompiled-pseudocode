/*
 * XREFs of ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C01416DC
 * Callers:
 *     ?IsProcessPriorityByClassBackground@ForegroundBoost@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C0141750 (-IsProcessPriorityByClassBackground@ForegroundBoost@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C023C4E8 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 * Callees:
 *     <none>
 */

CAutoPushLockSh *__fastcall CAutoPushLockSh::CAutoPushLockSh(CAutoPushLockSh *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(*(_QWORD *)this, 0LL);
  return this;
}
