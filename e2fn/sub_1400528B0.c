__int64 __fastcall sub_1400528B0(__int64 a1, unsigned int a2)
{
  char v2; // si
  char v3; // r14
  __int64 result; // rax
  __int64 v6; // rbx
  void *v7; // rsi
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rdi
  _BYTE v15[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp-30h]
  _BYTE v17[8]; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v18; // [rsp+68h] [rbp-20h]

  v2 = 0;
  v3 = a2;
  if ( a2 < 0x20 )
  {
    result = 2LL * a2;
    v14 = *(volatile signed __int32 **)(a1 + 16LL * a2 + 432);
    *(_QWORD *)(a1 + 8 * result + 432) = 0LL;
    *(_QWORD *)(a1 + 8 * result + 424) = 0LL;
    if ( !v14 )
      return result;
    goto LABEL_17;
  }
  result = (__int64)&off_1400DF038;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    _mm_lfence();
    v6 = a1 + 56;
    v7 = &unk_1400D44E0;
    v8 = &unk_1400D44E0;
    v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v17)
                  + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 24LL))(v6, v15);
    LOBYTE(v11) = 2;
    v12 = *(void **)(*(_QWORD *)v10 + 16LL);
    if ( v12 )
      v7 = v12;
    result = sub_1400A5E80(
               *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
               v11,
               10,
               19,
               (__int64)&unk_1400D7608,
               (__int64)v7,
               (__int64)v8,
               (__int64)qword_1400B7720,
               v3);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v13 = v16;
    v2 &= ~2u;
    if ( v16 )
    {
      result = (unsigned int)_InterlockedDecrement(v16 + 2);
      if ( !(_DWORD)result )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        result = (unsigned int)_InterlockedDecrement(v13 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v14 = v18;
    if ( v18 )
    {
LABEL_17:
      result = (unsigned int)_InterlockedDecrement(v14 + 2);
      if ( !(_DWORD)result )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        result = (unsigned int)_InterlockedDecrement(v14 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  return result;
}
