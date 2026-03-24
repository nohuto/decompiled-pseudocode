/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C013FA54
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C00BA100 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  int v2; // eax

  if ( qword_1C0255300 )
    v2 = qword_1C0255300();
  else
    v2 = -1073741637;
  if ( v2 >= 0 && qword_1C0255308 )
    qword_1C0255308(this);
  PopThreadGuardedObject(this);
}
