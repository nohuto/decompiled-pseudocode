void __fastcall sub_14007253C(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v9; // rdi
  __int64 v10; // r9
  volatile signed __int32 *v11; // rdi
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 288);
  v5 = *(_QWORD *)(a1 + 320);
  v6 = v3;
  v7 = a1 + 280;
  if ( v5 )
    v6 = v7;
  while ( v3 != v6 )
  {
    sub_1400A27D4(&v12, v3 + 16);
    v9 = v12;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, a2, a3);
    sub_140003840(a2, a3);
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v9 + 48LL))(v9, a2, a3, v10);
    sub_140003840(a2, a3);
    sub_140003990(a2, a3);
    if ( v13 && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      v11 = v13;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v3 = *(_QWORD *)(v3 + 8);
  }
}
