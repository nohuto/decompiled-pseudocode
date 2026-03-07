__int64 __fastcall sub_1401436D8(__int64 a1, char a2, int a3)
{
  char v3; // bp
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  const wchar_t *v9; // rbp
  const wchar_t *v10; // rdi
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rdi
  unsigned int v15; // esi
  __int64 *v16; // rdi
  bool v17; // zf
  __int64 v18; // rbx
  BOOL v19; // esi
  unsigned int v20; // eax
  const wchar_t *v21; // rbp
  const wchar_t *v22; // rdi
  const wchar_t *v23; // rax
  const wchar_t *v24; // rax
  volatile signed __int32 *v25; // rdi
  volatile signed __int32 *v26; // rdi
  const wchar_t *v28; // [rsp+28h] [rbp-90h]
  char v29[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v30; // [rsp+58h] [rbp-60h]
  char v31[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v32; // [rsp+68h] [rbp-50h]
  char v33[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v34; // [rsp+78h] [rbp-40h]
  char v35[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v36; // [rsp+88h] [rbp-30h]
  int v37; // [rsp+D0h] [rbp+18h] BYREF

  v37 = a3;
  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterReceiveScaling::Enable", a1);
      if ( v8 )
        v5 = v8;
    }
  }
  if ( *(_BYTE *)(a1 + 384) )
  {
    v16 = *(__int64 **)(a1 + 368);
    v17 = (a2 & 1) == 0;
    v18 = *v16;
    v19 = !v17;
    v20 = sub_140143B20(a1, &v37);
    v15 = (*(__int64 (__fastcall **)(__int64 *, BOOL, _QWORD))(v18 + 48))(v16, v19, v20);
    if ( v15 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v21 = (const wchar_t *)&unk_1400D44E0;
        v22 = (const wchar_t *)&unk_1400D44E0;
        v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v35)
                                + 16LL);
        if ( v23 )
          v22 = v23;
        v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v33)
                                + 16LL);
        if ( v24 )
          v21 = v24;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xDu,
          0x14u,
          (__int64)&unk_1400D9F78,
          v21,
          v22,
          L"m_hardwareReceiveScaling->Enable(hardwareHashType, hardwareProtocolType)");
        v3 = 12;
      }
      if ( (v3 & 8) != 0 )
      {
        v25 = v34;
        v3 &= ~8u;
        if ( v34 )
        {
          if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
            if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
      }
      if ( (v3 & 4) != 0 )
      {
        v26 = v36;
        if ( v36 )
        {
          if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      sub_14000A548(
        a1,
        (__int64)L"m_hardwareReceiveScaling->Enable(hardwareHashType, hardwareProtocolType)",
        147,
        107,
        v15);
    }
    else
    {
      v15 = 0;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v31)
                              + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v29)
                              + 16LL);
      if ( v12 )
        v9 = v12;
      v28 = v9;
      v3 = 3;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        3u,
        0xDu,
        0x13u,
        (__int64)&unk_1400D9F78,
        v28,
        v10,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v3 & 2) != 0 )
    {
      v13 = v30;
      v3 &= ~2u;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v14 = v32;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    v15 = -1073741637;
  }
  if ( v5 )
  {
    sub_140091BA8(v5);
    ExFreePool(v5);
  }
  return v15;
}
