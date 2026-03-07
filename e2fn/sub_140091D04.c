void __fastcall sub_140091D04(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v5; // r14d
  __int64 *v6; // r12
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  unsigned __int64 v9; // rdi
  void *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  void *v14; // r8
  void *v15; // rdx
  void *v16; // rax
  void *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  void *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  void *v23; // rdx
  void *v24; // rax
  __int64 v25; // rsi
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  void *v28; // rsi
  void *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  int v32; // edx
  void *v33; // rax
  void *v34; // rcx
  volatile signed __int32 *v35; // rbx
  volatile signed __int32 *v36; // rbx
  unsigned __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rsi
  void *v40; // rdi
  void *v41; // rax
  void *v42; // rbx
  void *v43; // rax
  void *v44; // rdx
  void *v45; // rax
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  __int64 v48; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v50; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 *v54; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v55; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall **v56)(PVOID); // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall ***v57)(_QWORD, __int64); // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h]
  char v60[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v61; // [rsp+A0h] [rbp-60h]
  char v62[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v63; // [rsp+B0h] [rbp-50h]
  char v64[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v65; // [rsp+C0h] [rbp-40h]
  char v66[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v67; // [rsp+D0h] [rbp-30h]
  char v68[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v69; // [rsp+E0h] [rbp-20h]
  char v70[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v71; // [rsp+F0h] [rbp-10h]
  char v72[8]; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v73; // [rsp+100h] [rbp+0h]
  __int64 (__fastcall **v74)(PVOID); // [rsp+108h] [rbp+8h] BYREF
  PVOID P; // [rsp+118h] [rbp+18h]
  _QWORD v76[2]; // [rsp+130h] [rbp+30h] BYREF

  v5 = 0;
  v54 = 0LL;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxPacketFilter::SetMulticastAddressList", a1);
      if ( v8 )
        v6 = v8;
      v54 = v6;
    }
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  v51 = v9;
  v10 = &unk_1400D44E0;
  if ( a2 > v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v11 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v62);
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v60);
      v14 = &unk_1400D44E0;
      v15 = &unk_1400D44E0;
      v16 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v16 )
        v14 = v16;
      v17 = *(void **)(v11 + 16);
      v9 = v51;
      if ( v17 )
        v15 = v17;
      v48 = (__int64)v15;
      LOBYTE(v15) = 3;
      sub_1400B0BF8(
        v12,
        (_DWORD)v15,
        13,
        16,
        (__int64)&unk_1400D9EC0,
        (__int64)v14,
        v48,
        (__int64)qword_1400B7720,
        a2,
        v51);
      v5 = 3;
      v10 = &unk_1400D44E0;
    }
    if ( (v5 & 2) != 0 )
    {
      v18 = v61;
      v5 &= ~2u;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v19 = v63;
      v5 &= ~1u;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    a2 = v9;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v5 |= 0xCu;
    v20 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v64)
                   + 16LL);
    if ( v20 )
      v10 = v20;
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v66);
    v23 = &unk_1400D44E0;
    v24 = *(void **)(*(_QWORD *)v22 + 16LL);
    if ( v24 )
      v23 = v24;
    v49 = (__int64)v23;
    LOBYTE(v23) = 4;
    sub_1400AA268(v21, (_DWORD)v23, 13, 17, (__int64)&unk_1400D9EC0, (__int64)v10, v49, (__int64)qword_1400B7720, a2);
  }
  v25 = 0LL;
  if ( (v5 & 8) != 0 )
  {
    v26 = v65;
    v5 &= ~8u;
    if ( v65 )
    {
      if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
  }
  if ( (v5 & 4) != 0 )
  {
    v27 = v67;
    v5 &= ~4u;
    if ( v67 )
    {
      if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
  }
  sub_14009196C(&v56, a2);
  if ( v58 == a2 )
  {
    v50 = 0LL;
    v37 = 0LL;
    if ( a2 )
    {
      _mm_lfence();
      v38 = a3;
      v52 = 0LL;
      do
      {
        sub_140088B70((__int64)v76, v38);
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 && LOWORD(DeviceObject->DeviceType) )
        {
          v5 |= 0x1C0u;
          v39 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v40 = &unk_1400D44E0;
          v41 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                        a1 + 56,
                                        v70)
                         + 16LL);
          if ( v41 )
            v40 = v41;
          v42 = &unk_1400D44E0;
          v43 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v72)
                         + 16LL);
          if ( v43 )
            v42 = v43;
          v44 = *(void **)(sub_140088C90((__int64)v76, (__int64)&v74) + 16);
          v45 = &unk_1400D44E0;
          if ( v44 )
            v45 = v44;
          LOBYTE(v44) = 5;
          sub_1400B50E8(
            v39,
            (_DWORD)v44,
            13,
            19,
            (__int64)&unk_1400D9EC0,
            (__int64)v40,
            (__int64)v42,
            (__int64)qword_1400B7720,
            v50,
            (__int64)v45);
          v37 = v50;
          v25 = v52;
        }
        if ( (v5 & 0x100) != 0 )
        {
          v46 = v71;
          v5 &= ~0x100u;
          if ( v71 )
          {
            if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
              if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
            }
          }
        }
        if ( (v5 & 0x80u) != 0 )
        {
          v47 = v73;
          v5 &= ~0x80u;
          if ( v73 )
          {
            if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
              if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
            }
          }
        }
        if ( (v5 & 0x40) != 0 )
        {
          v5 &= ~0x40u;
          v74 = &off_1400D41D0;
          if ( P )
            ExFreePool(P);
        }
        sub_140088BF0((__int64)v57 + v25, (__int64)v76);
        ++v37;
        v76[0] = &off_1400D44E8;
        v25 += 16LL;
        v38 = a3 + 34;
        v50 = v37;
        a3 += 34LL;
        v52 = v25;
      }
      while ( v37 < a2 );
      v6 = v54;
    }
    (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(PVOID)))(**(_QWORD **)(a1 + 360) + 48LL))(
      *(_QWORD *)(a1 + 360),
      &v56);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v5) = v5 | 0x30;
      v28 = &unk_1400D44E0;
      v29 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)(a1 + 56) + 24LL))(
                                    a1 + 56,
                                    &v54)
                     + 16LL);
      if ( v29 )
        v28 = v29;
      v30 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v31 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v68);
      LOBYTE(v32) = 2;
      v33 = *(void **)(*(_QWORD *)v31 + 16LL);
      v34 = &unk_1400D44E0;
      if ( v33 )
        v34 = v33;
      sub_1400B0BF8(
        v30,
        v32,
        13,
        18,
        (__int64)&unk_1400D9EC0,
        (__int64)v28,
        (__int64)v34,
        (__int64)qword_1400B7720,
        a2,
        v58);
    }
    if ( (v5 & 0x20) != 0 )
    {
      v35 = v55;
      LOBYTE(v5) = v5 & 0xDF;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    if ( (v5 & 0x10) != 0 )
    {
      v36 = v69;
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
  }
  v56 = off_1400D6A08;
  if ( v57 )
  {
    if ( *(v57 - 1) )
    {
      (**v57)(v57, 3LL);
    }
    else if ( v57 != (void (__fastcall ***)(_QWORD, __int64))8 )
    {
      ExFreePool(v57 - 1);
    }
    v57 = 0LL;
  }
  v58 = 0LL;
  v59 = 0LL;
  if ( v6 )
  {
    sub_140091BA8(v6);
    ExFreePool(v6);
  }
}
