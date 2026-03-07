void __fastcall sub_14007C720(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 392);
  v4 = *(_QWORD *)(a1 + 424);
  v5 = v2;
  v6 = a1 + 384;
  if ( v4 )
    v5 = v6;
  while ( v2 != v5 )
  {
    sub_1400A27D4(&v8, v2 + 16);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 16LL))(v8, a2, 0LL);
    sub_140003840(a2, 0);
    if ( v9 && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      v7 = v9;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v2 = *(_QWORD *)(v2 + 8);
  }
}
