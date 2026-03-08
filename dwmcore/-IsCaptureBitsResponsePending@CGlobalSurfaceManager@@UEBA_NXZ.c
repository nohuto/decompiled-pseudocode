/*
 * XREFs of ?IsCaptureBitsResponsePending@CGlobalSurfaceManager@@UEBA_NXZ @ 0x1800E2BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalSurfaceManager::IsCaptureBitsResponsePending(CGlobalSurfaceManager *this)
{
  return *((_QWORD *)this + 45) != 0LL;
}
