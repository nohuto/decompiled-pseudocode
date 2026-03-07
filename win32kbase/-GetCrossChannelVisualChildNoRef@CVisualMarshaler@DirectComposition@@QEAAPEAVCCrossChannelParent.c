__int64 __fastcall DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(__int64 a1, unsigned int a2)
{
  _QWORD *i; // rdi

  for ( i = *(_QWORD **)(a1 + 176); i; i = (_QWORD *)i[23] )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*i + 320LL))(i, a2) )
      return (*(__int64 (__fastcall **)(_QWORD *))(*i + 112LL))(i);
  }
  return 0LL;
}
