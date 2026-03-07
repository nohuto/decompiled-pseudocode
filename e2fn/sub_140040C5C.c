_QWORD *__fastcall sub_140040C5C(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  volatile signed __int32 *v11; // rdi
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = v3;
  v7 = a1 + 72;
  if ( v5 )
    v6 = v7;
  while ( 1 )
  {
    if ( v3 == v6 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      return a2;
    }
    sub_1400A27D4(&v13, v3 + 16);
    v9 = v13;
    v10 = *(_QWORD *)(v13 + 48);
    if ( *(_QWORD *)(a3 + 24) == v10
      && !(unsigned int)sub_1400B6E50(*(_QWORD *)(v13 + 40), *(_QWORD *)(a3 + 16), 2 * v10) )
    {
      break;
    }
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        v11 = v14;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    v3 = *(_QWORD *)(v3 + 8);
  }
  a2[1] = v14;
  *a2 = v9;
  return a2;
}
