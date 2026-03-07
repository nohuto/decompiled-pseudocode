__int64 __fastcall sub_140046608(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 *v6; // r14
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  int v12; // edx
  unsigned int v13; // ebx
  int v14; // r9d
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  PVOID v17; // rcx
  __int64 v18; // rdx
  void *v19; // rsi
  void *v20; // r12
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  void *v25; // rax
  volatile signed __int32 *v26; // rdi
  volatile signed __int32 *v27; // rdi
  void *v28; // r12
  void *v29; // rdi
  void *v30; // rax
  __int64 v31; // rax
  int v32; // edx
  void *v33; // rax
  volatile signed __int32 *v34; // rdi
  volatile signed __int32 *v35; // rdi
  __int64 v37; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v38[8]; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v39; // [rsp+68h] [rbp-29h]
  _BYTE v40[8]; // [rsp+70h] [rbp-21h] BYREF
  volatile signed __int32 *v41; // [rsp+78h] [rbp-19h]
  _BYTE v42[8]; // [rsp+80h] [rbp-11h] BYREF
  volatile signed __int32 *v43; // [rsp+88h] [rbp-9h]
  _BYTE v44[8]; // [rsp+90h] [rbp-1h] BYREF
  volatile signed __int32 *v45; // [rsp+98h] [rbp+7h]
  __int64 (__fastcall **v46)(PVOID); // [rsp+A0h] [rbp+Fh] BYREF
  char v47; // [rsp+A8h] [rbp+17h]
  PVOID P; // [rsp+B0h] [rbp+1Fh]
  __int64 v49; // [rsp+B8h] [rbp+27h]
  __int64 v50; // [rsp+C0h] [rbp+2Fh]
  __int64 v51; // [rsp+100h] [rbp+6Fh] BYREF

  v4 = 0;
  LODWORD(v51) = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_1400045E8(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnHardwareMacAddress::ExtractSystemMacAddressFromDsdt",
              a1);
      if ( v11 )
        v6 = v11;
    }
  }
  if ( a2 && a3 >= 0x24 )
  {
    v13 = sub_140045904(a1, a2);
    if ( v13 )
    {
      if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
        goto LABEL_58;
      v14 = 28;
      v15 = *((_QWORD *)::P + 1);
      v16 = L"CheckForDellDsdtSignature(dsdtData)";
LABEL_17:
      LOBYTE(v12) = 4;
      sub_1400A1CFC(*(_QWORD *)(v15 + 16), v12, 14, v14, (__int64)&unk_1400D72A0, (__int64)v16, v13);
      goto LABEL_58;
    }
    _mm_lfence();
    v51 = 0LL;
    v13 = sub_140046C68(a1, a2, a3, &v51);
    if ( v13 )
    {
      if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
        goto LABEL_58;
      _mm_lfence();
      v14 = 29;
      v15 = *((_QWORD *)::P + 1);
      v16 = L"GetDellAuxMacObject(dsdtData, dsdtSize, &auxMacObject)";
      goto LABEL_17;
    }
    v37 = 0LL;
    v13 = sub_1400470DC(a1, v51, &v37);
    if ( v13 )
    {
      if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
        goto LABEL_58;
      v14 = 30;
      v15 = *((_QWORD *)::P + 1);
      v16 = L"GetDellAuxMacString(auxMacObject, &auxMacString)";
      goto LABEL_17;
    }
    v46 = &off_1400D41D0;
    v17 = 0LL;
    v47 = 0;
    P = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v18 = v37 + 9;
    if ( v37 != -9 )
    {
      sub_1400010F4(&v46, v18, 0xCuLL);
      v17 = P;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = &unk_1400D44B8;
      if ( v17 )
        v19 = v17;
      v20 = &unk_1400D44E0;
      v21 = &unk_1400D44E0;
      v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v40)
                     + 16LL);
      if ( v22 )
        v21 = v22;
      v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v38);
      LOBYTE(v24) = 4;
      v25 = *(void **)(*(_QWORD *)v23 + 16LL);
      if ( v25 )
        v20 = v25;
      sub_1400AA8D8(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v24,
        14,
        31,
        (__int64)&unk_1400D72A0,
        (__int64)v20,
        (__int64)v21,
        (__int64)qword_1400B7720,
        (__int64)v19);
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v26 = v39;
      v4 &= ~8u;
      if ( v39 )
      {
        if ( !_InterlockedDecrement(v39 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v26 + 8LL))(v26, v18);
          if ( !_InterlockedDecrement(v26 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v27 = v41;
      if ( v41 )
      {
        if ( !_InterlockedDecrement(v41 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v27 + 8LL))(v27, v18);
          if ( !_InterlockedDecrement(v27 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    sub_140088BC4(a4, &v46);
    v46 = &off_1400D41D0;
    v13 = 0;
    if ( P )
      ExFreePool(P);
    P = 0LL;
    v49 = 0LL;
    v50 = 0LL;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v28 = &unk_1400D44E0;
      v29 = &unk_1400D44E0;
      v30 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v44)
                     + 16LL);
      if ( v30 )
        v29 = v30;
      v31 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v42);
      LOBYTE(v32) = 2;
      v33 = *(void **)(*(_QWORD *)v31 + 16LL);
      if ( v33 )
        v28 = v33;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v32,
        14,
        27,
        (__int64)&unk_1400D72A0,
        (__int64)v28,
        (__int64)v29,
        (__int64)qword_1400B7720);
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v34 = v43;
      v4 &= ~2u;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v35 = v45;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    v13 = -1073741811;
  }
LABEL_58:
  if ( v6 )
  {
    sub_140005840(v6);
    ExFreePool(v6);
  }
  return v13;
}
