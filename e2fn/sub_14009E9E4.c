void __fastcall sub_14009E9E4(_QWORD *a1, __int64 a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  void *v9; // rsi
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  void (__fastcall *v19)(__int64, __int64, _QWORD, _QWORD, _QWORD); // rax
  _BYTE v20[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-30h]
  _BYTE v22[8]; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-20h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400736C0(Pool2, (__int64)L"framework::LinkEventViewerLogger::PostLinkUpEvent", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = *(_QWORD *)(a2 + 8);
  switch ( v8 )
  {
    case 10000000LL:
      v18 = 1610874915LL;
      v17 = a1[46];
      if ( *(_DWORD *)(a2 + 16) != 2 )
        v18 = 1610874916LL;
      goto LABEL_33;
    case 100000000LL:
      v17 = a1[46];
      v19 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v17 + 8LL);
      if ( *(_DWORD *)(a2 + 16) == 2 )
        v18 = 1610874913LL;
      else
        v18 = 1610874914LL;
      goto LABEL_34;
    case 1000000000LL:
      v17 = a1[46];
      v18 = 1610874912LL;
      goto LABEL_33;
    case 2500000000LL:
      v17 = a1[46];
      v18 = 1610874937LL;
LABEL_33:
      v19 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v17 + 8LL);
LABEL_34:
      v19(v17, v18, 0LL, 0LL, 0LL);
      goto LABEL_35;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v9 = &unk_1400D44E0;
    v10 = &unk_1400D44E0;
    v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v22) + 16LL);
    if ( v11 )
      v10 = v11;
    v12 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v20);
    LOBYTE(v13) = 2;
    v14 = *(void **)(*(_QWORD *)v12 + 16LL);
    if ( v14 )
      v9 = v14;
    sub_1400AA268(
      *(_QWORD *)(a1[22] + 16LL),
      v13,
      11,
      11,
      (__int64)&unk_1400DA558,
      (__int64)v9,
      (__int64)v10,
      (__int64)qword_1400B7720,
      *(_QWORD *)(a2 + 8));
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v15 = v21;
    v2 &= ~2u;
    if ( v21 )
    {
      if ( !_InterlockedDecrement(v21 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( !_InterlockedDecrement(v15 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v16 = v23;
    if ( v23 )
    {
      if ( !_InterlockedDecrement(v23 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( !_InterlockedDecrement(v16 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
LABEL_35:
  if ( v4 )
  {
    sub_140073F78(v4);
    ExFreePool(v4);
  }
}
