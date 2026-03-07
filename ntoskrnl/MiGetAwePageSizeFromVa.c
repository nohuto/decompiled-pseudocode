_QWORD *__fastcall MiGetAwePageSizeFromVa(unsigned __int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // r11
  __int64 v3; // rdx

  result = MiGetAweNode(a1);
  if ( result )
  {
    result = (_QWORD *)MiGetAweViewPageSize(result);
    if ( !result )
    {
      v3 = *(_QWORD *)(v2 + 32);
      if ( (*(_DWORD *)(v3 + 8) & 1) == 0 )
        return *(_QWORD **)(v3 + 16);
    }
  }
  return result;
}
