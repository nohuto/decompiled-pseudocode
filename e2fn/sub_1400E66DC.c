__int64 __fastcall sub_1400E66DC(_QWORD *a1, __int64 a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rbx
  int v19; // esi
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // esi
  _QWORD v26[2]; // [rsp+20h] [rbp-68h] BYREF
  PVOID P; // [rsp+30h] [rbp-58h]
  int v28; // [rsp+48h] [rbp-40h]
  char v29; // [rsp+4Ch] [rbp-3Ch]
  int v30; // [rsp+50h] [rbp-38h]
  int v31; // [rsp+54h] [rbp-34h]

  Pool2 = ExAllocatePool2(64LL, 32LL, 808466790LL);
  if ( !Pool2 || (v5 = sub_1400A26B0(Pool2)) == 0 || (v6 = *(_QWORD *)(v5 + 16)) == 0 )
  {
    v6 = 0LL;
    v5 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v7 = (volatile signed __int32 *)a1[2];
  a1[2] = v5;
  a1[1] = v6;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v8 = ExAllocatePool2(64LL, 32LL, 808476978LL);
  if ( !v8 || (v9 = sub_1400A26B0(v8)) == 0 || (v10 = *(_QWORD *)(v9 + 16)) == 0 )
  {
    v10 = 0LL;
    v9 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v11 = (volatile signed __int32 *)a1[4];
  a1[4] = v9;
  a1[3] = v10;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  v12 = ExAllocatePool2(64LL, 32LL, 808476976LL);
  if ( !v12 || (v13 = sub_1400A26B0(v12)) == 0 || (v14 = *(_QWORD *)(v13 + 16)) == 0 )
  {
    v14 = 0LL;
    v13 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v15 = (volatile signed __int32 *)a1[6];
  a1[6] = v13;
  a1[5] = v14;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v16 = a1[1];
  if ( !v16 || !a1[3] || !a1[5] )
    return 3221225495LL;
  v17 = sub_140002310(v16, a2, 0x400u, 0xC8u);
  v18 = a1[3];
  v19 = v17;
  v20 = sub_140001DC4((__int64)v26, a2, (__int64)"Trace");
  v21 = sub_140002310(v18, v20, 0x400u, 0xC8u) | v19;
  v26[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v22 = a1[5];
  v23 = sub_140001FC4((__int64)v26, a2, (__int64)"SharedCode");
  v24 = sub_140002310(v22, v23, 0x400u, 0xC8u) | v21;
  v26[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  if ( !v24 )
  {
    v30 = 2;
    v31 = 2;
    v28 = 16;
    v29 = 0;
    imp_WppRecorderConfigure();
  }
  return v24;
}
