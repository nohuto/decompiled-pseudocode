__int64 __fastcall sub_140047C90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  volatile signed __int32 *v6; // rdi
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 56);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  sub_140046AD8(a1, &v8, a2);
  v5 = v8;
  if ( v8 )
    v5 = *(_QWORD *)(v8 + 16);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      v6 = v9;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  return v5;
}
