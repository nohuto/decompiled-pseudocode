_QWORD *__fastcall sub_14007390C(_QWORD *a1, int a2, _QWORD *a3, _QWORD *a4, __int64 *a5, __int64 *a6, __int64 a7)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rsi
  _QWORD *Pool2; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // rax
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  _BYTE v33[8]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v34; // [rsp+58h] [rbp-A8h]
  _BYTE v35[8]; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v36; // [rsp+68h] [rbp-98h]
  _BYTE v37[8]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v38; // [rsp+78h] [rbp-88h]
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v41[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v42[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v43[2]; // [rsp+C0h] [rbp-40h] BYREF
  char v44; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v45; // [rsp+D8h] [rbp-28h]
  _BYTE v46[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v47[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v48[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v49[96]; // [rsp+110h] [rbp+10h] BYREF

  v10 = a6[1];
  a6[1] = 0LL;
  v40[1] = v10;
  v11 = *a6;
  *a6 = 0LL;
  v40[0] = v11;
  v41[1] = a5[1];
  v12 = *a5;
  a5[1] = 0LL;
  *a5 = 0LL;
  v41[0] = v12;
  v42[1] = a4[1];
  v42[0] = *a4;
  a4[1] = 0LL;
  *a4 = 0LL;
  v43[1] = a3[1];
  v43[0] = *a3;
  a3[1] = 0LL;
  *a3 = 0LL;
  sub_1400709D4(a1, a2, v43, v42, v41, (__int64)v40, a7, 0, 1000);
  a1[48] = 0LL;
  *a1 = &off_1400D91B8;
  v13 = 0LL;
  a1[49] = 0LL;
  a1[7] = off_1400D91E8;
  a1[25] = off_1400D9218;
  a1[47] = 0xA5A5A5A5A500002FuLL;
  a1[50] = 0LL;
  a1[51] = 0LL;
  a1[52] = 0LL;
  a1[53] = 0LL;
  a1[54] = 0LL;
  a1[55] = 0LL;
  a1[56] = 0LL;
  a1[57] = 0LL;
  a1[58] = 0LL;
  a1[59] = 0LL;
  a1[60] = 0LL;
  a1[61] = 0LL;
  a1[62] = 0LL;
  a1[63] = 0LL;
  a1[64] = 0LL;
  a1[65] = 0LL;
  a1[66] = 0LL;
  a1[67] = 0LL;
  a1[68] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v15 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::DeviceContext", (__int64)a1);
      if ( v15 )
        v13 = v15;
    }
  }
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    v16 = sub_14006CDF0((__int64)(a1 + 7), (__int64)v46);
    sub_140073EBC(v49, v16, sub_140072870);
    sub_140002F34((__int64)v49, 0);
    sub_14007450C(v49);
  }
  sub_1400A27D4(v33, a1 + 12);
  sub_1400A27D4(v35, a1 + 14);
  v17 = sub_1400B000C((unsigned int)&v44, 808465717, (unsigned int)L"Attributes Store", (unsigned int)v33, (__int64)v35);
  v18 = (_QWORD *)sub_1400A27D4(v47, v17);
  sub_1400714D4(a1, v18, 0);
  v19 = v45;
  if ( v45 )
  {
    if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      v20 = v34;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
    }
  }
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      v21 = v36;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
    }
  }
  sub_1400A27D4(v37, a1 + 12);
  v22 = ExAllocatePool2(64LL, 32LL, 808465718LL);
  if ( v22
    && (v23 = sub_1400AFF84(v22, v37), (v24 = (volatile signed __int32 *)v23) != 0LL)
    && (v25 = *(_QWORD *)(v23 + 16)) != 0 )
  {
    *((_QWORD *)&v39 + 1) = v24;
    *(_QWORD *)&v39 = v25;
  }
  else
  {
    v24 = 0LL;
    v39 = 0LL;
  }
  v26 = (_QWORD *)sub_1400A27D4(v48, &v39);
  sub_1400714D4(a1, v26, 0);
  if ( v24 )
  {
    if ( !_InterlockedDecrement(v24 + 2) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      if ( !_InterlockedDecrement(v24 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
  if ( v38 )
  {
    if ( !_InterlockedDecrement(v38 + 2) )
    {
      v27 = v38;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
      if ( !_InterlockedDecrement(v27 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
    }
  }
  if ( v13 )
  {
    sub_14007404C(v13);
    ExFreePool(v13);
  }
  v28 = (volatile signed __int32 *)a3[1];
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  v29 = (volatile signed __int32 *)a4[1];
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  v30 = (volatile signed __int32 *)a5[1];
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
  v31 = (volatile signed __int32 *)a6[1];
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  return a1;
}
