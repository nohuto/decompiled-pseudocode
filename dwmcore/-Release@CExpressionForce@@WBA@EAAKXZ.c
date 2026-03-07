__int64 __fastcall CExpressionForce::Release(__int64 a1)
{
  return CMILRefCountBaseT<IAccelerator>::Release(a1 - 16);
}
