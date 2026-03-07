__int64 __fastcall sub_1400ACEB0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *i; // rdx
  __int64 result; // rax
  _QWORD *v6; // rsi
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf

  for ( i = (_QWORD *)a1[1]; ; i = v6 )
  {
    result = a1[5] ? (__int64)a1 : a1[1];
    if ( i == (_QWORD *)result )
      break;
    v6 = (_QWORD *)i[1];
    if ( i[2] == *a2 )
      sub_1400A2D78(a1, i);
  }
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    v8 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return result;
}
