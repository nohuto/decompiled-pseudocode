__int64 __fastcall sub_14003BE00(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 *a4)
{
  char v4; // bl
  __int64 *v6; // r15
  __int64 *v7; // rsi
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  void *v11; // r14
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  void *v22; // r14
  void *v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // rdi
  volatile signed __int32 *v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  volatile signed __int32 *v34; // rdi
  void *v35; // rdi
  void *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  int v39; // edx
  void *v40; // rax
  void *v41; // rcx
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rbx
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  void *v49; // rdi
  void *v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  int v53; // edx
  void *v54; // rax
  void *v55; // rcx
  volatile signed __int32 *v56; // rdi
  volatile signed __int32 *v57; // rbx
  volatile signed __int32 *v58; // rbx
  volatile signed __int32 *v59; // rbx
  volatile signed __int32 *v60; // rbx
  volatile signed __int32 *v61; // rbx
  __int64 v62; // rcx
  volatile signed __int32 *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rcx
  volatile signed __int32 *v66; // rbx
  volatile signed __int32 *v67; // rbx
  volatile signed __int32 *v68; // rbx
  __int64 v69; // [rsp+48h] [rbp-79h] BYREF
  volatile signed __int32 *v70; // [rsp+50h] [rbp-71h]
  _BYTE v71[8]; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v72; // [rsp+60h] [rbp-61h]
  _BYTE v73[8]; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v74; // [rsp+70h] [rbp-51h]
  _BYTE v75[8]; // [rsp+78h] [rbp-49h] BYREF
  volatile signed __int32 *v76; // [rsp+80h] [rbp-41h]
  _BYTE v77[8]; // [rsp+88h] [rbp-39h] BYREF
  volatile signed __int32 *v78; // [rsp+90h] [rbp-31h]
  _BYTE v79[8]; // [rsp+98h] [rbp-29h] BYREF
  volatile signed __int32 *v80; // [rsp+A0h] [rbp-21h]
  _BYTE v81[8]; // [rsp+A8h] [rbp-19h] BYREF
  volatile signed __int32 *v82; // [rsp+B0h] [rbp-11h]
  _BYTE v83[8]; // [rsp+B8h] [rbp-9h] BYREF
  volatile signed __int32 *v84; // [rsp+C0h] [rbp-1h]
  _BYTE v85[8]; // [rsp+C8h] [rbp+7h] BYREF
  volatile signed __int32 *v86; // [rsp+D0h] [rbp+Fh]
  _BYTE v87[8]; // [rsp+D8h] [rbp+17h] BYREF
  volatile signed __int32 *v88; // [rsp+E0h] [rbp+1Fh]
  _QWORD *v89; // [rsp+138h] [rbp+77h]

  v89 = a3;
  v4 = 0;
  v6 = 0LL;
  v7 = a4;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareNvm::Bind", (__int64)a1);
      if ( v10 )
        v6 = v10;
    }
    a3 = v89;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v73) + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v71);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v15,
        14,
        10,
        (__int64)&unk_1400D71D0,
        (__int64)v11,
        (__int64)v12,
        (__int64)L"mmioAccessor");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v17 = v72;
      v4 &= ~2u;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v18 = v74;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"mmioAccessor", 67, 155);
