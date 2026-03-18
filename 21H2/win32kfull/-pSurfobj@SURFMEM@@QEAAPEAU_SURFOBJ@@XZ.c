/*
 * XREFs of ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C026AF64
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFMEM::pSurfobj(SURFMEM *this)
{
  return (struct _SURFOBJ *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
}
