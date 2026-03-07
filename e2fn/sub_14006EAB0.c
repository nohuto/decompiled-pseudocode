__int64 __fastcall sub_14006EAB0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  PVOID v5; // rbx
  PVOID v6; // rdx
  PVOID v7; // rbx
  PVOID v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // r15
  volatile signed __int32 *v12; // rsi
  __int64 v13; // r8
  volatile signed __int32 *v14; // r14
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int128 v18; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall **v19)(PVOID); // [rsp+30h] [rbp-50h] BYREF
  __int16 v20; // [rsp+38h] [rbp-48h]
  PVOID P; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall **v24)(PVOID); // [rsp+58h] [rbp-28h] BYREF
  __int16 v25; // [rsp+60h] [rbp-20h]
  PVOID v26; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+78h] [rbp-8h]

  v2 = a1[46];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( a1[53] )
  {
    v24 = &off_1400D41D0;
    v25 = 0;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    sub_1400011A8(&v24, (__int64)L"Acquired power resources:\n\n", 0x1BuLL);
    v7 = v26;
    v8 = &unk_1400D44E0;
    if ( v26 )
      v8 = v26;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v27);
    if ( v7 )
      ExFreePool(v7);
    v10 = a1[49];
    v11 = (_QWORD *)v10;
    if ( a1[53] )
      v11 = a1 + 48;
    while ( (_QWORD *)v10 != v11 )
    {
      v12 = *(volatile signed __int32 **)(v10 + 24);
      v18 = *(_OWORD *)(v10 + 16);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v10 + 16);
        _InterlockedIncrement(v12 + 3);
        v14 = v12 + 2;
        v15 = *((_DWORD *)v12 + 2);
        while ( v15 )
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange(v14, v15 + 1, v15);
          if ( v16 == v15 )
          {
            if ( (_QWORD)v18 )
            {
              sub_14006F80C(v18, a2);
              sub_140003840(a2, 0);
            }
            if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
              if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
            }
            break;
          }
        }
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v9, v13);
      }
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  else
  {
    v19 = &off_1400D41D0;
    v20 = 0;
    P = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    sub_1400011A8(&v19, (__int64)L"No power resources acquired\n", 0x1CuLL);
    v5 = P;
    v6 = &unk_1400D44E0;
    if ( P )
      v6 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v22);
    if ( v5 )
      ExFreePool(v5);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
}
