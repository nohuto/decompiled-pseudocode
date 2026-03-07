bool __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( qword_140C68178 )
  {
    if ( a1 >= qword_140C68178 )
      return a1 < qword_140C68178 + (qword_140C68188 << 30);
  }
  return result;
}
