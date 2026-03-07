__int64 __fastcall ExprOp2(__int64 a1, _QWORD *a2)
{
  if ( IsCompatableDSDTRevision() )
    return ExprOp2_64(a1, a2);
  else
    return ExprOp2_32(a1, a2);
}