LABEL_104:
    if ( v6 )
    {
      sub_140005840(v6);
      ExFreePool(v6);
    }
    v59 = (volatile signed __int32 *)a2[1];
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
    v60 = (volatile signed __int32 *)v89[1];
    if ( v60 )
    {
      if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
        if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
      }
    }
    v61 = (volatile signed __int32 *)v7[1];
    if ( v61 && _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
      if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
    }
    return 3221225485LL;
  }
  v19 = a1[48];
  a1[48] = a2[1];
  v20 = *a2;
  a2[1] = v19;
  v21 = a1[47];
  a1[47] = v20;
  *a2 = v21;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v22 = &unk_1400D44E0;
      v23 = &unk_1400D44E0;
      v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v77) + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v75);
      LOBYTE(v26) = 2;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v22 = v27;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v26,
        14,
        11,
        (__int64)&unk_1400D71D0,
        (__int64)v22,
        (__int64)v23,
        (__int64)L"osServices");
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v28 = v76;
      v4 &= ~8u;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v29 = v78;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14000B87C((int)a1, (__int64)L"osServices", 70, 155);
    goto LABEL_104;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 8LL))(*a3, &v69);
  v30 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v69 + 8LL))(v69, v79);
  v31 = a1[50];
  a1[50] = v30[1];
  v32 = *v30;
  v30[1] = v31;
  v33 = a1[49];
  a1[49] = v32;
  *v30 = v33;
  v34 = v80;
  if ( v80 )
  {
    if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
    }
  }
  if ( a1[49] )
  {
    if ( !*v7 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v49 = &unk_1400D44E0;
        v50 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v85) + 16LL);
        if ( v50 )
          v49 = v50;
        v51 = *(_QWORD *)(a1[22] + 16LL);
        v52 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v87);
        LOBYTE(v53) = 2;
        v54 = *(void **)(*(_QWORD *)v52 + 16LL);
        v55 = &unk_1400D44E0;
        if ( v54 )
          v55 = v54;
        sub_1400A3320(v51, v53, 14, 13, (__int64)&unk_1400D71D0, (__int64)v49, (__int64)v55, (__int64)L"firmware");
        v7 = a4;
        v4 = -64;
      }
      if ( v4 < 0 )
      {
        v56 = v86;
        v4 &= ~0x80u;
        if ( v86 )
        {
          if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
            if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
          }
        }
      }
      if ( (v4 & 0x40) != 0 )
      {
        v57 = v88;
        if ( v88 )
        {
          if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
            if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
          }
        }
      }
      sub_140022128((int)a1, (__int64)L"firmware", 77, 155);
      v58 = v70;
      if ( v70 )
      {
        if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
          if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
        }
      }
      goto LABEL_104;
    }
    v62 = a1[46];
    v63 = v70;
    a1[46] = v7[1];
    v64 = *v7;
    v7[1] = v62;
    v65 = a1[45];
    a1[45] = v64;
    *v7 = v65;
    if ( v63 )
    {
      if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
        if ( _InterlockedExchangeAdd(v63 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 16LL))(v63);
      }
    }
    if ( v6 )
    {
      sub_140005840(v6);
      ExFreePool(v6);
    }
    v66 = (volatile signed __int32 *)a2[1];
    if ( v66 )
    {
      if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
        if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
      }
    }
    v67 = (volatile signed __int32 *)v89[1];
    if ( v67 )
    {
      if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
        if ( _InterlockedExchangeAdd(v67 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
      }
    }
    v68 = (volatile signed __int32 *)v7[1];
    if ( v68 )
    {
      if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
        if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
      }
    }
    return 0LL;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v35 = &unk_1400D44E0;
      v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v81) + 16LL);
      if ( v36 )
        v35 = v36;
      v37 = *(_QWORD *)(a1[22] + 16LL);
      v38 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v83);
      LOBYTE(v39) = 2;
      v40 = *(void **)(*(_QWORD *)v38 + 16LL);
      v41 = &unk_1400D44E0;
      if ( v40 )
        v41 = v40;
      sub_1400A3320(v37, v39, 14, 12, (__int64)&unk_1400D71D0, (__int64)v35, (__int64)v41, (__int64)L"m_nvmLock");
      v7 = a4;
      v4 = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v42 = v82;
      v4 &= ~0x20u;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v43 = v84;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    sub_14003B970((int)a1, (__int64)L"m_nvmLock", 75, 155);
    v44 = v70;
    if ( v70 )
    {
      if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
        if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
      }
    }
    if ( v6 )
    {
      sub_140005840(v6);
      ExFreePool(v6);
    }
    v45 = (volatile signed __int32 *)a2[1];
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
        if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
    v46 = (volatile signed __int32 *)v89[1];
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
        if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
      }
    }
    v47 = (volatile signed __int32 *)v7[1];
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
        if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
      }
    }
    return 3221225495LL;
  }
}
