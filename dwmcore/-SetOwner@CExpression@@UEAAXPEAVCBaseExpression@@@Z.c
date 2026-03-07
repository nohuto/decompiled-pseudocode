void __fastcall CExpression::SetOwner(CExpression *this, struct CBaseExpression *a2)
{
  if ( *((_QWORD *)this + 56) )
    CExpression::UnregisterSources(this);
  *((_QWORD *)this + 56) = a2;
}
