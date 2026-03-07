void __fastcall sub_14008C7B0(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  char v8; // di
  __int64 v11; // r15
  void *v12; // r14
  __int64 v13; // rbx
  void *v14; // rbp
  void *v15; // rsi
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rax
  int v19; // edx
  void *v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rax
  volatile signed __int32 *v24; // rbx
  _BYTE v25[8]; // [rsp+70h] [rbp-58h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-50h]
  __int64 v27; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v28; // [rsp+88h] [rbp-40h]
  unsigned __int64 v29; // [rsp+E0h] [rbp+18h] BYREF

  v8 = 0;
  if ( a2 <= 1 && !a5 )
  {
    v11 = a6;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = &unk_1400D44E0;
      v13 = a1 + 56;
      v14 = &unk_1400D44E0;
      if ( *(_QWORD *)(a4 + 16) )
        v14 = *(void **)(a4 + 16);
      v15 = &unk_1400D44E0;
      if ( *(_QWORD *)(*a3 + 16LL) )
        v15 = *(void **)(*a3 + 16LL);
      v16 = &unk_1400D44E0;
      v17 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 16LL))(a1 + 56, &v27)
                     + 16LL);
      if ( v17 )
        v16 = v17;
      v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 24LL))(a1 + 56, v25);
      LOBYTE(v19) = 2;
      v20 = *(void **)(*(_QWORD *)v18 + 16LL);
      if ( v20 )
        v12 = v20;
      sub_1400B3D68(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v19,
        8,
        13,
        (__int64)&unk_1400D9A10,
        (__int64)v12,
        (__int64)v16,
        (__int64)qword_1400B7720,
        (__int64)v15,
        (__int64)v14,
        v11,
        a7,
        a8);
      v8 = 3;
    }
    if ( (v8 & 2) != 0 )
    {
      v21 = v26;
      v8 &= ~2u;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( (v8 & 1) != 0 )
    {
      v22 = v28;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    LOBYTE(a4) = 8;
    v23 = *(_QWORD *)(a1 + 352);
    v29 = (unsigned int)a7 | (unsigned __int64)(v11 << 32);
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64 *, __int64, _QWORD))(v23 + 8))(
      a1 + 352,
      a8,
      &v29,
      a4,
      0LL);
  }
  v24 = (volatile signed __int32 *)a3[1];
  if ( v24 && !_InterlockedDecrement(v24 + 2) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    if ( !_InterlockedDecrement(v24 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
  }
}
