bool __fastcall MiDoesPageRequireRetpolineImportFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  bool result; // al
  _WORD *v5; // rdx

  v2 = a2;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 88LL);
  result = 0;
  if ( v3 )
  {
    v5 = *(_WORD **)(v3 + 8 * v2 + 56);
    if ( v5 )
      return *v5 || v5[3] == 3;
  }
  return result;
}
