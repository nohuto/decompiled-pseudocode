/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB874
 * Callers:
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00CB7C0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C016BF28 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0023630 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  if ( qword_1C029B5E0 && (int)qword_1C029B5E0() >= 0 && qword_1C029B5E8 )
    qword_1C029B5E8(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
