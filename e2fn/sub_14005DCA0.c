void __fastcall sub_14005DCA0(__int64 a1, __int64 *a2)
{
  char v2; // si
  __int64 *v4; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rdi
  void *v18; // rbp
  void *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  void *v22; // rdi
  __int64 v23; // rax
  int v24; // edx
  void *v25; // rax
  void *v26; // rcx
  volatile signed __int32 *v27; // r14
  volatile signed __int32 *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  volatile signed __int32 *v31; // rbx
  _QWORD v32[2]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v33[8]; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v34; // [rsp+68h] [rbp-60h]
  _BYTE v35[8]; // [rsp+70h] [rbp-58h] BYREF
  volatile signed __int32 *v36; // [rsp+78h] [rbp-50h]
  _BYTE v37[8]; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v38; // [rsp+88h] [rbp-40h]
  _BYTE v39[8]; // [rsp+90h] [rbp-38h] BYREF
  volatile signed __int32 *v40; // [rsp+98h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x20) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005C614(Pool2, (__int64)L"os_services::IoctlDispatcher::UnregisterHandler", a1 - 352);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *a2 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = *a2;
      v18 = &unk_1400D44E0;
      v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                    a1 - 296,
                                    v37)
                     + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17);
      v22 = &unk_1400D44E0;
      if ( *(_QWORD *)(v21 + 16) )
        v22 = *(void **)(v21 + 16);
      v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v39);
      LOBYTE(v24) = 4;
      v25 = *(void **)(*(_QWORD *)v23 + 16LL);
      v26 = &unk_1400D44E0;
      if ( v25 )
        v26 = v25;
      sub_1400A9338(
        v20,
        v24,
        6,
        20,
        (__int64)&unk_1400D7CC0,
        (__int64)v18,
        (__int64)v26,
        (__int64)qword_1400B7720,
        (__int64)v22);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v27 = v38;
      v2 &= ~8u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v28 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    v29 = a2[1];
    a2[1] = 0LL;
    v32[1] = v29;
    v30 = *a2;
    *a2 = 0LL;
    v32[0] = v30;
    sub_1400ACEB0(a1 + 32, v32);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v35)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v33);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v12,
        6,
        19,
        (__int64)&unk_1400D7CC0,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"handler");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v34;
      v2 &= ~2u;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14000B0E4(a1 - 352, (__int64)L"handler", 200, 134);
  }
  if ( v4 )
  {
    sub_14005C8D0(v4);
    ExFreePool(v4);
  }
  v31 = (volatile signed __int32 *)a2[1];
  if ( v31 && !_InterlockedDecrement(v31 + 2) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    if ( !_InterlockedDecrement(v31 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
  }
}
