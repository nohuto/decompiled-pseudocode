__int64 __fastcall std::move_backward<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  _QWORD *v5; // r14
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v5 = a4 + 2;
  v7 = a3;
  v8 = 0x3333333333333333LL * (a3 - a2);
  if ( v8 < 0 )
  {
    if ( *v5 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v5 < (unsigned __int64)v8 )
    goto LABEL_8;
LABEL_3:
  v10 = *a4;
  v11 = *a4 + 40LL * *v5;
  while ( a2 != v7 )
  {
    v11 -= 40LL;
    v7 -= 5;
    CScopedClipStack::CpuClipStackState::operator=(v11, v7);
  }
  result = a1;
  *v5 = 0xCCCCCCCCCCCCCCCDuLL * ((v11 - v10) >> 3);
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
