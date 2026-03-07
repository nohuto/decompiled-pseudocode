__int64 __fastcall sub_140005F60(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  __int64 result; // rax
  volatile signed __int32 *v6; // rbx

  v2 = a1 + 8;
  if ( *(_QWORD *)(v2 + 40) )
    v4 = v2;
  else
    v4 = *(_QWORD *)(v2 + 8);
  result = sub_1400A440C(v2, v4, a2);
  v6 = *(volatile signed __int32 **)(a2 + 8);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return result;
}
