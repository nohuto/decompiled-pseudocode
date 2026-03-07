__int64 __fastcall sub_14007D834(__int64 a1, _DWORD *a2)
{
  char v2; // di
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ebp
  int v9; // eax
  void *v10; // rsi
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  _BYTE v18[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-30h]
  _BYTE v20[8]; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-20h]

  v2 = 0;
  v4 = *(_QWORD *)(a1 + 368);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 || *(_DWORD *)(v4 + 20) )
  {
    v9 = -1073741661;
    if ( *(_DWORD *)(v4 + 20) == 3 )
      v9 = -1073741130;
    v7 = v9;
  }
  else
  {
    v6 = *(_DWORD *)(*(unsigned int *)(a1 + 360) + v5);
    *a2 = v6;
    if ( v6 != -1 || *(_DWORD *)(*(_QWORD *)(v4 + 8) + 8LL) != -1 )
      return 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 3LL);
    v7 = -1073741130;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v10 = &unk_1400D44E0;
    v11 = &unk_1400D44E0;
    v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                  a1 + 56,
                                  v20)
                   + 16LL);
    if ( v12 )
      v11 = v12;
    v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v18);
    LOBYTE(v14) = 2;
    v15 = *(void **)(*(_QWORD *)v13 + 16LL);
    if ( v15 )
      v10 = v15;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      v14,
      10,
      13,
      (__int64)&unk_1400D9898,
      (__int64)v10,
      (__int64)v11,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe(m_address, value)",
      v7);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v16 = v19;
    v2 &= ~2u;
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v17 = v21;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  sub_14000F3C4(a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(m_address, value)", 100, 114, v7);
  return v7;
}
