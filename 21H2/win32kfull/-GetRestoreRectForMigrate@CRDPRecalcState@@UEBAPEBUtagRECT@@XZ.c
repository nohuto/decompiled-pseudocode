/*
 * XREFs of ?GetRestoreRectForMigrate@CRDPRecalcState@@UEBAPEBUtagRECT@@XZ @ 0x1C023AED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tagRECT *__fastcall CRDPRecalcState::GetRestoreRectForMigrate(CRDPRecalcState *this)
{
  return (const struct tagRECT *)(((unsigned __int64)this + 16) & -(__int64)(*((_BYTE *)this + 72) != 0));
}
