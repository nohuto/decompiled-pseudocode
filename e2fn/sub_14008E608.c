void __fastcall sub_14008E608(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char v3; // bl
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  int v8; // esi
  __int64 v9; // rax
  void *v10; // r15
  void *v11; // r14
  __int64 v12; // rax
  void *v13; // rsi
  void *v14; // rdi
  void *v15; // rax
  void *v16; // rax
  unsigned __int64 v17; // rdx
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  int v20; // edi
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall **v27)(PVOID); // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+90h] [rbp-70h]
  _BYTE v31[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v32; // [rsp+A0h] [rbp-60h]
  _BYTE v33[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v34; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall **v35)(PVOID); // [rsp+B8h] [rbp-48h] BYREF
  PVOID v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-18h]
  __int64 v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  int v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+104h] [rbp+4h]

  v2 = a1;
  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterLink::IndicateLinkStateConnected", v2);
      if ( v7 )
        v5 = v7;
    }
  }
  HIDWORD(v37) = 0;
  v8 = 4;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v9 = sub_14008EFE4(&v35, *(unsigned int *)(a2 + 20));
    v10 = &unk_1400D44E0;
    v11 = &unk_1400D44E0;
    if ( *(_QWORD *)(v9 + 16) )
      v11 = *(void **)(v9 + 16);
    v12 = sub_1400800E4((__int64)&v27, *(_DWORD *)(a2 + 16));
    v13 = &unk_1400D44E0;
    if ( *(_QWORD *)(v12 + 16) )
      v13 = *(void **)(v12 + 16);
    v14 = &unk_1400D44E0;
    v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                  a1 + 56,
                                  v33)
                   + 16LL);
    if ( v15 )
      v14 = v15;
    v25 = (__int64)v13;
    v8 = 4;
    v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                  a1 + 56,
                                  v31)
                   + 16LL);
    if ( v16 )
      v10 = v16;
    v17 = *(_QWORD *)(a2 + 8) / 0xF4240uLL;
    LOBYTE(v17) = 4;
    sub_1400B4638(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      v17,
      10,
      20,
      (__int64)&unk_1400D9BD0,
      (__int64)v10,
      (__int64)v14,
      (__int64)qword_1400B7720,
      *(_QWORD *)(a2 + 8) / 0xF4240uLL,
      v25,
      (__int64)v11);
    v2 = a1;
    v3 = 15;
  }
  if ( (v3 & 8) != 0 )
  {
    v18 = v32;
    v3 &= ~8u;
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( (v3 & 4) != 0 )
  {
    v19 = v34;
    v3 &= ~4u;
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  v20 = 2;
  if ( (v3 & 2) != 0 )
  {
    v3 &= ~2u;
    v27 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    P = 0LL;
    v29 = 0LL;
    v30 = 0LL;
  }
  if ( (v3 & 1) != 0 )
  {
    v35 = &off_1400D41D0;
    if ( v36 )
      ExFreePool(v36);
  }
  v21 = *(_DWORD *)(a2 + 24);
  v22 = v21 & 1 | 2;
  if ( (v21 & 2) == 0 )
    v22 = *(_DWORD *)(a2 + 24) & 1;
  v23 = v22 | 8;
  if ( (v21 & 4) == 0 )
    v23 = v22;
  if ( (v21 & 8) != 0 )
    v23 |= 8u;
  switch ( *(_DWORD *)(a2 + 20) )
  {
    case 2:
      v8 = 1;
      break;
    case 3:
      v8 = 2;
      break;
    case 4:
      v8 = 3;
      break;
  }
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v20 = 1;
  }
  else if ( *(_DWORD *)(a2 + 16) != 2 )
  {
    v20 = 0;
  }
  v24 = *(_QWORD *)(v2 + 368);
  v38 = *(_QWORD *)(a2 + 8);
  v39 = v38;
  v43 = v23;
  v37 = 40LL;
  v40 = 1;
  v41 = v20;
  v42 = v8;
  ((void (__fastcall *)(__int64, __int64, __int64 *))qword_1400DF798)(qword_1400DF700, v24, &v37);
  sub_14009E920(*(_QWORD *)(v2 + 392), a2);
  if ( v5 )
  {
    sub_140075108(v5);
    ExFreePool(v5);
  }
}
