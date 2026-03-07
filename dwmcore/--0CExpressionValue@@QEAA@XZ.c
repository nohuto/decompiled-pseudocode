CExpressionValue *__fastcall CExpressionValue::CExpressionValue(CExpressionValue *this)
{
  CExpressionValue *result; // rax

  memset_0(this, 0, 0x40uLL);
  *((_QWORD *)this + 8) = 0LL;
  result = this;
  *((_DWORD *)this + 18) = 18;
  *((_BYTE *)this + 76) = 0;
  return result;
}
