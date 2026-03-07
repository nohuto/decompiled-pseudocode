__int64 *__fastcall sub_140003E14(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rdi

  if ( *a3 && *(_QWORD *)(*a3 + 24) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[1] = a3[1];
    a3[1] = 0LL;
    v5 = *a2;
    *a2 = *a3;
    *a3 = v5;
    v6 = (volatile signed __int32 *)a3[1];
  }
  else
  {
    sub_1400A27D4(a2, qword_1400DF6D8 + 16);
    v6 = (volatile signed __int32 *)a3[1];
  }
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return a2;
}
