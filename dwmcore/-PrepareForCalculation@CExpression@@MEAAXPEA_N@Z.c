void __fastcall CExpression::PrepareForCalculation(CExpression *this, bool *a2)
{
  bool v2; // al

  v2 = !CCommonRegistryData::OptimizeForDirtyExpressions
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 37) > *((_QWORD *)this + 21);
  *a2 = v2;
}
