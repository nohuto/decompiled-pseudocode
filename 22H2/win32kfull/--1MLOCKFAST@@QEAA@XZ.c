/*
 * XREFs of ??1MLOCKFAST@@QEAA@XZ @ 0x1C026D1E0
 * Callers:
 *     NtGdiMakeObjectUnXferable @ 0x1C011C550 (NtGdiMakeObjectUnXferable.c)
 * Callees:
 *     <none>
 */

void __fastcall MLOCKFAST::~MLOCKFAST(MLOCKFAST *this)
{
  GreReleaseHmgrSemaphore(this);
}
