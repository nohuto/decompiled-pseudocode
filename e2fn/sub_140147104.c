__int64 __fastcall sub_140147104(__int64 a1)
{
  char v1; // si
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  const wchar_t *v7; // r13
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  __int64 v10; // rax
  const wchar_t *v11; // r8
  const char *v12; // rdx
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  unsigned int v24; // ebx
  __int64 *v25; // rdi
  __int64 v26; // rbx
  _QWORD *v27; // rax
  int *v28; // rax
  const wchar_t *v29; // rdi
  const wchar_t *v30; // rax
  const wchar_t *v31; // rax
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  void (__fastcall *v35)(__int64, int *); // [rsp+58h] [rbp-79h] BYREF
  int v36; // [rsp+60h] [rbp-71h]
  _DWORD v37[2]; // [rsp+68h] [rbp-69h] BYREF
  const wchar_t *v38; // [rsp+70h] [rbp-61h]
  int v39; // [rsp+78h] [rbp-59h]
  int v40; // [rsp+7Ch] [rbp-55h]
  _BYTE v41[8]; // [rsp+80h] [rbp-51h] BYREF
  volatile signed __int32 *v42; // [rsp+88h] [rbp-49h]
  _BYTE v43[8]; // [rsp+90h] [rbp-41h] BYREF
  volatile signed __int32 *v44; // [rsp+98h] [rbp-39h]
  __int64 v45; // [rsp+A0h] [rbp-31h] BYREF
  volatile signed __int32 *v46; // [rsp+A8h] [rbp-29h]
  _BYTE v47[8]; // [rsp+B0h] [rbp-21h] BYREF
  volatile signed __int32 *v48; // [rsp+B8h] [rbp-19h]
  _BYTE v49[8]; // [rsp+C0h] [rbp-11h] BYREF
  volatile signed __int32 *v50; // [rsp+C8h] [rbp-9h]
  _BYTE v51[8]; // [rsp+D0h] [rbp-1h] BYREF
  volatile signed __int32 *v52; // [rsp+D8h] [rbp+7h]
  _BYTE v53[8]; // [rsp+E0h] [rbp+Fh] BYREF
  volatile signed __int32 *v54; // [rsp+E8h] [rbp+17h]
  _QWORD v55[3]; // [rsp+F0h] [rbp+1Fh] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::InitializeSegmentationOffload", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v37[1] = 0;
  v6 = *(_QWORD *)(a1 + 360);
  v38 = L"ms_packet_gso";
  v37[0] = 24;
  v39 = 1;
  v40 = 1;
  ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64))qword_1400DF938)(qword_1400DF700, v6, v37, a1 + 688);
  v7 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v8 = (const wchar_t *)&unk_1400D44E0;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                          a1 + 56,
                                          v43)
                           + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v41);
    v11 = (const wchar_t *)&unk_1400D44E0;
    v12 = "disabled";
    v13 = *(const wchar_t **)(*(_QWORD *)v10 + 16LL);
    if ( v13 )
      v11 = v13;
    if ( *(_BYTE *)(a1 + 720) )
      v12 = "enabled";
    sub_1400AA8D8(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xCu,
      0x1Eu,
      (__int64)&unk_1400DA108,
      v11,
      v8,
      (const wchar_t *)qword_14014EC70,
      v12);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v14 = v42;
    v1 &= ~2u;
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v15 = v44;
    v1 &= ~1u;
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  v36 = 0;
  v35 = sub_1400984B0;
  v16 = sub_14006D650(&v45, (_QWORD *)a1, (__int64)&v35);
  sub_1400A3C70((__int64 *)(a1 + 528), v16);
  v17 = v46;
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  if ( *(_QWORD *)(a1 + 528) )
  {
    if ( *(_BYTE *)(a1 + 720) )
    {
      v25 = *(__int64 **)(a1 + 512);
      v26 = *v25;
      v27 = sub_1400A27D4(v55, (__int64 *)(a1 + 528));
      (*(void (__fastcall **)(__int64 *, _QWORD *))(v26 + 16))(v25, v27);
      v28 = (int *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 512) + 8LL))(*(_QWORD *)(a1 + 512));
      sub_1400984B0(a1, v28);
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v1 |= 0x30u;
        v29 = (const wchar_t *)&unk_1400D44E0;
        v30 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v53)
                                + 16LL);
        if ( v30 )
          v29 = v30;
        v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v51)
                                + 16LL);
        if ( v31 )
          v7 = v31;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          4u,
          0xCu,
          0x20u,
          (__int64)&unk_1400DA108,
          v7,
          v29,
          (const wchar_t *)qword_14014EC70);
      }
      if ( (v1 & 0x20) != 0 )
      {
        v32 = v52;
        v1 &= ~0x20u;
        if ( v52 )
        {
          if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v33 = v54;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
      }
    }
    v24 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 |= 0xCu;
      v18 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v47);
      v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v49);
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = *(const wchar_t **)(*(_QWORD *)v19 + 16LL);
      if ( v21 )
        v20 = v21;
      if ( *(_QWORD *)(v18 + 16) )
        v7 = *(const wchar_t **)(v18 + 16);
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xCu,
        0x1Fu,
        (__int64)&unk_1400DA108,
        v7,
        v20,
        L"m_segmentationOffloadConfigurationChangedCallback");
    }
    if ( (v1 & 8) != 0 )
    {
      v22 = v48;
      v1 &= ~8u;
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
    if ( (v1 & 4) != 0 )
    {
      v23 = v50;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_14008F2F4(a1, (__int64)L"m_segmentationOffloadConfigurationChangedCallback", 841, 112);
    v24 = -1073741801;
  }
  if ( v3 )
  {
    sub_1400953B8(v3);
    ExFreePool(v3);
  }
  return v24;
}
