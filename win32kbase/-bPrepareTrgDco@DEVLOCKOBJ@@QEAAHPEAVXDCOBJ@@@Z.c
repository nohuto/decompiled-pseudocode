/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C001A998
 * Callers:
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C001A23C (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001A958 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DEVLOCKOBJ::bPrepareTrgDco(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !qword_1C02D5890 || (int)qword_1C02D5890() < 0 )
    return 0LL;
  if ( qword_1C02D5898 )
    return (unsigned int)qword_1C02D5898(this, a2);
  return v2;
}
