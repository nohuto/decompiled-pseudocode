/*
 * XREFs of ?IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z @ 0x1C00AFD90
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1C00ABE40 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputGlobals::IsTimeFromLastInputEvent(CInputGlobals *this, unsigned int a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  LOBYTE(v2) = (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                - *((_QWORD *)this + 2)) > v2;
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
