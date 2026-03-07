__int64 __fastcall sub_1400714D4(_QWORD *a1, _QWORD *a2, char a3)
{
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  __int64 result; // rax
  signed __int32 v10; // eax
  bool v11; // zf

  if ( *a2 )
  {
    v7 = a1[41];
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( a3 )
      *(_BYTE *)(*a2 + 128LL) = 1;
    if ( a1[40] )
      v8 = a1 + 35;
    else
      v8 = (_QWORD *)a1[36];
    sub_1400A440C(a1 + 35, v8, a2);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    v6 = (volatile signed __int32 *)a2[1];
  }
  else
  {
    v6 = (volatile signed __int32 *)a2[1];
  }
  if ( v6 )
  {
    v10 = _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    v11 = v10 == 1;
    result = (unsigned int)(v10 - 1);
    if ( v11 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return result;
}
