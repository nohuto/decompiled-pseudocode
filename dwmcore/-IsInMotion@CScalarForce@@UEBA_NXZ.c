bool __fastcall CScalarForce::IsInMotion(CScalarForce *this)
{
  return CScalarForceEvaluator::IsInMotion((CScalarForce *)((char *)this + 16));
}
