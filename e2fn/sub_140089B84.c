void __fastcall sub_140089B84(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 v7; // rbx
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 *v16; // rax
  _BYTE v17[8]; // [rsp+50h] [rbp-A8h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-A0h]
  _BYTE v19[8]; // [rsp+60h] [rbp-98h] BYREF
  volatile signed __int32 *v20; // [rsp+68h] [rbp-90h]
  _BYTE v21[16]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v22[12]; // [rsp+80h] [rbp-78h] BYREF

  v3 = 0;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    if ( a3 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v7 = a1 + 56;
        v8 = &unk_1400D44E0;
        v9 = &unk_1400D44E0;
        v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v19)
                       + 16LL);
        if ( v10 )
          v9 = v10;
        v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 24LL))(v7, v17);
        LOBYTE(v12) = 4;
        v13 = *(void **)(*(_QWORD *)v11 + 16LL);
        if ( v13 )
          v8 = v13;
        sub_1400A9338(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v12,
          10,
          12,
          (__int64)&unk_1400D9990,
          (__int64)v8,
          (__int64)v9,
          (__int64)qword_1400B7720,
          a3);
        v3 = 3;
      }
      if ( (v3 & 2) != 0 )
      {
        v14 = v18;
        v3 &= ~2u;
        if ( v18 )
        {
          if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
      }
      if ( (v3 & 1) != 0 )
      {
        v15 = v20;
        if ( v20 )
        {
          if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
            if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
      }
    }
    v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v21);
    sub_140073EBC((__int64)v22, v16, (__int64)sub_140089440);
    sub_14008A20C(a1, a2, v22);
    sub_14007450C(v22);
  }
}
