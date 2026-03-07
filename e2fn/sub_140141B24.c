void __fastcall sub_140141B24(_QWORD *a1, unsigned int a2)
{
  __int16 v2; // r15
  __int64 *v4; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  __int64 v10; // rax
  const wchar_t *v11; // rdx
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rbx
  void *v17; // rsi
  __int64 v18; // r14
  const wchar_t *v19; // rax
  __int64 v20; // rax
  const wchar_t *v21; // rdx
  const wchar_t *v22; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  const wchar_t *v25; // rsi
  const wchar_t *v26; // rax
  __int64 v27; // rdi
  const wchar_t *v28; // rbx
  const wchar_t *v29; // rax
  void *v30; // r8
  void *v31; // rax
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  const wchar_t *v34; // rsi
  const wchar_t *v35; // rax
  const wchar_t *v36; // rax
  __int64 v37; // rbx
  void *v38; // r9
  void *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  __int64 v42; // rcx
  _BYTE v43[8]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v44; // [rsp+58h] [rbp-A8h]
  _BYTE v45[8]; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v46; // [rsp+68h] [rbp-98h]
  _BYTE v47[8]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v48; // [rsp+78h] [rbp-88h]
  _BYTE v49[8]; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v50; // [rsp+88h] [rbp-78h]
  _BYTE v51[8]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v52; // [rsp+98h] [rbp-68h]
  _BYTE v53[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v54; // [rsp+A8h] [rbp-58h]
  _BYTE v55[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v56; // [rsp+B8h] [rbp-48h]
  _BYTE v57[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v58; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall **v59)(PVOID); // [rsp+D0h] [rbp-30h] BYREF
  PVOID P; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall **v61)(PVOID); // [rsp+F8h] [rbp-8h] BYREF
  PVOID v62; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall **v63)(PVOID); // [rsp+120h] [rbp+20h] BYREF
  PVOID v64; // [rsp+130h] [rbp+30h]
  int v65; // [rsp+190h] [rbp+90h]
  int v66; // [rsp+198h] [rbp+98h]
  int v67; // [rsp+1A0h] [rbp+A0h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxPacketFilter::SetFilters", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v66 = sub_140141770((__int64)a1);
  v8 = (const wchar_t *)&unk_1400D44E0;
  v65 = a2 & v66;
  if ( (a2 & v66) != a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v45)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v43);
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v11 = v12;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        3u,
        0xDu,
        0xCu,
        (__int64)&unk_1400D9EC0,
        v11,
        v8,
        (const wchar_t *)qword_14014EC70);
      v2 = 3;
      v8 = (const wchar_t *)&unk_1400D44E0;
    }
    if ( (v2 & 2) != 0 )
    {
      v13 = v44;
      v2 &= ~2u;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v14 = v46;
      v2 &= ~1u;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v2 |= 0x1Cu;
      v15 = sub_14014148C((__int64)a1, (__int64)&v59, a2);
      v16 = a1 + 7;
      v17 = &unk_1400D44E0;
      if ( *(_QWORD *)(v15 + 16) )
        v17 = *(void **)(v15 + 16);
      v18 = *(_QWORD *)(a1[22] + 16LL);
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v16 + 24LL))(a1 + 7, v47)
                              + 16LL);
      if ( v19 )
        v8 = v19;
      v20 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v16 + 16LL))(a1 + 7, v49);
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = *(const wchar_t **)(*(_QWORD *)v20 + 16LL);
      if ( v22 )
        v21 = v22;
      sub_1400A9338(
        v18,
        3u,
        0xDu,
        0xDu,
        (__int64)&unk_1400D9EC0,
        v8,
        v21,
        (const wchar_t *)qword_14014EC70,
        (__int64)v17);
    }
    if ( (v2 & 0x10) != 0 )
    {
      v23 = v48;
      v2 &= ~0x10u;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v2 & 8) != 0 )
    {
      v24 = v50;
      v2 &= ~8u;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v2 &= ~4u;
      v59 = &off_1400D41D0;
      if ( P )
        ExFreePool(P);
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v2 |= 0xE0u;
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v51)
                              + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = *(_QWORD *)(a1[22] + 16LL);
      v28 = (const wchar_t *)&unk_1400D44E0;
      v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v53)
                              + 16LL);
      if ( v29 )
        v28 = v29;
      v30 = *(void **)(sub_14014148C((__int64)a1, (__int64)&v61, v66) + 16);
      v31 = &unk_1400D44E0;
      if ( v30 )
        v31 = v30;
      sub_1400A9338(
        v27,
        3u,
        0xDu,
        0xEu,
        (__int64)&unk_1400D9EC0,
        v25,
        v28,
        (const wchar_t *)qword_14014EC70,
        (__int64)v31);
    }
    if ( (v2 & 0x80u) != 0 )
    {
      v32 = v52;
      v2 &= ~0x80u;
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
    if ( (v2 & 0x40) != 0 )
    {
      v33 = v54;
      v2 &= ~0x40u;
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
    if ( (v2 & 0x20) != 0 )
    {
      v2 &= ~0x20u;
      v61 = &off_1400D41D0;
      if ( v62 )
        ExFreePool(v62);
    }
    a2 = v65;
    v8 = (const wchar_t *)&unk_1400D44E0;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v2 |= 0x700u;
    v34 = (const wchar_t *)&unk_1400D44E0;
    v35 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v57)
                            + 16LL);
    if ( v35 )
      v34 = v35;
    v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v55)
                            + 16LL);
    if ( v36 )
      v8 = v36;
    v37 = *(_QWORD *)(a1[22] + 16LL);
    v38 = *(void **)(sub_14014148C((__int64)a1, (__int64)&v63, a2) + 16);
    v39 = &unk_1400D44E0;
    if ( v38 )
      v39 = v38;
    sub_1400A9338(v37, 4u, 0xDu, 0xFu, (__int64)&unk_1400D9EC0, v8, v34, (const wchar_t *)qword_14014EC70, (__int64)v39);
  }
  if ( (v2 & 0x400) != 0 )
  {
    v40 = v56;
    v2 &= ~0x400u;
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
  }
  if ( (v2 & 0x200) != 0 )
  {
    v41 = v58;
    v2 &= ~0x200u;
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
        if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
  }
  if ( (v2 & 0x100) != 0 )
  {
    v63 = &off_1400D41D0;
    if ( v64 )
      ExFreePool(v64);
  }
  v42 = a1[45];
  v67 = a2 & 0xF | (a2 >> 1) & 0x10;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v42 + 16LL))(v42, &v67);
  if ( v4 )
  {
    sub_140091BA8(v4);
    ExFreePool(v4);
  }
}
