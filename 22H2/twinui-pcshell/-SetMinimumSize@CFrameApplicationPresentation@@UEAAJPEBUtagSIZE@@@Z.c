/*
 * XREFs of ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x180070200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::SetMinimumSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  this[19] = *a2;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_d8bb58e9e9a518de6b9a01fbafcee51a___(this, this);
}
