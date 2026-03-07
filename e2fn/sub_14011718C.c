__int64 __fastcall sub_14011718C(__int64 a1, unsigned int a2)
{
  char v2; // si
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r15d
  const wchar_t *v17; // rsi
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall **v29)(PVOID); // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall **v33)(PVOID); // [rsp+98h] [rbp-68h] BYREF
  PVOID v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall **v37)(PVOID); // [rsp+C0h] [rbp-40h] BYREF
  PVOID v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  __int64 v40; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall **v41)(PVOID); // [rsp+E8h] [rbp-18h] BYREF
  PVOID v42; // [rsp+F8h] [rbp-8h]
  __int64 v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  _BYTE v45[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v46; // [rsp+118h] [rbp+18h]
  _BYTE v47[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v48; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall **v49[2])(PVOID); // [rsp+130h] [rbp+30h] BYREF
  PVOID v50; // [rsp+140h] [rbp+40h]
  __int64 (__fastcall **v51)(PVOID); // [rsp+158h] [rbp+58h] BYREF
  PVOID v52; // [rsp+168h] [rbp+68h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::EvtDeviceD0Entry", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 392) + 48LL))(*(_QWORD *)(a1 + 392), &v27);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
  v25 = a2 | 0xA00000000LL;
  v9 = v8;
  v26 = 10;
  sub_14007359C((__int64)v49, (__int64)&v25);
  v10 = *(_QWORD *)(a1 + 504);
  v11 = sub_1400748E4((__int64)&v51, v9);
  v12 = sub_140072B74((__int64)&v41, (__int64)L"D0 Entry (previous state ", v49);
  v13 = sub_140072F9C((__int64)&v37, v12, (__int64)L", power action = ");
  v14 = sub_140053644((__int64)&v33, v13, v11);
  v15 = sub_14002D2AC((__int64)&v29, v14, (__int64)qword_140158280);
  sub_14006FED0(v10, v15);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = &off_1400D41D0;
  if ( v34 )
    ExFreePool(v34);
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = &off_1400D41D0;
  if ( v38 )
    ExFreePool(v38);
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = &off_1400D41D0;
  if ( v42 )
    ExFreePool(v42);
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( v50 )
    ExFreePool(v50);
  v51 = &off_1400D41D0;
  if ( v52 )
    ExFreePool(v52);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 520) + 32LL))(
          *(_QWORD *)(a1 + 520),
          a2,
          v9);
  if ( v16 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v47)
                              + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v45)
                              + 16LL);
      if ( v20 )
        v17 = v20;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        8u,
        0x52u,
        (__int64)&unk_1400D91A8,
        v17,
        v18,
        L"m_d0EntryFlows->EvtD0Entry(previousState, powerAction)");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v21 = v46;
      v2 &= ~2u;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v22 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    sub_1400143F0(a1, (__int64)L"m_d0EntryFlows->EvtD0Entry(previousState, powerAction)", 644, 74, v16);
  }
  else
  {
    v16 = 0;
  }
  v23 = v28;
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  if ( v4 )
  {
    sub_14007404C(v4);
    ExFreePool(v4);
  }
  return v16;
}
