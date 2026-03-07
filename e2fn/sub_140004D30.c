_QWORD *__fastcall sub_140004D30(_QWORD *a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int64 (__fastcall **v8)(PVOID); // [rsp+20h] [rbp-48h] BYREF
  __int16 v9; // [rsp+28h] [rbp-40h]
  PVOID P; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]

  v8 = &off_1400D41D0;
  v9 = 0;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  sub_1400011A8(&v8, (__int64)L"Blob", 4uLL);
  v4 = (volatile signed __int32 *)a2[1];
  v5 = *a2;
  a2[1] = 0LL;
  *a2 = 0LL;
  *a1 = &off_1400D4730;
  a1[1] = 0xA5A5A5A5A5000001uLL;
  sub_1400040D4((__int64)(a1 + 2), (__int64)&v8, (__int64)L" Attributes");
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 8LL))(v5, a1 + 7);
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[12] = 0LL;
  a1[14] = 0LL;
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  if ( P )
    ExFreePool(P);
  *a1 = &off_1400D4748;
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return a1;
}
