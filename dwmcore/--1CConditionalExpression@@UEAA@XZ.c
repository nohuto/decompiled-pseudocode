void __fastcall CConditionalExpression::~CConditionalExpression(CConditionalExpression *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  __int64 *v4; // rcx

  *(_QWORD *)this = &CConditionalExpression::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 44);
  for ( i = (_QWORD *)*((_QWORD *)this + 43); i != v2; i += 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 216LL))(*i, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)i[1] + 216LL))(i[1], 0LL);
  }
  std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
    *((__int64 **)this + 43),
    *((__int64 **)this + 44));
  *((_QWORD *)this + 44) = *((_QWORD *)this + 43);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 46);
  v4 = (__int64 *)*((_QWORD *)this + 43);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
      v4,
      *((__int64 **)this + 44));
    std::_Deallocate<16,0>(
      *((void **)this + 43),
      (*((_QWORD *)this + 45) - *((_QWORD *)this + 43)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
    *((_QWORD *)this + 45) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
