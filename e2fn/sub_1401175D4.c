__int64 __fastcall sub_1401175D4(__int64 a1, unsigned int a2)
{
  char v2; // di
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v18; // [rsp+50h] [rbp-79h] BYREF
  int v19; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall **v20)(PVOID); // [rsp+60h] [rbp-69h] BYREF
  PVOID P; // [rsp+70h] [rbp-59h]
  __int64 v22; // [rsp+78h] [rbp-51h]
  __int64 v23; // [rsp+80h] [rbp-49h]
  __int64 (__fastcall **v24)(PVOID); // [rsp+88h] [rbp-41h] BYREF
  PVOID v25; // [rsp+98h] [rbp-31h]
  __int64 v26; // [rsp+A0h] [rbp-29h]
  __int64 v27; // [rsp+A8h] [rbp-21h]
  _BYTE v28[8]; // [rsp+B0h] [rbp-19h] BYREF
  volatile signed __int32 *v29; // [rsp+B8h] [rbp-11h]
  _BYTE v30[8]; // [rsp+C0h] [rbp-9h] BYREF
  volatile signed __int32 *v31; // [rsp+C8h] [rbp-1h]
  __int64 (__fastcall **v32[2])(PVOID); // [rsp+D0h] [rbp+7h] BYREF
  PVOID v33; // [rsp+E0h] [rbp+17h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::EvtDeviceD0EntryPostInterruptsEnabled", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v18 = a2 | 0xA00000000LL;
  v19 = 10;
  sub_14007359C((__int64)v32, (__int64)&v18);
  v8 = *(_QWORD *)(a1 + 504);
  v9 = sub_140072D88((__int64)&v24, (__int64)L"Post interrupts enabled (previous state ", v32);
  v10 = sub_14002D2AC((__int64)&v20, v9, (__int64)qword_140158280);
  sub_14006FED0(v8, v10);
  v20 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = &off_1400D41D0;
  if ( v25 )
    ExFreePool(v25);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( v33 )
    ExFreePool(v33);
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = (const wchar_t *)&unk_1400D44E0;
    v12 = (const wchar_t *)&unk_1400D44E0;
    v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v30)
                            + 16LL);
    if ( v13 )
      v12 = v13;
    v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v28)
                            + 16LL);
    if ( v14 )
      v11 = v14;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      8u,
      0x54u,
      (__int64)&unk_1400D91A8,
      v11,
      v12,
      (const wchar_t *)qword_14014EC70);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v15 = v29;
    v2 &= ~2u;
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v16 = v31;
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 200LL))(*(_QWORD *)(a1 + 424));
  if ( v4 )
  {
    sub_14007404C(v4);
    ExFreePool(v4);
  }
  return 0LL;
}
