_QWORD *__fastcall sub_1400025C4(_QWORD *a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall **v7)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v8; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+48h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp-10h]

  v7 = &off_1400D41D0;
  v8 = 0;
  P = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  sub_1400011A8(&v7, (__int64)L"Build Info", 0xAuLL);
  v6[1] = a2[1];
  v6[0] = *a2;
  a2[1] = 0LL;
  *a2 = 0LL;
  ((void (__fastcall *)(_QWORD *, __int64 (__fastcall ***)(PVOID), _QWORD *, _QWORD))sub_140002700)(a1, &v7, v6, 0LL);
  v7 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D45F8;
  v10 = 0LL;
  v11 = 0LL;
  a1[17] = 0xA5A5A5A5A5000005uLL;
  sub_1400A2868(a1 + 18);
  if ( qword_1400DF6D0 )
    sub_140002D98(qword_1400DF6D0, a1 + 18);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return a1;
}
