_QWORD *__fastcall KiGetAllocatedXSaveArea(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  result = *(_QWORD **)(a1 + 408);
  if ( result )
  {
    v2 = (_QWORD *)*result;
    if ( *result )
    {
      do
      {
        result = v2;
        v2 = (_QWORD *)*v2;
      }
      while ( v2 );
    }
    return (_QWORD *)result[5];
  }
  return result;
}
