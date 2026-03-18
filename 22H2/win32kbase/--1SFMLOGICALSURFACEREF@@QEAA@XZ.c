/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0159D78
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C015A1C0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  if ( qword_1C0294710 && (int)qword_1C0294710() >= 0 && qword_1C0294718 )
    qword_1C0294718(this);
  PopThreadGuardedObject(this);
}
