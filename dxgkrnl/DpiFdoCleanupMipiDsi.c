void (__fastcall *__fastcall DpiFdoCleanupMipiDsi(__int64 a1))(_QWORD)
{
  void (__fastcall *result)(_QWORD); // rax

  result = *(void (__fastcall **)(_QWORD))(a1 + 5496);
  if ( result )
  {
    result(*(_QWORD *)(a1 + 5480));
    result = 0LL;
    *(_OWORD *)(a1 + 5472) = 0LL;
    *(_OWORD *)(a1 + 5488) = 0LL;
    *(_OWORD *)(a1 + 5504) = 0LL;
    *(_QWORD *)(a1 + 5520) = 0LL;
  }
  return result;
}
