__int64 __fastcall std::uninitialized_move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  signed __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v5 = 0xD37A6F4DE9BD37A7uLL * ((a3 - a2) >> 3);
  if ( v5 < 0 )
  {
    if ( a4[2] >= (unsigned __int64)(0x2C8590B21642C859LL * ((a3 - a2) >> 3)) )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v5 > 0 && a4[1] - a4[2] < (unsigned __int64)v5 )
    goto LABEL_8;
LABEL_3:
  v6 = *a4 + 184LL * a4[2];
  while ( a2 != a3 )
  {
    CScopedClipStack::ClippingScopeState::ClippingScopeState(v6, a2);
    v6 = v8 + v7;
    a2 = v8 + v9;
  }
  result = a1;
  a4[2] = 0xD37A6F4DE9BD37A7uLL * ((v6 - *a4) >> 3);
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
