void __fastcall sub_14005CED0(_QWORD *a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rdi
  char v7; // r14
  __int64 *v8; // r12
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  __int64 v11; // r15
  volatile signed __int32 *v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  void *v22; // rsi
  void *v23; // rax
  __int64 v24; // rdi
  void *v25; // rbx
  void *v26; // rax
  void *v27; // rdx
  void *v28; // rax
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  unsigned int v31; // ecx
  __int64 v32; // rax
  void *v33; // r15
  void *v34; // rsi
  void *v35; // rdi
  void *v36; // rax
  __int64 v37; // rax
  int v38; // edx
  void *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 *v42; // rbx
  char v43; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v44; // [rsp+5Ch] [rbp-ACh]
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h] BYREF
  __int64 (__fastcall **v50)(PVOID); // [rsp+88h] [rbp-80h] BYREF
  __int16 v51; // [rsp+90h] [rbp-78h]
  PVOID v52; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h]
  __int64 v54; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall **v55)(PVOID); // [rsp+B0h] [rbp-58h] BYREF
  PVOID P; // [rsp+C0h] [rbp-48h]
  __int64 v57; // [rsp+C8h] [rbp-40h]
  __int64 v58; // [rsp+D0h] [rbp-38h]
  __int64 (__fastcall **v59)(PVOID); // [rsp+D8h] [rbp-30h] BYREF
  PVOID v60; // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  __int64 v62; // [rsp+F8h] [rbp-10h]
  _BYTE v63[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v64; // [rsp+108h] [rbp+0h]
  _BYTE v65[8]; // [rsp+110h] [rbp+8h] BYREF
  volatile signed __int32 *v66; // [rsp+118h] [rbp+10h]
  _BYTE v67[8]; // [rsp+120h] [rbp+18h] BYREF
  volatile signed __int32 *v68; // [rsp+128h] [rbp+20h]
  _BYTE v69[8]; // [rsp+130h] [rbp+28h] BYREF
  volatile signed __int32 *v70; // [rsp+138h] [rbp+30h]
  _BYTE v71[24]; // [rsp+140h] [rbp+38h] BYREF
  _QWORD v72[14]; // [rsp+158h] [rbp+50h] BYREF

  v6 = a2;
  v7 = 0;
  v44 = 0;
  v8 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x20) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14005C614(Pool2, (__int64)L"os_services::IoctlDispatcher::ProcessIoctl", (__int64)a1);
      if ( v10 )
        v8 = v10;
    }
  }
  sub_1400ACD64(a1, &v45, a5);
  v11 = v45;
  if ( v45 )
  {
    v51 = 0;
    v50 = &off_1400D41D0;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    sub_1400011A8(&v50, (__int64)qword_1400B7580, 1uLL);
    v13 = sub_1400187FC();
    v14 = sub_140001A98(&v59, v13, (__int64)&v50);
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
    v16 = sub_1400040D4((__int64)&v55, v15, (__int64)L" called at ");
    v17 = ExAllocatePool2(64LL, 32LL, 808466229LL);
    if ( v17 && (v18 = sub_1400ACA6C(v17, v16, v14)) != 0 && (v19 = *(_QWORD *)(v18 + 16)) != 0 )
    {
      v48 = (volatile signed __int32 *)v18;
      v47 = v19;
    }
    else
    {
      v47 = 0LL;
      v48 = (volatile signed __int32 *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    v55 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    v59 = &off_1400D41D0;
    if ( v60 )
      ExFreePool(v60);
    v60 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    v50 = &off_1400D41D0;
    if ( v52 )
      ExFreePool(v52);
    v20 = a1[54];
    v21 = sub_1400A27D4(v71, &v47);
    sub_14006FDF0(v20, v21);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 && LOWORD(DeviceObject->DeviceType) )
    {
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v63) + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = *(_QWORD *)(a1[22] + 16LL);
      v25 = &unk_1400D44E0;
      v26 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v65) + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = *(void **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 16);
      v28 = &unk_1400D44E0;
      if ( v27 )
        v28 = v27;
      LOBYTE(v27) = 5;
      sub_1400A9338(
        v24,
        (_DWORD)v27,
        6,
        14,
        (__int64)&unk_1400D7CC0,
        (__int64)v22,
        (__int64)v25,
        (__int64)qword_1400B7720,
        (__int64)v28);
      v6 = a2;
      v7 = 3;
    }
    if ( (v7 & 2) != 0 )
    {
      v29 = v64;
      v7 &= ~2u;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
        v11 = v45;
      }
    }
    if ( (v7 & 1) != 0 )
    {
      v30 = v66;
      v7 &= ~1u;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v11 = v45;
      }
    }
    sub_14006AF40((unsigned int)v72, a5, v6, a3, a4);
    v49 = 0LL;
    v43 = 0;
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, char *))(*(_QWORD *)v11 + 16LL))(
            v11,
            v72,
            &v49,
            &v43);
    v31 = v44;
    if ( v44 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v7 |= 0xCu;
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
        v33 = &unk_1400D44E0;
        v34 = &unk_1400D44E0;
        if ( *(_QWORD *)(v32 + 16) )
          v34 = *(void **)(v32 + 16);
        v35 = &unk_1400D44E0;
        v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v69) + 16LL);
        if ( v36 )
          v35 = v36;
        v37 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v67);
        LOBYTE(v38) = 2;
        v39 = *(void **)(*(_QWORD *)v37 + 16LL);
        if ( v39 )
          v33 = v39;
        sub_1400AB1B8(
          *(_QWORD *)(a1[22] + 16LL),
          v38,
          6,
          15,
          (__int64)&unk_1400D7CC0,
          (__int64)v33,
          (__int64)v35,
          (__int64)qword_1400B7720,
          (__int64)v34,
          v44);
        v6 = a2;
      }
      if ( (v7 & 8) != 0 )
      {
        v40 = v68;
        v7 &= ~8u;
        if ( v68 )
        {
          if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
            if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
          }
        }
      }
      if ( (v7 & 4) != 0 )
      {
        v41 = v70;
        if ( v70 )
        {
          if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
            if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
          }
        }
      }
      v31 = v44;
    }
    if ( v43 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(qword_1400DF678 + 2120))(
        qword_1400DF6A8,
        v6,
        v31,
        v49);
    v72[0] = &off_1400D4DE8;
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        v42 = v48;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
        if ( !_InterlockedDecrement(v42 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
      }
    }
  }
  else
  {
    sub_14005CAD4(a1, v6, a5);
  }
  if ( v46 )
  {
    if ( !_InterlockedDecrement(v46 + 2) )
    {
      v12 = v46;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      if ( !_InterlockedDecrement(v12 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
    }
  }
  if ( v8 )
  {
    sub_14005C8D0(v8);
    ExFreePool(v8);
  }
}
