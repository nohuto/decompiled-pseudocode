__int64 __fastcall sub_140012700(__int64 a1, unsigned int a2, _QWORD *a3, __int64 *a4)
{
  char v8; // r14
  __int64 *v9; // rsi
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // r14
  void *v15; // rdi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  unsigned int v22; // r14d
  volatile signed __int32 *v23; // rdi
  volatile signed __int32 *v24; // rdi
  void *v26; // r14
  void *v27; // rdi
  void *v28; // rax
  __int64 v29; // rax
  int v30; // edx
  void *v31; // rax
  volatile signed __int32 *v32; // rdi
  volatile signed __int32 *v33; // rdi
  void *v34; // r14
  void *v35; // rdi
  void *v36; // rax
  __int64 v37; // rax
  int v38; // edx
  void *v39; // rax
  volatile signed __int32 *v40; // rdi
  volatile signed __int32 *v41; // rdi
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdi
  _QWORD v44[2]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v45[2]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v46[8]; // [rsp+70h] [rbp-39h] BYREF
  volatile signed __int32 *v47; // [rsp+78h] [rbp-31h]
  _BYTE v48[8]; // [rsp+80h] [rbp-29h] BYREF
  volatile signed __int32 *v49; // [rsp+88h] [rbp-21h]
  _BYTE v50[8]; // [rsp+90h] [rbp-19h] BYREF
  volatile signed __int32 *v51; // [rsp+98h] [rbp-11h]
  _BYTE v52[8]; // [rsp+A0h] [rbp-9h] BYREF
  volatile signed __int32 *v53; // [rsp+A8h] [rbp-1h]
  _BYTE v54[8]; // [rsp+B0h] [rbp+7h] BYREF
  volatile signed __int32 *v55; // [rsp+B8h] [rbp+Fh]
  _BYTE v56[8]; // [rsp+C0h] [rbp+17h] BYREF
  volatile signed __int32 *v57; // [rsp+C8h] [rbp+1Fh]
  unsigned int v58; // [rsp+110h] [rbp+67h]
  unsigned int v59; // [rsp+110h] [rbp+67h]
  unsigned int v60; // [rsp+110h] [rbp+67h]

  v8 = 0;
  v9 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareTxQueue::Configure", a1 - 496);
      if ( v11 )
        v9 = v11;
    }
  }
  v12 = a4[1];
  a4[1] = 0LL;
  v44[1] = v12;
  v13 = *a4;
  *a4 = 0LL;
  v44[0] = v13;
  v45[1] = a3[1];
  v45[0] = *a3;
  a3[1] = 0LL;
  *a3 = 0LL;
  v58 = sub_1400828B0(a1, a2, v45, v44);
  if ( v58 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v14 = &unk_1400D44E0;
      v15 = &unk_1400D44E0;
      v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                    a1 - 440,
                                    v48)
                     + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v46);
      LOBYTE(v18) = 2;
      v19 = *(void **)(*(_QWORD *)v17 + 16LL);
      if ( v19 )
        v14 = v19;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        v18,
        10,
        10,
        (__int64)&unk_1400D52E0,
        (__int64)v14,
        (__int64)v15,
        (__int64)L"__super::Configure(queueLength, move(txPacketsTransmittedCallback), move(updateCompletePacketsCallback))",
        v58);
      v8 = 3;
    }
    if ( (v8 & 2) != 0 )
    {
      v20 = v47;
      v8 &= ~2u;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v8 & 1) != 0 )
    {
      v21 = v49;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    v22 = v58;
    sub_140011BB4(
      a1 - 496,
      (__int64)L"__super::Configure(queueLength, move(txPacketsTransmittedCallback), move(updateCompletePacketsCallback))",
      73,
      58,
      v58);
LABEL_24:
    if ( v9 )
    {
      sub_14000BFA4(v9);
      ExFreePool(v9);
    }
    v23 = (volatile signed __int32 *)a3[1];
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    v24 = (volatile signed __int32 *)a4[1];
    if ( v24 && _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return v22;
  }
  v59 = sub_1400F5384(a1 - 496);
  if ( v59 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v26 = &unk_1400D44E0;
      v27 = &unk_1400D44E0;
      v28 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                    a1 - 440,
                                    v52)
                     + 16LL);
      if ( v28 )
        v27 = v28;
      v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v50);
      LOBYTE(v30) = 2;
      v31 = *(void **)(*(_QWORD *)v29 + 16LL);
      if ( v31 )
        v26 = v31;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        v30,
        10,
        11,
        (__int64)&unk_1400D52E0,
        (__int64)v26,
        (__int64)v27,
        (__int64)L"AllocateHeadWriteBackCommonBuffer()",
        v59);
      v8 = 12;
    }
    if ( (v8 & 8) != 0 )
    {
      v32 = v51;
      v8 &= ~8u;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    if ( (v8 & 4) != 0 )
    {
      v33 = v53;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    v22 = v59;
    sub_1400113EC(a1 - 496, (__int64)L"AllocateHeadWriteBackCommonBuffer()", 75, 58, v59);
    goto LABEL_24;
  }
  v60 = sub_140012E20(a1 - 496);
  if ( v60 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v34 = &unk_1400D44E0;
      v35 = &unk_1400D44E0;
      v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                    a1 - 440,
                                    v56)
                     + 16LL);
      if ( v36 )
        v35 = v36;
      v37 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v54);
      LOBYTE(v38) = 2;
      v39 = *(void **)(*(_QWORD *)v37 + 16LL);
      if ( v39 )
        v34 = v39;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        v38,
        10,
        12,
        (__int64)&unk_1400D52E0,
        (__int64)v34,
        (__int64)v35,
        (__int64)L"ConfigureHeadWriteBack()",
        v60);
      v8 = 48;
    }
    if ( (v8 & 0x20) != 0 )
    {
      v40 = v55;
      v8 &= ~0x20u;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v8 & 0x10) != 0 )
    {
      v41 = v57;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    v22 = v60;
    sub_140008244(a1 - 496, (__int64)L"ConfigureHeadWriteBack()", 77, 58, v60);
    goto LABEL_24;
  }
  if ( v9 )
  {
    sub_14000BFA4(v9);
    ExFreePool(v9);
  }
  v42 = (volatile signed __int32 *)a3[1];
  if ( v42 )
  {
    if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
      if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
    }
  }
  v43 = (volatile signed __int32 *)a4[1];
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
      if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
    }
  }
  return 0LL;
}
