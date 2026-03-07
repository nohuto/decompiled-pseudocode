_QWORD *__fastcall EditionNotifyShellLanguageHook(__int64 a1, __int64 a2, int a3)
{
  _QWORD *result; // rax

  if ( !a3
    || (result = (_QWORD *)SGDGetUserSessionState(a1), result[1741] != a2)
    && (result = (_QWORD *)gptiRit, a1 != gptiRit) )
  {
    result = *(_QWORD **)(a1 + 464);
    if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(*result + 16LL)) & 0x800) != 0 )
    {
      *(_QWORD *)(SGDGetUserSessionState(*result) + 13928) = a2;
      return (_QWORD *)xxxCallHook(8, 0LL, a2, 10);
    }
  }
  return result;
}
