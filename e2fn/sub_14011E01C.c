__int64 __fastcall sub_14011E01C(_QWORD *a1)
{
  char v1; // di
  _QWORD *v3; // rbx
  const wchar_t *v4; // rsi
  const wchar_t *v5; // rdi
  const wchar_t *v6; // rax
  const wchar_t *v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  _BYTE v11[8]; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v12; // [rsp+58h] [rbp-20h]
  _BYTE v13[8]; // [rsp+60h] [rbp-18h] BYREF
  volatile signed __int32 *v14; // [rsp+68h] [rbp-10h]
  int v15; // [rsp+80h] [rbp+8h] BYREF
  int v16; // [rsp+84h] [rbp+Ch]

  v1 = 0;
  v15 = 8;
  v16 = 3;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v3 = a1 + 7;
    v4 = (const wchar_t *)&unk_1400D44E0;
    v5 = (const wchar_t *)&unk_1400D44E0;
    v6 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v13) + 16LL);
    if ( v6 )
      v5 = v6;
    v7 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v3 + 24LL))(v3, v11) + 16LL);
    if ( v7 )
      v4 = v7;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      4u,
      0xBu,
      0x74u,
      (__int64)&unk_1400D9408,
      v4,
      v5,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v8 = v12;
    v1 &= ~2u;
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v9 = v14;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, int *))qword_1400DFA70)(qword_1400DF700, a1[46], &v15);
}
