__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C6AC20;
  if ( qword_140C6AC20 )
    return (__int64 (*)(void))qword_140C6AC20();
  return result;
}
