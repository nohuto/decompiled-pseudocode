const char *__fastcall stdext::exception::what(stdext::exception *this)
{
  const char *result; // rax

  result = "unknown exception";
  if ( *((_QWORD *)this + 1) )
    return (const char *)*((_QWORD *)this + 1);
  return result;
}
