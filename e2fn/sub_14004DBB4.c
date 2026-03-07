__int64 __fastcall sub_14004DBB4(__int64 a1)
{
  __int64 *v2; // r12
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  _QWORD *v5; // rax
  char v6; // r15
  __int64 *v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rax
  void *v26; // rsi
  void *v27; // r8
  int v28; // edx
  void *v29; // rax
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  unsigned int v32; // ebx
  char v33; // si
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rbx
  void *v38; // rsi
  void *v39; // rbx
  void *v40; // rax
  __int64 v41; // rax
  int v42; // edx
  void *v43; // rax
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  __int64 v46; // rbx
  __int64 v47; // rax
  void *v48; // rsi
  void *v49; // rdx
  void *v50; // rax
  volatile signed __int32 *v51; // rbx
  __int64 v53; // [rsp+30h] [rbp-D8h]
  __int128 v54; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v56[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 (__fastcall **v57)(PVOID); // [rsp+88h] [rbp-80h] BYREF
  __int16 v58; // [rsp+90h] [rbp-78h]
  PVOID P; // [rsp+98h] [rbp-70h]
  __int64 v60; // [rsp+A0h] [rbp-68h]
  __int64 v61; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall **v62)(PVOID); // [rsp+B0h] [rbp-58h] BYREF
  __int16 v63; // [rsp+B8h] [rbp-50h]
  PVOID v64; // [rsp+C0h] [rbp-48h]
  __int64 v65; // [rsp+C8h] [rbp-40h]
  __int64 v66; // [rsp+D0h] [rbp-38h]
  __int128 v67; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v68[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v69; // [rsp+F0h] [rbp-18h]
  __int64 v70; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v71; // [rsp+100h] [rbp-8h]
  __int64 v72; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v73; // [rsp+110h] [rbp+8h]
  __int64 v74; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v75; // [rsp+120h] [rbp+18h]
  _BYTE v76[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v77; // [rsp+130h] [rbp+28h]
  _BYTE v78[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v79; // [rsp+140h] [rbp+38h]
  _BYTE v80[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v81; // [rsp+150h] [rbp+48h]
  _BYTE v82[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v83; // [rsp+160h] [rbp+58h]
  _BYTE v84[8]; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v85; // [rsp+170h] [rbp+68h]
  _BYTE v86[8]; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v87; // [rsp+180h] [rbp+78h]
  _BYTE v88[16]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v89[16]; // [rsp+198h] [rbp+90h] BYREF

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnMsixInterruptDispatcher::Initialize", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  DWORD2(v54) = 0;
  if ( *(_BYTE *)(a1 + 420) )
  {
    *(_QWORD *)&v54 = sub_14004D440;
    *(_OWORD *)&v56[1] = v54;
    v5 = sub_14000DB1C(&v74, (_QWORD *)a1, (__int64)&v56[1]);
    v6 = 1;
  }
  else
  {
    *(_QWORD *)&v54 = sub_14004D920;
    *(_OWORD *)&v56[1] = v54;
    v5 = sub_14000DB1C(&v72, (_QWORD *)a1, (__int64)&v56[1]);
    v6 = 2;
  }
  v7 = *(__int64 **)(a1 + 384);
  v8 = v5;
  DWORD2(v54) = 0;
  *(_QWORD *)&v54 = sub_14004DB60;
  v9 = *(_QWORD *)(a1 + 56);
  v10 = *v7;
  v67 = v54;
  v11 = (*(__int64 (__fastcall **)(__int64))(v9 + 8))(a1 + 56);
  v12 = sub_1400A27D4(v88, v8);
  v13 = sub_14004C0A4(&v70, (_QWORD *)a1, (__int64)&v67);
  v14 = sub_1400A27D4(v89, v13);
  v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64, __int64, __int64))(v10 + 16))(
                     v7,
                     v68,
                     v14,
                     v12,
                     v11);
  v16 = *(_QWORD *)(a1 + 408);
  *(_QWORD *)(a1 + 408) = v15[1];
  v17 = *v15;
  v15[1] = v16;
  v18 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 400) = v17;
  *v15 = v18;
  v19 = v69;
  if ( v69 )
  {
    if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  v20 = v71;
  if ( v71 )
  {
    if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  if ( (v6 & 2) != 0 )
  {
    v21 = v73;
    v6 &= ~2u;
    if ( v73 )
    {
      if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v22 = v75;
    v6 &= ~1u;
    if ( v75 )
    {
      if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 400) )
  {
    v58 = 0;
    v57 = &off_1400D41D0;
    P = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    sub_1400011A8(&v57, (__int64)L"*InterruptModeration", 0x14uLL);
    sub_1400A27D4(&v55, a1 + 112);
    v33 = sub_14003E2F0(v55, (__int64)&v57, v55 + 16);
    if ( v56[0] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v56[0] + 8LL), 0xFFFFFFFF) == 1 )
      {
        v34 = v56[0];
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v56[0] + 8LL))(v56[0]);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v56[0] + 16LL))(v56[0]);
      }
    }
    if ( P )
      ExFreePool(P);
    if ( v33 )
    {
      v63 = 0;
      v64 = 0LL;
      v65 = 0LL;
      v66 = 0LL;
      v62 = &off_1400D41D0;
      sub_1400011A8(&v62, (__int64)L"ITR", 3uLL);
      sub_1400A27D4(&v54, a1 + 112);
      v35 = sub_14004BEA4(v54, (__int64)&v62, v54 + 376);
      v36 = *((_QWORD *)&v54 + 1);
      *(_DWORD *)(a1 + 508) = v35;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 8), 0xFFFFFFFF) == 1 )
        {
          v37 = *((_QWORD *)&v54 + 1);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v54 + 1) + 8LL))(*((_QWORD *)&v54 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v54 + 1) + 16LL))(*((_QWORD *)&v54 + 1));
        }
      }
      if ( v64 )
        ExFreePool(v64);
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v6 |= 0x30u;
        v38 = &unk_1400D44E0;
        v39 = &unk_1400D44E0;
        v40 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v82)
                       + 16LL);
        if ( v40 )
          v39 = v40;
        v41 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v80);
        LOBYTE(v42) = 4;
        v43 = *(void **)(*(_QWORD *)v41 + 16LL);
        if ( v43 )
          v38 = v43;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v42,
          10,
          14,
          (__int64)&unk_1400D7418,
          (__int64)v38,
          (__int64)v39,
          (__int64)qword_1400B7720,
          *(_DWORD *)(a1 + 508));
      }
      if ( (v6 & 0x20) != 0 )
      {
        v44 = v81;
        v6 &= ~0x20u;
        if ( v81 )
        {
          if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
            if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
          }
        }
      }
      if ( (v6 & 0x10) == 0 )
        goto LABEL_88;
      v45 = v83;
    }
    else
    {
      *(_DWORD *)(a1 + 508) = 0;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v6 |= 0xC0u;
        v46 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v86);
        v47 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v84);
        v48 = &unk_1400D44E0;
        v49 = &unk_1400D44E0;
        v50 = *(void **)(*(_QWORD *)v47 + 16LL);
        if ( v50 )
          v49 = v50;
        if ( *(_QWORD *)(v46 + 16) )
          v48 = *(void **)(v46 + 16);
        v53 = (__int64)v49;
        LOBYTE(v49) = 4;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          (_DWORD)v49,
          10,
          15,
          (__int64)&unk_1400D7418,
          v53,
          (__int64)v48,
          (__int64)qword_1400B7720);
      }
      if ( v6 < 0 )
      {
        v51 = v85;
        v6 &= ~0x80u;
        if ( v85 )
        {
          if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
            if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
          }
        }
      }
      if ( (v6 & 0x40) == 0 )
        goto LABEL_88;
      v45 = v87;
    }
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
        if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
LABEL_88:
    v32 = 0;
    goto LABEL_89;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0xCu;
    v23 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v78);
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v25 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v76);
    v26 = &unk_1400D44E0;
    v27 = &unk_1400D44E0;
    LOBYTE(v28) = 2;
    v29 = *(void **)(*(_QWORD *)v25 + 16LL);
    if ( v29 )
      v27 = v29;
    if ( *(_QWORD *)(v23 + 16) )
      v26 = *(void **)(v23 + 16);
    sub_1400A3320(v24, v28, 10, 13, (__int64)&unk_1400D7418, (__int64)v27, (__int64)v26, (__int64)L"m_osInterrupt");
  }
  if ( (v6 & 8) != 0 )
  {
    v30 = v77;
    v6 &= ~8u;
    if ( v77 )
    {
      if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
  }
  if ( (v6 & 4) != 0 )
  {
    v31 = v79;
    if ( v79 )
    {
      if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
  }
  sub_14000BB04(a1, (__int64)L"m_osInterrupt", 96, 64);
  v32 = -1073741811;
LABEL_89:
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
  return v32;
}
