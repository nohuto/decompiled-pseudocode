__int64 __fastcall CBaseExpression::TryRegisterWithExpressionManager(CBaseExpression *this)
{
  unsigned int v2; // edi
  CExpressionManager *v4; // rsi
  int v5; // eax
  unsigned int v6; // ecx
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF
  CBaseExpression *v8; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 232) & 8) == 0
    && (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 264LL))(this) )
  {
    v4 = *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL);
    v5 = CExpressionManager::RegisterExpression(v4, this);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xF2u, 0LL);
      return v2;
    }
    *((_BYTE *)this + 232) |= 8u;
    if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 304LL))(this) )
      *((_BYTE *)v4 + 448) |= 4u;
    if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this) )
    {
      v8 = this;
      std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * &>(
        (char *)v4 + 528,
        v7,
        &v8);
    }
  }
  return 0;
}
