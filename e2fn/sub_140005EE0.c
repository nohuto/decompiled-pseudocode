__int64 __fastcall sub_140005EE0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 result; // rax
  volatile signed __int32 *v6; // rbx

  if ( *a2 )
  {
    v3 = a1 + 16;
    if ( *(_QWORD *)(v3 + 40) )
      v4 = v3;
    else
      v4 = *(_QWORD *)(v3 + 8);
    result = sub_1400A440C(v3, v4, a2);
  }
  v6 = (volatile signed __int32 *)a2[1];
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
