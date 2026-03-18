/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0159DC4
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C015A1C0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     HmgLockEx @ 0x1C0043B50 (HmgLockEx.c)
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, HLSURF a2)
{
  if ( a2 )
    *((_QWORD *)this + 4) = HmgLockEx((unsigned int)a2, 18, 0);
}
