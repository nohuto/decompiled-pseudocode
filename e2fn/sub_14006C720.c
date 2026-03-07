__int64 __fastcall sub_14006C720(_QWORD *a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  char v4; // di
  __int64 *v6; // rbp
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  const wchar_t *v12; // r13
  void *v13; // r13
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rdi
  int v22; // r8d
  void *v23; // r13
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  volatile signed __int32 *v33; // rdi
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdi
  _BYTE v44[8]; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v45; // [rsp+48h] [rbp-60h]
  _BYTE v46[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v47; // [rsp+58h] [rbp-50h]
  _BYTE v48[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v49; // [rsp+68h] [rbp-40h]
  _BYTE v50[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v51; // [rsp+78h] [rbp-30h]

  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterrupt::BindCallbacks", (__int64)a1);
      if ( v11 )
        v6 = v11;
    }
  }
  if ( !*a2 )
  {
    v12 = L"isrCallback";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = &unk_1400D44E0;
      v14 = &unk_1400D44E0;
      v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v44) + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = *(_QWORD *)(a1[22] + 16LL);
      v17 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v46);
      LOBYTE(v18) = 2;
      v19 = *(void **)(*(_QWORD *)v17 + 16LL);
      if ( v19 )
        v13 = v19;
      sub_1400A3320(v16, v18, 4, 14, (__int64)&unk_1400D8D98, (__int64)v14, (__int64)v13, (__int64)L"isrCallback");
      v4 = 3;
      v12 = L"isrCallback";
    }
    if ( (v4 & 2) != 0 )
    {
      v20 = v45;
      v4 &= ~2u;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v21 = v47;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    v22 = 104;
LABEL_42:
    sub_14000B954((int)a1, (__int64)v12, v22, 139);
    if ( v6 )
    {
      sub_14005B5AC(v6);
      ExFreePool(v6);
    }
    v32 = (volatile signed __int32 *)a2[1];
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
    v33 = (volatile signed __int32 *)a3[1];
    if ( v33 && _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
    }
    return 3221225485LL;
  }
  if ( !*a3 )
  {
    v12 = L"dpcCallback";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = &unk_1400D44E0;
      v24 = &unk_1400D44E0;
      v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v48) + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = *(_QWORD *)(a1[22] + 16LL);
      v27 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v50);
      LOBYTE(v28) = 2;
      v29 = *(void **)(*(_QWORD *)v27 + 16LL);
      if ( v29 )
        v23 = v29;
      sub_1400A3320(v26, v28, 4, 15, (__int64)&unk_1400D8D98, (__int64)v24, (__int64)v23, (__int64)L"dpcCallback");
      v4 = 12;
      v12 = L"dpcCallback";
    }
    if ( (v4 & 8) != 0 )
    {
      v30 = v49;
      v4 &= ~8u;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v31 = v51;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    v22 = 105;
    goto LABEL_42;
  }
  v35 = a1[57];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  v36 = a1[47];
  a1[47] = a2[1];
  v37 = *a2;
  a2[1] = v36;
  v38 = a1[46];
  a1[46] = v37;
  *a2 = v38;
  v39 = a1[49];
  a1[49] = a3[1];
  v40 = *a3;
  a3[1] = v39;
  v41 = a1[48];
  a1[48] = v40;
  *a3 = v41;
  if ( a1 + 50 != a4 )
    sub_1400011A8(a1 + 50, a4[2], a4[3]);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 24LL))(v35);
  if ( v6 )
  {
    sub_14005B5AC(v6);
    ExFreePool(v6);
  }
  v42 = (volatile signed __int32 *)a2[1];
  if ( v42 )
  {
    if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
      if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
    }
  }
  v43 = (volatile signed __int32 *)a3[1];
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
      if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
    }
  }
  return 0LL;
}
