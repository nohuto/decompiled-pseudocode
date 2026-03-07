__int64 __fastcall sub_140070C84(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 a6,
        char a7,
        int a8)
{
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 v23[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v26; // [rsp+58h] [rbp-30h]
  _BYTE v27[16]; // [rsp+60h] [rbp-28h] BYREF

  v12 = a5[1];
  a5[1] = 0LL;
  v23[1] = v12;
  v13 = *a5;
  *a5 = 0LL;
  v23[0] = v13;
  v24[1] = a4[1];
  v24[0] = *a4;
  a4[1] = 0LL;
  *a4 = 0LL;
  v14 = sub_140003C50((__int64)&v25, a6);
  v15 = (__int64 *)sub_1400A27D4(v27, v14);
  sub_1400705B8((_QWORD *)a1, a2, v24, v23, v15);
  v16 = v26;
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 200) = &off_1400D4540;
  *(_QWORD *)(a1 + 208) = 0xA5A5A5A5A5000003uLL;
  *(_DWORD *)(a1 + 216) = a8;
  *(_QWORD *)a1 = &off_1400D90F8;
  *(_QWORD *)(a1 + 56) = off_1400D9120;
  *(_QWORD *)(a1 + 200) = off_1400D9150;
  *(_QWORD *)(a1 + 224) = 0xA5A5A5A5A5000008uLL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 336) = a3[1];
  v17 = *a3;
  a3[1] = 0LL;
  v18 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 328) = v17;
  *a3 = v18;
  *(_BYTE *)(a1 + 344) = a7;
  v19 = (volatile signed __int32 *)a3[1];
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  v20 = (volatile signed __int32 *)a4[1];
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  v21 = (volatile signed __int32 *)a5[1];
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  return a1;
}
