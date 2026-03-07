__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6A7D0;
  if ( qword_140C6A7D0 )
  {
    result = *(__int64 (**)(void))(qword_140C6A7D0 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
