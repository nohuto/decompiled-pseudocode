__int64 __fastcall sub_140060AC8(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rdx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf

  v2 = a1[49];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( a1[60] )
    v5 = a1 + 55;
  else
    v5 = (_QWORD *)a1[56];
  sub_1400A440C(a1 + 55, v5, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v7 = *(volatile signed __int32 **)(a2 + 8);
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
