char *__fastcall MmGetWorkingSetLeafSize(__int64 a1, __int64 a2)
{
  char *result; // rax

  if ( (_DWORD)a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm(a1, a2);
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_140C69680 + 320 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 16);
}
