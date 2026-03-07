_QWORD *__fastcall sub_140004678(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *Pool2; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  _QWORD *v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // rdi
  _QWORD *v33; // rax
  volatile signed __int32 *v34; // rdi
  __int64 (__fastcall **v36)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+30h] [rbp-D8h]
  PVOID P; // [rsp+38h] [rbp-D0h]
  __int64 v39; // [rsp+40h] [rbp-C8h]
  __int64 v40; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v41)(PVOID); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h]
  PVOID v43; // [rsp+60h] [rbp-A8h]
  __int64 v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v46)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v47; // [rsp+80h] [rbp-88h]
  PVOID v48; // [rsp+88h] [rbp-80h]
  __int64 v49; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v51)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v52; // [rsp+A8h] [rbp-60h]
  PVOID v53; // [rsp+B0h] [rbp-58h]
  __int64 v54; // [rsp+B8h] [rbp-50h]
  __int64 v55; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v56)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v57; // [rsp+D0h] [rbp-38h]
  PVOID v58; // [rsp+D8h] [rbp-30h]
  __int64 v59; // [rsp+E0h] [rbp-28h]
  __int64 v60; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v61)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v62; // [rsp+F8h] [rbp-10h]
  PVOID v63; // [rsp+100h] [rbp-8h]
  __int64 v64; // [rsp+108h] [rbp+0h]
  __int64 v65; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v66)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int16 v67; // [rsp+120h] [rbp+18h]
  PVOID v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  __int64 v70; // [rsp+138h] [rbp+30h]
  _BYTE v71[16]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v72[16]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v73[16]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v74[16]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v75[16]; // [rsp+180h] [rbp+78h] BYREF
  _BYTE v76[16]; // [rsp+190h] [rbp+88h] BYREF
  _BYTE v77[16]; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v78[24]; // [rsp+1B0h] [rbp+A8h] BYREF

  *a1 = &off_1400D47A8;
  v36 = &off_1400D41D0;
  a1[1] = 0xA5A5A5A5A5000002uLL;
  LOWORD(v37) = 0;
  P = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  sub_1400011A8(&v36, (__int64)L"bool", 4uLL);
  v4 = (_QWORD *)sub_1400A27D4(v71, a2);
  sub_1400043CC(a1 + 2, (__int64)&v36, v4);
  if ( P )
    ExFreePool(P);
  v41 = &off_1400D41D0;
  LOWORD(v42) = 0;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  sub_1400011A8(&v41, (__int64)L"UINT8", 5uLL);
  v5 = (_QWORD *)sub_1400A27D4(v72, a2);
  sub_1400043CC(a1 + 17, (__int64)&v41, v5);
  if ( v43 )
    ExFreePool(v43);
  v46 = &off_1400D41D0;
  v47 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  sub_1400011A8(&v46, (__int64)L"UINT16", 6uLL);
  v6 = (_QWORD *)sub_1400A27D4(v73, a2);
  sub_1400043CC(a1 + 32, (__int64)&v46, v6);
  if ( v48 )
    ExFreePool(v48);
  v51 = &off_1400D41D0;
  v52 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  sub_1400011A8(&v51, (__int64)L"UINT32", 6uLL);
  v7 = (_QWORD *)sub_1400A27D4(v74, a2);
  sub_1400043CC(a1 + 47, (__int64)&v51, v7);
  if ( v53 )
    ExFreePool(v53);
  v56 = &off_1400D41D0;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  sub_1400011A8(&v56, (__int64)L"UINT64", 6uLL);
  v8 = (_QWORD *)sub_1400A27D4(v75, a2);
  sub_1400043CC(a1 + 62, (__int64)&v56, v8);
  if ( v58 )
    ExFreePool(v58);
  v61 = &off_1400D41D0;
  v62 = 0;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  sub_1400011A8(&v61, (__int64)L"WString", 7uLL);
  v9 = (_QWORD *)sub_1400A27D4(v76, a2);
  sub_140004534(a1 + 77, (__int64)&v61, v9);
  if ( v63 )
    ExFreePool(v63);
  v10 = sub_1400A27D4(v77, a2);
  sub_140004D30(a1 + 92, v10);
  v66 = &off_1400D41D0;
  v67 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  sub_1400011A8(&v66, (__int64)L"Class", 5uLL);
  v11 = (_QWORD *)sub_1400A27D4(v78, a2);
  sub_140004480(a1 + 107, (__int64)&v66, v11);
  if ( v68 )
    ExFreePool(v68);
  v12 = a1 + 122;
  a1[122] = 0LL;
  a1[123] = 0LL;
  a1[124] = 0LL;
  a1[126] = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1819571039LL);
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = a1 + 2;
    if ( a1[126] )
    {
      *Pool2 = MEMORY[0];
      *(_QWORD *)(MEMORY[0] + 8LL) = Pool2;
      MEMORY[0] = Pool2;
    }
    else
    {
      Pool2[1] = v12;
      *Pool2 = v12;
      a1[123] = Pool2;
      *v12 = Pool2;
    }
    ++a1[126];
  }
  if ( a1[126] )
    v14 = a1 + 122;
  else
    v14 = (_QWORD *)a1[123];
  v15 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1819571039LL);
  if ( v15 )
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v15[2] = a1 + 17;
    if ( a1[126] )
    {
      v15[1] = v14;
      *v15 = *v14;
      *(_QWORD *)(*v14 + 8LL) = v15;
      *v14 = v15;
    }
    else
    {
      v15[1] = v12;
      *v15 = v12;
      a1[123] = v15;
      *v12 = v15;
    }
    ++a1[126];
  }
  v16 = a1 + 122;
  if ( a1[126] )
    v17 = a1 + 122;
  else
    v17 = (_QWORD *)a1[123];
  v18 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1819571039LL);
  if ( v18 )
  {
    *v18 = 0LL;
    v18[1] = 0LL;
    v18[2] = a1 + 32;
    if ( a1[126] )
    {
      v18[1] = v17;
      *v18 = *v17;
      *(_QWORD *)(*v17 + 8LL) = v18;
      *v17 = v18;
    }
    else
    {
      v18[1] = v16;
      *v18 = v16;
      a1[123] = v18;
      *v16 = v18;
    }
    ++a1[126];
  }
  v19 = a1 + 122;
  if ( a1[126] )
    v20 = a1 + 122;
  else
    v20 = (_QWORD *)a1[123];
  v21 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1819571039LL);
  if ( v21 )
  {
    *v21 = 0LL;
    v21[1] = 0LL;
    v21[2] = a1 + 47;
    if ( a1[126] )
    {
      v21[1] = v20;
      *v21 = *v20;
      *(_QWORD *)(*v20 + 8LL) = v21;
      *v20 = v21;
    }
    else
    {
      v21[1] = v19;
      *v21 = v19;
      a1[123] = v21;
      *v19 = v21;
    }
    ++a1[126];
  }
  v22 = a1 + 122;
  if ( a1[126] )
    v23 = a1 + 122;
  else
    v23 = (_QWORD *)a1[123];
  v24 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1819571039LL);
  if ( v24 )
  {
    *v24 = 0LL;
    v24[1] = 0LL;
    v24[2] = a1 + 62;
    if ( a1[126] )
    {
      v24[1] = v23;
      *v24 = *v23;
      *(_QWORD *)(*v23 + 8LL) = v24;
      *v23 = v24;
    }
    else
    {
      v24[1] = v22;
      *v24 = v22;
      a1[123] = v24;
      *v22 = v24;
    }
    ++a1[126];
  }
  v25 = a1 + 122;
  if ( a1[126] )
    v26 = a1 + 122;
  else
    v26 = (_QWORD *)a1[123];
  v27 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1819571039LL);
  if ( v27 )
  {
    *v27 = 0LL;
    v27[1] = 0LL;
    v27[2] = a1 + 77;
    if ( a1[126] )
    {
      v27[1] = v26;
      *v27 = *v26;
      *(_QWORD *)(*v26 + 8LL) = v27;
      *v26 = v27;
    }
    else
    {
      v27[1] = v25;
      *v27 = v25;
      a1[123] = v27;
      *v25 = v27;
    }
    ++a1[126];
  }
  v28 = a1 + 122;
  if ( a1[126] )
    v29 = a1 + 122;
  else
    v29 = (_QWORD *)a1[123];
  v30 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1819571039LL);
  if ( v30 )
  {
    *v30 = 0LL;
    v30[1] = 0LL;
    v30[2] = a1 + 92;
    if ( a1[126] )
    {
      v30[1] = v29;
      *v30 = *v29;
      *(_QWORD *)(*v29 + 8LL) = v30;
      *v29 = v30;
    }
    else
    {
      v30[1] = v28;
      *v30 = v28;
      a1[123] = v30;
      *v28 = v30;
    }
    ++a1[126];
  }
  v31 = a1 + 122;
  if ( a1[126] )
    v32 = a1 + 122;
  else
    v32 = (_QWORD *)a1[123];
  v33 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1819571039LL);
  if ( v33 )
  {
    *v33 = 0LL;
    v33[1] = 0LL;
    v33[2] = a1 + 107;
    if ( a1[126] )
    {
      v33[1] = v32;
      *v33 = *v32;
      *(_QWORD *)(*v32 + 8LL) = v33;
      *v32 = v33;
    }
    else
    {
      v33[1] = v31;
      *v33 = v31;
      a1[123] = v33;
      *v31 = v33;
    }
    ++a1[126];
  }
  v34 = *(volatile signed __int32 **)(a2 + 8);
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
    }
  }
  return a1;
}
