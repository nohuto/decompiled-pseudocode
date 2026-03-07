char __fastcall sub_14003E2F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v6; // di
  volatile signed __int32 *v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a3 + 56);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  sub_140040C5C(a3, &v9, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  v6 = v9;
  if ( v9 )
    v6 = *(_BYTE *)(v9 + 16);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      v7 = v10;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return v6;
}
