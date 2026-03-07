void __fastcall sub_140076290(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 *v4; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned __int64 v8; // r12
  void *v9; // r13
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  void *v13; // rdx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rax
  void *v21; // rsi
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rbx
  __int64 v28; // [rsp+28h] [rbp-90h]
  _BYTE v29[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v30; // [rsp+58h] [rbp-60h]
  _BYTE v31[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v32; // [rsp+68h] [rbp-50h]
  _BYTE v33[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v34; // [rsp+78h] [rbp-40h]
  _BYTE v35[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v36; // [rsp+88h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::DestroyTxQueue", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = (unsigned int)sub_14008AA24(a2);
  v9 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v10 = &unk_1400D44E0;
    v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                  a1 + 56,
                                  v31)
                   + 16LL);
    if ( v11 )
      v10 = v11;
    v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v29);
    v13 = &unk_1400D44E0;
    v14 = *(void **)(*(_QWORD *)v12 + 16LL);
    if ( v14 )
      v13 = v14;
    v28 = (__int64)v13;
    LOBYTE(v13) = 4;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      (_DWORD)v13,
      11,
      63,
      (__int64)&unk_1400D9408,
      v28,
      (__int64)v10,
      (__int64)qword_1400B7720,
      v8);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v15 = v30;
    v2 &= ~2u;
    if ( v30 )
    {
      if ( !_InterlockedDecrement(v30 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( !_InterlockedDecrement(v15 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v16 = v32;
    v2 &= ~1u;
    if ( v32 )
    {
      if ( !_InterlockedDecrement(v32 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( !_InterlockedDecrement(v16 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( v8 < *(_QWORD *)(a1 + 576) && (v17 = *(_QWORD *)(a1 + 568), *(_QWORD *)(16 * v8 + v17) == a2) )
  {
    sub_140097FB0(*(_QWORD *)(v17 + 16 * v8));
    if ( v8 >= *(_QWORD *)(a1 + 576) )
      sub_140072758(100, 0x239u, v8, *(_DWORD *)(a1 + 576), 0);
    v18 = (_QWORD *)(16 * v8 + *(_QWORD *)(a1 + 568));
    v19 = (volatile signed __int32 *)v18[1];
    v18[1] = 0LL;
    *v18 = 0LL;
    if ( v19 )
    {
LABEL_43:
      if ( !_InterlockedDecrement(v19 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( !_InterlockedDecrement(v19 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v2 |= 0xCu;
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 56) + 8LL))(a2 + 56);
      v21 = &unk_1400D44E0;
      if ( *(_QWORD *)(v20 + 16) )
        v21 = *(void **)(v20 + 16);
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v35)
                     + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v33);
      LOBYTE(v25) = 2;
      v26 = *(void **)(*(_QWORD *)v24 + 16LL);
      if ( v26 )
        v9 = v26;
      sub_1400AB1B8(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v25,
        11,
        64,
        (__int64)&unk_1400D9408,
        (__int64)v9,
        (__int64)v22,
        (__int64)qword_1400B7720,
        (__int64)v21,
        v8);
    }
    if ( (v2 & 8) != 0 )
    {
      v27 = v34;
      v2 &= ~8u;
      if ( v34 )
      {
        if ( !_InterlockedDecrement(v34 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( !_InterlockedDecrement(v27 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v19 = v36;
      if ( v36 )
        goto LABEL_43;
    }
  }
  if ( v4 )
  {
    sub_140075108(v4);
    ExFreePool(v4);
  }
}
