/*
 * XREFs of ??1CAutoTGO@@QEAA@XZ @ 0x1C010A45C
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     NtGdiEngCheckAbort @ 0x1C02B1210 (NtGdiEngCheckAbort.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B3A90 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::~CAutoTGO(CAutoTGO *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
