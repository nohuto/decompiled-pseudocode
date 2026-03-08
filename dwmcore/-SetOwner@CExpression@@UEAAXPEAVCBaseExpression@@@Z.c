/*
 * XREFs of ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x1800BC110
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800BC564 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 */

void __fastcall CExpression::SetOwner(CExpression *this, struct CBaseExpression *a2)
{
  if ( *((_QWORD *)this + 56) )
    CExpression::UnregisterSources(this);
  *((_QWORD *)this + 56) = a2;
}
