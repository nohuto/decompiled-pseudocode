__int64 __fastcall sub_14007144C(__int64 a1, __int64 *a2, volatile signed __int32 *a3)
{
  volatile signed __int32 **v3; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx

  v3 = (volatile signed __int32 **)(a2 + 1);
  if ( !*(_QWORD *)(a1 + 144) )
  {
    a3 = *(volatile signed __int32 **)(a1 + 152);
    *(_QWORD *)(a1 + 152) = *v3;
    result = *a2;
    *v3 = a3;
    v6 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = result;
    *a2 = v6;
  }
  v7 = *v3;
  if ( v7 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64 *, volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 8LL))(
        v7,
        a2,
        a3,
        a1);
      result = (unsigned int)_InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return result;
}
