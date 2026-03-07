const struct CMILMatrix *__fastcall CMatrixStack::GetTopByReference(CMatrixStack *this)
{
  if ( *(_DWORD *)this )
    return (const struct CMILMatrix *)(*((_QWORD *)this + 2) + 68LL * (unsigned int)(*(_DWORD *)this - 1));
  else
    return (const struct CMILMatrix *)&CMILMatrix::Identity;
}
