/*
 * XREFs of ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C026D714
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009CFCC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x1C02BB780 (-CleanupPvtData@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     <none>
 */

SEMOBJ *__fastcall SEMOBJ::SEMOBJ(SEMOBJ *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphore(a2);
  return this;
}
