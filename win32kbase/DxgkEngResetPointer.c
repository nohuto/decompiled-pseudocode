__int64 (*DxgkEngResetPointer())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))IsUserResetPointerSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C02D55B8;
    if ( qword_1C02D55B8 )
      return (__int64 (*)(void))qword_1C02D55B8();
  }
  return result;
}
