/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C016F4F0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  if ( qword_1C029B080 && (int)qword_1C029B080() >= 0 && qword_1C029B088 )
    qword_1C029B088(this);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this);
}
