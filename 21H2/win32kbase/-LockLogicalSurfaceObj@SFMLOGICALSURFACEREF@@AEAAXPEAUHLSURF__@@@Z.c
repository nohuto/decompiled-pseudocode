/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00C18E0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     HmgLockEx @ 0x1C00226A0 (HmgLockEx.c)
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, __int64 a2)
{
  unsigned int v3; // ecx

  if ( a2 )
  {
    v3 = a2;
    LOBYTE(a2) = 18;
    *((_QWORD *)this + 4) = HmgLockEx(v3, a2, 0LL);
  }
}
