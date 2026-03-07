__int64 __fastcall sub_140015018(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  char v4; // di
  __int64 v6; // rbx
  void *v7; // rsi
  void *v8; // rdi
  void *v9; // rax
  void *v10; // rax
  int v11; // edx
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // [rsp+30h] [rbp-38h]
  _BYTE v15[8]; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int32 *v16; // [rsp+48h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-18h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-10h]

  result = *(_QWORD *)(a1 + 360);
  v4 = 0;
  if ( *(_DWORD *)(result + 12) == 1 )
  {
    if ( a3 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 16400LL)
        || a2 > a3 * (unsigned __int64)*(unsigned int *)(a1 + 424) )
      {
        return sub_14001627C(a1);
      }
      else
      {
        return sub_140014EF8(a1);
      }
    }
    else
    {
      result = (__int64)&off_1400DF038;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v6 = a1 + 56;
        v7 = &unk_1400D44E0;
        v8 = &unk_1400D44E0;
        v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                     a1 + 56,
                                     &v17)
                      + 16LL);
        if ( v9 )
          v8 = v9;
        v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 24LL))(v6, v15) + 16LL);
        if ( v10 )
          v7 = v10;
        v14 = (__int64)v8;
        v4 = 3;
        LOBYTE(v11) = 3;
        result = sub_1400A3320(
                   *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
                   v11,
                   10,
                   39,
                   (__int64)&unk_1400D5648,
                   (__int64)v7,
                   v14,
                   (__int64)qword_1400B7720);
      }
      if ( (v4 & 2) != 0 )
      {
        v12 = v16;
        v4 &= ~2u;
        if ( v16 )
        {
          result = (unsigned int)_InterlockedDecrement(v16 + 2);
          if ( !(_DWORD)result )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
            result = (unsigned int)_InterlockedDecrement(v12 + 3);
            if ( !(_DWORD)result )
              result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
          }
        }
      }
      if ( (v4 & 1) != 0 )
      {
        v13 = v18;
        if ( v18 )
        {
          result = (unsigned int)_InterlockedDecrement(v18 + 2);
          if ( !(_DWORD)result )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
            result = (unsigned int)_InterlockedDecrement(v13 + 3);
            if ( !(_DWORD)result )
              return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
      }
    }
  }
  return result;
}
