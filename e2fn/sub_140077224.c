__int64 __fastcall sub_140077224(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  __int64 *v7; // r14
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  _QWORD *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // r9
  void *v17; // rdi
  void *v18; // rbx
  void *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v28; // [rsp+48h] [rbp-B8h]
  _BYTE v29[8]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v30; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall **v31)(PVOID); // [rsp+60h] [rbp-A0h] BYREF
  char v32; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  _BYTE v36[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v37; // [rsp+90h] [rbp-70h]
  _BYTE v38[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v39; // [rsp+A0h] [rbp-60h]
  _BYTE v40[16]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v41[24]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v42[12]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = 0;
  sub_140070F24(a1, a2, a3, 0, 1000);
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)a1 = &off_1400D4A70;
  v7 = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400D4A98;
  *(_QWORD *)(a1 + 200) = off_1400D4AC8;
  *(_QWORD *)(a1 + 352) = off_1400D4B10;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A5000031uLL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_OWORD *)(a1 + 416) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 432) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 448) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 464) = *(_OWORD *)(a4 + 48);
  *(_QWORD *)(a1 + 480) = *(_QWORD *)(a4 + 64);
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareAbstraction::HardwareAbstraction", a1);
      if ( v9 )
        v7 = v9;
    }
  }
  P = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v31 = &off_1400D41D0;
  v32 = 0;
  sub_1400010F4(&v31, (__int64)"HardwareAbstraction", 0x13uLL);
  sub_1400715AC((_QWORD *)a1, (__int64)&v31, 0x400u, 0xC8u);
  v31 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  sub_1400A27D4(v29, a1 + 96);
  v10 = ExAllocatePool2(64LL, 32LL, 808465761LL);
  if ( v10 && (v11 = sub_1400B1360(v10, v29, a1 + 416)) != 0 && (v12 = *(_QWORD *)(v11 + 16)) != 0 )
  {
    v28 = (volatile signed __int32 *)v11;
    v27 = v12;
  }
  else
  {
    v28 = (volatile signed __int32 *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v27 = 0LL;
  }
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      v13 = v30;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
  if ( v27 )
  {
    v14 = (_QWORD *)sub_1400A27D4(v40, &v27);
    sub_1400714D4((_QWORD *)a1, v14, 0);
    if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
    {
      v15 = (__int64 *)sub_14006CDF0(a1 + 56, (__int64)v41);
      sub_140073EBC((__int64)v42, v15, (__int64)sub_1400770C0);
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v17 = &unk_1400D44E0;
        v18 = &unk_1400D44E0;
        v19 = *(void **)(*(_QWORD *)sub_14005AEB0(a1 + 56, (__int64)v38) + 16LL);
        if ( v19 )
          v18 = v19;
        v20 = sub_14006CDF0(a1 + 56, (__int64)v36);
        LOBYTE(v21) = 4;
        v22 = *(void **)(*(_QWORD *)v20 + 16LL);
        if ( v22 )
          v17 = v22;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v21,
          10,
          11,
          (__int64)&unk_1400D9790,
          (__int64)v17,
          (__int64)v18,
          (__int64)qword_1400B7720);
        v5 = 3;
      }
      if ( (v5 & 2) != 0 )
      {
        v23 = v37;
        v5 &= ~2u;
        if ( v37 )
        {
          if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
      if ( (v5 & 1) != 0 )
      {
        v24 = v39;
        if ( v39 )
        {
          if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
          }
        }
      }
      LOBYTE(v16) = 1;
      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)v27 + 48LL))(v27, v42, 0LL, v16);
      sub_14007450C(v42);
    }
  }
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      v25 = v28;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  if ( v7 )
  {
    sub_14000BFA4(v7);
    ExFreePool(v7);
  }
  return a1;
}
