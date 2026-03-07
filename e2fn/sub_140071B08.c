__int64 __fastcall sub_140071B08(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // rbx
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-10h]

  v3 = sub_140003C50((__int64)v6, a2);
  sub_1400A3C70(a1 + 160, v3);
  v4 = v7;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return 0LL;
}
