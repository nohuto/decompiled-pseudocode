__int64 __fastcall sub_140072470(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = a1 - 200;
  if ( !a3 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(a1 - 200);
  if ( a4 )
  {
    sub_140003990(a2, a3);
    sub_140072394(v4, a2, a3);
    return sub_14007253C(v4, a2, a3);
  }
  return result;
}
