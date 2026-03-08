/*
 * XREFs of ??0CMutex@OPM@@QEAA@PEAJ@Z @ 0x1C00C9370
 * Callers:
 *     ??0COPM@@QEAA@PEAJ@Z @ 0x1C00C91E4 (--0COPM@@QEAA@PEAJ@Z.c)
 *     ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C017E770 (--0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     <none>
 */

OPM::CMutex *__fastcall OPM::CMutex::CMutex(OPM::CMutex *this, int *a2)
{
  struct _KMUTANT *Pool2; // rax

  *(_QWORD *)this = 0LL;
  if ( *a2 >= 0 )
  {
    Pool2 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1297108807LL);
    *(_QWORD *)this = Pool2;
    if ( Pool2 )
      KeInitializeMutex(Pool2, 0);
    else
      *a2 = -1073741801;
  }
  return this;
}
