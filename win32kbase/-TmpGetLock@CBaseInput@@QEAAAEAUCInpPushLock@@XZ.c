/*
 * XREFs of ?TmpGetLock@CBaseInput@@QEAAAEAUCInpPushLock@@XZ @ 0x1C00CD8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CInpPushLock *__fastcall CBaseInput::TmpGetLock(CBaseInput *this)
{
  return (struct CInpPushLock *)*((_QWORD *)this + 165);
}
