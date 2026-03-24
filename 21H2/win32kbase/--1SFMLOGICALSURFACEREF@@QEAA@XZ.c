/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C013F708
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C00B9E00 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002C080 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  int v2; // eax

  if ( qword_1C0256300 )
    v2 = qword_1C0256300();
  else
    v2 = -1073741637;
  if ( v2 >= 0 && qword_1C0256308 )
    qword_1C0256308(this);
  PopThreadGuardedObject(this);
}
