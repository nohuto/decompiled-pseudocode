/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C017F36C
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0059910 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C005A1F0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C0185D28 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00453C0 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  if ( qword_1C02D5DE8 && (int)qword_1C02D5DE8() >= 0 && qword_1C02D5DF0 )
    qword_1C02D5DF0(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
