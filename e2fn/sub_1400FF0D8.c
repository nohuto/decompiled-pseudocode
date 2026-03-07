__int64 __fastcall sub_1400FF0D8(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // r8
  char v7; // di
  __int64 v8; // rax
  __int64 v9; // rcx
  const wchar_t *v10; // r15
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  __int64 v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rsi
  volatile signed __int32 *v16; // rdi
  unsigned int v18; // ebp
  const wchar_t *v19; // r15
  const wchar_t *v20; // rdi
  const wchar_t *v21; // rax
  __int64 v22; // rax
  const wchar_t *v23; // rax
  volatile signed __int32 *v24; // rsi
  volatile signed __int32 *v25; // rdi
  signed __int32 v26[8]; // [rsp+0h] [rbp-B8h] BYREF
  const wchar_t *v27; // [rsp+30h] [rbp-88h]
  const wchar_t *v28; // [rsp+38h] [rbp-80h]
  unsigned int v29; // [rsp+40h] [rbp-78h]
  _BYTE v30[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v31; // [rsp+58h] [rbp-60h]
  _BYTE v32[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v33; // [rsp+68h] [rbp-50h]
  _BYTE v34[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v35; // [rsp+78h] [rbp-40h]
  _BYTE v36[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v37; // [rsp+88h] [rbp-30h]

  v3 = *(_DWORD *)(a2 + 4);
  v4 = (unsigned __int8)v3;
  v5 = (unsigned int)(a3 + 252);
  v7 = 0;
  if ( (v3 & 7) != 0 )
    v4 = ((unsigned __int8)v3 + 8) & 0xFFFFFFF8;
  v8 = a1[54];
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    v18 = -1073741130;
    if ( *(_DWORD *)(v8 + 20) != 3 )
      v18 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *, __int64))(a1[7] + 16LL))(
                                             a1 + 7,
                                             v36,
                                             v5)
                              + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v34);
      v29 = v18;
      v28 = L"m_mmioAccessor->WriteRegisterSafe(patternSizeOffset, patternSize)";
      v27 = v20;
      v23 = *(const wchar_t **)(*(_QWORD *)v22 + 16LL);
      if ( v23 )
        v19 = v23;
      sub_1400A5E80(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0x2Bu, (__int64)&unk_1400D64E8, v19, v27, v28);
      v7 = 3;
    }
    if ( (v7 & 2) != 0 )
    {
      v24 = v35;
      v7 &= ~2u;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v24 + 8LL))(v24, a2, v5);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    if ( (v7 & 1) != 0 )
    {
      v25 = v37;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v25 + 8LL))(v25, a2, v5);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    sub_14002D834((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(patternSizeOffset, patternSize)", 686, 59, v18);
    return v18;
  }
  else
  {
    *(_DWORD *)(v5 + v9) = v4;
    _InterlockedOr(v26, 0);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 && LOWORD(DeviceObject->DeviceType) )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v32)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v30);
      v29 = v4;
      v14 = *(const wchar_t **)(*(_QWORD *)v13 + 16LL);
      if ( v14 )
        v10 = v14;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        5u,
        0xAu,
        0x2Cu,
        (__int64)&unk_1400D64E8,
        v10,
        v11,
        (const wchar_t *)qword_14014EC70);
      v7 = 12;
    }
    if ( (v7 & 8) != 0 )
    {
      v15 = v31;
      v7 &= ~8u;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v7 & 4) != 0 )
    {
      v16 = v33;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    return 0LL;
  }
}
