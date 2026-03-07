__int64 __fastcall sub_14005CAD4(_QWORD *a1, __int64 a2, unsigned int a3)
{
  char v4; // di
  _QWORD *v7; // rbx
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 Pool2; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 result; // rax
  __int64 v27; // rbx
  __int128 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall **v32)(PVOID); // [rsp+80h] [rbp-80h] BYREF
  __int16 v33; // [rsp+88h] [rbp-78h]
  PVOID v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall **v37)(PVOID); // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall **v41)(PVOID); // [rsp+D0h] [rbp-30h] BYREF
  PVOID v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  __int64 v44; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall **v45)(PVOID); // [rsp+F8h] [rbp-8h] BYREF
  PVOID v46; // [rsp+108h] [rbp+8h]
  __int64 v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  _BYTE v49[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v50; // [rsp+128h] [rbp+28h]
  _BYTE v51[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v52; // [rsp+138h] [rbp+38h]
  __int64 (__fastcall **v53[2])(PVOID); // [rsp+140h] [rbp+40h] BYREF
  PVOID v54; // [rsp+150h] [rbp+50h]
  _BYTE v55[24]; // [rsp+168h] [rbp+68h] BYREF

  v4 = 0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v7 = a1 + 7;
    v8 = &unk_1400D44E0;
    v9 = &unk_1400D44E0;
    v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v51) + 16LL);
    if ( v10 )
      v9 = v10;
    v11 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v7 + 24LL))(v7, v49);
    LOBYTE(v12) = 4;
    v13 = *(void **)(*(_QWORD *)v11 + 16LL);
    if ( v13 )
      v8 = v13;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v12,
      6,
      13,
      (__int64)&unk_1400D7CC0,
      (__int64)v8,
      (__int64)v9,
      (__int64)qword_1400B7720,
      a3);
    v4 = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v14 = v50;
    v4 &= ~2u;
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v15 = v52;
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  v33 = 0;
  v32 = &off_1400D41D0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  sub_1400011A8(&v32, (__int64)qword_1400B7580, 1uLL);
  v29 = a3 | 0x1000000000LL;
  v30 = v29;
  v31 = 10;
  sub_1400042F0((__int64)v53, (int *)&v30);
  v16 = sub_1400187FC();
  v17 = sub_140001A98(&v45, v16, (__int64)&v32);
  v18 = sub_14005C1E4((__int64)&v41, (__int64)L"No handler for IOCTL 0x", v53);
  v19 = sub_1400040D4((__int64)&v37, v18, (__int64)L" called at ");
  Pool2 = ExAllocatePool2(64LL, 32LL, 808466228LL);
  if ( Pool2 && (v21 = sub_1400ACA6C(Pool2, v19, v17), (v22 = v21) != 0) && (v23 = *(_QWORD *)(v21 + 16)) != 0 )
  {
    *((_QWORD *)&v28 + 1) = v22;
    *(_QWORD *)&v28 = v23;
  }
  else
  {
    v28 = 0LL;
    v22 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v37 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = &off_1400D41D0;
  if ( v42 )
    ExFreePool(v42);
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( v54 )
    ExFreePool(v54);
  v45 = &off_1400D41D0;
  if ( v46 )
    ExFreePool(v46);
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v32 = &off_1400D41D0;
  if ( v34 )
    ExFreePool(v34);
  v24 = a1[54];
  v25 = sub_1400A27D4(v55, &v28);
  sub_14006FDF0(v24, v25);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(qword_1400DF678 + 2104))(
             qword_1400DF6A8,
             a2,
             3221225659LL);
  if ( v22 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 8));
    if ( !(_DWORD)result )
    {
      v27 = *((_QWORD *)&v28 + 1);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 16LL))(*((_QWORD *)&v28 + 1));
    }
  }
  return result;
}
