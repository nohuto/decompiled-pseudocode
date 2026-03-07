void __fastcall CConditionalExpression::Reset(CConditionalExpression *this)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  *((_DWORD *)this + 95) = *((_DWORD *)this + 85);
  v1 = (_QWORD *)*((_QWORD *)this + 44);
  for ( i = (_QWORD *)*((_QWORD *)this + 43); i != v1; i += 2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 208LL))(*i);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)i[1] + 208LL))(i[1]);
  }
}
