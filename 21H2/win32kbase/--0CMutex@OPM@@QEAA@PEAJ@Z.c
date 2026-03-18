/*
 * XREFs of ??0CMutex@OPM@@QEAA@PEAJ@Z @ 0x1C005BE20
 * Callers:
 *     ??0COPM@@QEAA@PEAJ@Z @ 0x1C005BC90 (--0COPM@@QEAA@PEAJ@Z.c)
 *     ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00CFA80 (--0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     <none>
 */

OPM::CMutex *__fastcall OPM::CMutex::CMutex(OPM::CMutex *this, int *a2)
{
  struct _KMUTANT *Pool2; // rax

  *(_QWORD *)this = 0LL;
  if ( *a2 >= 0 )
  {
    Pool2 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL);
    *(_QWORD *)this = Pool2;
    if ( Pool2 )
      KeInitializeMutex(Pool2, 0);
    else
      *a2 = -1073741801;
  }
  return this;
}
