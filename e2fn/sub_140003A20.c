void __fastcall sub_140003A20(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v11; // rdi
  __int64 v12; // r9
  volatile signed __int32 *v13; // rdi
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 120);
  v7 = v4;
  v8 = a1 + 80;
  if ( v6 )
    v7 = v8;
  while ( v4 != v7 )
  {
    sub_1400A27D4(&v14, v4 + 16);
    v11 = v14;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, a2, a3);
    sub_140003840(a2, a3);
    LOBYTE(v12) = a4;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v11 + 48LL))(v11, a2, a3, v12);
    sub_140003840(a2, a3);
    if ( !a3 )
      sub_140003990(a2, 0);
    if ( v15 && _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      v13 = v15;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v4 = *(_QWORD *)(v4 + 8);
  }
}
