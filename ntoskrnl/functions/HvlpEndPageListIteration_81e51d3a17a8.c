__int16 *__fastcall HvlpEndPageListIteration(int a1)
{
  __int16 *result; // rax

  result = &HvlpIteratorCrashdump;
  if ( !a1 )
    result = &HvlpIteratorHibernate;
  *((_QWORD *)result + 1) = 0LL;
  *result = 0;
  *(__int16 *)((char *)result + 3) = 0;
  *((_BYTE *)result + 2) = 0;
  return result;
}
