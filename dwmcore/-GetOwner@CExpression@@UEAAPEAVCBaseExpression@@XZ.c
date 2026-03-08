/*
 * XREFs of ?GetOwner@CExpression@@UEAAPEAVCBaseExpression@@XZ @ 0x180106900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CBaseExpression *__fastcall CExpression::GetOwner(CExpression *this)
{
  return (struct CBaseExpression *)*((_QWORD *)this + 56);
}
