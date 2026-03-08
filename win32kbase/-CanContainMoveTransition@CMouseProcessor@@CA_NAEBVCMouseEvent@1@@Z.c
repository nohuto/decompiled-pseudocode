/*
 * XREFs of ?CanContainMoveTransition@CMouseProcessor@@CA_NAEBVCMouseEvent@1@@Z @ 0x1C00B9B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMouseProcessor::CanContainMoveTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  return (*(_DWORD *)(*((_QWORD *)a1 + 1) + 112LL) & 0x200) == 0;
}
