/*
 * XREFs of ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C026D154
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009CF3C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

SEMOBJ *__fastcall SEMOBJ::SEMOBJ(SEMOBJ *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphore(a2);
  return this;
}
